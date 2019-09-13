/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/ascon/usuba/ua/ascon.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 64
#endif
/* including the architecture specific .h */
#include "MASKED.h"

/* auxiliary functions */
void Sbox__V64 (/*inputs*/ DATATYPE x[5][MASKING_ORDER], /*outputs*/ DATATYPE xr[5][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _shadow_t04_[MASKING_ORDER];
  DATATYPE _shadow_t15_[MASKING_ORDER];
  DATATYPE _shadow_t26_[MASKING_ORDER];
  DATATYPE _shadow_t37_[MASKING_ORDER];
  DATATYPE _shadow_t48_[MASKING_ORDER];
  DATATYPE _shadow_x015_[MASKING_ORDER];
  DATATYPE _shadow_x01_[MASKING_ORDER];
  DATATYPE _shadow_x09_[MASKING_ORDER];
  DATATYPE _shadow_x110_[MASKING_ORDER];
  DATATYPE _shadow_x114_[MASKING_ORDER];
  DATATYPE _shadow_x211_[MASKING_ORDER];
  DATATYPE _shadow_x217_[MASKING_ORDER];
  DATATYPE _shadow_x23_[MASKING_ORDER];
  DATATYPE _shadow_x312_[MASKING_ORDER];
  DATATYPE _shadow_x316_[MASKING_ORDER];
  DATATYPE _shadow_x413_[MASKING_ORDER];
  DATATYPE _shadow_x42_[MASKING_ORDER];
  DATATYPE t0[MASKING_ORDER];
  DATATYPE t1[MASKING_ORDER];
  DATATYPE t2[MASKING_ORDER];
  DATATYPE t3[MASKING_ORDER];
  DATATYPE t4[MASKING_ORDER];

  // Instructions (body)
  XOR(_shadow_x01_,x[0],x[4]);
  XOR(_shadow_x42_,x[4],x[3]);
  XOR(_shadow_x23_,x[2],x[1]);
  NOT(t0,_shadow_x01_);
  NOT(t1,x[1]);
  NOT(t2,_shadow_x23_);
  NOT(t3,x[3]);
  NOT(t4,_shadow_x42_);
  AND(_shadow_t04_,t0,x[1]);
  AND(_shadow_t15_,t1,_shadow_x23_);
  AND(_shadow_t26_,t2,x[3]);
  AND(_shadow_t37_,t3,_shadow_x42_);
  AND(_shadow_t48_,t4,_shadow_x01_);
  XOR(_shadow_x09_,_shadow_x01_,_shadow_t15_);
  XOR(_shadow_x110_,x[1],_shadow_t26_);
  XOR(_shadow_x211_,_shadow_x23_,_shadow_t37_);
  XOR(_shadow_x312_,x[3],_shadow_t48_);
  XOR(_shadow_x413_,_shadow_x42_,_shadow_t04_);
  XOR(_shadow_x114_,_shadow_x110_,_shadow_x09_);
  XOR(_shadow_x015_,_shadow_x09_,_shadow_x413_);
  XOR(_shadow_x316_,_shadow_x312_,_shadow_x211_);
  NOT(_shadow_x217_,_shadow_x211_);
  ASGN(xr[0],_shadow_x015_);
  ASGN(xr[1],_shadow_x114_);
  ASGN(xr[2],_shadow_x217_);
  ASGN(xr[3],_shadow_x316_);
  ASGN(xr[4],_shadow_x413_);

}

void AddConstant__V64 (/*inputs*/ DATATYPE state__[5][MASKING_ORDER],DATATYPE c__[MASKING_ORDER], /*outputs*/ DATATYPE stateR__[5][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _tmp1_[MASKING_ORDER];

  // Instructions (body)
  XOR(_tmp1_,state__[2],c__);
  ASGN(stateR__[0],state__[0]);
  ASGN(stateR__[1],state__[1]);
  ASGN(stateR__[2],_tmp1_);
  ASGN(stateR__[3],state__[3]);
  ASGN(stateR__[4],state__[4]);

}

void LinearLayer__V64 (/*inputs*/ DATATYPE state__[5][MASKING_ORDER], /*outputs*/ DATATYPE stateR__[5][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _tmp10_[MASKING_ORDER];
  DATATYPE _tmp11_[MASKING_ORDER];
  DATATYPE _tmp12_[MASKING_ORDER];
  DATATYPE _tmp13_[MASKING_ORDER];
  DATATYPE _tmp14_[MASKING_ORDER];
  DATATYPE _tmp15_[MASKING_ORDER];
  DATATYPE _tmp16_[MASKING_ORDER];
  DATATYPE _tmp2_[MASKING_ORDER];
  DATATYPE _tmp3_[MASKING_ORDER];
  DATATYPE _tmp4_[MASKING_ORDER];
  DATATYPE _tmp5_[MASKING_ORDER];
  DATATYPE _tmp6_[MASKING_ORDER];
  DATATYPE _tmp7_[MASKING_ORDER];
  DATATYPE _tmp8_[MASKING_ORDER];
  DATATYPE _tmp9_[MASKING_ORDER];

  // Instructions (body)
  R_ROTATE(_tmp2_,state__[0],19,64);
  XOR(_tmp3_,state__[0],_tmp2_);
  R_ROTATE(_tmp4_,state__[0],28,64);
  XOR(stateR__[0],_tmp3_,_tmp4_);
  R_ROTATE(_tmp5_,state__[1],61,64);
  XOR(_tmp6_,state__[1],_tmp5_);
  R_ROTATE(_tmp7_,state__[1],39,64);
  XOR(stateR__[1],_tmp6_,_tmp7_);
  R_ROTATE(_tmp8_,state__[2],1,64);
  XOR(_tmp9_,state__[2],_tmp8_);
  R_ROTATE(_tmp10_,state__[2],6,64);
  XOR(stateR__[2],_tmp9_,_tmp10_);
  R_ROTATE(_tmp11_,state__[3],10,64);
  XOR(_tmp12_,state__[3],_tmp11_);
  R_ROTATE(_tmp13_,state__[3],17,64);
  XOR(stateR__[3],_tmp12_,_tmp13_);
  R_ROTATE(_tmp14_,state__[4],7,64);
  XOR(_tmp15_,state__[4],_tmp14_);
  R_ROTATE(_tmp16_,state__[4],41,64);
  XOR(stateR__[4],_tmp15_,_tmp16_);

}

/* main function */
void ascon12__ (/*inputs*/ DATATYPE input__[5][MASKING_ORDER], /*outputs*/ DATATYPE output__[5][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _tmp29_[5][MASKING_ORDER];
  DATATYPE _tmp30_[5][MASKING_ORDER];
  DATATYPE consts__[12][MASKING_ORDER];
  DATATYPE state__[5][MASKING_ORDER];

  // Instructions (body)
  ASGN_CST(consts__[0], LIFT_64(240));
  ASGN_CST(consts__[1], LIFT_64(225));
  ASGN_CST(consts__[2], LIFT_64(210));
  ASGN_CST(consts__[3], LIFT_64(195));
  ASGN_CST(consts__[4], LIFT_64(180));
  ASGN_CST(consts__[5], LIFT_64(165));
  ASGN_CST(consts__[6], LIFT_64(150));
  ASGN_CST(consts__[7], LIFT_64(135));
  ASGN_CST(consts__[8], LIFT_64(120));
  ASGN_CST(consts__[9], LIFT_64(105));
  ASGN_CST(consts__[10], LIFT_64(90));
  ASGN_CST(consts__[11], LIFT_64(75));
  ASGN(state__[0],input__[0]);
  ASGN(state__[1],input__[1]);
  ASGN(state__[2],input__[2]);
  ASGN(state__[3],input__[3]);
  ASGN(state__[4],input__[4]);
  for (int i__ = 0; i__ <= 11; i__++) {
    AddConstant__V64(state__,consts__[i__],_tmp29_);
    Sbox__V64(_tmp29_,_tmp30_);
    LinearLayer__V64(_tmp30_,state__);
  }
  ASGN(output__[0],state__[0]);
  ASGN(output__[1],state__[1]);
  ASGN(output__[2],state__[2]);
  ASGN(output__[3],state__[3]);
  ASGN(output__[4],state__[4]);

}

/* Additional functions */
uint32_t bench_speed() {
  /* inputs */
  DATATYPE input__[5][MASKING_ORDER] = { 0 };
  /* outputs */
  DATATYPE output__[5][MASKING_ORDER] = { 0 };
  /* fun call */
  ascon12__(input__,output__);

  /* Returning the number of encrypted bytes */
  return 40;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 table Sbox(x :  v5 :: base)
  returns y :  v5 :: base
{
  4, 11, 31, 20, 26, 21, 9, 2, 27, 5, 8, 18, 29, 3, 6, 28, 30, 19, 7, 14, 0, 13, 17, 24, 16, 12, 1, 25, 22, 10, 15, 23
}


 node AddConstant(state :  u64x5 :: base,c :  u64 :: base)
  returns stateR :  u64x5 :: base
vars

let
  (stateR) = (state[0,1],(state[2] ^ c),state[3,4])
tel

 node LinearLayer(state :  u64x5 :: base)
  returns stateR :  u64x5 :: base
vars

let
  (stateR[0]) = ((state[0] ^ (state[0] >>> 19)) ^ (state[0] >>> 28));
  (stateR[1]) = ((state[1] ^ (state[1] >>> 61)) ^ (state[1] >>> 39));
  (stateR[2]) = ((state[2] ^ (state[2] >>> 1)) ^ (state[2] >>> 6));
  (stateR[3]) = ((state[3] ^ (state[3] >>> 10)) ^ (state[3] >>> 17));
  (stateR[4]) = ((state[4] ^ (state[4] >>> 7)) ^ (state[4] >>> 41))
tel

 node ascon12(input :  u64x5 :: base)
  returns output :  u64x5 :: base
vars
  consts :  u64[12] :: base,
  state :  u64x5[13] :: base
let
  (consts) = (240,225,210,195,180,165,150,135,120,105,90,75);
  (state[0]) = input;
  forall i in [0,11] {
    (state[(i + 1)]) = LinearLayer(Sbox(AddConstant(state[i],consts[i])))
  };
  (output) = state[12]
tel

*/
 