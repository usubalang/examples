/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/skinny/usuba/ua/skinny.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */
#define NO_RUNTIME

#ifndef BITS_PER_REG
#define BITS_PER_REG 8
#endif
/* including the architecture specific .h */
#include "STD.h"

// Note: this wasn't generated by Usuba, but manually added
static const uint8_t sbox_8[256] = {0x65,0x4c,0x6a,0x42,0x4b,0x63,0x43,0x6b,0x55,0x75,0x5a,0x7a,0x53,0x73,0x5b,0x7b ,0x35,0x8c,0x3a,0x81,0x89,0x33,0x80,0x3b,0x95,0x25,0x98,0x2a,0x90,0x23,0x99,0x2b ,0xe5,0xcc,0xe8,0xc1,0xc9,0xe0,0xc0,0xe9,0xd5,0xf5,0xd8,0xf8,0xd0,0xf0,0xd9,0xf9 ,0xa5,0x1c,0xa8,0x12,0x1b,0xa0,0x13,0xa9,0x05,0xb5,0x0a,0xb8,0x03,0xb0,0x0b,0xb9 ,0x32,0x88,0x3c,0x85,0x8d,0x34,0x84,0x3d,0x91,0x22,0x9c,0x2c,0x94,0x24,0x9d,0x2d ,0x62,0x4a,0x6c,0x45,0x4d,0x64,0x44,0x6d,0x52,0x72,0x5c,0x7c,0x54,0x74,0x5d,0x7d ,0xa1,0x1a,0xac,0x15,0x1d,0xa4,0x14,0xad,0x02,0xb1,0x0c,0xbc,0x04,0xb4,0x0d,0xbd ,0xe1,0xc8,0xec,0xc5,0xcd,0xe4,0xc4,0xed,0xd1,0xf1,0xdc,0xfc,0xd4,0xf4,0xdd,0xfd ,0x36,0x8e,0x38,0x82,0x8b,0x30,0x83,0x39,0x96,0x26,0x9a,0x28,0x93,0x20,0x9b,0x29 ,0x66,0x4e,0x68,0x41,0x49,0x60,0x40,0x69,0x56,0x76,0x58,0x78,0x50,0x70,0x59,0x79 ,0xa6,0x1e,0xaa,0x11,0x19,0xa3,0x10,0xab,0x06,0xb6,0x08,0xba,0x00,0xb3,0x09,0xbb ,0xe6,0xce,0xea,0xc2,0xcb,0xe3,0xc3,0xeb,0xd6,0xf6,0xda,0xfa,0xd3,0xf3,0xdb,0xfb ,0x31,0x8a,0x3e,0x86,0x8f,0x37,0x87,0x3f,0x92,0x21,0x9e,0x2e,0x97,0x27,0x9f,0x2f ,0x61,0x48,0x6e,0x46,0x4f,0x67,0x47,0x6f,0x51,0x71,0x5e,0x7e,0x57,0x77,0x5f,0x7f ,0xa2,0x18,0xae,0x16,0x1f,0xa7,0x17,0xaf,0x01,0xb2,0x0e,0xbe,0x07,0xb7,0x0f,0xbf ,0xe2,0xca,0xee,0xc6,0xcf,0xe7,0xc7,0xef,0xd2,0xf2,0xde,0xfe,0xd7,0xf7,0xdf,0xff};


/* auxiliary functions */
void SubCell__V8 (/*inputs*/ DATATYPE state__[4][4], /*outputs*/ DATATYPE stateR__[4][4]) {
  
  // Variables declaration
  ;

  // Instructions (body)
  for (int i__ = 0; i__ <= 3; i__++) {
    for (int j__ = 0; j__ <= 3; j__++) {
      stateR__[i__][j__] = sbox_8[state__[i__][j__]];
    }
  }

}

