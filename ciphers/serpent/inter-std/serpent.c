
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>

/* Do NOT change the order of those define/include */

#define NO_RUNTIME
#ifndef BITS_PER_REG
#define BITS_PER_REG 64
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */
void sbox__0__ (/*inputs*/ DATATYPE a,DATATYPE a__2,DATATYPE b,DATATYPE b__2,DATATYPE c,DATATYPE c__2,DATATYPE d,DATATYPE d__2, /*outputs*/ DATATYPE* w,DATATYPE* w__2,DATATYPE* x,DATATYPE* x__2,DATATYPE* y,DATATYPE* y__2,DATATYPE* z,DATATYPE* z__2) {
  
  // Variables declaration
  DATATYPE t01;
  DATATYPE t01__2;
  DATATYPE t02;
  DATATYPE t02__2;
  DATATYPE t03;
  DATATYPE t03__2;
  DATATYPE t05;
  DATATYPE t05__2;
  DATATYPE t06;
  DATATYPE t06__2;
  DATATYPE t07;
  DATATYPE t07__2;
  DATATYPE t08;
  DATATYPE t08__2;
  DATATYPE t09;
  DATATYPE t09__2;
  DATATYPE t11;
  DATATYPE t11__2;
  DATATYPE t12;
  DATATYPE t12__2;
  DATATYPE t13;
  DATATYPE t13__2;
  DATATYPE t14;
  DATATYPE t14__2;
  DATATYPE t15;
  DATATYPE t15__2;
  DATATYPE t17;
  DATATYPE t17__2;


  // Instructions (body)
  t01 = XOR(b,c);
  t02 = OR(a,d);
  t03 = XOR(a,b);
  *z = XOR(t02,t01);
  t05 = OR(c,*z);
  t06 = XOR(a,d);
  t07 = OR(b,c);
  t08 = AND(d,t05);
  t09 = AND(t03,t07);
  *y = XOR(t09,t08);
  t11 = AND(t09,*y);
  t12 = XOR(c,d);
  t13 = XOR(t07,t11);
  t14 = AND(b,t06);
  t15 = XOR(t06,t13);
  t01__2 = XOR(b__2,c__2);
  t02__2 = OR(a__2,d__2);
  t03__2 = XOR(a__2,b__2);
  *z__2 = XOR(t02__2,t01__2);
  t05__2 = OR(c__2,*z__2);
  t06__2 = XOR(a__2,d__2);
  t07__2 = OR(b__2,c__2);
  t08__2 = AND(d__2,t05__2);
  t09__2 = AND(t03__2,t07__2);
  *y__2 = XOR(t09__2,t08__2);
  t11__2 = AND(t09__2,*y__2);
  t12__2 = XOR(c__2,d__2);
  t13__2 = XOR(t07__2,t11__2);
  t14__2 = AND(b__2,t06__2);
  t15__2 = XOR(t06__2,t13__2);
  *w = NOT(t15);
  t17 = XOR(*w,t14);
  *x = XOR(t12,t17);
  *w__2 = NOT(t15__2);
  t17__2 = XOR(*w__2,t14__2);
  *x__2 = XOR(t12__2,t17__2);

}

void sbox__1__ (/*inputs*/ DATATYPE a,DATATYPE a__2,DATATYPE b,DATATYPE b__2,DATATYPE c,DATATYPE c__2,DATATYPE d,DATATYPE d__2, /*outputs*/ DATATYPE* w,DATATYPE* w__2,DATATYPE* x,DATATYPE* x__2,DATATYPE* y,DATATYPE* y__2,DATATYPE* z,DATATYPE* z__2) {
  
  // Variables declaration
  DATATYPE t01;
  DATATYPE t01__2;
  DATATYPE t02;
  DATATYPE t02__2;
  DATATYPE t03;
  DATATYPE t03__2;
  DATATYPE t04;
  DATATYPE t04__2;
  DATATYPE t05;
  DATATYPE t05__2;
  DATATYPE t06;
  DATATYPE t06__2;
  DATATYPE t07;
  DATATYPE t07__2;
  DATATYPE t08;
  DATATYPE t08__2;
  DATATYPE t10;
  DATATYPE t10__2;
  DATATYPE t11;
  DATATYPE t11__2;
  DATATYPE t12;
  DATATYPE t12__2;
  DATATYPE t13;
  DATATYPE t13__2;
  DATATYPE t16;
  DATATYPE t16__2;
  DATATYPE t17;
  DATATYPE t17__2;


  // Instructions (body)
  t01 = OR(a,d);
  t02 = XOR(c,d);
  t03 = NOT(b);
  t04 = XOR(a,c);
  t05 = OR(a,t03);
  t06 = AND(d,t04);
  t07 = AND(t01,t02);
  t08 = OR(b,t06);
  *y = XOR(t02,t05);
  t10 = XOR(t07,t08);
  t11 = XOR(t01,t10);
  t12 = XOR(*y,t11);
  t13 = AND(b,d);
  *z = NOT(t10);
  *x = XOR(t13,t12);
  t01__2 = OR(a__2,d__2);
  t02__2 = XOR(c__2,d__2);
  t03__2 = NOT(b__2);
  t04__2 = XOR(a__2,c__2);
  t05__2 = OR(a__2,t03__2);
  t06__2 = AND(d__2,t04__2);
  t07__2 = AND(t01__2,t02__2);
  t08__2 = OR(b__2,t06__2);
  *y__2 = XOR(t02__2,t05__2);
  t10__2 = XOR(t07__2,t08__2);
  t11__2 = XOR(t01__2,t10__2);
  t12__2 = XOR(*y__2,t11__2);
  t13__2 = AND(b__2,d__2);
  *z__2 = NOT(t10__2);
  *x__2 = XOR(t13__2,t12__2);
  t16 = OR(t10,*x);
  t17 = AND(t05,t16);
  *w = XOR(c,t17);
  t16__2 = OR(t10__2,*x__2);
  t17__2 = AND(t05__2,t16__2);
  *w__2 = XOR(c__2,t17__2);

}

void sbox__2__ (/*inputs*/ DATATYPE a,DATATYPE a__2,DATATYPE b,DATATYPE b__2,DATATYPE c,DATATYPE c__2,DATATYPE d,DATATYPE d__2, /*outputs*/ DATATYPE* w,DATATYPE* w__2,DATATYPE* x,DATATYPE* x__2,DATATYPE* y,DATATYPE* y__2,DATATYPE* z,DATATYPE* z__2) {
  
  // Variables declaration
  DATATYPE t01;
  DATATYPE t01__2;
  DATATYPE t02;
  DATATYPE t02__2;
  DATATYPE t03;
  DATATYPE t03__2;
  DATATYPE t05;
  DATATYPE t05__2;
  DATATYPE t06;
  DATATYPE t06__2;
  DATATYPE t07;
  DATATYPE t07__2;
  DATATYPE t08;
  DATATYPE t08__2;
  DATATYPE t09;
  DATATYPE t09__2;
  DATATYPE t10;
  DATATYPE t10__2;
  DATATYPE t12;
  DATATYPE t12__2;
  DATATYPE t13;
  DATATYPE t13__2;
  DATATYPE t14;
  DATATYPE t14__2;


  // Instructions (body)
  t01 = OR(a,c);
  t02 = XOR(a,b);
  t03 = XOR(d,t01);
  *w = XOR(t02,t03);
  t05 = XOR(c,*w);
  t06 = XOR(b,t05);
  t07 = OR(b,t05);
  t08 = AND(t01,t06);
  t09 = XOR(t03,t07);
  t10 = OR(t02,t09);
  *x = XOR(t10,t08);
  t12 = OR(a,d);
  t13 = XOR(t09,*x);
  t14 = XOR(b,t13);
  *z = NOT(t09);
  t01__2 = OR(a__2,c__2);
  t02__2 = XOR(a__2,b__2);
  t03__2 = XOR(d__2,t01__2);
  *w__2 = XOR(t02__2,t03__2);
  t05__2 = XOR(c__2,*w__2);
  t06__2 = XOR(b__2,t05__2);
  t07__2 = OR(b__2,t05__2);
  t08__2 = AND(t01__2,t06__2);
  t09__2 = XOR(t03__2,t07__2);
  t10__2 = OR(t02__2,t09__2);
  *x__2 = XOR(t10__2,t08__2);
  t12__2 = OR(a__2,d__2);
  t13__2 = XOR(t09__2,*x__2);
  t14__2 = XOR(b__2,t13__2);
  *z__2 = NOT(t09__2);
  *y = XOR(t12,t14);
  *y__2 = XOR(t12__2,t14__2);

}

