/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/ace/usuba/ua/ace.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "MASKED_UA.h"

/* auxiliary functions */
void f__V32 (/*inputs*/ DATATYPE x__[MASKING_ORDER], /*outputs*/ DATATYPE y__[MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _tmp1_[MASKING_ORDER];
  DATATYPE _tmp2_[MASKING_ORDER];
  DATATYPE _tmp3_[MASKING_ORDER];
  DATATYPE _tmp4_[MASKING_ORDER];

  // Instructions (body)
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp1_[_mask_idx] = L_ROTATE(x__[_mask_idx],5,32);
    _tmp4_[_mask_idx] = L_ROTATE(x__[_mask_idx],1,32);
  }
  REFRESH(_tmp2_,x__);
  MASKED_AND(_tmp3_,_tmp1_,_tmp2_);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    y__[_mask_idx] = XOR(_tmp3_[_mask_idx],_tmp4_[_mask_idx]);
  }

}

void simeck_box__V32 (/*inputs*/ DATATYPE input__[2][MASKING_ORDER],DATATYPE rc__[MASKING_ORDER], /*outputs*/ DATATYPE output__[2][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _tmp11_;
  DATATYPE _tmp12_[MASKING_ORDER];
  DATATYPE _tmp13_[MASKING_ORDER];
  DATATYPE _tmp15_[MASKING_ORDER];
  DATATYPE _tmp16_[MASKING_ORDER];
  DATATYPE _tmp18_;
  DATATYPE _tmp19_[MASKING_ORDER];
  DATATYPE _tmp20_[MASKING_ORDER];
  DATATYPE _tmp22_[MASKING_ORDER];
  DATATYPE _tmp23_[MASKING_ORDER];
  DATATYPE _tmp25_;
  DATATYPE _tmp26_[MASKING_ORDER];
  DATATYPE _tmp27_[MASKING_ORDER];
  DATATYPE _tmp29_[MASKING_ORDER];
  DATATYPE _tmp30_[MASKING_ORDER];
  DATATYPE _tmp32_;
  DATATYPE _tmp33_[MASKING_ORDER];
  DATATYPE _tmp34_[MASKING_ORDER];
  DATATYPE _tmp36_[MASKING_ORDER];
  DATATYPE _tmp37_[MASKING_ORDER];
  DATATYPE _tmp39_;
  DATATYPE _tmp40_[MASKING_ORDER];
  DATATYPE _tmp41_[MASKING_ORDER];
  DATATYPE _tmp43_[MASKING_ORDER];
  DATATYPE _tmp44_[MASKING_ORDER];
  DATATYPE _tmp46_;
  DATATYPE _tmp47_[MASKING_ORDER];
  DATATYPE _tmp48_[MASKING_ORDER];
  DATATYPE _tmp50_[MASKING_ORDER];
  DATATYPE _tmp51_[MASKING_ORDER];
  DATATYPE _tmp53_;
  DATATYPE _tmp54_[MASKING_ORDER];
  DATATYPE _tmp55_[MASKING_ORDER];
  DATATYPE _tmp57_[MASKING_ORDER];
  DATATYPE _tmp58_[MASKING_ORDER];
  DATATYPE _tmp5_[MASKING_ORDER];
  DATATYPE _tmp60_;
  DATATYPE _tmp6_[MASKING_ORDER];
  DATATYPE _tmp8_[MASKING_ORDER];
  DATATYPE _tmp9_[MASKING_ORDER];
  DATATYPE round__[9][2][MASKING_ORDER];
  DATATYPE tmp__[MASKING_ORDER];
  DATATYPE _tmp187_;
  DATATYPE _tmp186_[MASKING_ORDER];
  DATATYPE _tmp185_;
  DATATYPE _tmp184_[MASKING_ORDER];
  DATATYPE _tmp183_;
  DATATYPE _tmp182_[MASKING_ORDER];
  DATATYPE _tmp181_;
  DATATYPE _tmp180_[MASKING_ORDER];
  DATATYPE _tmp179_;
  DATATYPE _tmp178_[MASKING_ORDER];
  DATATYPE _tmp177_;
  DATATYPE _tmp176_[MASKING_ORDER];
  DATATYPE _tmp175_;
  DATATYPE _tmp174_[MASKING_ORDER];
  DATATYPE _tmp173_;
  DATATYPE _tmp172_[MASKING_ORDER];

  // Instructions (body)
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    round__[0][0][_mask_idx] = input__[0][_mask_idx];
    round__[0][1][_mask_idx] = input__[1][_mask_idx];
    _tmp9_[_mask_idx] = R_SHIFT(rc__[_mask_idx],0,32);
    _tmp16_[_mask_idx] = R_SHIFT(rc__[_mask_idx],1,32);
    _tmp23_[_mask_idx] = R_SHIFT(rc__[_mask_idx],2,32);
    _tmp30_[_mask_idx] = R_SHIFT(rc__[_mask_idx],3,32);
    _tmp37_[_mask_idx] = R_SHIFT(rc__[_mask_idx],4,32);
    _tmp44_[_mask_idx] = R_SHIFT(rc__[_mask_idx],5,32);
    _tmp51_[_mask_idx] = R_SHIFT(rc__[_mask_idx],6,32);
    _tmp58_[_mask_idx] = R_SHIFT(rc__[_mask_idx],7,32);
  }
  f__V32(round__[0][0],_tmp5_);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp6_[_mask_idx] = XOR(_tmp5_[_mask_idx],round__[0][1][_mask_idx]);
  }
  _tmp172_[0] = LIFT_32(4294967294);
  for (int _mask_idx = 1; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp172_[_mask_idx] = LIFT_32(0);
    _tmp173_ = LIFT_32(0);
    _tmp174_[_mask_idx] = LIFT_32(0);
    _tmp175_ = LIFT_32(0);
    _tmp176_[_mask_idx] = LIFT_32(0);
    _tmp177_ = LIFT_32(0);
    _tmp178_[_mask_idx] = LIFT_32(0);
    _tmp179_ = LIFT_32(0);
    _tmp180_[_mask_idx] = LIFT_32(0);
    _tmp181_ = LIFT_32(0);
    _tmp182_[_mask_idx] = LIFT_32(0);
    _tmp183_ = LIFT_32(0);
    _tmp184_[_mask_idx] = LIFT_32(0);
    _tmp185_ = LIFT_32(0);
    _tmp186_[_mask_idx] = LIFT_32(0);
    _tmp187_ = LIFT_32(0);
  }
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp8_[_mask_idx] = XOR(_tmp6_[_mask_idx],_tmp172_[_mask_idx]);
  }
  _tmp173_ = LIFT_32(1);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp11_ = AND(_tmp9_[_mask_idx],_tmp173_);
    tmp__[_mask_idx] = XOR(_tmp8_[_mask_idx],_tmp11_);
    round__[1][0][_mask_idx] = tmp__[_mask_idx];
    round__[1][1][_mask_idx] = round__[0][0][_mask_idx];
  }
  f__V32(round__[1][0],_tmp12_);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp13_[_mask_idx] = XOR(_tmp12_[_mask_idx],round__[1][1][_mask_idx]);
  }
  _tmp174_[0] = LIFT_32(4294967294);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp15_[_mask_idx] = XOR(_tmp13_[_mask_idx],_tmp174_[_mask_idx]);
  }
  _tmp175_ = LIFT_32(1);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp18_ = AND(_tmp16_[_mask_idx],_tmp175_);
    tmp__[_mask_idx] = XOR(_tmp15_[_mask_idx],_tmp18_);
    round__[2][0][_mask_idx] = tmp__[_mask_idx];
    round__[2][1][_mask_idx] = round__[1][0][_mask_idx];
  }
  f__V32(round__[2][0],_tmp19_);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp20_[_mask_idx] = XOR(_tmp19_[_mask_idx],round__[2][1][_mask_idx]);
  }
  _tmp176_[0] = LIFT_32(4294967294);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp22_[_mask_idx] = XOR(_tmp20_[_mask_idx],_tmp176_[_mask_idx]);
  }
  _tmp177_ = LIFT_32(1);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp25_ = AND(_tmp23_[_mask_idx],_tmp177_);
    tmp__[_mask_idx] = XOR(_tmp22_[_mask_idx],_tmp25_);
    round__[3][0][_mask_idx] = tmp__[_mask_idx];
    round__[3][1][_mask_idx] = round__[2][0][_mask_idx];
  }
  f__V32(round__[3][0],_tmp26_);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp27_[_mask_idx] = XOR(_tmp26_[_mask_idx],round__[3][1][_mask_idx]);
  }
  _tmp178_[0] = LIFT_32(4294967294);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp29_[_mask_idx] = XOR(_tmp27_[_mask_idx],_tmp178_[_mask_idx]);
  }
  _tmp179_ = LIFT_32(1);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp32_ = AND(_tmp30_[_mask_idx],_tmp179_);
    tmp__[_mask_idx] = XOR(_tmp29_[_mask_idx],_tmp32_);
    round__[4][0][_mask_idx] = tmp__[_mask_idx];
    round__[4][1][_mask_idx] = round__[3][0][_mask_idx];
  }
  f__V32(round__[4][0],_tmp33_);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp34_[_mask_idx] = XOR(_tmp33_[_mask_idx],round__[4][1][_mask_idx]);
  }
  _tmp180_[0] = LIFT_32(4294967294);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp36_[_mask_idx] = XOR(_tmp34_[_mask_idx],_tmp180_[_mask_idx]);
  }
  _tmp181_ = LIFT_32(1);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp39_ = AND(_tmp37_[_mask_idx],_tmp181_);
    tmp__[_mask_idx] = XOR(_tmp36_[_mask_idx],_tmp39_);
    round__[5][0][_mask_idx] = tmp__[_mask_idx];
    round__[5][1][_mask_idx] = round__[4][0][_mask_idx];
  }
  f__V32(round__[5][0],_tmp40_);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp41_[_mask_idx] = XOR(_tmp40_[_mask_idx],round__[5][1][_mask_idx]);
  }
  _tmp182_[0] = LIFT_32(4294967294);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp43_[_mask_idx] = XOR(_tmp41_[_mask_idx],_tmp182_[_mask_idx]);
  }
  _tmp183_ = LIFT_32(1);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp46_ = AND(_tmp44_[_mask_idx],_tmp183_);
    tmp__[_mask_idx] = XOR(_tmp43_[_mask_idx],_tmp46_);
    round__[6][0][_mask_idx] = tmp__[_mask_idx];
    round__[6][1][_mask_idx] = round__[5][0][_mask_idx];
  }
  f__V32(round__[6][0],_tmp47_);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp48_[_mask_idx] = XOR(_tmp47_[_mask_idx],round__[6][1][_mask_idx]);
  }
  _tmp184_[0] = LIFT_32(4294967294);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp50_[_mask_idx] = XOR(_tmp48_[_mask_idx],_tmp184_[_mask_idx]);
  }
  _tmp185_ = LIFT_32(1);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp53_ = AND(_tmp51_[_mask_idx],_tmp185_);
    tmp__[_mask_idx] = XOR(_tmp50_[_mask_idx],_tmp53_);
    round__[7][0][_mask_idx] = tmp__[_mask_idx];
    round__[7][1][_mask_idx] = round__[6][0][_mask_idx];
  }
  f__V32(round__[7][0],_tmp54_);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp55_[_mask_idx] = XOR(_tmp54_[_mask_idx],round__[7][1][_mask_idx]);
  }
  _tmp186_[0] = LIFT_32(4294967294);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp57_[_mask_idx] = XOR(_tmp55_[_mask_idx],_tmp186_[_mask_idx]);
  }
  _tmp187_ = LIFT_32(1);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp60_ = AND(_tmp58_[_mask_idx],_tmp187_);
    tmp__[_mask_idx] = XOR(_tmp57_[_mask_idx],_tmp60_);
    round__[8][0][_mask_idx] = tmp__[_mask_idx];
    round__[8][1][_mask_idx] = round__[7][0][_mask_idx];
    output__[0][_mask_idx] = round__[8][0][_mask_idx];
    output__[1][_mask_idx] = round__[8][1][_mask_idx];
  }

}