void AddConstants__V8 (/*inputs*/ DATATYPE state__[4][4],DATATYPE c__, /*outputs*/ DATATYPE stateR__[4][4]) {
  
  // Variables declaration
  DATATYPE _tmp1_;
  DATATYPE _tmp2_;
  DATATYPE _tmp3_;

  // Instructions (body)
  _tmp1_ = AND(c__,LIFT_8(15));
  stateR__[0][0] = XOR(state__[0][0],_tmp1_);
  _tmp2_ = R_SHIFT(c__,4,8);
  _tmp3_ = AND(_tmp2_,LIFT_8(3));
  stateR__[1][0] = XOR(state__[1][0],_tmp3_);
  stateR__[2][0] = XOR(state__[2][0],LIFT_8(2));
  stateR__[0][1] = state__[0][1];
  stateR__[1][1] = state__[1][1];
  stateR__[2][1] = state__[2][1];
  stateR__[0][2] = state__[0][2];
  stateR__[1][2] = state__[1][2];
  stateR__[2][2] = state__[2][2];
  stateR__[0][3] = state__[0][3];
  stateR__[1][3] = state__[1][3];
  stateR__[2][3] = state__[2][3];
  stateR__[3][0] = state__[3][0];
  stateR__[3][1] = state__[3][1];
  stateR__[3][2] = state__[3][2];
  stateR__[3][3] = state__[3][3];

}

void AddKey__V8 (/*inputs*/ DATATYPE state__[4][4],DATATYPE keyCells__[2][4][4], /*outputs*/ DATATYPE stateR__[4][4],DATATYPE keyCellsR__[2][4][4]) {
  
  // Variables declaration
  DATATYPE _tmp10_;
  DATATYPE _tmp11_;
  DATATYPE _tmp4_;
  DATATYPE _tmp5_;
  DATATYPE _tmp6_;
  DATATYPE _tmp7_;
  DATATYPE _tmp8_;
  DATATYPE _tmp9_;
  DATATYPE keyCells_tmp__[2][4][4];

  // Instructions (body)
  for (int i__ = 0; i__ <= 1; i__++) {
    for (int j__ = 0; j__ <= 3; j__++) {
      _tmp4_ = XOR(state__[i__][j__],keyCells__[0][i__][j__]);
      stateR__[i__][j__] = XOR(_tmp4_,keyCells__[1][i__][j__]);
    }
  }
  stateR__[2][0] = state__[2][0];
  stateR__[2][1] = state__[2][1];
  stateR__[2][2] = state__[2][2];
  stateR__[2][3] = state__[2][3];
  stateR__[3][0] = state__[3][0];
  stateR__[3][1] = state__[3][1];
  stateR__[3][2] = state__[3][2];
  stateR__[3][3] = state__[3][3];
  keyCells_tmp__[1][0][0] = keyCells__[1][2][1];
  keyCells_tmp__[1][0][1] = keyCells__[1][3][3];
  keyCells_tmp__[1][0][2] = keyCells__[1][2][0];
  keyCells_tmp__[1][0][3] = keyCells__[1][3][1];
  keyCells_tmp__[1][1][0] = keyCells__[1][2][2];
  keyCells_tmp__[1][1][1] = keyCells__[1][3][2];
  keyCells_tmp__[1][1][2] = keyCells__[1][3][0];
  keyCells_tmp__[1][1][3] = keyCells__[1][2][3];
  for (int i__ = 0; i__ <= 1; i__++) {
    for (int j__ = 0; j__ <= 3; j__++) {
      _tmp5_ = L_SHIFT(keyCells_tmp__[1][i__][j__],1,8);
      _tmp6_ = AND(_tmp5_,LIFT_8(254));
      _tmp7_ = R_SHIFT(keyCells_tmp__[1][i__][j__],7,8);
      _tmp8_ = AND(_tmp7_,LIFT_8(1));
      _tmp9_ = XOR(_tmp6_,_tmp8_);
      _tmp10_ = R_SHIFT(keyCells_tmp__[1][i__][j__],5,8);
      _tmp11_ = AND(_tmp10_,LIFT_8(1));
      keyCellsR__[1][i__][j__] = XOR(_tmp9_,_tmp11_);
    }
  }
  keyCellsR__[0][0][0] = keyCells__[0][2][1];
  keyCellsR__[0][0][1] = keyCells__[0][3][3];
  keyCellsR__[0][0][2] = keyCells__[0][2][0];
  keyCellsR__[0][0][3] = keyCells__[0][3][1];
  keyCellsR__[0][1][0] = keyCells__[0][2][2];
  keyCellsR__[0][1][1] = keyCells__[0][3][2];
  keyCellsR__[0][1][2] = keyCells__[0][3][0];
  keyCellsR__[0][1][3] = keyCells__[0][2][3];
  keyCellsR__[0][2][0] = keyCells__[0][0][0];
  keyCellsR__[0][2][1] = keyCells__[0][0][1];
  keyCellsR__[0][2][2] = keyCells__[0][0][2];
  keyCellsR__[0][2][3] = keyCells__[0][0][3];
  keyCellsR__[0][3][0] = keyCells__[0][1][0];
  keyCellsR__[0][3][1] = keyCells__[0][1][1];
  keyCellsR__[0][3][2] = keyCells__[0][1][2];
  keyCellsR__[0][3][3] = keyCells__[0][1][3];
  keyCellsR__[1][2][0] = keyCells__[1][0][0];
  keyCellsR__[1][2][1] = keyCells__[1][0][1];
  keyCellsR__[1][2][2] = keyCells__[1][0][2];
  keyCellsR__[1][2][3] = keyCells__[1][0][3];
  keyCellsR__[1][3][0] = keyCells__[1][1][0];
  keyCellsR__[1][3][1] = keyCells__[1][1][1];
  keyCellsR__[1][3][2] = keyCells__[1][1][2];
  keyCellsR__[1][3][3] = keyCells__[1][1][3];

}