void sbox__3__ (/*inputs*/ DATATYPE a,DATATYPE a__2,DATATYPE b,DATATYPE b__2,DATATYPE c,DATATYPE c__2,DATATYPE d,DATATYPE d__2, /*outputs*/ DATATYPE* w,DATATYPE* w__2,DATATYPE* x,DATATYPE* x__2,DATATYPE* y,DATATYPE* y__2,DATATYPE* z,DATATYPE* z__2) {
  
  // Variables declaration
  DATATYPE t01;
  DATATYPE t01__2;
  DATATYPE t02;
  DATATYPE t02__2;
  DATATYPE t03;
  DATATYPE t03__2;
  DATATYPE t04;
  DATATYPE t04__2;
  DATATYPE t05;
  DATATYPE t05__2;
  DATATYPE t06;
  DATATYPE t06__2;
  DATATYPE t07;
  DATATYPE t07__2;
  DATATYPE t08;
  DATATYPE t08__2;
  DATATYPE t09;
  DATATYPE t09__2;
  DATATYPE t10;
  DATATYPE t10__2;
  DATATYPE t11;
  DATATYPE t11__2;
  DATATYPE t13;
  DATATYPE t13__2;
  DATATYPE t14;
  DATATYPE t14__2;
  DATATYPE t15;
  DATATYPE t15__2;


  // Instructions (body)
  t01 = XOR(a,c);
  t02 = OR(a,d);
  t03 = AND(a,d);
  t04 = AND(t01,t02);
  t05 = OR(b,t03);
  t06 = AND(a,b);
  t07 = XOR(d,t04);
  t08 = OR(c,t06);
  t09 = XOR(b,t07);
  t10 = AND(d,t05);
  t11 = XOR(t02,t10);
  *z = XOR(t08,t09);
  t13 = OR(d,*z);
  t14 = OR(a,t07);
  t15 = AND(b,t13);
  t01__2 = XOR(a__2,c__2);
  t02__2 = OR(a__2,d__2);
  t03__2 = AND(a__2,d__2);
  t04__2 = AND(t01__2,t02__2);
  t05__2 = OR(b__2,t03__2);
  t06__2 = AND(a__2,b__2);
  t07__2 = XOR(d__2,t04__2);
  t08__2 = OR(c__2,t06__2);
  t09__2 = XOR(b__2,t07__2);
  t10__2 = AND(d__2,t05__2);
  t11__2 = XOR(t02__2,t10__2);
  *z__2 = XOR(t08__2,t09__2);
  t13__2 = OR(d__2,*z__2);
  t14__2 = OR(a__2,t07__2);
  t15__2 = AND(b__2,t13__2);
  *y = XOR(t08,t11);
  *w = XOR(t14,t15);
  *x = XOR(t05,t04);
  *y__2 = XOR(t08__2,t11__2);
  *w__2 = XOR(t14__2,t15__2);
  *x__2 = XOR(t05__2,t04__2);

}

void sbox__4__ (/*inputs*/ DATATYPE a,DATATYPE a__2,DATATYPE b,DATATYPE b__2,DATATYPE c,DATATYPE c__2,DATATYPE d,DATATYPE d__2, /*outputs*/ DATATYPE* w,DATATYPE* w__2,DATATYPE* x,DATATYPE* x__2,DATATYPE* y,DATATYPE* y__2,DATATYPE* z,DATATYPE* z__2) {
  
  // Variables declaration
  DATATYPE t01;
  DATATYPE t01__2;
  DATATYPE t02;
  DATATYPE t02__2;
  DATATYPE t03;
  DATATYPE t03__2;
  DATATYPE t04;
  DATATYPE t04__2;
  DATATYPE t05;
  DATATYPE t05__2;
  DATATYPE t06;
  DATATYPE t06__2;
  DATATYPE t08;
  DATATYPE t08__2;
  DATATYPE t09;
  DATATYPE t09__2;
  DATATYPE t10;
  DATATYPE t10__2;
  DATATYPE t11;
  DATATYPE t11__2;
  DATATYPE t12;
  DATATYPE t12__2;
  DATATYPE t13;
  DATATYPE t13__2;
  DATATYPE t14;
  DATATYPE t14__2;
  DATATYPE t15;
  DATATYPE t15__2;
  DATATYPE t16;
  DATATYPE t16__2;


  // Instructions (body)
  t01 = OR(a,b);
  t02 = OR(b,c);
  t03 = XOR(a,t02);
  t04 = XOR(b,d);
  t05 = OR(d,t03);
  t06 = AND(d,t01);
  *z = XOR(t03,t06);
  t08 = AND(*z,t04);
  t09 = AND(t04,t05);
  t10 = XOR(c,t06);
  t11 = AND(b,c);
  t12 = XOR(t04,t08);
  t13 = OR(t11,t03);
  t14 = XOR(t10,t09);
  t15 = AND(a,t05);
  t01__2 = OR(a__2,b__2);
  t02__2 = OR(b__2,c__2);
  t03__2 = XOR(a__2,t02__2);
  t04__2 = XOR(b__2,d__2);
  t05__2 = OR(d__2,t03__2);
  t06__2 = AND(d__2,t01__2);
  *z__2 = XOR(t03__2,t06__2);
  t08__2 = AND(*z__2,t04__2);
  t09__2 = AND(t04__2,t05__2);
  t10__2 = XOR(c__2,t06__2);
  t11__2 = AND(b__2,c__2);
  t12__2 = XOR(t04__2,t08__2);
  t13__2 = OR(t11__2,t03__2);
  t14__2 = XOR(t10__2,t09__2);
  t15__2 = AND(a__2,t05__2);
  t16 = OR(t11,t12);
  *y = XOR(t13,t08);
  *x = XOR(t15,t16);
  *w = NOT(t14);
  t16__2 = OR(t11__2,t12__2);
  *y__2 = XOR(t13__2,t08__2);
  *x__2 = XOR(t15__2,t16__2);
  *w__2 = NOT(t14__2);

}

void sbox__5__ (/*inputs*/ DATATYPE a,DATATYPE a__2,DATATYPE b,DATATYPE b__2,DATATYPE c,DATATYPE c__2,DATATYPE d,DATATYPE d__2, /*outputs*/ DATATYPE* w,DATATYPE* w__2,DATATYPE* x,DATATYPE* x__2,DATATYPE* y,DATATYPE* y__2,DATATYPE* z,DATATYPE* z__2) {
  
  // Variables declaration
  DATATYPE t01;
  DATATYPE t01__2;
  DATATYPE t02;
  DATATYPE t02__2;
  DATATYPE t03;
  DATATYPE t03__2;
  DATATYPE t04;
  DATATYPE t04__2;
  DATATYPE t05;
  DATATYPE t05__2;
  DATATYPE t07;
  DATATYPE t07__2;
  DATATYPE t08;
  DATATYPE t08__2;
  DATATYPE t09;
  DATATYPE t09__2;
  DATATYPE t10;
  DATATYPE t10__2;
  DATATYPE t11;
  DATATYPE t11__2;
  DATATYPE t12;
  DATATYPE t12__2;
  DATATYPE t13;
  DATATYPE t13__2;
  DATATYPE t14;
  DATATYPE t14__2;


  // Instructions (body)
  t01 = XOR(b,d);
  t02 = OR(b,d);
  t03 = AND(a,t01);
  t04 = XOR(c,t02);
  t05 = XOR(t03,t04);
  *w = NOT(t05);
  t07 = XOR(a,t01);
  t08 = OR(d,*w);
  t09 = OR(b,t05);
  t10 = XOR(d,t08);
  t11 = OR(b,t07);
  t12 = OR(t03,*w);
  t13 = OR(t07,t10);
  t14 = XOR(t01,t11);
  *y = XOR(t09,t13);
  t01__2 = XOR(b__2,d__2);
  t02__2 = OR(b__2,d__2);
  t03__2 = AND(a__2,t01__2);
  t04__2 = XOR(c__2,t02__2);
  t05__2 = XOR(t03__2,t04__2);
  *w__2 = NOT(t05__2);
  t07__2 = XOR(a__2,t01__2);
  t08__2 = OR(d__2,*w__2);
  t09__2 = OR(b__2,t05__2);
  t10__2 = XOR(d__2,t08__2);
  t11__2 = OR(b__2,t07__2);
  t12__2 = OR(t03__2,*w__2);
  t13__2 = OR(t07__2,t10__2);
  t14__2 = XOR(t01__2,t11__2);
  *y__2 = XOR(t09__2,t13__2);
  *x = XOR(t07,t08);
  *z = XOR(t12,t14);
  *x__2 = XOR(t07__2,t08__2);
  *z__2 = XOR(t12__2,t14__2);

}