void ACE_step__V32 (/*inputs*/ DATATYPE A__[2][MASKING_ORDER],DATATYPE B__[2][MASKING_ORDER],DATATYPE C__[2][MASKING_ORDER],DATATYPE D__[2][MASKING_ORDER],DATATYPE E__[2][MASKING_ORDER],DATATYPE RC__0__[MASKING_ORDER],DATATYPE RC__1__[MASKING_ORDER],DATATYPE RC__2__[MASKING_ORDER],DATATYPE SC__0__[MASKING_ORDER],DATATYPE SC__1__[MASKING_ORDER],DATATYPE SC__2__[MASKING_ORDER], /*outputs*/ DATATYPE Ar__[2][MASKING_ORDER],DATATYPE Br__[2][MASKING_ORDER],DATATYPE Cr__[2][MASKING_ORDER],DATATYPE Dr__[2][MASKING_ORDER],DATATYPE Er__[2][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _shadow_A__1_[2][MASKING_ORDER];
  DATATYPE _shadow_B__4_[2][MASKING_ORDER];
  DATATYPE _shadow_C__2_[2][MASKING_ORDER];
  DATATYPE _shadow_D__5_[2][MASKING_ORDER];
  DATATYPE _shadow_E__3_[2][MASKING_ORDER];
  DATATYPE _shadow_E__6_[2][MASKING_ORDER];
  DATATYPE _tmp61_[2][MASKING_ORDER];
  DATATYPE _tmp63_[MASKING_ORDER];
  DATATYPE _tmp66_[2][MASKING_ORDER];
  DATATYPE _tmp68_[MASKING_ORDER];
  DATATYPE _tmp71_[2][MASKING_ORDER];
  DATATYPE _tmp73_[MASKING_ORDER];
  DATATYPE _tmp190_[MASKING_ORDER];
  DATATYPE _tmp189_[MASKING_ORDER];
  DATATYPE _tmp188_[MASKING_ORDER];

  // Instructions (body)
  simeck_box__V32(A__,RC__0__,_shadow_A__1_);
  simeck_box__V32(C__,RC__1__,_shadow_C__2_);
  simeck_box__V32(E__,RC__2__,_shadow_E__3_);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp61_[0][_mask_idx] = XOR(B__[0][_mask_idx],_shadow_C__2_[0][_mask_idx]);
    _tmp61_[1][_mask_idx] = XOR(B__[1][_mask_idx],_shadow_C__2_[1][_mask_idx]);
    _tmp63_[_mask_idx] = XOR(_tmp61_[1][_mask_idx],SC__0__[_mask_idx]);
    _tmp66_[0][_mask_idx] = XOR(D__[0][_mask_idx],_shadow_E__3_[0][_mask_idx]);
    _tmp66_[1][_mask_idx] = XOR(D__[1][_mask_idx],_shadow_E__3_[1][_mask_idx]);
    _tmp68_[_mask_idx] = XOR(_tmp66_[1][_mask_idx],SC__1__[_mask_idx]);
    _tmp71_[0][_mask_idx] = XOR(_shadow_E__3_[0][_mask_idx],_shadow_A__1_[0][_mask_idx]);
    _tmp71_[1][_mask_idx] = XOR(_shadow_E__3_[1][_mask_idx],_shadow_A__1_[1][_mask_idx]);
    _tmp73_[_mask_idx] = XOR(_tmp71_[1][_mask_idx],SC__2__[_mask_idx]);
    Br__[0][_mask_idx] = _shadow_C__2_[0][_mask_idx];
    Br__[1][_mask_idx] = _shadow_C__2_[1][_mask_idx];
    Cr__[0][_mask_idx] = _shadow_A__1_[0][_mask_idx];
    Cr__[1][_mask_idx] = _shadow_A__1_[1][_mask_idx];
  }
  _shadow_B__4_[0][0] = NOT(_tmp61_[0][0]);
  for (int _mask_idx = 1; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _shadow_B__4_[0][_mask_idx] = _tmp61_[0][_mask_idx];
    _tmp188_[_mask_idx] = LIFT_32(0);
    _shadow_D__5_[0][_mask_idx] = _tmp66_[0][_mask_idx];
    _tmp189_[_mask_idx] = LIFT_32(0);
    _shadow_E__6_[0][_mask_idx] = _tmp71_[0][_mask_idx];
    _tmp190_[_mask_idx] = LIFT_32(0);
  }
  _tmp188_[0] = LIFT_32(4294967040);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _shadow_B__4_[1][_mask_idx] = XOR(_tmp63_[_mask_idx],_tmp188_[_mask_idx]);
    Er__[0][_mask_idx] = _shadow_B__4_[0][_mask_idx];
    Er__[1][_mask_idx] = _shadow_B__4_[1][_mask_idx];
  }
  _shadow_D__5_[0][0] = NOT(_tmp66_[0][0]);
  _tmp189_[0] = LIFT_32(4294967040);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _shadow_D__5_[1][_mask_idx] = XOR(_tmp68_[_mask_idx],_tmp189_[_mask_idx]);
    Ar__[0][_mask_idx] = _shadow_D__5_[0][_mask_idx];
    Ar__[1][_mask_idx] = _shadow_D__5_[1][_mask_idx];
  }
  _shadow_E__6_[0][0] = NOT(_tmp71_[0][0]);
  _tmp190_[0] = LIFT_32(4294967040);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _shadow_E__6_[1][_mask_idx] = XOR(_tmp73_[_mask_idx],_tmp190_[_mask_idx]);
    Dr__[0][_mask_idx] = _shadow_E__6_[0][_mask_idx];
    Dr__[1][_mask_idx] = _shadow_E__6_[1][_mask_idx];
  }

}