void ShiftRows__V8 (/*inputs*/ DATATYPE state__[16], /*outputs*/ DATATYPE stateR__[16]) {
  
  // Variables declaration
  ;

  // Instructions (body)
  stateR__[0] = state__[0];
  stateR__[1] = state__[1];
  stateR__[2] = state__[2];
  stateR__[3] = state__[3];
  stateR__[4] = state__[7];
  stateR__[5] = state__[4];
  stateR__[6] = state__[5];
  stateR__[7] = state__[6];
  stateR__[8] = state__[10];
  stateR__[9] = state__[11];
  stateR__[10] = state__[8];
  stateR__[11] = state__[9];
  stateR__[12] = state__[13];
  stateR__[13] = state__[14];
  stateR__[14] = state__[15];
  stateR__[15] = state__[12];

}

void MixColumn__V8 (/*inputs*/ DATATYPE state__[4][4], /*outputs*/ DATATYPE stateR__[4][4]) {
  
  // Variables declaration
  DATATYPE _shadow_state__3_;
  DATATYPE _shadow_state__4_;
  DATATYPE _shadow_state__5_;

  // Instructions (body)
  for (int j__ = 0; j__ <= 3; j__++) {
    _shadow_state__3_ = XOR(state__[1][j__],state__[2][j__]);
    _shadow_state__4_ = XOR(state__[2][j__],state__[0][j__]);
    _shadow_state__5_ = XOR(state__[3][j__],_shadow_state__4_);
    stateR__[3][j__] = _shadow_state__4_;
    stateR__[2][j__] = _shadow_state__3_;
    stateR__[1][j__] = state__[0][j__];
    stateR__[0][j__] = _shadow_state__5_;
  }

}