void sbox__6__ (/*inputs*/ DATATYPE a,DATATYPE a__2,DATATYPE b,DATATYPE b__2,DATATYPE c,DATATYPE c__2,DATATYPE d,DATATYPE d__2, /*outputs*/ DATATYPE* w,DATATYPE* w__2,DATATYPE* x,DATATYPE* x__2,DATATYPE* y,DATATYPE* y__2,DATATYPE* z,DATATYPE* z__2) {
  
  // Variables declaration
  DATATYPE t01;
  DATATYPE t01__2;
  DATATYPE t02;
  DATATYPE t02__2;
  DATATYPE t03;
  DATATYPE t03__2;
  DATATYPE t04;
  DATATYPE t04__2;
  DATATYPE t05;
  DATATYPE t05__2;
  DATATYPE t07;
  DATATYPE t07__2;
  DATATYPE t08;
  DATATYPE t08__2;
  DATATYPE t09;
  DATATYPE t09__2;
  DATATYPE t10;
  DATATYPE t10__2;
  DATATYPE t11;
  DATATYPE t11__2;
  DATATYPE t12;
  DATATYPE t12__2;
  DATATYPE t13;
  DATATYPE t13__2;
  DATATYPE t15;
  DATATYPE t15__2;
  DATATYPE t17;
  DATATYPE t17__2;
  DATATYPE t18;
  DATATYPE t18__2;


  // Instructions (body)
  t01 = AND(a,d);
  t02 = XOR(b,c);
  t03 = XOR(a,d);
  t04 = XOR(t01,t02);
  t05 = OR(b,c);
  *x = NOT(t04);
  t07 = AND(t03,t05);
  t08 = AND(b,*x);
  t09 = OR(a,c);
  t10 = XOR(t07,t08);
  t11 = OR(b,d);
  t12 = XOR(c,t11);
  t13 = XOR(t09,t10);
  *y = NOT(t13);
  t15 = AND(*x,t03);
  t01__2 = AND(a__2,d__2);
  t02__2 = XOR(b__2,c__2);
  t03__2 = XOR(a__2,d__2);
  t04__2 = XOR(t01__2,t02__2);
  t05__2 = OR(b__2,c__2);
  *x__2 = NOT(t04__2);
  t07__2 = AND(t03__2,t05__2);
  t08__2 = AND(b__2,*x__2);
  t09__2 = OR(a__2,c__2);
  t10__2 = XOR(t07__2,t08__2);
  t11__2 = OR(b__2,d__2);
  t12__2 = XOR(c__2,t11__2);
  t13__2 = XOR(t09__2,t10__2);
  *y__2 = NOT(t13__2);
  t15__2 = AND(*x__2,t03__2);
  *z = XOR(t12,t07);
  t17 = XOR(a,b);
  t18 = XOR(*y,t15);
  *w = XOR(t17,t18);
  *z__2 = XOR(t12__2,t07__2);
  t17__2 = XOR(a__2,b__2);
  t18__2 = XOR(*y__2,t15__2);
  *w__2 = XOR(t17__2,t18__2);

}

void sbox__7__ (/*inputs*/ DATATYPE a,DATATYPE a__2,DATATYPE b,DATATYPE b__2,DATATYPE c,DATATYPE c__2,DATATYPE d,DATATYPE d__2, /*outputs*/ DATATYPE* w,DATATYPE* w__2,DATATYPE* x,DATATYPE* x__2,DATATYPE* y,DATATYPE* y__2,DATATYPE* z,DATATYPE* z__2) {
  
  // Variables declaration
  DATATYPE t01;
  DATATYPE t01__2;
  DATATYPE t02;
  DATATYPE t02__2;
  DATATYPE t03;
  DATATYPE t03__2;
  DATATYPE t04;
  DATATYPE t04__2;
  DATATYPE t05;
  DATATYPE t05__2;
  DATATYPE t06;
  DATATYPE t06__2;
  DATATYPE t08;
  DATATYPE t08__2;
  DATATYPE t09;
  DATATYPE t09__2;
  DATATYPE t10;
  DATATYPE t10__2;
  DATATYPE t11;
  DATATYPE t11__2;
  DATATYPE t13;
  DATATYPE t13__2;
  DATATYPE t14;
  DATATYPE t14__2;
  DATATYPE t15;
  DATATYPE t15__2;
  DATATYPE t16;
  DATATYPE t16__2;
  DATATYPE t17;
  DATATYPE t17__2;


  // Instructions (body)
  t01 = AND(a,c);
  t02 = NOT(d);
  t03 = AND(a,t02);
  t04 = OR(b,t01);
  t05 = AND(a,b);
  t06 = XOR(c,t04);
  *z = XOR(t03,t06);
  t08 = OR(c,*z);
  t09 = OR(d,t05);
  t10 = XOR(a,t08);
  t11 = AND(t04,*z);
  *x = XOR(t09,t10);
  t13 = XOR(b,*x);
  t14 = XOR(t01,*x);
  t15 = XOR(c,t05);
  t01__2 = AND(a__2,c__2);
  t02__2 = NOT(d__2);
  t03__2 = AND(a__2,t02__2);
  t04__2 = OR(b__2,t01__2);
  t05__2 = AND(a__2,b__2);
  t06__2 = XOR(c__2,t04__2);
  *z__2 = XOR(t03__2,t06__2);
  t08__2 = OR(c__2,*z__2);
  t09__2 = OR(d__2,t05__2);
  t10__2 = XOR(a__2,t08__2);
  t11__2 = AND(t04__2,*z__2);
  *x__2 = XOR(t09__2,t10__2);
  t13__2 = XOR(b__2,*x__2);
  t14__2 = XOR(t01__2,*x__2);
  t15__2 = XOR(c__2,t05__2);
  t16 = OR(t11,t13);
  t17 = OR(t02,t14);
  *w = XOR(t15,t17);
  *y = XOR(a,t16);
  t16__2 = OR(t11__2,t13__2);
  t17__2 = OR(t02__2,t14__2);
  *w__2 = XOR(t15__2,t17__2);
  *y__2 = XOR(a__2,t16__2);

}

void transform__ (/*inputs*/ DATATYPE input__[4],DATATYPE input____2[4], /*outputs*/ DATATYPE out__[4],DATATYPE out____2[4]) {
  
  // Variables declaration
  DATATYPE _tmp1_;
  DATATYPE _tmp1___2;
  DATATYPE _tmp2_;
  DATATYPE _tmp2___2;
  DATATYPE _tmp3_;
  DATATYPE _tmp3___2;
  DATATYPE _tmp4_;
  DATATYPE _tmp4___2;
  DATATYPE _tmp5_;
  DATATYPE _tmp5___2;
  DATATYPE _tmp6_;
  DATATYPE _tmp6___2;
  DATATYPE x0__[4];
  DATATYPE x0____2[4];
  DATATYPE x1__[3];
  DATATYPE x1____2[3];
  DATATYPE x2__[4];
  DATATYPE x2____2[4];
  DATATYPE x3__[3];
  DATATYPE x3____2[3];


  // Instructions (body)
  x0__[1] = L_ROTATE(input__[0],13,32);
  x2__[1] = L_ROTATE(input__[2],3,32);
  _tmp1_ = XOR(input__[1],x0__[1]);
  x1__[1] = XOR(_tmp1_,x2__[1]);
  _tmp2_ = XOR(input__[3],x2__[1]);
  _tmp3_ = L_SHIFT(x0__[1],3,32);
  x3__[1] = XOR(_tmp2_,_tmp3_);
  x1__[2] = L_ROTATE(x1__[1],1,32);
  x3__[2] = L_ROTATE(x3__[1],7,32);
  _tmp4_ = XOR(x0__[1],x1__[2]);
  x0__[2] = XOR(_tmp4_,x3__[2]);
  _tmp5_ = XOR(x2__[1],x3__[2]);
  _tmp6_ = L_SHIFT(x1__[2],7,32);
  x2__[2] = XOR(_tmp5_,_tmp6_);
  x0__[3] = L_ROTATE(x0__[2],5,32);
  x0____2[1] = L_ROTATE(input____2[0],13,32);
  x2____2[1] = L_ROTATE(input____2[2],3,32);
  _tmp1___2 = XOR(input____2[1],x0____2[1]);
  x1____2[1] = XOR(_tmp1___2,x2____2[1]);
  _tmp2___2 = XOR(input____2[3],x2____2[1]);
  _tmp3___2 = L_SHIFT(x0____2[1],3,32);
  x3____2[1] = XOR(_tmp2___2,_tmp3___2);
  x1____2[2] = L_ROTATE(x1____2[1],1,32);
  x3____2[2] = L_ROTATE(x3____2[1],7,32);
  _tmp4___2 = XOR(x0____2[1],x1____2[2]);
  x0____2[2] = XOR(_tmp4___2,x3____2[2]);
  _tmp5___2 = XOR(x2____2[1],x3____2[2]);
  _tmp6___2 = L_SHIFT(x1____2[2],7,32);
  x2____2[2] = XOR(_tmp5___2,_tmp6___2);
  x0____2[3] = L_ROTATE(x0____2[2],5,32);
  x2__[3] = L_ROTATE(x2__[2],22,32);
  out__[0] = x0__[3];
  out__[1] = x1__[2];
  out__[2] = x2__[3];
  out__[3] = x3__[2];
  x2____2[3] = L_ROTATE(x2____2[2],22,32);
  out____2[0] = x0____2[3];
  out____2[1] = x1____2[2];
  out____2[2] = x2____2[3];
  out____2[3] = x3____2[2];

}

