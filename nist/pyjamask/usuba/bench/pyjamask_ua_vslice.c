/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/pyjamask/usuba/ua/pyjamask_vslice.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */
void SubBytes__V32 (/*inputs*/ DATATYPE s0,DATATYPE s1,DATATYPE s2,DATATYPE s3, /*outputs*/ DATATYPE ret[4]) {

  // Variables declaration
  DATATYPE _shadow_s01_;
  DATATYPE _shadow_s03_;
  DATATYPE _shadow_s14_;
  DATATYPE _shadow_s17_;
  DATATYPE _shadow_s25_;
  DATATYPE _shadow_s26_;
  DATATYPE _shadow_s32_;
  DATATYPE _shadow_s38_;
  DATATYPE _tmp1_;
  DATATYPE _tmp2_;
  DATATYPE _tmp3_;
  DATATYPE _tmp4_;

  // Instructions (body)
  _shadow_s01_ = XOR(s0,s3);
  _tmp1_ = AND(_shadow_s01_,s1);
  _shadow_s32_ = XOR(s3,_tmp1_);
  _tmp2_ = AND(s1,s2);
  _shadow_s03_ = XOR(_shadow_s01_,_tmp2_);
  _tmp3_ = AND(s2,_shadow_s32_);
  _shadow_s14_ = XOR(s1,_tmp3_);
  _tmp4_ = AND(_shadow_s03_,_shadow_s32_);
  _shadow_s25_ = XOR(s2,_tmp4_);
  _shadow_s26_ = XOR(_shadow_s25_,_shadow_s14_);
  _shadow_s17_ = XOR(_shadow_s14_,_shadow_s03_);
  _shadow_s38_ = NOT(_shadow_s32_);
  ret[0] = _shadow_s03_;
  ret[1] = _shadow_s17_;
  ret[2] = _shadow_s38_;
  ret[3] = _shadow_s26_;

}

void AddRoundKey__V32 (/*inputs*/ DATATYPE i__[4],DATATYPE k__[4], /*outputs*/ DATATYPE o__[4]) {

  // Variables declaration
  ;

  // Instructions (body)
  o__[0] = XOR(i__[0],k__[0]);
  o__[1] = XOR(i__[1],k__[1]);
  o__[2] = XOR(i__[2],k__[2]);
  o__[3] = XOR(i__[3],k__[3]);

}

void mat_mult__V32 (/*inputs*/ DATATYPE col__,DATATYPE vec__, /*outputs*/ DATATYPE* res__) {

  // Variables declaration
  DATATYPE _tmp5_;
  DATATYPE _tmp6_;
  DATATYPE mask__;
  DATATYPE mat_col__;
  DATATYPE res_tmp__;

  // Instructions (body)
  mat_col__ = col__;
  res_tmp__ = LIFT_32(0);
  for (int i__ = 0; i__ <= 31; i__++) {
    _tmp5_ = L_SHIFT(vec__,i__,32);
    mask__ = RL_SHIFT(_tmp5_,31,32);
    _tmp6_ = AND(mask__,mat_col__);
    res_tmp__ = XOR(res_tmp__,_tmp6_);
    mat_col__ = R_ROTATE(mat_col__,1,32);
  }
  *res__ = res_tmp__;

}

void MixRows__V32 (/*inputs*/ DATATYPE input__[4], /*outputs*/ DATATYPE output__[4]) {

  // Variables declaration
  DATATYPE M__[4];

  // Instructions (body)
  M__[0] = LIFT_32(2743472261);
  M__[1] = LIFT_32(1665232929);
  M__[2] = LIFT_32(1764553344);
  M__[3] = LIFT_32(1218791443);
  for (int i__ = 0; i__ <= 3; i__++) {
    mat_mult__V32(M__[i__],input__[i__],&output__[i__]);
  }

}

/* main function */
void pyjamask__ (/*inputs*/ DATATYPE plaintext__[4],DATATYPE key__[15][4], /*outputs*/ DATATYPE ciphertext__[4]) {

  // Variables declaration
  DATATYPE _tmp11_[4];
  DATATYPE _tmp12_[4];
  DATATYPE round__[4];

  // Instructions (body)
  round__[0] = plaintext__[0];
  round__[1] = plaintext__[1];
  round__[2] = plaintext__[2];
  round__[3] = plaintext__[3];
  for (int i__ = 0; i__ <= 13; i__++) {
    AddRoundKey__V32(round__,key__[i__],_tmp11_);
    SubBytes__V32(_tmp11_[0],_tmp11_[1],_tmp11_[2],_tmp11_[3],_tmp12_);
    MixRows__V32(_tmp12_,round__);
  }
  AddRoundKey__V32(round__,key__[14],ciphertext__);

}

/* Additional functions */
uint32_t bench_speed() {
  /* inputs */
  DATATYPE plaintext__[4] = { 0 };
  DATATYPE key__[15][4] = { 0 };
  /* outputs */
  DATATYPE ciphertext__[4] = { 0 };
  /* fun call */
  pyjamask__(plaintext__, key__,ciphertext__);

  /* Returning the number of encrypted bytes */
  return 16;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 table SubBytes(i :  v4 :: base)
  returns o :  v4 :: base
{
  2, 13, 3, 9, 7, 11, 10, 6, 14, 0, 15, 4, 8, 5, 1, 12
}


 node AddRoundKey(i :  u32x4 :: base,k :  u32x4 :: base)
  returns o :  u32x4 :: base
vars

let
  (o) = (i ^ k)
tel

 node mat_mult(col :  u32 :: base,vec :  u32 :: base)
  returns res :  u32 :: base
vars
  mat_col :  u32[33] :: base,
  res_tmp :  u32[33] :: base,
  mask :  u32[32] :: base
let
  (mat_col[0]) = col;
  (res_tmp[0]) = 0;
  forall i in [0,31] {
    (mask[i]) = ((vec << i) >>! 31);
    (res_tmp[(i + 1)]) = (res_tmp[i] ^ (mask[i] & mat_col[i]));
    (mat_col[(i + 1)]) = (mat_col[i] >>> 1)
  };
  (res) = res_tmp[32]
tel

 node MixRows(input :  u32x4 :: base)
  returns output :  u32x4 :: base
vars
  M :  u32[4] :: base
let
  (M) = (2743472261,1665232929,1764553344,1218791443);
  forall i in [0,3] {
    (output[i]) = mat_mult(M[i],input[i])
  }
tel

 node pyjamask(plaintext :  u32x4 :: base,key :  u32x4[15] :: base)
  returns ciphertext :  u32x4 :: base
vars
  round :  u32x4[15] :: base
let
  (round[0]) = plaintext;
  forall i in [0,13] {
    (round[(i + 1)]) = MixRows(SubBytes(AddRoundKey(round[i],key[i])))
  };
  (ciphertext) = AddRoundKey(round[14],key[14])
tel

*/
 