/* main function */
void ACE__ (/*inputs*/ DATATYPE input__[5][2][MASKING_ORDER], /*outputs*/ DATATYPE output__[5][2][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE RC__[3][16][MASKING_ORDER];
  DATATYPE SC__[3][16][MASKING_ORDER];
  DATATYPE tmp__[5][2][MASKING_ORDER];

  // Instructions (body)
  SC__[0][0][0] = LIFT_32(80);
  for (int _mask_idx = 1; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    SC__[0][0][_mask_idx] = LIFT_32(0);
    SC__[0][1][_mask_idx] = LIFT_32(0);
    SC__[0][2][_mask_idx] = LIFT_32(0);
    SC__[0][3][_mask_idx] = LIFT_32(0);
    SC__[0][4][_mask_idx] = LIFT_32(0);
    SC__[0][5][_mask_idx] = LIFT_32(0);
    SC__[0][6][_mask_idx] = LIFT_32(0);
    SC__[0][7][_mask_idx] = LIFT_32(0);
    SC__[0][8][_mask_idx] = LIFT_32(0);
    SC__[0][9][_mask_idx] = LIFT_32(0);
    SC__[0][10][_mask_idx] = LIFT_32(0);
    SC__[0][11][_mask_idx] = LIFT_32(0);
    SC__[0][12][_mask_idx] = LIFT_32(0);
    SC__[0][13][_mask_idx] = LIFT_32(0);
    SC__[0][14][_mask_idx] = LIFT_32(0);
    SC__[0][15][_mask_idx] = LIFT_32(0);
    SC__[1][0][_mask_idx] = LIFT_32(0);
    SC__[1][1][_mask_idx] = LIFT_32(0);
    SC__[1][2][_mask_idx] = LIFT_32(0);
    SC__[1][3][_mask_idx] = LIFT_32(0);
    SC__[1][4][_mask_idx] = LIFT_32(0);
    SC__[1][5][_mask_idx] = LIFT_32(0);
    SC__[1][6][_mask_idx] = LIFT_32(0);
    SC__[1][7][_mask_idx] = LIFT_32(0);
    SC__[1][8][_mask_idx] = LIFT_32(0);
    SC__[1][9][_mask_idx] = LIFT_32(0);
    SC__[1][10][_mask_idx] = LIFT_32(0);
    SC__[1][11][_mask_idx] = LIFT_32(0);
    SC__[1][12][_mask_idx] = LIFT_32(0);
    SC__[1][13][_mask_idx] = LIFT_32(0);
    SC__[1][14][_mask_idx] = LIFT_32(0);
    SC__[1][15][_mask_idx] = LIFT_32(0);
    SC__[2][0][_mask_idx] = LIFT_32(0);
    SC__[2][1][_mask_idx] = LIFT_32(0);
    SC__[2][2][_mask_idx] = LIFT_32(0);
    SC__[2][3][_mask_idx] = LIFT_32(0);
    SC__[2][4][_mask_idx] = LIFT_32(0);
    SC__[2][5][_mask_idx] = LIFT_32(0);
    SC__[2][6][_mask_idx] = LIFT_32(0);
    SC__[2][7][_mask_idx] = LIFT_32(0);
    SC__[2][8][_mask_idx] = LIFT_32(0);
    SC__[2][9][_mask_idx] = LIFT_32(0);
    SC__[2][10][_mask_idx] = LIFT_32(0);
    SC__[2][11][_mask_idx] = LIFT_32(0);
    SC__[2][12][_mask_idx] = LIFT_32(0);
    SC__[2][13][_mask_idx] = LIFT_32(0);
    SC__[2][14][_mask_idx] = LIFT_32(0);
    SC__[2][15][_mask_idx] = LIFT_32(0);
    RC__[0][0][_mask_idx] = LIFT_32(0);
    RC__[0][1][_mask_idx] = LIFT_32(0);
    RC__[0][2][_mask_idx] = LIFT_32(0);
    RC__[0][3][_mask_idx] = LIFT_32(0);
    RC__[0][4][_mask_idx] = LIFT_32(0);
    RC__[0][5][_mask_idx] = LIFT_32(0);
    RC__[0][6][_mask_idx] = LIFT_32(0);
    RC__[0][7][_mask_idx] = LIFT_32(0);
    RC__[0][8][_mask_idx] = LIFT_32(0);
    RC__[0][9][_mask_idx] = LIFT_32(0);
    RC__[0][10][_mask_idx] = LIFT_32(0);
    RC__[0][11][_mask_idx] = LIFT_32(0);
    RC__[0][12][_mask_idx] = LIFT_32(0);
    RC__[0][13][_mask_idx] = LIFT_32(0);
    RC__[0][14][_mask_idx] = LIFT_32(0);
    RC__[0][15][_mask_idx] = LIFT_32(0);
    RC__[1][0][_mask_idx] = LIFT_32(0);
    RC__[1][1][_mask_idx] = LIFT_32(0);
    RC__[1][2][_mask_idx] = LIFT_32(0);
    RC__[1][3][_mask_idx] = LIFT_32(0);
    RC__[1][4][_mask_idx] = LIFT_32(0);
    RC__[1][5][_mask_idx] = LIFT_32(0);
    RC__[1][6][_mask_idx] = LIFT_32(0);
    RC__[1][7][_mask_idx] = LIFT_32(0);
    RC__[1][8][_mask_idx] = LIFT_32(0);
    RC__[1][9][_mask_idx] = LIFT_32(0);
    RC__[1][10][_mask_idx] = LIFT_32(0);
    RC__[1][11][_mask_idx] = LIFT_32(0);
    RC__[1][12][_mask_idx] = LIFT_32(0);
    RC__[1][13][_mask_idx] = LIFT_32(0);
    RC__[1][14][_mask_idx] = LIFT_32(0);
    RC__[1][15][_mask_idx] = LIFT_32(0);
    RC__[2][0][_mask_idx] = LIFT_32(0);
    RC__[2][1][_mask_idx] = LIFT_32(0);
    RC__[2][2][_mask_idx] = LIFT_32(0);
    RC__[2][3][_mask_idx] = LIFT_32(0);
    RC__[2][4][_mask_idx] = LIFT_32(0);
    RC__[2][5][_mask_idx] = LIFT_32(0);
    RC__[2][6][_mask_idx] = LIFT_32(0);
    RC__[2][7][_mask_idx] = LIFT_32(0);
    RC__[2][8][_mask_idx] = LIFT_32(0);
    RC__[2][9][_mask_idx] = LIFT_32(0);
    RC__[2][10][_mask_idx] = LIFT_32(0);
    RC__[2][11][_mask_idx] = LIFT_32(0);
    RC__[2][12][_mask_idx] = LIFT_32(0);
    RC__[2][13][_mask_idx] = LIFT_32(0);
    RC__[2][14][_mask_idx] = LIFT_32(0);
    RC__[2][15][_mask_idx] = LIFT_32(0);
  }
  SC__[0][1][0] = LIFT_32(92);
  SC__[0][2][0] = LIFT_32(145);
  SC__[0][3][0] = LIFT_32(141);
  SC__[0][4][0] = LIFT_32(83);
  SC__[0][5][0] = LIFT_32(96);
  SC__[0][6][0] = LIFT_32(104);
  SC__[0][7][0] = LIFT_32(225);
  SC__[0][8][0] = LIFT_32(246);
  SC__[0][9][0] = LIFT_32(157);
  SC__[0][10][0] = LIFT_32(64);
  SC__[0][11][0] = LIFT_32(79);
  SC__[0][12][0] = LIFT_32(190);
  SC__[0][13][0] = LIFT_32(91);
  SC__[0][14][0] = LIFT_32(233);
  SC__[0][15][0] = LIFT_32(127);
  SC__[1][0][0] = LIFT_32(40);
  SC__[1][1][0] = LIFT_32(174);
  SC__[1][2][0] = LIFT_32(72);
  SC__[1][3][0] = LIFT_32(198);
  SC__[1][4][0] = LIFT_32(169);
  SC__[1][5][0] = LIFT_32(48);
  SC__[1][6][0] = LIFT_32(52);
  SC__[1][7][0] = LIFT_32(112);
  SC__[1][8][0] = LIFT_32(123);
  SC__[1][9][0] = LIFT_32(206);
  SC__[1][10][0] = LIFT_32(32);
  SC__[1][11][0] = LIFT_32(39);
  SC__[1][12][0] = LIFT_32(95);
  SC__[1][13][0] = LIFT_32(173);
  SC__[1][14][0] = LIFT_32(116);
  SC__[1][15][0] = LIFT_32(63);
  SC__[2][0][0] = LIFT_32(20);
  SC__[2][1][0] = LIFT_32(87);
  SC__[2][2][0] = LIFT_32(36);
  SC__[2][3][0] = LIFT_32(99);
  SC__[2][4][0] = LIFT_32(84);
  SC__[2][5][0] = LIFT_32(24);
  SC__[2][6][0] = LIFT_32(154);
  SC__[2][7][0] = LIFT_32(56);
  SC__[2][8][0] = LIFT_32(189);
  SC__[2][9][0] = LIFT_32(103);
  SC__[2][10][0] = LIFT_32(16);
  SC__[2][11][0] = LIFT_32(19);
  SC__[2][12][0] = LIFT_32(47);
  SC__[2][13][0] = LIFT_32(214);
  SC__[2][14][0] = LIFT_32(186);
  SC__[2][15][0] = LIFT_32(31);
  RC__[0][0][0] = LIFT_32(7);
  RC__[0][1][0] = LIFT_32(10);
  RC__[0][2][0] = LIFT_32(155);
  RC__[0][3][0] = LIFT_32(224);
  RC__[0][4][0] = LIFT_32(209);
  RC__[0][5][0] = LIFT_32(26);
  RC__[0][6][0] = LIFT_32(34);
  RC__[0][7][0] = LIFT_32(247);
  RC__[0][8][0] = LIFT_32(98);
  RC__[0][9][0] = LIFT_32(150);
  RC__[0][10][0] = LIFT_32(113);
  RC__[0][11][0] = LIFT_32(170);
  RC__[0][12][0] = LIFT_32(43);
  RC__[0][13][0] = LIFT_32(233);
  RC__[0][14][0] = LIFT_32(207);
  RC__[0][15][0] = LIFT_32(183);
  RC__[1][0][0] = LIFT_32(83);
  RC__[1][1][0] = LIFT_32(93);
  RC__[1][2][0] = LIFT_32(73);
  RC__[1][3][0] = LIFT_32(127);
  RC__[1][4][0] = LIFT_32(190);
  RC__[1][5][0] = LIFT_32(29);
  RC__[1][6][0] = LIFT_32(40);
  RC__[1][7][0] = LIFT_32(108);
  RC__[1][8][0] = LIFT_32(130);
  RC__[1][9][0] = LIFT_32(71);
  RC__[1][10][0] = LIFT_32(107);
  RC__[1][11][0] = LIFT_32(136);
  RC__[1][12][0] = LIFT_32(220);
  RC__[1][13][0] = LIFT_32(139);
  RC__[1][14][0] = LIFT_32(89);
  RC__[1][15][0] = LIFT_32(198);
  RC__[2][0][0] = LIFT_32(67);
  RC__[2][1][0] = LIFT_32(228);
  RC__[2][2][0] = LIFT_32(94);
  RC__[2][3][0] = LIFT_32(204);
  RC__[2][4][0] = LIFT_32(50);
  RC__[2][5][0] = LIFT_32(78);
  RC__[2][6][0] = LIFT_32(117);
  RC__[2][7][0] = LIFT_32(37);
  RC__[2][8][0] = LIFT_32(253);
  RC__[2][9][0] = LIFT_32(249);
  RC__[2][10][0] = LIFT_32(118);
  RC__[2][11][0] = LIFT_32(160);
  RC__[2][12][0] = LIFT_32(176);
  RC__[2][13][0] = LIFT_32(9);
  RC__[2][14][0] = LIFT_32(30);
  RC__[2][15][0] = LIFT_32(173);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    tmp__[0][0][_mask_idx] = input__[0][0][_mask_idx];
    tmp__[0][1][_mask_idx] = input__[0][1][_mask_idx];
    tmp__[1][0][_mask_idx] = input__[1][0][_mask_idx];
    tmp__[1][1][_mask_idx] = input__[1][1][_mask_idx];
    tmp__[2][0][_mask_idx] = input__[2][0][_mask_idx];
    tmp__[2][1][_mask_idx] = input__[2][1][_mask_idx];
    tmp__[3][0][_mask_idx] = input__[3][0][_mask_idx];
    tmp__[3][1][_mask_idx] = input__[3][1][_mask_idx];
    tmp__[4][0][_mask_idx] = input__[4][0][_mask_idx];
    tmp__[4][1][_mask_idx] = input__[4][1][_mask_idx];
  }
  for (int i__ = 0; i__ <= 15; i__++) {
    ACE_step__V32(tmp__[0],tmp__[1],tmp__[2],tmp__[3],tmp__[4],RC__[0][i__],RC__[1][i__],RC__[2][i__],SC__[0][i__],SC__[1][i__],SC__[2][i__],tmp__[0],tmp__[1],tmp__[2],tmp__[3],tmp__[4]);
  }
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    output__[0][0][_mask_idx] = tmp__[0][0][_mask_idx];
    output__[0][1][_mask_idx] = tmp__[0][1][_mask_idx];
    output__[1][0][_mask_idx] = tmp__[1][0][_mask_idx];
    output__[1][1][_mask_idx] = tmp__[1][1][_mask_idx];
    output__[2][0][_mask_idx] = tmp__[2][0][_mask_idx];
    output__[2][1][_mask_idx] = tmp__[2][1][_mask_idx];
    output__[3][0][_mask_idx] = tmp__[3][0][_mask_idx];
    output__[3][1][_mask_idx] = tmp__[3][1][_mask_idx];
    output__[4][0][_mask_idx] = tmp__[4][0][_mask_idx];
    output__[4][1][_mask_idx] = tmp__[4][1][_mask_idx];
  }

}