/* main function */
void Serpent__ (/*inputs*/ DATATYPE plaintext__[4],DATATYPE plaintext____2[4],DATATYPE keys__[33][4],DATATYPE keys____2[33][4], /*outputs*/ DATATYPE ciphertext__[4],DATATYPE ciphertext____2[4]) {
  
  // Variables declaration
  DATATYPE _tmp11_[4];
  DATATYPE _tmp11___2[4];
  DATATYPE _tmp13_[4];
  DATATYPE _tmp13___2[4];
  DATATYPE _tmp15_[4];
  DATATYPE _tmp15___2[4];
  DATATYPE _tmp17_[4];
  DATATYPE _tmp17___2[4];
  DATATYPE _tmp19_[4];
  DATATYPE _tmp19___2[4];
  DATATYPE _tmp21_[4];
  DATATYPE _tmp21___2[4];
  DATATYPE _tmp23_[4];
  DATATYPE _tmp23___2[4];
  DATATYPE _tmp25_[4];
  DATATYPE _tmp25___2[4];
  DATATYPE _tmp27_[4];
  DATATYPE _tmp27___2[4];
  DATATYPE _tmp29_[4];
  DATATYPE _tmp29___2[4];
  DATATYPE _tmp31_[4];
  DATATYPE _tmp31___2[4];
  DATATYPE _tmp33_[4];
  DATATYPE _tmp33___2[4];
  DATATYPE _tmp35_[4];
  DATATYPE _tmp35___2[4];
  DATATYPE _tmp37_[4];
  DATATYPE _tmp37___2[4];
  DATATYPE _tmp39_[4];
  DATATYPE _tmp39___2[4];
  DATATYPE _tmp41_[4];
  DATATYPE _tmp41___2[4];
  DATATYPE _tmp43_[4];
  DATATYPE _tmp43___2[4];
  DATATYPE _tmp45_[4];
  DATATYPE _tmp45___2[4];
  DATATYPE _tmp47_[4];
  DATATYPE _tmp47___2[4];
  DATATYPE _tmp49_[4];
  DATATYPE _tmp49___2[4];
  DATATYPE _tmp51_[4];
  DATATYPE _tmp51___2[4];
  DATATYPE _tmp53_[4];
  DATATYPE _tmp53___2[4];
  DATATYPE _tmp55_[4];
  DATATYPE _tmp55___2[4];
  DATATYPE _tmp57_[4];
  DATATYPE _tmp57___2[4];
  DATATYPE _tmp59_[4];
  DATATYPE _tmp59___2[4];
  DATATYPE _tmp61_[4];
  DATATYPE _tmp61___2[4];
  DATATYPE _tmp63_[4];
  DATATYPE _tmp63___2[4];
  DATATYPE _tmp65_[4];
  DATATYPE _tmp65___2[4];
  DATATYPE _tmp67_[4];
  DATATYPE _tmp67___2[4];
  DATATYPE _tmp69_[4];
  DATATYPE _tmp69___2[4];
  DATATYPE _tmp7_[4];
  DATATYPE _tmp7___2[4];
  DATATYPE _tmp9_[4];
  DATATYPE _tmp9___2[4];
  DATATYPE tmp__[4];
  DATATYPE tmp____2[4];


  // Instructions (body)
  _tmp7_[0] = XOR(plaintext__[0],keys__[0][0]);
  _tmp7_[1] = XOR(plaintext__[1],keys__[0][1]);
  _tmp7_[2] = XOR(plaintext__[2],keys__[0][2]);
  _tmp7_[3] = XOR(plaintext__[3],keys__[0][3]);
  _tmp7___2[0] = XOR(plaintext____2[0],keys____2[0][0]);
  _tmp7___2[1] = XOR(plaintext____2[1],keys____2[0][1]);
  _tmp7___2[2] = XOR(plaintext____2[2],keys____2[0][2]);
  _tmp7___2[3] = XOR(plaintext____2[3],keys____2[0][3]);
  sbox__0__(_tmp7_[0],_tmp7___2[0],_tmp7_[1],_tmp7___2[1],_tmp7_[2],_tmp7___2[2],_tmp7_[3],_tmp7___2[3],&_tmp7_[0],&_tmp7___2[0],&_tmp7_[1],&_tmp7___2[1],&_tmp7_[2],&_tmp7___2[2],&_tmp7_[3],&_tmp7___2[3]);
  transform__(_tmp7_,_tmp7___2,tmp__,tmp____2);
  _tmp9_[0] = XOR(tmp__[0],keys__[1][0]);
  _tmp9_[1] = XOR(tmp__[1],keys__[1][1]);
  _tmp9_[2] = XOR(tmp__[2],keys__[1][2]);
  _tmp9_[3] = XOR(tmp__[3],keys__[1][3]);
  _tmp9___2[0] = XOR(tmp____2[0],keys____2[1][0]);
  _tmp9___2[1] = XOR(tmp____2[1],keys____2[1][1]);
  _tmp9___2[2] = XOR(tmp____2[2],keys____2[1][2]);
  _tmp9___2[3] = XOR(tmp____2[3],keys____2[1][3]);
  sbox__1__(_tmp9_[0],_tmp9___2[0],_tmp9_[1],_tmp9___2[1],_tmp9_[2],_tmp9___2[2],_tmp9_[3],_tmp9___2[3],&_tmp9_[0],&_tmp9___2[0],&_tmp9_[1],&_tmp9___2[1],&_tmp9_[2],&_tmp9___2[2],&_tmp9_[3],&_tmp9___2[3]);
  transform__(_tmp9_,_tmp9___2,tmp__,tmp____2);
  _tmp11_[0] = XOR(tmp__[0],keys__[2][0]);
  _tmp11_[1] = XOR(tmp__[1],keys__[2][1]);
  _tmp11_[2] = XOR(tmp__[2],keys__[2][2]);
  _tmp11_[3] = XOR(tmp__[3],keys__[2][3]);
  _tmp11___2[0] = XOR(tmp____2[0],keys____2[2][0]);
  _tmp11___2[1] = XOR(tmp____2[1],keys____2[2][1]);
  _tmp11___2[2] = XOR(tmp____2[2],keys____2[2][2]);
  _tmp11___2[3] = XOR(tmp____2[3],keys____2[2][3]);
  sbox__2__(_tmp11_[0],_tmp11___2[0],_tmp11_[1],_tmp11___2[1],_tmp11_[2],_tmp11___2[2],_tmp11_[3],_tmp11___2[3],&_tmp11_[0],&_tmp11___2[0],&_tmp11_[1],&_tmp11___2[1],&_tmp11_[2],&_tmp11___2[2],&_tmp11_[3],&_tmp11___2[3]);
  transform__(_tmp11_,_tmp11___2,tmp__,tmp____2);
  _tmp13_[0] = XOR(tmp__[0],keys__[3][0]);
  _tmp13_[1] = XOR(tmp__[1],keys__[3][1]);
  _tmp13_[2] = XOR(tmp__[2],keys__[3][2]);
  _tmp13_[3] = XOR(tmp__[3],keys__[3][3]);
  _tmp13___2[0] = XOR(tmp____2[0],keys____2[3][0]);
  _tmp13___2[1] = XOR(tmp____2[1],keys____2[3][1]);
  _tmp13___2[2] = XOR(tmp____2[2],keys____2[3][2]);
  _tmp13___2[3] = XOR(tmp____2[3],keys____2[3][3]);
  sbox__3__(_tmp13_[0],_tmp13___2[0],_tmp13_[1],_tmp13___2[1],_tmp13_[2],_tmp13___2[2],_tmp13_[3],_tmp13___2[3],&_tmp13_[0],&_tmp13___2[0],&_tmp13_[1],&_tmp13___2[1],&_tmp13_[2],&_tmp13___2[2],&_tmp13_[3],&_tmp13___2[3]);
  transform__(_tmp13_,_tmp13___2,tmp__,tmp____2);
  _tmp15_[0] = XOR(tmp__[0],keys__[4][0]);
  _tmp15_[1] = XOR(tmp__[1],keys__[4][1]);
  _tmp15_[2] = XOR(tmp__[2],keys__[4][2]);
  _tmp15_[3] = XOR(tmp__[3],keys__[4][3]);
  _tmp15___2[0] = XOR(tmp____2[0],keys____2[4][0]);
  _tmp15___2[1] = XOR(tmp____2[1],keys____2[4][1]);
  _tmp15___2[2] = XOR(tmp____2[2],keys____2[4][2]);
  _tmp15___2[3] = XOR(tmp____2[3],keys____2[4][3]);
  sbox__4__(_tmp15_[0],_tmp15___2[0],_tmp15_[1],_tmp15___2[1],_tmp15_[2],_tmp15___2[2],_tmp15_[3],_tmp15___2[3],&_tmp15_[0],&_tmp15___2[0],&_tmp15_[1],&_tmp15___2[1],&_tmp15_[2],&_tmp15___2[2],&_tmp15_[3],&_tmp15___2[3]);
  transform__(_tmp15_,_tmp15___2,tmp__,tmp____2);
  _tmp17_[0] = XOR(tmp__[0],keys__[5][0]);
  _tmp17_[1] = XOR(tmp__[1],keys__[5][1]);
  _tmp17_[2] = XOR(tmp__[2],keys__[5][2]);
  _tmp17_[3] = XOR(tmp__[3],keys__[5][3]);
  _tmp17___2[0] = XOR(tmp____2[0],keys____2[5][0]);
  _tmp17___2[1] = XOR(tmp____2[1],keys____2[5][1]);
  _tmp17___2[2] = XOR(tmp____2[2],keys____2[5][2]);
  _tmp17___2[3] = XOR(tmp____2[3],keys____2[5][3]);
  sbox__5__(_tmp17_[0],_tmp17___2[0],_tmp17_[1],_tmp17___2[1],_tmp17_[2],_tmp17___2[2],_tmp17_[3],_tmp17___2[3],&_tmp17_[0],&_tmp17___2[0],&_tmp17_[1],&_tmp17___2[1],&_tmp17_[2],&_tmp17___2[2],&_tmp17_[3],&_tmp17___2[3]);
  transform__(_tmp17_,_tmp17___2,tmp__,tmp____2);
  _tmp19_[0] = XOR(tmp__[0],keys__[6][0]);
  _tmp19_[1] = XOR(tmp__[1],keys__[6][1]);
  _tmp19_[2] = XOR(tmp__[2],keys__[6][2]);
  _tmp19_[3] = XOR(tmp__[3],keys__[6][3]);
  _tmp19___2[0] = XOR(tmp____2[0],keys____2[6][0]);
  _tmp19___2[1] = XOR(tmp____2[1],keys____2[6][1]);
  _tmp19___2[2] = XOR(tmp____2[2],keys____2[6][2]);
  _tmp19___2[3] = XOR(tmp____2[3],keys____2[6][3]);
  sbox__6__(_tmp19_[0],_tmp19___2[0],_tmp19_[1],_tmp19___2[1],_tmp19_[2],_tmp19___2[2],_tmp19_[3],_tmp19___2[3],&_tmp19_[0],&_tmp19___2[0],&_tmp19_[1],&_tmp19___2[1],&_tmp19_[2],&_tmp19___2[2],&_tmp19_[3],&_tmp19___2[3]);
  transform__(_tmp19_,_tmp19___2,tmp__,tmp____2);
  _tmp21_[0] = XOR(tmp__[0],keys__[7][0]);
  _tmp21_[1] = XOR(tmp__[1],keys__[7][1]);
  _tmp21_[2] = XOR(tmp__[2],keys__[7][2]);
  _tmp21_[3] = XOR(tmp__[3],keys__[7][3]);
  _tmp21___2[0] = XOR(tmp____2[0],keys____2[7][0]);
  _tmp21___2[1] = XOR(tmp____2[1],keys____2[7][1]);
  _tmp21___2[2] = XOR(tmp____2[2],keys____2[7][2]);
  _tmp21___2[3] = XOR(tmp____2[3],keys____2[7][3]);
  sbox__7__(_tmp21_[0],_tmp21___2[0],_tmp21_[1],_tmp21___2[1],_tmp21_[2],_tmp21___2[2],_tmp21_[3],_tmp21___2[3],&_tmp21_[0],&_tmp21___2[0],&_tmp21_[1],&_tmp21___2[1],&_tmp21_[2],&_tmp21___2[2],&_tmp21_[3],&_tmp21___2[3]);
  transform__(_tmp21_,_tmp21___2,tmp__,tmp____2);
  _tmp23_[0] = XOR(tmp__[0],keys__[8][0]);
  _tmp23_[1] = XOR(tmp__[1],keys__[8][1]);
  _tmp23_[2] = XOR(tmp__[2],keys__[8][2]);
  _tmp23_[3] = XOR(tmp__[3],keys__[8][3]);
  _tmp23___2[0] = XOR(tmp____2[0],keys____2[8][0]);
  _tmp23___2[1] = XOR(tmp____2[1],keys____2[8][1]);
  _tmp23___2[2] = XOR(tmp____2[2],keys____2[8][2]);
  _tmp23___2[3] = XOR(tmp____2[3],keys____2[8][3]);
  sbox__0__(_tmp23_[0],_tmp23___2[0],_tmp23_[1],_tmp23___2[1],_tmp23_[2],_tmp23___2[2],_tmp23_[3],_tmp23___2[3],&_tmp23_[0],&_tmp23___2[0],&_tmp23_[1],&_tmp23___2[1],&_tmp23_[2],&_tmp23___2[2],&_tmp23_[3],&_tmp23___2[3]);
  transform__(_tmp23_,_tmp23___2,tmp__,tmp____2);
  _tmp25_[0] = XOR(tmp__[0],keys__[9][0]);
  _tmp25_[1] = XOR(tmp__[1],keys__[9][1]);
  _tmp25_[2] = XOR(tmp__[2],keys__[9][2]);
  _tmp25_[3] = XOR(tmp__[3],keys__[9][3]);
  _tmp25___2[0] = XOR(tmp____2[0],keys____2[9][0]);
  _tmp25___2[1] = XOR(tmp____2[1],keys____2[9][1]);
  _tmp25___2[2] = XOR(tmp____2[2],keys____2[9][2]);
  _tmp25___2[3] = XOR(tmp____2[3],keys____2[9][3]);
  sbox__1__(_tmp25_[0],_tmp25___2[0],_tmp25_[1],_tmp25___2[1],_tmp25_[2],_tmp25___2[2],_tmp25_[3],_tmp25___2[3],&_tmp25_[0],&_tmp25___2[0],&_tmp25_[1],&_tmp25___2[1],&_tmp25_[2],&_tmp25___2[2],&_tmp25_[3],&_tmp25___2[3]);
  transform__(_tmp25_,_tmp25___2,tmp__,tmp____2);
  _tmp27_[0] = XOR(tmp__[0],keys__[10][0]);
  _tmp27_[1] = XOR(tmp__[1],keys__[10][1]);
  _tmp27_[2] = XOR(tmp__[2],keys__[10][2]);
  _tmp27_[3] = XOR(tmp__[3],keys__[10][3]);
  _tmp27___2[0] = XOR(tmp____2[0],keys____2[10][0]);
  _tmp27___2[1] = XOR(tmp____2[1],keys____2[10][1]);
  _tmp27___2[2] = XOR(tmp____2[2],keys____2[10][2]);
  _tmp27___2[3] = XOR(tmp____2[3],keys____2[10][3]);
  sbox__2__(_tmp27_[0],_tmp27___2[0],_tmp27_[1],_tmp27___2[1],_tmp27_[2],_tmp27___2[2],_tmp27_[3],_tmp27___2[3],&_tmp27_[0],&_tmp27___2[0],&_tmp27_[1],&_tmp27___2[1],&_tmp27_[2],&_tmp27___2[2],&_tmp27_[3],&_tmp27___2[3]);
  transform__(_tmp27_,_tmp27___2,tmp__,tmp____2);
  _tmp29_[0] = XOR(tmp__[0],keys__[11][0]);
  _tmp29_[1] = XOR(tmp__[1],keys__[11][1]);
  _tmp29_[2] = XOR(tmp__[2],keys__[11][2]);
  _tmp29_[3] = XOR(tmp__[3],keys__[11][3]);
  _tmp29___2[0] = XOR(tmp____2[0],keys____2[11][0]);
  _tmp29___2[1] = XOR(tmp____2[1],keys____2[11][1]);
  _tmp29___2[2] = XOR(tmp____2[2],keys____2[11][2]);
  _tmp29___2[3] = XOR(tmp____2[3],keys____2[11][3]);
  sbox__3__(_tmp29_[0],_tmp29___2[0],_tmp29_[1],_tmp29___2[1],_tmp29_[2],_tmp29___2[2],_tmp29_[3],_tmp29___2[3],&_tmp29_[0],&_tmp29___2[0],&_tmp29_[1],&_tmp29___2[1],&_tmp29_[2],&_tmp29___2[2],&_tmp29_[3],&_tmp29___2[3]);
  transform__(_tmp29_,_tmp29___2,tmp__,tmp____2);
  _tmp31_[0] = XOR(tmp__[0],keys__[12][0]);
  _tmp31_[1] = XOR(tmp__[1],keys__[12][1]);
  _tmp31_[2] = XOR(tmp__[2],keys__[12][2]);
  _tmp31_[3] = XOR(tmp__[3],keys__[12][3]);
  _tmp31___2[0] = XOR(tmp____2[0],keys____2[12][0]);
  _tmp31___2[1] = XOR(tmp____2[1],keys____2[12][1]);
  _tmp31___2[2] = XOR(tmp____2[2],keys____2[12][2]);
  _tmp31___2[3] = XOR(tmp____2[3],keys____2[12][3]);
  sbox__4__(_tmp31_[0],_tmp31___2[0],_tmp31_[1],_tmp31___2[1],_tmp31_[2],_tmp31___2[2],_tmp31_[3],_tmp31___2[3],&_tmp31_[0],&_tmp31___2[0],&_tmp31_[1],&_tmp31___2[1],&_tmp31_[2],&_tmp31___2[2],&_tmp31_[3],&_tmp31___2[3]);
  transform__(_tmp31_,_tmp31___2,tmp__,tmp____2);
  _tmp33_[0] = XOR(tmp__[0],keys__[13][0]);
  _tmp33_[1] = XOR(tmp__[1],keys__[13][1]);
  _tmp33_[2] = XOR(tmp__[2],keys__[13][2]);
  _tmp33_[3] = XOR(tmp__[3],keys__[13][3]);
  _tmp33___2[0] = XOR(tmp____2[0],keys____2[13][0]);
  _tmp33___2[1] = XOR(tmp____2[1],keys____2[13][1]);
  _tmp33___2[2] = XOR(tmp____2[2],keys____2[13][2]);
  _tmp33___2[3] = XOR(tmp____2[3],keys____2[13][3]);
  sbox__5__(_tmp33_[0],_tmp33___2[0],_tmp33_[1],_tmp33___2[1],_tmp33_[2],_tmp33___2[2],_tmp33_[3],_tmp33___2[3],&_tmp33_[0],&_tmp33___2[0],&_tmp33_[1],&_tmp33___2[1],&_tmp33_[2],&_tmp33___2[2],&_tmp33_[3],&_tmp33___2[3]);
  transform__(_tmp33_,_tmp33___2,tmp__,tmp____2);
  _tmp35_[0] = XOR(tmp__[0],keys__[14][0]);
  _tmp35_[1] = XOR(tmp__[1],keys__[14][1]);
  _tmp35_[2] = XOR(tmp__[2],keys__[14][2]);
  _tmp35_[3] = XOR(tmp__[3],keys__[14][3]);
  _tmp35___2[0] = XOR(tmp____2[0],keys____2[14][0]);
  _tmp35___2[1] = XOR(tmp____2[1],keys____2[14][1]);
  _tmp35___2[2] = XOR(tmp____2[2],keys____2[14][2]);
  _tmp35___2[3] = XOR(tmp____2[3],keys____2[14][3]);
  sbox__6__(_tmp35_[0],_tmp35___2[0],_tmp35_[1],_tmp35___2[1],_tmp35_[2],_tmp35___2[2],_tmp35_[3],_tmp35___2[3],&_tmp35_[0],&_tmp35___2[0],&_tmp35_[1],&_tmp35___2[1],&_tmp35_[2],&_tmp35___2[2],&_tmp35_[3],&_tmp35___2[3]);
  transform__(_tmp35_,_tmp35___2,tmp__,tmp____2);
  _tmp37_[0] = XOR(tmp__[0],keys__[15][0]);
  _tmp37_[1] = XOR(tmp__[1],keys__[15][1]);
  _tmp37_[2] = XOR(tmp__[2],keys__[15][2]);
  _tmp37_[3] = XOR(tmp__[3],keys__[15][3]);
  _tmp37___2[0] = XOR(tmp____2[0],keys____2[15][0]);
  _tmp37___2[1] = XOR(tmp____2[1],keys____2[15][1]);
  _tmp37___2[2] = XOR(tmp____2[2],keys____2[15][2]);
  _tmp37___2[3] = XOR(tmp____2[3],keys____2[15][3]);
  sbox__7__(_tmp37_[0],_tmp37___2[0],_tmp37_[1],_tmp37___2[1],_tmp37_[2],_tmp37___2[2],_tmp37_[3],_tmp37___2[3],&_tmp37_[0],&_tmp37___2[0],&_tmp37_[1],&_tmp37___2[1],&_tmp37_[2],&_tmp37___2[2],&_tmp37_[3],&_tmp37___2[3]);
  transform__(_tmp37_,_tmp37___2,tmp__,tmp____2);
  _tmp39_[0] = XOR(tmp__[0],keys__[16][0]);
  _tmp39_[1] = XOR(tmp__[1],keys__[16][1]);
  _tmp39_[2] = XOR(tmp__[2],keys__[16][2]);
  _tmp39_[3] = XOR(tmp__[3],keys__[16][3]);
  _tmp39___2[0] = XOR(tmp____2[0],keys____2[16][0]);
  _tmp39___2[1] = XOR(tmp____2[1],keys____2[16][1]);
  _tmp39___2[2] = XOR(tmp____2[2],keys____2[16][2]);
  _tmp39___2[3] = XOR(tmp____2[3],keys____2[16][3]);
  sbox__0__(_tmp39_[0],_tmp39___2[0],_tmp39_[1],_tmp39___2[1],_tmp39_[2],_tmp39___2[2],_tmp39_[3],_tmp39___2[3],&_tmp39_[0],&_tmp39___2[0],&_tmp39_[1],&_tmp39___2[1],&_tmp39_[2],&_tmp39___2[2],&_tmp39_[3],&_tmp39___2[3]);
  transform__(_tmp39_,_tmp39___2,tmp__,tmp____2);
  _tmp41_[0] = XOR(tmp__[0],keys__[17][0]);
  _tmp41_[1] = XOR(tmp__[1],keys__[17][1]);
  _tmp41_[2] = XOR(tmp__[2],keys__[17][2]);
  _tmp41_[3] = XOR(tmp__[3],keys__[17][3]);
  _tmp41___2[0] = XOR(tmp____2[0],keys____2[17][0]);
  _tmp41___2[1] = XOR(tmp____2[1],keys____2[17][1]);
  _tmp41___2[2] = XOR(tmp____2[2],keys____2[17][2]);
  _tmp41___2[3] = XOR(tmp____2[3],keys____2[17][3]);
  sbox__1__(_tmp41_[0],_tmp41___2[0],_tmp41_[1],_tmp41___2[1],_tmp41_[2],_tmp41___2[2],_tmp41_[3],_tmp41___2[3],&_tmp41_[0],&_tmp41___2[0],&_tmp41_[1],&_tmp41___2[1],&_tmp41_[2],&_tmp41___2[2],&_tmp41_[3],&_tmp41___2[3]);
  transform__(_tmp41_,_tmp41___2,tmp__,tmp____2);
  _tmp43_[0] = XOR(tmp__[0],keys__[18][0]);
  _tmp43_[1] = XOR(tmp__[1],keys__[18][1]);
  _tmp43_[2] = XOR(tmp__[2],keys__[18][2]);
  _tmp43_[3] = XOR(tmp__[3],keys__[18][3]);
  _tmp43___2[0] = XOR(tmp____2[0],keys____2[18][0]);
  _tmp43___2[1] = XOR(tmp____2[1],keys____2[18][1]);
  _tmp43___2[2] = XOR(tmp____2[2],keys____2[18][2]);
  _tmp43___2[3] = XOR(tmp____2[3],keys____2[18][3]);
  sbox__2__(_tmp43_[0],_tmp43___2[0],_tmp43_[1],_tmp43___2[1],_tmp43_[2],_tmp43___2[2],_tmp43_[3],_tmp43___2[3],&_tmp43_[0],&_tmp43___2[0],&_tmp43_[1],&_tmp43___2[1],&_tmp43_[2],&_tmp43___2[2],&_tmp43_[3],&_tmp43___2[3]);
  transform__(_tmp43_,_tmp43___2,tmp__,tmp____2);
  _tmp45_[0] = XOR(tmp__[0],keys__[19][0]);
  _tmp45_[1] = XOR(tmp__[1],keys__[19][1]);
  _tmp45_[2] = XOR(tmp__[2],keys__[19][2]);
  _tmp45_[3] = XOR(tmp__[3],keys__[19][3]);
  _tmp45___2[0] = XOR(tmp____2[0],keys____2[19][0]);
  _tmp45___2[1] = XOR(tmp____2[1],keys____2[19][1]);
  _tmp45___2[2] = XOR(tmp____2[2],keys____2[19][2]);
  _tmp45___2[3] = XOR(tmp____2[3],keys____2[19][3]);
  sbox__3__(_tmp45_[0],_tmp45___2[0],_tmp45_[1],_tmp45___2[1],_tmp45_[2],_tmp45___2[2],_tmp45_[3],_tmp45___2[3],&_tmp45_[0],&_tmp45___2[0],&_tmp45_[1],&_tmp45___2[1],&_tmp45_[2],&_tmp45___2[2],&_tmp45_[3],&_tmp45___2[3]);
  transform__(_tmp45_,_tmp45___2,tmp__,tmp____2);
  _tmp47_[0] = XOR(tmp__[0],keys__[20][0]);
  _tmp47_[1] = XOR(tmp__[1],keys__[20][1]);
  _tmp47_[2] = XOR(tmp__[2],keys__[20][2]);
  _tmp47_[3] = XOR(tmp__[3],keys__[20][3]);
  _tmp47___2[0] = XOR(tmp____2[0],keys____2[20][0]);
  _tmp47___2[1] = XOR(tmp____2[1],keys____2[20][1]);
  _tmp47___2[2] = XOR(tmp____2[2],keys____2[20][2]);
  _tmp47___2[3] = XOR(tmp____2[3],keys____2[20][3]);
  sbox__4__(_tmp47_[0],_tmp47___2[0],_tmp47_[1],_tmp47___2[1],_tmp47_[2],_tmp47___2[2],_tmp47_[3],_tmp47___2[3],&_tmp47_[0],&_tmp47___2[0],&_tmp47_[1],&_tmp47___2[1],&_tmp47_[2],&_tmp47___2[2],&_tmp47_[3],&_tmp47___2[3]);
  transform__(_tmp47_,_tmp47___2,tmp__,tmp____2);
  _tmp49_[0] = XOR(tmp__[0],keys__[21][0]);
  _tmp49_[1] = XOR(tmp__[1],keys__[21][1]);
  _tmp49_[2] = XOR(tmp__[2],keys__[21][2]);
  _tmp49_[3] = XOR(tmp__[3],keys__[21][3]);
  _tmp49___2[0] = XOR(tmp____2[0],keys____2[21][0]);
  _tmp49___2[1] = XOR(tmp____2[1],keys____2[21][1]);
  _tmp49___2[2] = XOR(tmp____2[2],keys____2[21][2]);
  _tmp49___2[3] = XOR(tmp____2[3],keys____2[21][3]);
  sbox__5__(_tmp49_[0],_tmp49___2[0],_tmp49_[1],_tmp49___2[1],_tmp49_[2],_tmp49___2[2],_tmp49_[3],_tmp49___2[3],&_tmp49_[0],&_tmp49___2[0],&_tmp49_[1],&_tmp49___2[1],&_tmp49_[2],&_tmp49___2[2],&_tmp49_[3],&_tmp49___2[3]);
  transform__(_tmp49_,_tmp49___2,tmp__,tmp____2);
  _tmp51_[0] = XOR(tmp__[0],keys__[22][0]);
  _tmp51_[1] = XOR(tmp__[1],keys__[22][1]);
  _tmp51_[2] = XOR(tmp__[2],keys__[22][2]);
  _tmp51_[3] = XOR(tmp__[3],keys__[22][3]);
  _tmp51___2[0] = XOR(tmp____2[0],keys____2[22][0]);
  _tmp51___2[1] = XOR(tmp____2[1],keys____2[22][1]);
  _tmp51___2[2] = XOR(tmp____2[2],keys____2[22][2]);
  _tmp51___2[3] = XOR(tmp____2[3],keys____2[22][3]);
  sbox__6__(_tmp51_[0],_tmp51___2[0],_tmp51_[1],_tmp51___2[1],_tmp51_[2],_tmp51___2[2],_tmp51_[3],_tmp51___2[3],&_tmp51_[0],&_tmp51___2[0],&_tmp51_[1],&_tmp51___2[1],&_tmp51_[2],&_tmp51___2[2],&_tmp51_[3],&_tmp51___2[3]);
  transform__(_tmp51_,_tmp51___2,tmp__,tmp____2);
  _tmp53_[0] = XOR(tmp__[0],keys__[23][0]);
  _tmp53_[1] = XOR(tmp__[1],keys__[23][1]);
  _tmp53_[2] = XOR(tmp__[2],keys__[23][2]);
  _tmp53_[3] = XOR(tmp__[3],keys__[23][3]);
  _tmp53___2[0] = XOR(tmp____2[0],keys____2[23][0]);
  _tmp53___2[1] = XOR(tmp____2[1],keys____2[23][1]);
  _tmp53___2[2] = XOR(tmp____2[2],keys____2[23][2]);
  _tmp53___2[3] = XOR(tmp____2[3],keys____2[23][3]);
  sbox__7__(_tmp53_[0],_tmp53___2[0],_tmp53_[1],_tmp53___2[1],_tmp53_[2],_tmp53___2[2],_tmp53_[3],_tmp53___2[3],&_tmp53_[0],&_tmp53___2[0],&_tmp53_[1],&_tmp53___2[1],&_tmp53_[2],&_tmp53___2[2],&_tmp53_[3],&_tmp53___2[3]);
  transform__(_tmp53_,_tmp53___2,tmp__,tmp____2);
  _tmp55_[0] = XOR(tmp__[0],keys__[24][0]);
  _tmp55_[1] = XOR(tmp__[1],keys__[24][1]);
  _tmp55_[2] = XOR(tmp__[2],keys__[24][2]);
  _tmp55_[3] = XOR(tmp__[3],keys__[24][3]);
  _tmp55___2[0] = XOR(tmp____2[0],keys____2[24][0]);
  _tmp55___2[1] = XOR(tmp____2[1],keys____2[24][1]);
  _tmp55___2[2] = XOR(tmp____2[2],keys____2[24][2]);
  _tmp55___2[3] = XOR(tmp____2[3],keys____2[24][3]);
  sbox__0__(_tmp55_[0],_tmp55___2[0],_tmp55_[1],_tmp55___2[1],_tmp55_[2],_tmp55___2[2],_tmp55_[3],_tmp55___2[3],&_tmp55_[0],&_tmp55___2[0],&_tmp55_[1],&_tmp55___2[1],&_tmp55_[2],&_tmp55___2[2],&_tmp55_[3],&_tmp55___2[3]);
  transform__(_tmp55_,_tmp55___2,tmp__,tmp____2);
  _tmp57_[0] = XOR(tmp__[0],keys__[25][0]);
  _tmp57_[1] = XOR(tmp__[1],keys__[25][1]);
  _tmp57_[2] = XOR(tmp__[2],keys__[25][2]);
  _tmp57_[3] = XOR(tmp__[3],keys__[25][3]);
  _tmp57___2[0] = XOR(tmp____2[0],keys____2[25][0]);
  _tmp57___2[1] = XOR(tmp____2[1],keys____2[25][1]);
  _tmp57___2[2] = XOR(tmp____2[2],keys____2[25][2]);
  _tmp57___2[3] = XOR(tmp____2[3],keys____2[25][3]);
  sbox__1__(_tmp57_[0],_tmp57___2[0],_tmp57_[1],_tmp57___2[1],_tmp57_[2],_tmp57___2[2],_tmp57_[3],_tmp57___2[3],&_tmp57_[0],&_tmp57___2[0],&_tmp57_[1],&_tmp57___2[1],&_tmp57_[2],&_tmp57___2[2],&_tmp57_[3],&_tmp57___2[3]);
  transform__(_tmp57_,_tmp57___2,tmp__,tmp____2);
  _tmp59_[0] = XOR(tmp__[0],keys__[26][0]);
  _tmp59_[1] = XOR(tmp__[1],keys__[26][1]);
  _tmp59_[2] = XOR(tmp__[2],keys__[26][2]);
  _tmp59_[3] = XOR(tmp__[3],keys__[26][3]);
  _tmp59___2[0] = XOR(tmp____2[0],keys____2[26][0]);
  _tmp59___2[1] = XOR(tmp____2[1],keys____2[26][1]);
  _tmp59___2[2] = XOR(tmp____2[2],keys____2[26][2]);
  _tmp59___2[3] = XOR(tmp____2[3],keys____2[26][3]);
  sbox__2__(_tmp59_[0],_tmp59___2[0],_tmp59_[1],_tmp59___2[1],_tmp59_[2],_tmp59___2[2],_tmp59_[3],_tmp59___2[3],&_tmp59_[0],&_tmp59___2[0],&_tmp59_[1],&_tmp59___2[1],&_tmp59_[2],&_tmp59___2[2],&_tmp59_[3],&_tmp59___2[3]);
  transform__(_tmp59_,_tmp59___2,tmp__,tmp____2);
  _tmp61_[0] = XOR(tmp__[0],keys__[27][0]);
  _tmp61_[1] = XOR(tmp__[1],keys__[27][1]);
  _tmp61_[2] = XOR(tmp__[2],keys__[27][2]);
  _tmp61_[3] = XOR(tmp__[3],keys__[27][3]);
  _tmp61___2[0] = XOR(tmp____2[0],keys____2[27][0]);
  _tmp61___2[1] = XOR(tmp____2[1],keys____2[27][1]);
  _tmp61___2[2] = XOR(tmp____2[2],keys____2[27][2]);
  _tmp61___2[3] = XOR(tmp____2[3],keys____2[27][3]);
  sbox__3__(_tmp61_[0],_tmp61___2[0],_tmp61_[1],_tmp61___2[1],_tmp61_[2],_tmp61___2[2],_tmp61_[3],_tmp61___2[3],&_tmp61_[0],&_tmp61___2[0],&_tmp61_[1],&_tmp61___2[1],&_tmp61_[2],&_tmp61___2[2],&_tmp61_[3],&_tmp61___2[3]);
  transform__(_tmp61_,_tmp61___2,tmp__,tmp____2);
  _tmp63_[0] = XOR(tmp__[0],keys__[28][0]);
  _tmp63_[1] = XOR(tmp__[1],keys__[28][1]);
  _tmp63_[2] = XOR(tmp__[2],keys__[28][2]);
  _tmp63_[3] = XOR(tmp__[3],keys__[28][3]);
  _tmp63___2[0] = XOR(tmp____2[0],keys____2[28][0]);
  _tmp63___2[1] = XOR(tmp____2[1],keys____2[28][1]);
  _tmp63___2[2] = XOR(tmp____2[2],keys____2[28][2]);
  _tmp63___2[3] = XOR(tmp____2[3],keys____2[28][3]);
  sbox__4__(_tmp63_[0],_tmp63___2[0],_tmp63_[1],_tmp63___2[1],_tmp63_[2],_tmp63___2[2],_tmp63_[3],_tmp63___2[3],&_tmp63_[0],&_tmp63___2[0],&_tmp63_[1],&_tmp63___2[1],&_tmp63_[2],&_tmp63___2[2],&_tmp63_[3],&_tmp63___2[3]);
  transform__(_tmp63_,_tmp63___2,tmp__,tmp____2);
  _tmp65_[0] = XOR(tmp__[0],keys__[29][0]);
  _tmp65_[1] = XOR(tmp__[1],keys__[29][1]);
  _tmp65_[2] = XOR(tmp__[2],keys__[29][2]);
  _tmp65_[3] = XOR(tmp__[3],keys__[29][3]);
  _tmp65___2[0] = XOR(tmp____2[0],keys____2[29][0]);
  _tmp65___2[1] = XOR(tmp____2[1],keys____2[29][1]);
  _tmp65___2[2] = XOR(tmp____2[2],keys____2[29][2]);
  _tmp65___2[3] = XOR(tmp____2[3],keys____2[29][3]);
  sbox__5__(_tmp65_[0],_tmp65___2[0],_tmp65_[1],_tmp65___2[1],_tmp65_[2],_tmp65___2[2],_tmp65_[3],_tmp65___2[3],&_tmp65_[0],&_tmp65___2[0],&_tmp65_[1],&_tmp65___2[1],&_tmp65_[2],&_tmp65___2[2],&_tmp65_[3],&_tmp65___2[3]);
  transform__(_tmp65_,_tmp65___2,tmp__,tmp____2);
  _tmp67_[0] = XOR(tmp__[0],keys__[30][0]);
  _tmp67_[1] = XOR(tmp__[1],keys__[30][1]);
  _tmp67_[2] = XOR(tmp__[2],keys__[30][2]);
  _tmp67_[3] = XOR(tmp__[3],keys__[30][3]);
  _tmp67___2[0] = XOR(tmp____2[0],keys____2[30][0]);
  _tmp67___2[1] = XOR(tmp____2[1],keys____2[30][1]);
  _tmp67___2[2] = XOR(tmp____2[2],keys____2[30][2]);
  _tmp67___2[3] = XOR(tmp____2[3],keys____2[30][3]);
  sbox__6__(_tmp67_[0],_tmp67___2[0],_tmp67_[1],_tmp67___2[1],_tmp67_[2],_tmp67___2[2],_tmp67_[3],_tmp67___2[3],&_tmp67_[0],&_tmp67___2[0],&_tmp67_[1],&_tmp67___2[1],&_tmp67_[2],&_tmp67___2[2],&_tmp67_[3],&_tmp67___2[3]);
  transform__(_tmp67_,_tmp67___2,tmp__,tmp____2);
  _tmp69_[0] = XOR(tmp__[0],keys__[31][0]);
  _tmp69_[1] = XOR(tmp__[1],keys__[31][1]);
  _tmp69_[2] = XOR(tmp__[2],keys__[31][2]);
  _tmp69_[3] = XOR(tmp__[3],keys__[31][3]);
  _tmp69___2[0] = XOR(tmp____2[0],keys____2[31][0]);
  _tmp69___2[1] = XOR(tmp____2[1],keys____2[31][1]);
  _tmp69___2[2] = XOR(tmp____2[2],keys____2[31][2]);
  _tmp69___2[3] = XOR(tmp____2[3],keys____2[31][3]);
  sbox__7__(_tmp69_[0],_tmp69___2[0],_tmp69_[1],_tmp69___2[1],_tmp69_[2],_tmp69___2[2],_tmp69_[3],_tmp69___2[3],&_tmp69_[0],&_tmp69___2[0],&_tmp69_[1],&_tmp69___2[1],&_tmp69_[2],&_tmp69___2[2],&_tmp69_[3],&_tmp69___2[3]);
  ciphertext__[0] = XOR(_tmp69_[0],keys__[32][0]);
  ciphertext__[1] = XOR(_tmp69_[1],keys__[32][1]);
  ciphertext__[2] = XOR(_tmp69_[2],keys__[32][2]);
  ciphertext__[3] = XOR(_tmp69_[3],keys__[32][3]);
  ciphertext____2[0] = XOR(_tmp69___2[0],keys____2[32][0]);
  ciphertext____2[1] = XOR(_tmp69___2[1],keys____2[32][1]);
  ciphertext____2[2] = XOR(_tmp69___2[2],keys____2[32][2]);
  ciphertext____2[3] = XOR(_tmp69___2[3],keys____2[32][3]);

}
 