/* main function */
void Skinny__ (/*inputs*/ DATATYPE input__[4][4],DATATYPE tweaky__[32], /*outputs*/ DATATYPE output__[4][4]) {
  
  // Variables declaration
  DATATYPE RC__[48];
  DATATYPE _tmp12_[4][4];
  DATATYPE _tmp13_[4][4];
  DATATYPE _tmp14_[16];
  DATATYPE keyCells__[49][2][4][4];
  DATATYPE state__[49][4][4];
  DATATYPE tmp__[4][4];

  // Instructions (body)
  state__[0][0][0] = input__[0][0];
  state__[0][0][1] = input__[0][1];
  state__[0][0][2] = input__[0][2];
  state__[0][0][3] = input__[0][3];
  state__[0][1][0] = input__[1][0];
  state__[0][1][1] = input__[1][1];
  state__[0][1][2] = input__[1][2];
  state__[0][1][3] = input__[1][3];
  state__[0][2][0] = input__[2][0];
  state__[0][2][1] = input__[2][1];
  state__[0][2][2] = input__[2][2];
  state__[0][2][3] = input__[2][3];
  state__[0][3][0] = input__[3][0];
  state__[0][3][1] = input__[3][1];
  state__[0][3][2] = input__[3][2];
  state__[0][3][3] = input__[3][3];
  RC__[0] = LIFT_8(1);
  keyCells__[0][0][0][0] = tweaky__[0];
  keyCells__[0][0][0][1] = tweaky__[1];
  keyCells__[0][0][0][2] = tweaky__[2];
  keyCells__[0][0][0][3] = tweaky__[3];
  keyCells__[0][0][1][0] = tweaky__[4];
  keyCells__[0][0][1][1] = tweaky__[5];
  keyCells__[0][0][1][2] = tweaky__[6];
  keyCells__[0][0][1][3] = tweaky__[7];
  keyCells__[0][0][2][0] = tweaky__[8];
  keyCells__[0][0][2][1] = tweaky__[9];
  keyCells__[0][0][2][2] = tweaky__[10];
  keyCells__[0][0][2][3] = tweaky__[11];
  keyCells__[0][0][3][0] = tweaky__[12];
  keyCells__[0][0][3][1] = tweaky__[13];
  keyCells__[0][0][3][2] = tweaky__[14];
  keyCells__[0][0][3][3] = tweaky__[15];
  keyCells__[0][1][0][0] = tweaky__[16];
  keyCells__[0][1][0][1] = tweaky__[17];
  keyCells__[0][1][0][2] = tweaky__[18];
  keyCells__[0][1][0][3] = tweaky__[19];
  keyCells__[0][1][1][0] = tweaky__[20];
  keyCells__[0][1][1][1] = tweaky__[21];
  keyCells__[0][1][1][2] = tweaky__[22];
  keyCells__[0][1][1][3] = tweaky__[23];
  keyCells__[0][1][2][0] = tweaky__[24];
  keyCells__[0][1][2][1] = tweaky__[25];
  keyCells__[0][1][2][2] = tweaky__[26];
  keyCells__[0][1][2][3] = tweaky__[27];
  keyCells__[0][1][3][0] = tweaky__[28];
  keyCells__[0][1][3][1] = tweaky__[29];
  keyCells__[0][1][3][2] = tweaky__[30];
  keyCells__[0][1][3][3] = tweaky__[31];
  RC__[1] = LIFT_8(3);
  RC__[2] = LIFT_8(7);
  RC__[3] = LIFT_8(15);
  RC__[4] = LIFT_8(31);
  RC__[5] = LIFT_8(62);
  RC__[6] = LIFT_8(61);
  RC__[7] = LIFT_8(59);
  RC__[8] = LIFT_8(55);
  RC__[9] = LIFT_8(47);
  RC__[10] = LIFT_8(30);
  RC__[11] = LIFT_8(60);
  RC__[12] = LIFT_8(57);
  RC__[13] = LIFT_8(51);
  RC__[14] = LIFT_8(39);
  RC__[15] = LIFT_8(14);
  RC__[16] = LIFT_8(29);
  RC__[17] = LIFT_8(58);
  RC__[18] = LIFT_8(53);
  RC__[19] = LIFT_8(43);
  RC__[20] = LIFT_8(22);
  RC__[21] = LIFT_8(44);
  RC__[22] = LIFT_8(24);
  RC__[23] = LIFT_8(48);
  RC__[24] = LIFT_8(33);
  RC__[25] = LIFT_8(2);
  RC__[26] = LIFT_8(5);
  RC__[27] = LIFT_8(11);
  RC__[28] = LIFT_8(23);
  RC__[29] = LIFT_8(46);
  RC__[30] = LIFT_8(28);
  RC__[31] = LIFT_8(56);
  RC__[32] = LIFT_8(49);
  RC__[33] = LIFT_8(35);
  RC__[34] = LIFT_8(6);
  RC__[35] = LIFT_8(13);
  RC__[36] = LIFT_8(27);
  RC__[37] = LIFT_8(54);
  RC__[38] = LIFT_8(45);
  RC__[39] = LIFT_8(26);
  RC__[40] = LIFT_8(52);
  RC__[41] = LIFT_8(41);
  RC__[42] = LIFT_8(18);
  RC__[43] = LIFT_8(36);
  RC__[44] = LIFT_8(8);
  RC__[45] = LIFT_8(17);
  RC__[46] = LIFT_8(34);
  RC__[47] = LIFT_8(4);
  for (int i__ = 0; i__ <= 47; i__++) {
    SubCell__V8(state__[i__],_tmp12_);
    AddConstants__V8(_tmp12_,RC__[i__],_tmp13_);
    AddKey__V8(_tmp13_,keyCells__[i__],tmp__,keyCells__[(i__ + 1)]);
    ShiftRows__V8(tmp__,_tmp14_);
    MixColumn__V8(_tmp14_,state__[(i__ + 1)]);
  }
  output__[0][0] = state__[48][0][0];
  output__[0][1] = state__[48][0][1];
  output__[0][2] = state__[48][0][2];
  output__[0][3] = state__[48][0][3];
  output__[1][0] = state__[48][1][0];
  output__[1][1] = state__[48][1][1];
  output__[1][2] = state__[48][1][2];
  output__[1][3] = state__[48][1][3];
  output__[2][0] = state__[48][2][0];
  output__[2][1] = state__[48][2][1];
  output__[2][2] = state__[48][2][2];
  output__[2][3] = state__[48][2][3];
  output__[3][0] = state__[48][3][0];
  output__[3][1] = state__[48][3][1];
  output__[3][2] = state__[48][3][2];
  output__[3][3] = state__[48][3][3];

}