/* Additional functions */
uint32_t bench_speed() {
  /* inputs */
  DATATYPE input__[5][2][MASKING_ORDER][MASKING_ORDER] = { 0 };
  /* outputs */
  DATATYPE output__[5][2][MASKING_ORDER][MASKING_ORDER] = { 0 };
  /* fun call */
  ACE__(input__,output__);

  /* Returning the number of encrypted bytes */
  return 1;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 node f(x :  u32 :: base)
  returns y :  u32 :: base
vars

let
  (y) = (((x <<< 5) & refresh(x)) ^ (x <<< 1))
tel

 node simeck_box(input :  u32x2 :: base,rc :  u32 :: base)
  returns output :  u32x2 :: base
vars
  round :  u32x2[9] :: base,
  tmp :  u32[8] :: base
let
  (round[0]) = input;
  _unroll forall i in [0,7] {
    (tmp[i]) = (((f(round[i][0]) ^ round[i][1]) ^ 4294967294) ^ ((rc >> i) & 1));
    (round[(i + 1)][0,1]) = (tmp[i],round[i][0])
  };
  (output) = round[8]
tel

 node ACE_step(A :  u32x2 :: base,B :  u32x2 :: base,C :  u32x2 :: base,D :  u32x2 :: base,E :  u32x2 :: base,RC :  u32[3] :: base,SC :  u32[3] :: base)
  returns Ar :  u32x2 :: base,Br :  u32x2 :: base,Cr :  u32x2 :: base,Dr :  u32x2 :: base,Er :  u32x2 :: base
vars

let
  (A) := simeck_box(A,RC[0]);
  (C) := simeck_box(C,RC[1]);
  (E) := simeck_box(E,RC[2]);
  (B) := (((B ^ C) ^ (0,SC[0])) ^ (4294967295,4294967040));
  (D) := (((D ^ E) ^ (0,SC[1])) ^ (4294967295,4294967040));
  (E) := (((E ^ A) ^ (0,SC[2])) ^ (4294967295,4294967040));
  (Ar) = D;
  (Br) = C;
  (Cr) = A;
  (Dr) = E;
  (Er) = B
tel

 node ACE(input :  u32x2[5] :: base)
  returns output :  u32x2[5] :: base
vars
  SC :  u32[3][16] :: base,
  RC :  u32[3][16] :: base,
  tmp :  u32x2[17][5] :: base
let
  (SC) = (80,92,145,141,83,96,104,225,246,157,64,79,190,91,233,127,40,174,72,198,169,48,52,112,123,206,32,39,95,173,116,63,20,87,36,99,84,24,154,56,189,103,16,19,47,214,186,31);
  (RC) = (7,10,155,224,209,26,34,247,98,150,113,170,43,233,207,183,83,93,73,127,190,29,40,108,130,71,107,136,220,139,89,198,67,228,94,204,50,78,117,37,253,249,118,160,176,9,30,173);
  (tmp[0]) = input;
  forall i in [0,15] {
    (tmp[(i + 1)]) = ACE_step(tmp[i],RC[0,1,2][i],SC[0,1,2][i])
  };
  (output) = tmp[16]
tel

*/
 