/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

_no_inline node SubCell(state :  u8[4][4] :: base)
  returns stateR :  u8[4][4] :: base
vars

let
  forall i in [0,3] {
    forall j in [0,3] {
    (stateR[i][j]) = state[i][j]
  }
  }
tel

 node AddConstants(state :  u8[4][4] :: base,c :  u8 :: base)
  returns stateR :  u8[4][4] :: base
vars

let
  (stateR[0][0]) = (state[0][0] ^ (c & 15));
  (stateR[1][0]) = (state[1][0] ^ ((c >> 4) & 3));
  (stateR[2][0]) = (state[2][0] ^ 2);
  (stateR[0,1,2][1,2,3]) = state[0,1,2][1,2,3];
  (stateR[3]) = state[3]
tel

 node AddKey(state :  u8[4][4] :: base,keyCells :  u8[4][4][2] :: base)
  returns stateR :  u8[4][4] :: base,keyCellsR :  u8[4][4][2] :: base
vars
  keyCells16 :  u8[16][2] :: base,
  keyCells_tmp :  u8[4][4][2] :: base
let
  forall i in [0,1] {
    forall j in [0,3] {
    (stateR[i][j]) = ((state[i][j] ^ keyCells[0][i][j]) ^ keyCells[1][i][j])
  }
  };
  (stateR[2,3]) = state[2,3];
  (keyCells16) = keyCells;
  (keyCells16[0]) := keyCells16[0][9,15,8,13,10,14,12,11,0,1,2,3,4,5,6,7];
  (keyCells16[1]) := keyCells16[1][9,15,8,13,10,14,12,11,0,1,2,3,4,5,6,7];
  (keyCells_tmp) = keyCells16;
  forall i in [0,1] {
    forall j in [0,3] {
    (keyCellsR[1][i][j]) = ((((keyCells_tmp[1][i][j] << 1) & 254) ^ ((keyCells_tmp[1][i][j] >> 7) & 1)) ^ ((keyCells_tmp[1][i][j] >> 5) & 1))
  }
  };
  (keyCellsR[0]) = keyCells_tmp[0];
  (keyCellsR[1][2,3]) = keyCells_tmp[1][2,3]
tel

 node ShiftRows(state :  u8[16] :: base)
  returns stateR :  u8[16] :: base
vars

let
  (stateR) = state[0,1,2,3,7,4,5,6,10,11,8,9,13,14,15,12]
tel

 node MixColumn(state :  u8[4][4] :: base)
  returns stateR :  u8[4][4] :: base
vars

let
  forall j in [0,3] {
    (state[1][j]) := (state[1][j] ^ state[2][j])
    (state[2][j]) := (state[2][j] ^ state[0][j])
    (state[3][j]) := (state[3][j] ^ state[2][j])
    (stateR[3,2,1,0][j]) = state[2,1,0,3][j]
  }
tel

 node Skinny(input :  u8[4][4] :: base,tweaky :  u8[32] :: base)
  returns output :  u8[4][4] :: base
vars
  state :  u8[4][4][49] :: base,
  keyCells :  u8[4][4][2][49] :: base,
  RC :  u8[48] :: base,
  tmp :  u8[4][4] :: base
let
  (RC) = (1,3,7,15,31,62,61,59,55,47,30,60,57,51,39,14,29,58,53,43,22,44,24,48,33,2,5,11,23,46,28,56,49,35,6,13,27,54,45,26,52,41,18,36,8,17,34,4);
  (state[0]) = input;
  (keyCells[0]) = tweaky;
  forall i in [0,47] {
    (tmp,keyCells[(i + 1)]) = AddKey(AddConstants(SubCell(state[i]),RC[i]),keyCells[i])
    (state[(i + 1)]) = MixColumn(ShiftRows(tmp))
  };
  (output) = state[48]
tel

*/
 
