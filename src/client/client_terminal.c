#include "shared_client.h"


//----- (000000014004CCB0) ----------------------------------------------------
__int64            sub_14004CCB0(int a1, int a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rbx
  __int64 v5; // r10
  unsigned int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r10
  int *v12; // r11
  int *v13; // r8
  __int64 v14; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004CCB0[272];
#define v16 (*(int (*))(void *)(sr_frame_14004CCB0 + 0)) /* [rsp+0h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_14004CCB0 + 256)) /* [rsp+100h] */

  v3 = a2;
  if ( a2 == 2 )
  {
    v4 = a1;
    v5 = 1760LL * a1;
    v6 = dword_140404A6C[v5 + 278846098];
  }
  else
  {
    if ( a2 )
      return 0; /* the function has no caller */
    v4 = a1;
    v5 = 1760LL * a1;
    if ( (int)dword_140404A6C[v5 + 278845906] <= 0 )
      return 0; /* the function has no caller */
    v6 = dword_140404A6C[1760 * dword_140404A6C[v5 + 278845907] + 278846098];
  }
  if ( v6 != -1 )
  {
    if ( (_DWORD)a3 )
    {
      v7 = 1;
      v8 = 1;
      v16 = a3;
      do
      {
        LODWORD(a3) = dword_140404A6C[2570 * v6 + 275753051 + 4 * (int)a3];
        if ( !(_DWORD)a3 )
          break;
        *(&v16 + v8) = a3;
        ++v7;
        ++v8;
      }
      while ( v8 < 8 );
      v9 = v5 * 4 + 72 * v3;
      v10 = v3;
      v11 = v7;
      v12 = (int *)((char *)&dword_140404A6C[278847172] + v9);
      *(unsigned int *)((char *)&dword_140404A6C[278847172] + v9) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[278847173] + v9) = 0;
      if ( v7 >= 1LL )
      {
        v13 = &v16 + v7 - 1;
        do
        {
          v14 = *v12;
          --v13;
          *v12 = v14 + 1;
          dword_140404A6C[1760 * v4 + 278847174 + 18 * v10 + v14] = v13[1];
          --v11;
        }
        while ( v11 );
      }
    }
    else
    {
      *(_QWORD *)&dword_140404A6C[18 * a2 + 278847172 + v5] = a3;
    }
  }
  return 0; /* the function has no caller */
}
#undef v16
#undef v17

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400584B0) ----------------------------------------------------
__m128i *           sub_1400584B0(int a1,      __m128i *a2)
{
  __int64 v3; // r10
  int v4; // eax
  int *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // ebx
  __m128i *result; // rax
  int v12; // ebx
  signed int v13; // edi
  unsigned int v14; // ebp
  __int64 v15; // rsi
  signed int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1

  v3 = 1760LL * a1;
  v4 = 1;
  v5 = (int *)&dword_140404A6C[1760 * a1 + 278845988];
  v6 = 2;
  v7 = 4;
  do
  {
    if ( (v4 & dword_140404A6C[v3 + 278845985 + ((v6 - 2) >> 5)]) != 0 )
      dword_140404A6C[39 * *(v5 - 1) + 290382645] = 0;
    if ( (__ROL4__(v4, 1) & dword_140404A6C[v3 + 278845985 + ((v6 - 1) >> 5)]) != 0 )
      dword_140404A6C[39 * *v5 + 290382645] = 0;
    if ( (__ROL4__(v4, 2) & dword_140404A6C[v3 + 278845985 + (v6 >> 5)]) != 0 )
      dword_140404A6C[39 * v5[1] + 290382645] = 0;
    if ( (__ROL4__(v4, 3) & dword_140404A6C[v3 + 278845985 + ((v6 + 1) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[2] + 290382645] = 0;
    if ( (__ROL4__(v4, 4) & dword_140404A6C[v3 + 278845985 + ((v6 + 2) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[3] + 290382645] = 0;
    if ( (__ROL4__(v4, 5) & dword_140404A6C[v3 + 278845985 + ((v6 + 3) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[4] + 290382645] = 0;
    if ( (__ROL4__(v4, 6) & dword_140404A6C[v3 + 278845985 + ((v6 + 4) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[5] + 290382645] = 0;
    if ( (__ROL4__(v4, 7) & dword_140404A6C[v3 + 278845985 + ((v6 + 5) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[6] + 290382645] = 0;
    if ( (__ROL4__(v4, 8) & dword_140404A6C[v3 + 278845985 + ((v6 + 6) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[7] + 290382645] = 0;
    if ( (__ROL4__(v4, 9) & dword_140404A6C[v3 + 278845985 + ((v6 + 7) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[8] + 290382645] = 0;
    if ( (__ROL4__(v4, 10) & dword_140404A6C[v3 + 278845985 + ((v6 + 8) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[9] + 290382645] = 0;
    if ( (__ROL4__(v4, 11) & dword_140404A6C[v3 + 278845985 + ((v6 + 9) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[10] + 290382645] = 0;
    if ( (__ROL4__(v4, 12) & dword_140404A6C[v3 + 278845985 + ((v6 + 10) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[11] + 290382645] = 0;
    if ( (__ROL4__(v4, 13) & dword_140404A6C[v3 + 278845985 + ((v6 + 11) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[12] + 290382645] = 0;
    if ( (__ROL4__(v4, 14) & dword_140404A6C[v3 + 278845985 + ((v6 + 12) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[13] + 290382645] = 0;
    if ( (__ROL4__(v4, 15) & dword_140404A6C[v3 + 278845985 + ((v6 + 13) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[14] + 290382645] = 0;
    v6 += 16;
    v4 = __ROL4__(v4, 16);
    v5 += 16;
    --v7;
  }
  while ( v7 );
  v8 = 1760LL * a1;
  v9 = -1;
  *(_QWORD *)&dword_140404A6C[v8 + 278845985] = 0;
  do
    ++v9;
  while ( SR_VEC_PTR_LANES(128, a2, i8)[v9] );
  v10 = v9 + 1;
  if ( v10 > 1023 )
    v10 = 1023;
  result = sub_1401FC920((__m128i *)&dword_140404A6C[v8 + 278846111], a2, v10);
  v12 = v10 >> 6;
  v13 = 0;
  HIBYTE(dword_140404A6C[v8 + 278846366]) = 0;
  if ( v12 >= 0 )
  {
    v14 = dword_140404A6C[283831474];
    v15 = 0;
    do
    {
      v16 = 0;
      v17 = 0;
      result = (__m128i *)&dword_140404A6C[290382645];
      while ( SR_VEC_PTR_LANES(128, result, i32)[0] )
      {
        ++v16;
        ++v17;
        result = (__m128i *)((char *)result + 156);
        if ( (__int64)result >= (__int64)&dword_140404A6C[291021621] )
          goto LABEL_47;
      }
      if ( v16 != -1 )
      {
        v18 = 39 * v17;
        *(_QWORD *)&dword_140404A6C[v18 + 290382645] = 1;
        dword_140404A6C[v18 + 290382648] = v14;
        dword_140404A6C[v18 + 290382647] = 0;
        dword_140404A6C[v18 + 290382649] = a1;
        dword_140404A6C[v18 + 290382650] = v13;
        dword_140404A6C[v18 + 290382651] = 64;
        v19 = 39LL * v16;
        v20 = *(_OWORD *)&dword_140404A6C[v8 + 278846115 + v15];
        *(_OWORD *)&dword_140404A6C[v19 + 290382652] = *(_OWORD *)&dword_140404A6C[v8 + 278846111 + v15];
        v21 = *(_OWORD *)&dword_140404A6C[v8 + 278846119 + v15];
        *(_OWORD *)&dword_140404A6C[v19 + 290382656] = v20;
        v22 = *(_OWORD *)&dword_140404A6C[v8 + 278846123 + v15];
        *(_OWORD *)&dword_140404A6C[v19 + 290382660] = v21;
        *(_OWORD *)&dword_140404A6C[v19 + 290382664] = v22;
        result = (__m128i *)sub_1400C3BA0(a1, v16, 0xFFFFFFFF);
      }
LABEL_47:
      ++v13;
      v15 += 16;
    }
    while ( v13 <= v12 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (000000014008F050) ----------------------------------------------------
void sub_14008F050()
{
  unsigned int *v0; // rbx
       __m128i *v1; // r14
  __int64 v2; // r15
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi

  v0 = &dword_140404A6C[290382649];
  v1 = (     __m128i *)&dword_140404A6C[290382652];
  v2 = 0x4000;
  do
  {
    if ( *(v0 - 4) && !*(v0 - 3) )
    {
      v3 = *(v0 - 2);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v5 = v0[2];
          if ( v5 > 63 )
          {
            v5 = 63;
            v0[2] = 63;
          }
          v6 = (int)*v0;
          v7 = v5;
          v8 = (110 * v6 + (int)v0[1]) << 6;
          sub_1401FC920((__m128i *)((char *)&dword_140404A6C[278846114] + v8), v1, v5);
          *((_BYTE *)&dword_140404A6C[278846114] + v8 + v7) = 0;
          sub_1401FC920((__m128i *)((char *)&dword_140404A6C[278846626] + v8), v1 + 4, v7);
          dword_140404A6C[1760 * v6 + 278846101] = 0;
        }
      }
      else
      {
        v4 = 1760LL * (int)*v0;
        sub_1401FC920((__m128i *)((char *)&dword_140404A6C[v4 + 278846111] + (int)(v0[1] << 6)), v1, (int)v0[2]);
        HIBYTE(dword_140404A6C[v4 + 278846366]) = 0;
        dword_140404A6C[v4 + 278846101] = 0;
      }
      *(v0 - 3) = 1;
    }
    v1 = (     __m128i *)((char *)v1 + 156);
    v0 += 39;
    --v2;
  }
  while ( v2 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C3AB0) ----------------------------------------------------
__int64 sub_1400C3AB0(int item, int bill, int denomination)
{
  extern unsigned long long item_insert_cash_bill(int, int, unsigned int);
  /* src/engine/item_state.c */
  return (__int64)item_insert_cash_bill(item, bill, (unsigned int)denomination);
}

//----- (00000001400C3E00) ----------------------------------------------------
__int64            sub_1400C3E00(int a1)
{
  /* src/engine/items/computer.c */
  extern void computer_new_line(int item);
  computer_new_line(a1);
  return 0;
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C3ED0) ----------------------------------------------------
int sub_1400C3ED0(int item)
{
  extern void computer_update_disk_job(int);
  computer_update_disk_job(item);
  return 0; /* Incidental native result is discarded by reviewed callers. */
}

//----- (00000001400C4280) ----------------------------------------------------
__int64            sub_1400C4280(int a1)
{
  __int64 v1; // r12
  __int64 v2; // rsi
  int v3; // r13d
  unsigned int v4; // r11d
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // r10d
  unsigned int *v11; // rdi
  int v12; // edx
  char v13; // r8
  int v14; // ecx
  int v15; // r8d
  char *v16; // r9
  char v17; // dl
  int v18; // edx
  char v19; // dl
  __int64 v20; // rdx
  char v21; // r8
  int v22; // ebx
  __int64 v23; // r8
  unsigned int v24; // edx
  unsigned int v25; // eax
  int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  char *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // al
  __int64 v36; // rdi
  __int64 v37; // r13
  signed int v38; // ebx
  int v39; // ecx
  __int64 v40; // r11
  __int64 v41; // r14
  __int64 v42; // rbx
  int *v43; // r10
  char *v44; // rdx
  bool v45; // zf
  char *v46; // rcx
  __int64 v47; // rcx
  char v48; // al
  int v49; // eax
  __int64 v50; // r10
  int v51; // edx
  int v52; // r9d
  char v53; // r8
  __int64 v54; // r14
  __int64 v55; // rcx
  char *v56; // r8
  char v57; // cl
  __int64 v58; // rax
  int v59; // r9d
  int v60; // r14d
  unsigned int *v61; // r10
       char *v62; // r11
  unsigned int v63; // r14d
  int v64; // eax
  __int64 v65; // rdi
  unsigned int v66; // r15d
  __int64 v67; // rcx
  char *v68; // rcx
  char v69; // al
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  char v75; // al
  __int64 v76; // r15
  signed int v77; // r14d
  char *v78; // rdi
  __m128i si128; // xmm0
  unsigned int *v80; // rcx
  __int64 v81; // rsi
  unsigned int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rcx
  char v85; // al
  int v86; // r14d
  int v87; // eax
  int v88; // edx
  int v89; // r9d
  char v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rcx
  char v93; // al
  __int64 v94; // rcx
  char *v95; // r8
  char v96; // cl
  __int64 v97; // r15
  int v98; // r11d
  unsigned int *v99; // r9
       char *v100; // r10
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C4280[1136];
#define v105 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 0)) /* [rsp+0h] */
#define v106 (*(unsigned int (*))(void *)(sr_frame_1400C4280 + 48)) /* [rsp+30h] */
#define v107 (*(int (*))(void *)(sr_frame_1400C4280 + 52)) /* [rsp+34h] */
#define v108 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 56)) /* [rsp+38h] */
#define v109 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 64)) /* [rsp+40h] */
#define v110 (*(unsigned int * (*))(void *)(sr_frame_1400C4280 + 72)) /* [rsp+48h] */
#define v111 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 80)) /* [rsp+50h] */
#define v112 (*(char (*)[4])(void *)(sr_frame_1400C4280 + 92)) /* [rsp+5Ch] */
#define Str1 (*(char (*)[4])(void *)(sr_frame_1400C4280 + 96)) /* [rsp+60h] */
#define v114 (*(char (*))(void *)(sr_frame_1400C4280 + 607)) /* [rsp+25Fh] */
#define v115 (*(char (*)[512])(void *)(sr_frame_1400C4280 + 608)) /* [rsp+260h] */
#define v116 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 1120)) /* [rsp+460h] */

  v1 = a1;
  v2 = 1760LL * a1;
  v3 = -1;
  v111 = v2 * 4;
  v4 = -1;
  v5 = (int)dword_140404A6C[v2 + 278847170];
  v106 = v5;
  if ( (_DWORD)v5 == 2 )
  {
    v4 = dword_140404A6C[v2 + 278846098];
  }
  else if ( !(_DWORD)v5 && (int)dword_140404A6C[v2 + 278845906] > 0 )
  {
    v4 = dword_140404A6C[1760 * dword_140404A6C[v2 + 278845907] + 278846098];
  }
  v6 = 0;
  v7 = 1760LL * a1;
  v8 = v2 * 4 + 72 * v5;
  v109 = 9 * v5;
  v9 = *(int *)((char *)&dword_140404A6C[278847172] + v8);
  v107 = 0;
  v108 = 18 * v5;
  Str1[0] = 0;
  v10 = 0;
  v11 = &dword_140404A6C[v2 + 278847154];
  v12 = 0;
  LODWORD(v110) = dword_140404A6C[18 * v5 + 278847173 + v7 + v9];
  while ( 1 )
  {
    v13 = *((_BYTE *)v11 + v12);
    if ( (unsigned __int8)(v13 - 97) <= 0x19u
      || (unsigned __int8)(v13 - 65) <= 0x19u
      || (unsigned __int8)(v13 - 48) <= 9u )
    {
      break;
    }
    v14 = v12;
    if ( v13 )
    {
      v107 = ++v12;
      v14 = v12;
      if ( v12 < 62 )
        continue;
    }
    goto LABEL_14;
  }
  v14 = v12;
LABEL_14:
  if ( v14 < 62 )
  {
    v15 = v14;
    v16 = Str1;
    while ( 1 )
    {
      v17 = *((_BYTE *)v11 + v15);
      if ( (unsigned __int8)(v17 - 97) > 0x19u
        && (unsigned __int8)(v17 - 65) > 0x19u
        && (unsigned __int8)(v17 - 48) > 9u )
      {
        break;
      }
      v14 = v15 + 1;
      *v16++ = v17;
      v107 = v14;
      ++v10;
      ++v15;
      if ( v14 >= 62 )
        goto LABEL_22;
    }
    v14 = v15;
LABEL_22:
    LODWORD(v5) = v106;
  }
  Str1[v10] = 0;
  if ( !Str1[1] )
  {
    if ( v14 < 62 )
    {
      v18 = v14;
      do
      {
        v14 = v18;
        if ( *((_BYTE *)v11 + v18) != 32 )
          break;
        v14 = v18 + 1;
        v18 = v14;
      }
      while ( v14 < 62 );
    }
    v19 = *((_BYTE *)v11 + v14);
    if ( (unsigned __int8)(v19 - 97) > 0x19u && (unsigned __int8)(v19 - 65) > 0x19u && (unsigned __int8)(v19 - 48) > 9u )
    {
      if ( v19 && v14 < 62 )
      {
        v20 = 0;
        do
        {
          if ( v20 >= 2 )
            break;
          v21 = *((_BYTE *)v11 + v14);
          if ( !v21 )
            break;
          ++v6;
          v115[v20++] = v21;
          ++v14;
        }
        while ( v14 < 62 );
      }
      v115[v6] = 0;
      if ( v6 > 0 && v115[0] == 58 && !v115[1] )
      {
        if ( (unsigned __int8)(Str1[0] - 65) > 2u
          || (v22 = (unsigned __int8)Str1[0] - 65, (unsigned int)sub_14004C960(v1, v22) == -1) )
        {
          *(_OWORD *)&dword_140404A6C[16 * (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) + 278846114] = xmmword_140275F48;
          goto LABEL_178;
        }
        dword_140404A6C[v2 + 278847170] = v22;
      }
    }
    return 0; /* no result: rax is residue at 0x1400C532F */
  }
  if ( v4 == -1 )
  {
    *(_OWORD *)&dword_140404A6C[16 * (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) + 278846114] = xmmword_140275F48;
    goto LABEL_178;
  }
  if ( Str1[0] != 67 || Str1[1] != 68 || Str1[2] )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = Str1[v34++];
      if ( v35 != byte_140275F6C[v34 - 1] )
        break;
      if ( v34 == 4 )
      {
        v36 = 1;
        dword_140404A6C[v2 + 278847243] = 1;
        dword_140404A6C[v2 + 278847244] = 4;
        dword_140404A6C[v2 + 278847258] = 0;
        *(_QWORD *)&dword_140404A6C[v2 + 278847247] = 1;
        dword_140404A6C[v2 + 278847245] = v5;
        v37 = 110 * v1;
        dword_140404A6C[v2 + 278847246] = dword_140404A6C[v7
                                                        + 278847173
                                                        + v108
                                                        + *(int *)((char *)&dword_140404A6C[278847172] + v8)];
        LOBYTE(dword_140404A6C[16 * (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) + 278846114]) = 0;
        sub_1400C3E00(v1);
        if ( v106 == 2 )
        {
          v38 = dword_140404A6C[v2 + 278846098];
          goto LABEL_74;
        }
        if ( v106 || (int)dword_140404A6C[v2 + 278845906] <= 0 )
          goto LABEL_85;
        v38 = dword_140404A6C[1760 * dword_140404A6C[v2 + 278845907] + 278846098];
LABEL_74:
        if ( v38 == -1 )
        {
LABEL_85:
          v115[0] = 0;
        }
        else
        {
          sub_140158AB0(v115, "%c:\\", v106 + 65);
          v39 = *(unsigned int *)((char *)&dword_140404A6C[278847172] + v8);
          if ( v39 >= 1 )
          {
            v40 = (unsigned int)v39;
            v41 = (int)dword_140404A6C[2 * v109 + 278847172 + v2];
            v42 = 2570LL * v38;
            v43 = (int *)((char *)&dword_140404A6C[278847174] + v8);
            do
            {
              v44 = &v114;
              do
                v45 = *++v44 == 0;
              while ( !v45 );
              strcpy(v44, (     char *)&dword_140404A6C[4 * *v43 + 275753048 + v42]);
              if ( v36 < v41 )
              {
                v46 = &v114;
                do
                  v45 = *++v46 == 0;
                while ( !v45 );
                *(_WORD *)v46 = 92;
              }
              ++v36;
              ++v43;
              --v40;
            }
            while ( v40 );
          }
        }
        sub_140158AB0(
          &dword_140404A6C[16 * (v37 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
          "Directory of %s",
          v115);
        sub_1400C3E00(v1);
        LOBYTE(dword_140404A6C[16 * (v37 + (int)dword_140404A6C[v2 + 278846111]) + 278846114]) = 0;
        return 0; /* no result: rax is residue at 0x1400C532F */
      }
    }
    v47 = 0;
    do
    {
      v48 = Str1[v47++];
      if ( v48 != sr_mem_140275f80[v47 - 1] )
      {
        v74 = 0;
        while ( 1 )
        {
          v75 = Str1[v74++];
          if ( v75 != sr_mem_140276018[v74 - 1] )
            break;
          if ( v74 == 8 )
            goto LABEL_131;
        }
        if ( strcmp_sr(Str1, "MISSION.EXE") )
        {
          v84 = 0;
          while ( 1 )
          {
            v85 = Str1[v84++];
            if ( v85 != sr_mem_140276050[v84 - 1] )
              break;
            if ( v84 == 8 )
              goto LABEL_142;
          }
          if ( strcmp_sr(Str1, "DECRYPT.EXE") )
          {
            v92 = 0;
            while ( 1 )
            {
              v93 = Str1[v92++];
              if ( v93 != sr_mem_14027609c[v92 - 1] )
                break;
              if ( v92 == 6 )
                goto LABEL_155;
            }
            if ( !strcmp_sr(Str1, "SNAKE.EXE") )
            {
LABEL_155:
              dword_140404A6C[v2 + 278847324] = 3;
              dword_140404A6C[v2 + 278846113] = -1;
              *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
              sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x520u);
              sub_1400C92B0(v1);
              return 0; /* no result: rax is residue at 0x1400C532F */
            }
            if ( *(_BYTE *)v11 )
            {
              v94 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
              *(_OWORD *)((char *)&dword_140404A6C[278846114] + v94) = xmmword_140276030;
              *(_QWORD *)((char *)&dword_140404A6C[278846118] + v94) = 0x454D414E20454C49LL;
              *((_BYTE *)&dword_140404A6C[278846120] + v94) = 0;
              goto LABEL_178;
            }
            return 0; /* no result: rax is residue at 0x1400C532F */
          }
LABEL_142:
          LODWORD(v108) = (_DWORD)v110;
          LODWORD(v109) = v106;
          v86 = -1;
          if ( (unsigned int)sub_14004C9C0(v1, (int *)&v109, (int *)&v108, (__int64)v11, &v107) )
            goto LABEL_150;
          v87 = sub_14004C960(v1, v109);
          if ( v87 == -1 )
            goto LABEL_150;
          v88 = v107;
          v89 = 0;
          if ( v107 < 62 )
          {
            while ( 1 )
            {
              v90 = *((_BYTE *)v11 + v88);
              if ( (unsigned __int8)(v90 - 97) <= 0x19u
                || (unsigned __int8)(v90 - 65) <= 0x19u
                || (unsigned __int8)(v90 - 48) <= 9u
                || !v90 )
              {
                break;
              }
              if ( ++v88 >= 62 )
                goto LABEL_150;
            }
            if ( v88 < 62 )
            {
              v95 = Str1;
              do
              {
                v96 = *((_BYTE *)v11 + v88);
                if ( (unsigned __int8)(v96 - 97) > 0x19u
                  && (unsigned __int8)(v96 - 65) > 0x19u
                  && (unsigned __int8)(v96 - 48) > 9u
                  && v96 != 46 )
                {
                  break;
                }
                *v95 = v96;
                ++v89;
                ++v95;
                ++v88;
              }
              while ( v88 < 62 );
            }
          }
          Str1[v89] = 0;
          if ( v89 <= 0 )
            goto LABEL_150;
          v97 = 2570LL * v87;
          v98 = dword_140404A6C[v97 + 275754072];
          if ( v98 <= 0 )
            goto LABEL_150;
          v99 = &dword_140404A6C[v97 + 275754078];
          v100 = (     char *)&dword_140404A6C[v97 + 275754074];
          do
          {
            if ( *v99 == (_DWORD)v108 && !strcmp_sr(v100, Str1) )
              v86 = v6;
            ++v6;
            v100 += 24;
            v99 += 6;
          }
          while ( v6 < v98 );
          if ( v86 == -1 )
          {
LABEL_150:
            v91 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
            *(_OWORD *)((char *)&dword_140404A6C[278846114] + v91) = xmmword_140276080;
            *(_QWORD *)((char *)&dword_140404A6C[278846118] + v91) = 0x656D616E656C6966LL;
            *(_WORD *)((char *)&dword_140404A6C[278846120] + v91) = 34;
            goto LABEL_178;
          }
          v101 = (int)dword_140404A6C[6 * v86 + 275754073 + v97];
          if ( dword_140404A6C[290 * v101 + 273377606] )
          {
            dword_140404A6C[v2 + 278846113] = -1;
            dword_140404A6C[v2 + 278847324] = 1;
            dword_140404A6C[v2 + 278847454] = v101;
            sub_1400C5C00(v1);
            return 0; /* no result: rax is residue at 0x1400C532F */
          }
          v102 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
          *(_OWORD *)((char *)&dword_140404A6C[278846114] + v102) = xmmword_140276068;
          *(unsigned int *)((char *)&dword_140404A6C[278846118] + v102) = 4542553;
          goto LABEL_178;
        }
LABEL_131:
        v76 = 110 * v1;
        if ( dword_140404A6C[v2 + 278847323] == -1 )
        {
          v103 = (v76 + (int)dword_140404A6C[v2 + 278846111]) << 6;
          *(_OWORD *)((char *)&dword_140404A6C[278846114] + v103) = xmmword_140276030;
          *(_QWORD *)((char *)&dword_140404A6C[278846118] + v103) = 0x454D414E20454C49LL;
          *((_BYTE *)&dword_140404A6C[278846120] + v103) = 0;
          goto LABEL_178;
        }
        dword_140404A6C[v2 + 278847324] = 2;
        dword_140404A6C[v2 + 278846113] = -1;
        *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
        v110 = &dword_140404A6C[v2 + 278847325];
        sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x420u);
        dword_140404A6C[v2 + 278847328] = -1;
        v77 = 0;
        v78 = (char *)&dword_140404A6C[1760 * v1 + 278846114];
        do
        {
          *v78 = 0;
          if ( !v77 )
            strcpy(v78, "CONNECTING...");
          si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
          v80 = &dword_140404A6C[16 * (v76 + (unsigned int)v77) + 278846626];
          *(__m128i *)v80 = si128;
          *((__m128i *)v80 + 1) = si128;
          *((__m128i *)v80 + 2) = si128;
          *((_QWORD *)v80 + 6) = SR_VEC_LANES(128, si128, i64)[0];
          v80[14] = SR_VEC_LANES(128, si128, i32)[0];
          *((_WORD *)v80 + 30) = SR_VEC_LANES(128, si128, i16)[0];
          *((_BYTE *)v80 + 62) = SR_VEC_LANES(128, si128, i8)[0];
          sub_140050F90(v1, v77++);
          v78 += 64;
        }
        while ( v77 < 24 );
        v81 = v111;
        v45 = dword_140404A6C[456202453] == 0;
        *v110 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[278847326] + v81) = 256;
        if ( !v45 )
        {
          v82 = dword_140404A6C[283831474];
          v83 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v83) = 19;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v83) = v82;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v83) = dword_140404A6C[283786017];
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v83) = v1;
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v83) = 1065353216;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v83) = 1065353216;
        }
        return 0; /* no result: rax is residue at 0x1400C532F */
      }
    }
    while ( v47 != 5 );
    LODWORD(v108) = (_DWORD)v110;
    LODWORD(v109) = v5;
    if ( (unsigned int)sub_14004C9C0(v1, (int *)&v109, (int *)&v108, (__int64)v11, &v107) )
    {
      v54 = v1;
      v73 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
      *(_OWORD *)((char *)&dword_140404A6C[278846114] + v73) = xmmword_140275FB8;
      *(_OWORD *)((char *)&dword_140404A6C[278846118] + v73) = xmmword_140275FC8;
      *(_QWORD *)((char *)&dword_140404A6C[278846122] + v73) = 0x4549464943455053LL;
      *(_WORD *)((char *)&dword_140404A6C[278846124] + v73) = 68;
      sub_1400C3E00(v1);
    }
    else
    {
      v49 = sub_14004C960(v1, v109);
      v50 = v49;
      if ( v49 != -1 )
      {
        v51 = v107;
        v52 = 0;
        if ( v107 < 62 )
        {
          while ( 1 )
          {
            v53 = *((_BYTE *)v11 + v51);
            if ( (unsigned __int8)(v53 - 97) <= 0x19u
              || (unsigned __int8)(v53 - 65) <= 0x19u
              || (unsigned __int8)(v53 - 48) <= 9u
              || !v53 )
            {
              break;
            }
            v107 = ++v51;
            if ( v51 >= 62 )
              goto LABEL_98;
          }
          if ( v51 < 62 )
          {
            v56 = Str1;
            do
            {
              v57 = *((_BYTE *)v11 + v51);
              if ( (unsigned __int8)(v57 - 97) > 0x19u
                && (unsigned __int8)(v57 - 65) > 0x19u
                && (unsigned __int8)(v57 - 48) > 9u
                && v57 != 46 )
              {
                break;
              }
              *v56 = v57;
              ++v52;
              ++v56;
              ++v51;
            }
            while ( v51 < 62 );
            v107 = v51;
          }
        }
        Str1[v52] = 0;
        if ( v52 > 0 )
        {
          v58 = 2570LL * v49;
          v59 = 0;
          v109 = 10280 * v50;
          v60 = dword_140404A6C[2570 * v50 + 275754072];
          if ( v60 > 0 )
          {
            v61 = &dword_140404A6C[v58 + 275754078];
            v62 = (     char *)&dword_140404A6C[v58 + 275754074];
            do
            {
              if ( *v61 == (_DWORD)v108 && !strcmp_sr(v62, Str1) )
                v3 = v59;
              ++v59;
              v62 += 24;
              v61 += 6;
            }
            while ( v59 < v60 );
            if ( v3 != -1 )
            {
              LODWORD(v108) = (_DWORD)v110;
              if ( (unsigned int)sub_14004C9C0(v1, (int *)&v106, (int *)&v108, (__int64)v11, &v107) == 1 )
              {
                v63 = v106;
                v64 = sub_14004C960(v1, v106);
                v65 = v64;
                if ( v64 == -1 )
                  return 0; /* no result: rax is residue at 0x1400C532F */
                v66 = v108;
                if ( (unsigned int)sub_140080820(v64, v108, (__int64)Str1) == -1 )
                {
                  if ( (int)dword_140404A6C[2570 * v65 + 275753046] < 400
                    && (int)dword_140404A6C[2570 * v65 + 275754072] >= 3 )
                  {
                    v67 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                    *(_OWORD *)((char *)&dword_140404A6C[278846114] + v67) = xmmword_140275F88;
                    *(_QWORD *)((char *)&dword_140404A6C[278846118] + v67) = 0x4543415053204BLL;
                    goto LABEL_178;
                  }
                  dword_140404A6C[v2 + 278847243] = 0;
                  dword_140404A6C[v2 + 278847244] = 256;
                  dword_140404A6C[v2 + 278847258] = 0;
                  dword_140404A6C[v2 + 278847245] = v63;
                  dword_140404A6C[v2 + 278847246] = v66;
                  v68 = Str1;
                  do
                  {
                    v69 = *v68;
                    v68[(_QWORD)&dword_140404A6C[278847249] + v2 * 4 - (_QWORD)Str1] = *v68;
                    ++v68;
                  }
                  while ( v69 );
                  v70 = (int)dword_140404A6C[v2 + 278846111];
                  dword_140404A6C[v2 + 278847257] = *(unsigned int *)((char *)&dword_140404A6C[6 * v3 + 275754073] + v109);
                  LOBYTE(dword_140404A6C[16 * (110 * v1 + v70) + 278846114]) = 0;
                  sub_140051650(dword_140404A6C[283786018], v1, 1.0, 1.0);
                  return 0; /* no result: rax is residue at 0x1400C532F */
                }
                v71 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *(_OWORD *)((char *)&dword_140404A6C[278846114] + v71) = xmmword_140275FA0;
                *(unsigned int *)((char *)&dword_140404A6C[278846118] + v71) = 5461075;
              }
              else
              {
                v72 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *(_OWORD *)((char *)&dword_140404A6C[278846114] + v72) = xmmword_140275FB8;
                *(_OWORD *)((char *)&dword_140404A6C[278846118] + v72) = xmmword_140275FC8;
                *(_QWORD *)((char *)&dword_140404A6C[278846122] + v72) = 0x4549464943455053LL;
                *(_WORD *)((char *)&dword_140404A6C[278846124] + v72) = 68;
              }
LABEL_178:
              sub_1400C3E00(v1);
              return 0; /* no result: rax is residue at 0x1400C532F */
            }
          }
        }
      }
LABEL_98:
      v54 = v1;
    }
    v55 = (110 * v54 + (int)dword_140404A6C[v2 + 278846111]) << 6;
    *(_OWORD *)((char *)&dword_140404A6C[278846114] + v55) = xmmword_140275FE8;
    *(_OWORD *)((char *)&dword_140404A6C[278846118] + v55) = xmmword_140275FF8;
    *(_QWORD *)((char *)&dword_140404A6C[278846122] + v55) = 0x4549464943455053LL;
    *(_WORD *)((char *)&dword_140404A6C[278846124] + v55) = 68;
    goto LABEL_178;
  }
  v106 = v5;
  if ( (unsigned int)sub_14004C9C0(v1, (int *)&v106, (int *)&v108, (__int64)v11, &v107) != 1 )
  {
    v33 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
    *(_OWORD *)((char *)&dword_140404A6C[278846114] + v33) = xmmword_140275F58;
    *(_WORD *)((char *)&dword_140404A6C[278846118] + v33) = 89;
    goto LABEL_178;
  }
  v23 = (int)v106;
  v24 = v108;
  if ( v106 == 2 )
  {
    v25 = dword_140404A6C[v2 + 278846098];
  }
  else
  {
    if ( v106 || (int)dword_140404A6C[v2 + 278845906] <= 0 )
      return 0; /* no result: rax is residue at 0x1400C532F */
    v25 = dword_140404A6C[1760 * dword_140404A6C[v2 + 278845907] + 278846098];
  }
  if ( v25 != -1 )
  {
    if ( (_DWORD)v108 )
    {
      v26 = 1;
      v27 = 1;
      *(_DWORD *)Str1 = v108;
      do
      {
        v24 = dword_140404A6C[2570 * v25 + 275753051 + 4 * v24];
        if ( !v24 )
          break;
        *(_DWORD *)&Str1[4 * v27] = v24;
        ++v26;
        ++v27;
      }
      while ( v27 < 8 );
      v28 = v26;
      v29 = v2 * 4 + 72 * v23;
      *(_QWORD *)((char *)&dword_140404A6C[278847172] + v29) = 0;
      if ( v26 >= 1LL )
      {
        v30 = 18 * v23;
        v31 = &v112[4 * v26];
        do
        {
          v32 = *(int *)((char *)&dword_140404A6C[278847172] + v29);
          v31 -= 4;
          *(unsigned int *)((char *)&dword_140404A6C[278847172] + v29) = v32 + 1;
          dword_140404A6C[v7 + 278847174 + v30 + v32] = *((_DWORD *)v31 + 1);
          --v28;
        }
        while ( v28 );
      }
    }
    else
    {
      *(_QWORD *)&dword_140404A6C[18 * (int)v106 + 278847172 + v2] = 0;
    }
  }
  return 0; /* no result: rax is residue at 0x1400C532F */
}
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef Str1
#undef v114
#undef v115
#undef v116

// 1400C43E1: conditional instruction was optimized away because dl.1 is in (30..39|41..5A|61..7A)
// 1400C4A73: conditional instruction was optimized away because cl.1 is in (==2E|30..39)
// 1400C51C3: conditional instruction was optimized away because cl.1 is in (==2E|30..39)
// 140275F48: using guessed type __int128 xmmword_140275F48;
// 140275F58: using guessed type __int128 xmmword_140275F58;
// 140275F6C: using guessed type _BYTE byte_140275F6C[4];
// 140275F88: using guessed type __int128 xmmword_140275F88;
// 140275FA0: using guessed type __int128 xmmword_140275FA0;
// 140275FB8: using guessed type __int128 xmmword_140275FB8;
// 140275FC8: using guessed type __int128 xmmword_140275FC8;
// 140275FE8: using guessed type __int128 xmmword_140275FE8;
// 140275FF8: using guessed type __int128 xmmword_140275FF8;
// 140276030: using guessed type __int128 xmmword_140276030;
// 140276068: using guessed type __int128 xmmword_140276068;
// 140276080: using guessed type __int128 xmmword_140276080;
// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E936F0: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400C5360) ----------------------------------------------------
__int64            sub_1400C5360(int a1)
{
  /* src/engine/items/computer.c */
  extern void computer_draw_letter_counts(int item);
  computer_draw_letter_counts(a1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C5610) ----------------------------------------------------
__int64            sub_1400C5610(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r11d
  __int64 v5; // r10
  __int64 v6; // rsi
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  __int64 v10; // r8
  __int64 v11; // rcx
  char v12; // al

  v4 = 0;
  v5 = 0;
  v6 = a1;
  do
  {
    v8 = *(char *)(v5 + a3);
    if ( !(_BYTE)v8 )
      break;
    v9 = v8 - 65;
    if ( a4 )
    {
      v10 = v5 + ((a2 + 110 * v6) << 6);
      if ( v9 > 0x19u )
      {
        *((_BYTE *)&dword_140404A6C[278846114] + v10) = v8;
      }
      else
      {
        v11 = *(char *)(v5 + a3);
        v12 = LOBYTE(dword_140404A6C[1760 * v6 + 278847390 + v8]) + 65;
        *((_BYTE *)&dword_140404A6C[278846626] + v10) = 15;
        *((_BYTE *)&dword_140404A6C[278846114] + v10) = v12;
        if ( dword_140404A6C[1760 * v6 + 278847583] == dword_140404A6C[1760 * v6 + 278847390 + v11] )
          *((_BYTE *)&dword_140404A6C[278846626] + v10) = 12;
      }
    }
    else
    {
      if ( v9 <= 0x19u )
      {
        LODWORD(v8) = dword_140404A6C[1760 * v6 + 278847551 + (int)dword_140404A6C[1760 * v6 + 278847390 + v8]];
        if ( (_DWORD)v8 == -1 )
          LOBYTE(v8) = 32;
        else
          LOBYTE(v8) = v8 + 65;
      }
      *((_BYTE *)&dword_140404A6C[1760 * v6 + 278846114 + 16 * a2] + v5) = v8;
    }
    ++v4;
    ++v5;
  }
  while ( v5 < 62 );
  *((_BYTE *)&dword_140404A6C[1760 * v6 + 278846114 + 16 * a2] + v4) = 0;
  return v4;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C5750) ----------------------------------------------------
__int64            sub_1400C5750(int a1)
{
  /* src/engine/items/computer.c */
  extern void computer_draw_cipher(int item);
  computer_draw_cipher(a1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C58E0) ----------------------------------------------------
float            sub_1400C58E0(int a1)
{
  int v1; // r10d
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r11d
  int *v5; // rcx
  int v6; // r8d
  unsigned int v7; // r9d
  int v8; // r9d
  unsigned int v9; // r8d
  int v10; // r8d
  unsigned int v11; // r9d
  int v12; // r9d
  unsigned int v13; // r8d
  int v14; // r8d
  unsigned int v15; // r9d
  int v16; // r9d
  unsigned int v17; // r8d
  int v18; // r8d
  unsigned int v19; // r9d
  int v20; // r9d
  unsigned int v21; // r8d
  int v22; // r8d
  unsigned int v23; // r9d
  int v24; // r9d
  unsigned int v25; // r8d
  int v26; // r8d
  unsigned int v27; // r9d
  int v28; // r9d
  unsigned int v29; // r8d
  unsigned int v30; // r8d

  v1 = 0;
  v2 = 1760LL * a1;
  v3 = 0;
  v4 = 2;
  v5 = (int *)&dword_140404A6C[1760 * a1 + 278847456];
  do
  {
    v6 = v1 + 1;
    if ( v5[63] <= 0 )
      v6 = v1;
    v7 = dword_140404A6C[v2 + 278847551 + *(v5 - 1)];
    if ( v7 == v4 - 2 )
    {
      ++v3;
    }
    else if ( v7 != -1 )
    {
      ++v6;
    }
    v8 = v6 + 1;
    if ( v5[64] <= 0 )
      v8 = v6;
    v9 = dword_140404A6C[v2 + 278847551 + *v5];
    if ( v9 == v4 - 1 )
    {
      ++v3;
    }
    else if ( v9 != -1 )
    {
      ++v8;
    }
    v10 = v8 + 1;
    if ( v5[65] <= 0 )
      v10 = v8;
    v11 = dword_140404A6C[v2 + 278847551 + v5[1]];
    if ( v11 == v4 )
    {
      ++v3;
    }
    else if ( v11 != -1 )
    {
      ++v10;
    }
    v12 = v10 + 1;
    if ( v5[66] <= 0 )
      v12 = v10;
    v13 = dword_140404A6C[v2 + 278847551 + v5[2]];
    if ( v13 == v4 + 1 )
    {
      ++v3;
    }
    else if ( v13 != -1 )
    {
      ++v12;
    }
    v14 = v12 + 1;
    if ( v5[67] <= 0 )
      v14 = v12;
    v15 = dword_140404A6C[v2 + 278847551 + v5[3]];
    if ( v15 == v4 + 2 )
    {
      ++v3;
    }
    else if ( v15 != -1 )
    {
      ++v14;
    }
    v16 = v14 + 1;
    if ( v5[68] <= 0 )
      v16 = v14;
    v17 = dword_140404A6C[v2 + 278847551 + v5[4]];
    if ( v17 == v4 + 3 )
    {
      ++v3;
    }
    else if ( v17 != -1 )
    {
      ++v16;
    }
    v18 = v16 + 1;
    if ( v5[69] <= 0 )
      v18 = v16;
    v19 = dword_140404A6C[v2 + 278847551 + v5[5]];
    if ( v19 == v4 + 4 )
    {
      ++v3;
    }
    else if ( v19 != -1 )
    {
      ++v18;
    }
    v20 = v18 + 1;
    if ( v5[70] <= 0 )
      v20 = v18;
    v21 = dword_140404A6C[v2 + 278847551 + v5[6]];
    if ( v21 == v4 + 5 )
    {
      ++v3;
    }
    else if ( v21 != -1 )
    {
      ++v20;
    }
    v22 = v20 + 1;
    if ( v5[71] <= 0 )
      v22 = v20;
    v23 = dword_140404A6C[v2 + 278847551 + v5[7]];
    if ( v23 == v4 + 6 )
    {
      ++v3;
    }
    else if ( v23 != -1 )
    {
      ++v22;
    }
    v24 = v22 + 1;
    if ( v5[72] <= 0 )
      v24 = v22;
    v25 = dword_140404A6C[v2 + 278847551 + v5[8]];
    if ( v25 == v4 + 7 )
    {
      ++v3;
    }
    else if ( v25 != -1 )
    {
      ++v24;
    }
    v26 = v24 + 1;
    if ( v5[73] <= 0 )
      v26 = v24;
    v27 = dword_140404A6C[v2 + 278847551 + v5[9]];
    if ( v27 == v4 + 8 )
    {
      ++v3;
    }
    else if ( v27 != -1 )
    {
      ++v26;
    }
    v28 = v26 + 1;
    if ( v5[74] <= 0 )
      v28 = v26;
    v29 = dword_140404A6C[v2 + 278847551 + v5[10]];
    if ( v29 == v4 + 9 )
    {
      ++v3;
    }
    else if ( v29 != -1 )
    {
      ++v28;
    }
    v1 = v28 + 1;
    if ( v5[75] <= 0 )
      v1 = v28;
    v30 = dword_140404A6C[v2 + 278847551 + v5[11]];
    if ( v30 == v4 + 10 )
    {
      ++v3;
    }
    else if ( v30 != -1 )
    {
      ++v1;
    }
    v4 += 13;
    v5 += 13;
  }
  while ( v4 - 2 < 26 );
  if ( v1 <= 0 )
    return 1.0;
  else
    return (float)v3 / (float)v1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C5C00) ----------------------------------------------------
__int64            sub_1400C5C00(int a1)
{
  __int64 v1; // r8
  __int64 v2; // r13
  unsigned int *v3; // rcx
  _BYTE *v4; // rdx
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  signed int v8; // edi
  int v9; // edx
  int v10; // r8d
  int v11; // ebx
  __int64 v12; // rax
  int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbp
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r14
  _BYTE *v53; // rbx
  unsigned __int8 v54; // al
  __int64 v55; // rcx
  __int64 v56; // r10
  __int64 v57; // r9
  char *v58; // rax
       char *v59; // rcx
  __int64 v60; // r8
  char v61; // dl
  char v62; // dl
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C5C00[624];
#define v64 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 0)) /* [rsp+0h] */
#define v65 (*(int (*))(void *)(sr_frame_1400C5C00 + 32)) /* [rsp+20h] */
#define v66 (*(int (*))(void *)(sr_frame_1400C5C00 + 36)) /* [rsp+24h] */
#define v67 (*(int (*))(void *)(sr_frame_1400C5C00 + 40)) /* [rsp+28h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 48)) /* [rsp+30h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 56)) /* [rsp+38h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 64)) /* [rsp+40h] */
#define v71 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 72)) /* [rsp+48h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 80)) /* [rsp+50h] */
#define v73 (*(_BYTE (*)[512])(void *)(sr_frame_1400C5C00 + 96)) /* [rsp+60h] */
#define v74 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 608)) /* [rsp+260h] */

  v1 = a1;
  v2 = 1760LL * a1;
  v67 = a1;
  v69 = a1;
  v71 = v2 * 4;
  v70 = (int)dword_140404A6C[v2 + 278847454];
  v3 = &dword_140404A6C[290 * v70 + 273377350];
  v4 = (_BYTE *)(v73 - (_BYTE *)v3);
  do
  {
    v5 = *(_BYTE *)v3;
    *((_BYTE *)v3 + (_QWORD)v4) = *(_BYTE *)v3;
    v3 = (unsigned int *)((char *)v3 + 1);
  }
  while ( v5 );
  v6 = -1;
  v68 = 110 * v1;
  v7 = 1760 * v1;
  v8 = 0;
  v72 = v7 * 4;
  v9 = 0;
  v66 = 0;
  v65 = 0;
  v10 = 0;
  LOBYTE(dword_140404A6C[v7 + 278847325]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847341]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847357]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847373]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847389]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847405]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847421]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847437]) = 0;
  dword_140404A6C[v2 + 278847584] = 0;
  do
    ++v6;
  while ( v73[v6] );
  v11 = 59;
  if ( (int)v6 < 59 )
    v11 = v6;
  v12 = v11;
  if ( v11 > 30LL )
  {
    do
    {
      if ( v73[v12] == 32 )
        break;
      --v11;
      --v12;
    }
    while ( v12 > 30 );
  }
  v13 = v6 - 1;
  v14 = (int)v6 - 1LL;
  v15 = 0;
  v16 = 0;
  do
  {
    if ( !v73[v15] )
      break;
    v17 = toupper((char)v73[v15]);
    v10 = v66;
    v18 = v2 * 4 + v16++;
    v9 = ++v65;
    *((_BYTE *)&dword_140404A6C[278847325] + v18) = v17;
    if ( v9 > v11 )
    {
      ++v10;
      v19 = v2 * 4 + v16;
      v66 = v10;
      v11 = 59;
      v2 += 16;
      v9 = 0;
      v16 = 0;
      v65 = 0;
      *((_BYTE *)&dword_140404A6C[278847325] + v19) = 0;
      v20 = 59;
      if ( v13 >= 59 || (v11 = v13, v20 = v14, v14 > 30) )
      {
        do
        {
          if ( v73[v15 + 1 + v20] == 32 )
            break;
          --v11;
          --v20;
        }
        while ( v20 > 30 );
      }
    }
    --v13;
    ++v15;
    --v14;
  }
  while ( v15 < 256 );
  v21 = 1760 * v69;
  v22 = v68;
  v23 = v71;
  *((_BYTE *)&dword_140404A6C[16 * (v68 + v10) + 278847325] + v9) = 0;
  v24 = 290 * v70;
  dword_140404A6C[v21 + 278847455] = dword_140404A6C[290 * v70 + 273377607];
  dword_140404A6C[v21 + 278847456] = dword_140404A6C[v24 + 273377608];
  dword_140404A6C[v21 + 278847457] = dword_140404A6C[v24 + 273377609];
  dword_140404A6C[v21 + 278847458] = dword_140404A6C[v24 + 273377610];
  dword_140404A6C[v21 + 278847459] = dword_140404A6C[v24 + 273377611];
  dword_140404A6C[v21 + 278847460] = dword_140404A6C[v24 + 273377612];
  dword_140404A6C[v21 + 278847461] = dword_140404A6C[v24 + 273377613];
  dword_140404A6C[v21 + 278847462] = dword_140404A6C[v24 + 273377614];
  dword_140404A6C[v21 + 278847463] = dword_140404A6C[v24 + 273377615];
  dword_140404A6C[v21 + 278847464] = dword_140404A6C[v24 + 273377616];
  dword_140404A6C[v21 + 278847465] = dword_140404A6C[v24 + 273377617];
  dword_140404A6C[v21 + 278847466] = dword_140404A6C[v24 + 273377618];
  dword_140404A6C[v21 + 278847467] = dword_140404A6C[v24 + 273377619];
  dword_140404A6C[v21 + 278847468] = dword_140404A6C[v24 + 273377620];
  dword_140404A6C[v21 + 278847469] = dword_140404A6C[v24 + 273377621];
  dword_140404A6C[v21 + 278847470] = dword_140404A6C[v24 + 273377622];
  dword_140404A6C[v21 + 278847471] = dword_140404A6C[v24 + 273377623];
  dword_140404A6C[v21 + 278847472] = dword_140404A6C[v24 + 273377624];
  dword_140404A6C[v21 + 278847473] = dword_140404A6C[v24 + 273377625];
  dword_140404A6C[v21 + 278847474] = dword_140404A6C[v24 + 273377626];
  dword_140404A6C[v21 + 278847475] = dword_140404A6C[v24 + 273377627];
  dword_140404A6C[v21 + 278847476] = dword_140404A6C[v24 + 273377628];
  dword_140404A6C[v21 + 278847477] = dword_140404A6C[v24 + 273377629];
  dword_140404A6C[v21 + 278847478] = dword_140404A6C[v24 + 273377630];
  dword_140404A6C[v21 + 278847479] = dword_140404A6C[v24 + 273377631];
  dword_140404A6C[v21 + 278847480] = dword_140404A6C[v24 + 273377632];
  *(unsigned int *)((char *)&dword_140404A6C[278847583] + v23) = -1;
  dword_140404A6C[v21 + 278847487 + (int)dword_140404A6C[v21 + 278847455]] = 0;
  v25 = v21 + (int)dword_140404A6C[v21 + 278847456];
  dword_140404A6C[v21 + 278847519] = 0;
  dword_140404A6C[v21 + 278847551] = -1;
  dword_140404A6C[v25 + 278847487] = 1;
  v26 = v21 + (int)dword_140404A6C[v21 + 278847457];
  dword_140404A6C[v21 + 278847520] = 0;
  dword_140404A6C[v21 + 278847552] = -1;
  dword_140404A6C[v26 + 278847487] = 2;
  v27 = v21 + (int)dword_140404A6C[v21 + 278847458];
  dword_140404A6C[v21 + 278847521] = 0;
  dword_140404A6C[v21 + 278847553] = -1;
  dword_140404A6C[v27 + 278847487] = 3;
  v28 = 8;
  v29 = v21 + (int)dword_140404A6C[v21 + 278847459];
  dword_140404A6C[v21 + 278847522] = 0;
  dword_140404A6C[v21 + 278847554] = -1;
  dword_140404A6C[v29 + 278847487] = 4;
  v30 = v21 + (int)dword_140404A6C[v21 + 278847460];
  dword_140404A6C[v21 + 278847523] = 0;
  dword_140404A6C[v21 + 278847555] = -1;
  dword_140404A6C[v30 + 278847487] = 5;
  v31 = v21 + (int)dword_140404A6C[v21 + 278847461];
  dword_140404A6C[v21 + 278847524] = 0;
  dword_140404A6C[v21 + 278847556] = -1;
  dword_140404A6C[v31 + 278847487] = 6;
  v32 = v21 + (int)dword_140404A6C[v21 + 278847462];
  dword_140404A6C[v21 + 278847525] = 0;
  dword_140404A6C[v21 + 278847557] = -1;
  dword_140404A6C[v32 + 278847487] = 7;
  v33 = v21 + (int)dword_140404A6C[v21 + 278847463];
  dword_140404A6C[v21 + 278847526] = 0;
  dword_140404A6C[v21 + 278847558] = -1;
  dword_140404A6C[v33 + 278847487] = 8;
  v34 = v21 + (int)dword_140404A6C[v21 + 278847464];
  dword_140404A6C[v21 + 278847527] = 0;
  dword_140404A6C[v21 + 278847559] = -1;
  dword_140404A6C[v34 + 278847487] = 9;
  v35 = v21 + (int)dword_140404A6C[v21 + 278847465];
  dword_140404A6C[v21 + 278847528] = 0;
  dword_140404A6C[v21 + 278847560] = -1;
  dword_140404A6C[v35 + 278847487] = 10;
  v36 = v21 + (int)dword_140404A6C[v21 + 278847466];
  dword_140404A6C[v21 + 278847529] = 0;
  dword_140404A6C[v21 + 278847561] = -1;
  dword_140404A6C[v36 + 278847487] = 11;
  v37 = v21 + (int)dword_140404A6C[v21 + 278847467];
  dword_140404A6C[v21 + 278847530] = 0;
  dword_140404A6C[v21 + 278847562] = -1;
  dword_140404A6C[v37 + 278847487] = 12;
  v38 = v21 + (int)dword_140404A6C[v21 + 278847468];
  dword_140404A6C[v21 + 278847531] = 0;
  dword_140404A6C[v21 + 278847563] = -1;
  dword_140404A6C[v38 + 278847487] = 13;
  v39 = v21 + (int)dword_140404A6C[v21 + 278847469];
  dword_140404A6C[v21 + 278847532] = 0;
  dword_140404A6C[v21 + 278847564] = -1;
  dword_140404A6C[v39 + 278847487] = 14;
  v40 = v21 + (int)dword_140404A6C[v21 + 278847470];
  dword_140404A6C[v21 + 278847533] = 0;
  dword_140404A6C[v21 + 278847565] = -1;
  dword_140404A6C[v40 + 278847487] = 15;
  v41 = v21 + (int)dword_140404A6C[v21 + 278847471];
  dword_140404A6C[v21 + 278847534] = 0;
  dword_140404A6C[v21 + 278847566] = -1;
  dword_140404A6C[v41 + 278847487] = 16;
  v42 = v21 + (int)dword_140404A6C[v21 + 278847472];
  dword_140404A6C[v21 + 278847535] = 0;
  dword_140404A6C[v21 + 278847567] = -1;
  dword_140404A6C[v42 + 278847487] = 17;
  v43 = v21 + (int)dword_140404A6C[v21 + 278847473];
  dword_140404A6C[v21 + 278847536] = 0;
  dword_140404A6C[v21 + 278847568] = -1;
  dword_140404A6C[v43 + 278847487] = 18;
  v44 = v21 + (int)dword_140404A6C[v21 + 278847474];
  dword_140404A6C[v21 + 278847537] = 0;
  dword_140404A6C[v21 + 278847569] = -1;
  dword_140404A6C[v44 + 278847487] = 19;
  v45 = v21 + (int)dword_140404A6C[v21 + 278847475];
  dword_140404A6C[v21 + 278847538] = 0;
  dword_140404A6C[v21 + 278847570] = -1;
  v46 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v23 + 1119602656;
  dword_140404A6C[v45 + 278847487] = 20;
  v47 = v21 + (int)dword_140404A6C[v21 + 278847476];
  dword_140404A6C[v21 + 278847539] = 0;
  dword_140404A6C[v21 + 278847571] = -1;
  dword_140404A6C[v47 + 278847487] = 21;
  v48 = v21 + (int)dword_140404A6C[v21 + 278847477];
  dword_140404A6C[v21 + 278847540] = 0;
  dword_140404A6C[v21 + 278847572] = -1;
  dword_140404A6C[v48 + 278847487] = 22;
  v49 = v21 + (int)dword_140404A6C[v21 + 278847478];
  dword_140404A6C[v21 + 278847541] = 0;
  dword_140404A6C[v21 + 278847573] = -1;
  dword_140404A6C[v49 + 278847487] = 23;
  v50 = v21 + (int)dword_140404A6C[v21 + 278847479];
  dword_140404A6C[v21 + 278847542] = 0;
  dword_140404A6C[v21 + 278847574] = -1;
  dword_140404A6C[v50 + 278847487] = 24;
  v51 = v21 + (int)dword_140404A6C[v21 + 278847480];
  dword_140404A6C[v21 + 278847543] = 0;
  dword_140404A6C[v21 + 278847575] = -1;
  v52 = -v46;
  dword_140404A6C[v51 + 278847487] = 25;
  dword_140404A6C[v21 + 278847544] = 0;
  dword_140404A6C[v21 + 278847576] = -1;
  do
  {
    v53 = (_BYTE *)v46;
    do
    {
      if ( !*v53 )
        break;
      v54 = toupper((unsigned __int8)*v53);
      *v53 = v54;
      if ( (unsigned __int8)(v54 - 65) <= 0x19u )
      {
        v55 = v21 + (int)dword_140404A6C[v21 + 278847390 + v54];
        ++dword_140404A6C[v55 + 278847519];
      }
      ++v53;
    }
    while ( (__int64)&v53[v52] < 62 );
    v52 -= 64;
    v46 += 64;
    --v28;
  }
  while ( v28 );
  v56 = v72;
  v57 = 0;
  *(_QWORD *)((char *)&dword_140404A6C[278846111] + v23) = 0;
  do
  {
    if ( v57 )
    {
      LOBYTE(dword_140404A6C[16 * (v57 + v22) + 278846114]) = 0;
    }
    else
    {
      v58 = (char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v23 + 1119597812);
      v59 = "DECRYPTER     Ctrl-R RESET   Ctrl-P PRINT    Ctrl-X EXIT";
      v60 = 31;
      do
      {
        v61 = *v59;
        if ( *v59 )
          ++v59;
        else
          v61 = 32;
        *v58 = v61;
        v62 = *v59;
        v58[2048] = 31;
        if ( v62 )
          ++v59;
        else
          v62 = 32;
        v58[1] = v62;
        v58[2049] = 31;
        v58 += 2;
        --v60;
      }
      while ( v60 );
      *((_BYTE *)&dword_140404A6C[278846129] + v56 + 2) = 0;
    }
    ++v57;
  }
  while ( v57 < 24 );
  sub_1400C5750(v67);
  do
    sub_140050F90(v67, v8++);
  while ( v8 < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C6580) ----------------------------------------------------
__int64            sub_1400C6580(int a1, __int16 a2)
{
  signed int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  float v11; // xmm1_4
  float v12; // xmm0_4
  int v13; // eax
  int v14; // edi
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rbp
  char *v18; // rcx
  unsigned int *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C6580[2112];
#define v25 (*(_BYTE (*)[32])(void *)(sr_frame_1400C6580 + 0)) /* [rsp+0h] */
#define v26 (*(float (*)[4])(void *)(sr_frame_1400C6580 + 32)) /* [rsp+20h] */
#define v27 (*(__m128i (*)[64])(void *)(sr_frame_1400C6580 + 48)) /* [rsp+30h] */
#define v28 (*(char (*)[1024])(void *)(sr_frame_1400C6580 + 1072)) /* [rsp+430h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_1400C6580 + 2096)) /* [rsp+830h] */

  v2 = 0;
  LOBYTE(v4) = a2;
  v5 = a1;
  if ( (a2 & 0x100) == 0 )
    goto LABEL_4;
  LODWORD(v4) = toupper((unsigned __int8)a2);
  if ( (_DWORD)v4 == 82 )
  {
    v4 = 1760 * v5;
    *(_QWORD *)&dword_140404A6C[v4 + 278847551] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847553] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847555] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847557] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847559] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847561] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847563] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847565] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847567] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847569] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847571] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847573] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847575] = -1;
    LOBYTE(v4) = 0;
LABEL_4:
    v6 = toupper((unsigned __int8)v4);
    if ( v6 == 10 )
    {
      v7 = 1760 * v5;
      if ( dword_140404A6C[1760 * v5 + 278847584] )
      {
        LOBYTE(dword_140404A6C[v7 + 278846130]) = 0;
        sub_140050F90(a1, 1);
        dword_140404A6C[v7 + 278847584] = 0;
      }
      else
      {
        *(_OWORD *)&dword_140404A6C[v7 + 278846130] = xmmword_1402760E8;
        LOWORD(dword_140404A6C[v7 + 278846134]) = 11822;
        BYTE2(dword_140404A6C[v7 + 278846134]) = 0;
        sub_140050F90(a1, 1);
        dword_140404A6C[v7 + 278847584] = (int)(float)((float)((float)(1.0 - sub_1400C58E0(a1)) * 600.0) + 20.0);
      }
    }
    v21 = 1760 * v5;
    if ( (int)dword_140404A6C[1760 * v5 + 278847584] <= 0 )
    {
      v22 = (int)dword_140404A6C[v21 + 278847583];
      v23 = v6 - 65;
      if ( (_DWORD)v22 == -1 )
      {
        if ( v23 <= 0x19 )
          dword_140404A6C[v21 + 278847583] = v23;
      }
      else
      {
        if ( v23 > 0x19 )
        {
          if ( v6 == 32 )
            dword_140404A6C[1760 * v5 + 278847551 + v22] = -1;
        }
        else
        {
          dword_140404A6C[1760 * v5 + 278847551 + v22] = v23;
        }
        dword_140404A6C[v21 + 278847583] = -1;
      }
      sub_1400C5750(a1);
    }
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  if ( (_DWORD)v4 != 80 )
  {
    if ( (_DWORD)v4 == 88 )
    {
      dword_140404A6C[1760 * v5 + 278847324] = 0;
      v20 = &dword_140404A6C[1760 * v5 + 278846114];
      do
      {
        *(_BYTE *)v20 = 0;
        sub_140050F90(a1, v2++);
        v20 += 16;
      }
      while ( v2 < 24 );
      return 0; /* compatibility result discarded by all reviewed callers */
    }
    goto LABEL_4;
  }
  v8 = 1760 * v5;
  v9 = (int)dword_140404A6C[1760 * v5 + 278847323];
  if ( (_DWORD)v9 != -1 )
  {
    v10 = 5 * v9;
    if ( (int)dword_140404A6C[5 * v9 + 188872241] < 4 )
    {
      v11 = (float)(*(float *)&dword_140404A6C[v8 + 278845936] * 0.5) + *(float *)&dword_140404A6C[v8 + 278845918];
      v26[0] = (float)(*(float *)&dword_140404A6C[v8 + 278845934] * 0.5) + *(float *)&dword_140404A6C[v8 + 278845916];
      v12 = *(float *)&dword_140404A6C[v8 + 278845935];
      v26[2] = v11;
      v26[1] = (float)(v12 * 0.5) + *(float *)&dword_140404A6C[v8 + 278845917];
      v13 = sr_CreateItem(34, v26, nullptr, (float *)&dword_140404A6C[v8 + 278845934]);
      v14 = dword_140404A6C[v8 + 278846112];
      v15 = v13;
      v16 = 23;
      v17 = 110 * v5;
      SR_VEC_LANES(128, v27[0], i8)[0] = 0;
      do
      {
        sub_140158AB0(v28, "%s\n", (     char *)&dword_140404A6C[16 * (v17 + v14) + 278846114]);
        v18 = &v25[47];
        while ( *++v18 != 0 )
          ;
        strcpy(v18, v28);
        v14 = ((_BYTE)v14 + 1) & 0x1F;
        --v16;
      }
      while ( v16 );
      sub_1400584B0(v15, v27);
      ++dword_140404A6C[v10 + 188872241];
      dword_140404A6C[1760 * v15 + 278845895] = 1;
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29

// 1402760E8: using guessed type __int128 xmmword_1402760E8;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C6980) ----------------------------------------------------
__int64            sub_1400C6980(int a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 result; // rax
  int v5; // edi
  int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = 1760LL * a1;
  v3 = a1;
  result = dword_140404A6C[v2 + 278847584];
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    dword_140404A6C[v2 + 278847584] = result;
    if ( !(_DWORD)result )
    {
      v5 = 0;
      v6 = rand() % 26;
      v7 = 1760 * v3;
      do
      {
        v8 = v7 + (int)dword_140404A6C[v7 + 278847455 + v6];
        if ( dword_140404A6C[v8 + 278847519] && dword_140404A6C[v8 + 278847551] == -1 )
          break;
        ++v5;
        v6 = rand() % 26;
      }
      while ( v5 < 1000 );
      dword_140404A6C[v7 + 278847551 + (int)dword_140404A6C[v7 + 278847455 + v6]] = v6;
      sub_1400C5750(a1);
      LOBYTE(dword_140404A6C[v2 + 278846130]) = 0;
      return sub_140050F90(a1, 1);
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C6D90) ----------------------------------------------------
int            sub_1400C6D90(int a1, int a2)
{
  __int64 v3; // r14
  int v4; // r8d
  __int64 v5; // r13
  __int64 v6; // rbp
  unsigned int *v7; // rax
  int v8; // r15d
  unsigned int *v9; // rsi
  signed int v10; // edi
  unsigned int *v11; // rbx
  __m128i si128; // xmm0
  int v13; // edx
  _BYTE *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v17; // esi
  unsigned int *v18; // rbx
  __int64 v19; // rdx
  char *v20; // r11
  int *v21; // r10
  char *v22; // rcx
  bool v23; // zf
  int v24; // ecx
  _WORD *v25; // rcx
  _WORD *v26; // rcx
  __int64 v27; // r9
  unsigned int *v28; // rcx
  char v29; // al
  __int64 v30; // rcx
  unsigned int *v31; // rdx
  char v32; // r8
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rcx
  unsigned int *v36; // r8

  v3 = 1760LL * a1;
  v4 = a2;
  v5 = a1;
  v6 = -1;
  LODWORD(v7) = dword_140404A6C[v3 + 278847324];
  if ( (_DWORD)v7 == 1 )
  {
    dword_140404A6C[v3 + 278846113] = -1;
    sub_1400C6580(a1, a2);
    LODWORD(v7) = dword_140404A6C[v3 + 278847324];
    if ( (_DWORD)v7 == 1 )
      return (int)v7;
    v4 = 8;
  }
  if ( (_DWORD)v7 == 2 )
  {
    dword_140404A6C[v3 + 278846113] = -1;
    sub_1400C7450(a1, v4);
    LODWORD(v7) = dword_140404A6C[v3 + 278847324];
    if ( (_DWORD)v7 == 2 )
      return (int)v7;
    v4 = 8;
  }
  v8 = 1;
  if ( (_DWORD)v7 == 3 )
  {
    dword_140404A6C[v3 + 278846113] = -1;
    if ( (v4 & 0x100) != 0 )
    {
      LODWORD(v7) = toupper((unsigned __int8)v4);
      if ( (_DWORD)v7 == 88 )
      {
        dword_140404A6C[v3 + 278847324] = 0;
        v9 = &dword_140404A6C[v3 + 278846114];
        v10 = 0;
        v11 = &dword_140404A6C[v3 + 278846626];
        do
        {
          si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
          *(_BYTE *)v9 = 0;
          _mm_storeu_si128((__m128i *)(void *)v11, si128);
          _mm_storeu_si128((__m128i *)(void *)(v11 + 4), si128);
          _mm_storeu_si128((__m128i *)(void *)(v11 + 8), si128);
          *((_QWORD *)v11 + 6) = SR_VEC_LANES(128, si128, i64)[0];
          v11[14] = SR_VEC_LANES(128, si128, i32)[0];
          *((_WORD *)v11 + 30) = SR_VEC_LANES(128, si128, i16)[0];
          *((_BYTE *)v11 + 62) = SR_VEC_LANES(128, si128, i8)[0];
          LODWORD(v7) = sub_140050F90(a1, v10++);
          v11 += 16;
          v9 += 16;
        }
        while ( v10 < 24 );
      }
    }
    else
    {
      switch ( v4 )
      {
        case 19:
          if ( dword_140404A6C[v3 + 278847330] != 2 )
            dword_140404A6C[v3 + 278847330] = 0;
          break;
        case 18:
          if ( dword_140404A6C[v3 + 278847330] )
            dword_140404A6C[v3 + 278847330] = 2;
          break;
        case 17:
          if ( dword_140404A6C[v3 + 278847330] != 3 )
            dword_140404A6C[v3 + 278847330] = 1;
          break;
        default:
          if ( v4 == 16 && dword_140404A6C[v3 + 278847330] != 1 )
            dword_140404A6C[v3 + 278847330] = 3;
          break;
      }
    }
    if ( dword_140404A6C[v3 + 278847324] == 3 )
      return (int)v7;
    LOBYTE(v4) = 8;
  }
  v13 = 0;
  v14 = (char *)&dword_140404A6C[v3 + 278847154] + 1;
  while ( *(v14 - 1) )
  {
    if ( !*v14 )
    {
      ++v13;
      break;
    }
    v14 += 2;
    v13 += 2;
    if ( (intptr_t)((uintptr_t)(v14) - (uintptr_t)(((char *)&dword_140404A6C[v3 + 278847154] + 1))) >= 62 )
      break;
  }
  if ( (int)dword_140404A6C[v3 + 278847244] <= 0 )
  {
    if ( (unsigned __int8)v4 == 10 )
    {
      sub_1400C3E00(a1);
      LODWORD(v7) = sub_1400C4280(a1);
      LOBYTE(dword_140404A6C[v3 + 278847154]) = 0;
      if ( (int)dword_140404A6C[v3 + 278847244] > 0 || dword_140404A6C[v3 + 278847324] )
        return (int)v7;
    }
    else if ( (unsigned __int8)v4 == 8 )
    {
      if ( v13 > 0 )
        *((_BYTE *)&dword_140404A6C[v3 + 278847153] + v13 + 3) = 0;
    }
    else if ( v13 < 62 )
    {
      v15 = v3 * 4 + v13;
      *((_BYTE *)&dword_140404A6C[278847154] + v15) = v4;
      *((_BYTE *)&dword_140404A6C[278847154] + v15 + 1) = 0;
    }
    v16 = (int)dword_140404A6C[v3 + 278847170];
    v17 = 0;
    if ( (_DWORD)v16 == 2 )
    {
      v17 = dword_140404A6C[v3 + 278846098];
    }
    else if ( !(_DWORD)v16 && (int)dword_140404A6C[v3 + 278845906] > 0 )
    {
      v17 = dword_140404A6C[1760 * dword_140404A6C[v3 + 278845907] + 278846098];
    }
    v18 = &dword_140404A6C[v3 + 278847138];
    sub_140158AB0(v18, "%c:\\", (unsigned int)(v16 + 65));
    v19 = v3 * 4 + 72 * v16;
    v20 = (char *)&dword_140404A6C[278845893] + v19;
    if ( *(int *)((char *)&dword_140404A6C[278847172] + v19) >= 1 )
    {
      v21 = (int *)((char *)&dword_140404A6C[278847174] + v19);
      do
      {
        v22 = (char *)v18 - 1;
        do
          v23 = *++v22 == 0;
        while ( !v23 );
        strcpy(v22, (     char *)&dword_140404A6C[2570 * v17 + 275753048 + 4 * *v21]);
        v24 = *((_DWORD *)v20 + 1279);
        if ( v8 < v24 )
        {
          v25 = (_WORD *)((char *)v18 - 1);
          do
          {
            v23 = *((_BYTE *)v25 + 1) == 0;
            v25 = (_WORD *)((char *)v25 + 1);
          }
          while ( !v23 );
          *v25 = 92;
          v24 = *((_DWORD *)v20 + 1279);
        }
        ++v8;
        ++v21;
      }
      while ( v8 <= v24 );
    }
    v26 = (_WORD *)((char *)v18 - 1);
    do
    {
      v23 = *((_BYTE *)v26 + 1) == 0;
      v26 = (_WORD *)((char *)v26 + 1);
    }
    while ( !v23 );
    *v26 = 62;
    v27 = 110 * v5;
    v28 = &dword_140404A6C[16 * (110 * v5 + (int)dword_140404A6C[v3 + 278846111]) + 278846114];
    do
    {
      v29 = *(_BYTE *)v18;
      v18 = (unsigned int *)((char *)v18 + 1);
      *(_BYTE *)v28 = v29;
      v28 = (unsigned int *)((char *)v28 + 1);
    }
    while ( v29 );
    do
      ++v6;
    while ( *((_BYTE *)&dword_140404A6C[16 * v27 + 278846114 + 16 * (int)dword_140404A6C[v3 + 278846111]] + v6) );
    v30 = (int)v6;
    if ( (int)v6 < 62LL )
    {
      v31 = &dword_140404A6C[v3 + 278847154];
      do
      {
        v32 = *(_BYTE *)v31;
        if ( !*(_BYTE *)v31 )
          break;
        v31 = (unsigned int *)((char *)v31 + 1);
        LODWORD(v6) = v6 + 1;
        v33 = v30 + ((v27 + (int)dword_140404A6C[v3 + 278846111]) << 6);
        ++v30;
        *((_BYTE *)&dword_140404A6C[278846114] + v33) = v32;
      }
      while ( v30 < 62 );
    }
    v34 = _mm_load_si128((     __m128i *)&xmmword_140279200);
    *((_BYTE *)&dword_140404A6C[16 * v27 + 278846114 + 16 * (int)dword_140404A6C[v3 + 278846111]] + (int)v6) = 0;
    v35 = (int)dword_140404A6C[v3 + 278846111];
    dword_140404A6C[v3 + 278846113] = v6 + (dword_140404A6C[v3 + 278846111] << 6);
    v36 = &dword_140404A6C[16 * (v27 + v35) + 278846626];
    _mm_storeu_si128((__m128i *)(void *)v36, v34);
    _mm_storeu_si128((__m128i *)(void *)(v36 + 4), v34);
    _mm_storeu_si128((__m128i *)(void *)(v36 + 8), v34);
    *((_QWORD *)v36 + 6) = SR_VEC_LANES(128, v34, i64)[0];
    v36[14] = SR_VEC_LANES(128, v34, i32)[0];
    *((_WORD *)v36 + 30) = SR_VEC_LANES(128, v34, i16)[0];
    *((_BYTE *)v36 + 62) = SR_VEC_LANES(128, v34, i8)[0];
    sub_140050F90(a1, dword_140404A6C[v3 + 278846111]);
    v7 = &dword_140404A6C[278845893];
    dword_140404A6C[v3 + 278846101] = 0;
  }
  else
  {
    v7 = (unsigned int *)(int)dword_140404A6C[v3 + 278847258];
    if ( (int)v7 < 64 )
    {
      dword_140404A6C[(_QWORD)&v7[440 * v5] + 278847259] = (unsigned __int8)v4;
      ++dword_140404A6C[v3 + 278847258];
    }
  }
  return (int)v7;
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C72B0) ----------------------------------------------------
__int64            sub_1400C72B0(int a1)
{
  __int64 v1; // r14
  __int64 v2; // r12
  signed int v3; // edi
  char *v4; // rbx
  __m128i si128; // xmm0
  unsigned int *v6; // rcx
  __int64 result; // rax
  bool v8; // zf
  unsigned int v9; // eax
  __int64 v10; // rcx

  v1 = a1;
  v2 = 1760LL * a1;
  *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x420u);
  dword_140404A6C[v2 + 278847328] = -1;
  v3 = 0;
  v4 = (char *)&dword_140404A6C[1760 * v1 + 278846114];
  do
  {
    *v4 = 0;
    if ( !v3 )
      strcpy(v4, "CONNECTING...");
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
    v6 = &dword_140404A6C[16 * (110 * v1 + (unsigned int)v3) + 278846626];
    *(__m128i *)v6 = si128;
    *((__m128i *)v6 + 1) = si128;
    *((__m128i *)v6 + 2) = si128;
    *((_QWORD *)v6 + 6) = SR_VEC_LANES(128, si128, i64)[0];
    v6[14] = SR_VEC_LANES(128, si128, i32)[0];
    *((_WORD *)v6 + 30) = SR_VEC_LANES(128, si128, i16)[0];
    *((_BYTE *)v6 + 62) = SR_VEC_LANES(128, si128, i8)[0];
    result = sub_140050F90(v1, v3++);
    v4 += 64;
  }
  while ( v3 < 24 );
  dword_140404A6C[v2 + 278847326] = 256;
  v8 = dword_140404A6C[456202453] == 0;
  dword_140404A6C[v2 + 278847325] = 0;
  if ( !v8 )
  {
    v9 = dword_140404A6C[283831474];
    v10 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v10) = 19;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v10) = v9;
    result = dword_140404A6C[283786017];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v10) = dword_140404A6C[283786017];
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v10) = v1;
    *(unsigned int *)((char *)&dword_140404A6C[297756297] + v10) = 1065353216;
    *(unsigned int *)((char *)&dword_140404A6C[297756298] + v10) = 1065353216;
  }
  return result;
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E936F0: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400C7450) ----------------------------------------------------
void            sub_1400C7450(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // r9
  signed int v7; // ebx
  unsigned int *v8; // rsi
  __int64 v9; // rdi
  __m128i v10; // xmm0
  unsigned int *v11; // rsi
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  signed int v16; // r10d
  signed int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // r9
  __int64 v20; // rcx
  signed int v21; // ebx
  unsigned int *v22; // rsi
  __int64 v23; // rdi
  __m128i v24; // xmm0
  int v25; // eax
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  signed int v29; // eax
  unsigned int v30; // eax
  signed int v31; // ebx
  unsigned int *v32; // rsi
  __int64 v33; // rdi
  __m128i si128; // xmm0

  v3 = 1760LL * a1;
  v4 = a1;
  if ( (int)dword_140404A6C[v3 + 278847326] > 0 )
    return;
  v5 = (int)dword_140404A6C[v3 + 278847323];
  if ( (_DWORD)v5 == -1 || (v6 = (int)dword_140404A6C[v3 + 278846098], (_DWORD)v6 == -1) )
  {
    v31 = 0;
    dword_140404A6C[v3 + 278847324] = 0;
    v32 = &dword_140404A6C[v3 + 278846114];
    v33 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 1119599860;
    do
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
      *(_BYTE *)v32 = 0;
      *(__m128i *)v33 = si128;
      *(__m128i *)(v33 + 16) = si128;
      *(__m128i *)(v33 + 32) = si128;
      *(_QWORD *)(v33 + 48) = SR_VEC_LANES(128, si128, i64)[0];
      *(_DWORD *)(v33 + 56) = SR_VEC_LANES(128, si128, i32)[0];
      *(_WORD *)(v33 + 60) = SR_VEC_LANES(128, si128, i16)[0];
      *(_BYTE *)(v33 + 62) = SR_VEC_LANES(128, si128, i8)[0];
      sub_140050F90(a1, v31++);
      v33 += 64;
      v32 += 16;
    }
    while ( v31 < 24 );
    return;
  }
  if ( (a2 & 0x100) != 0 )
  {
    if ( toupper((unsigned __int8)a2) == 88 )
    {
      v7 = 0;
      dword_140404A6C[v3 + 278847324] = 0;
      v8 = &dword_140404A6C[v3 + 278846114];
      v9 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 1119599860;
      do
      {
        v10 = _mm_load_si128((     __m128i *)&xmmword_140279200);
        *(_BYTE *)v8 = 0;
        *(__m128i *)v9 = v10;
        *(__m128i *)(v9 + 16) = v10;
        *(__m128i *)(v9 + 32) = v10;
        *(_QWORD *)(v9 + 48) = SR_VEC_LANES(128, v10, i64)[0];
        *(_DWORD *)(v9 + 56) = SR_VEC_LANES(128, v10, i32)[0];
        *(_WORD *)(v9 + 60) = SR_VEC_LANES(128, v10, i16)[0];
        *(_BYTE *)(v9 + 62) = SR_VEC_LANES(128, v10, i8)[0];
        sub_140050F90(a1, v7++);
        v9 += 64;
        v8 += 16;
      }
      while ( v7 < 24 );
    }
    return;
  }
  v11 = &dword_140404A6C[v3 + 278847327];
  v12 = dword_140404A6C[v3 + 278847327];
  if ( !v12 )
  {
    switch ( a2 )
    {
      case 16:
        v13 = dword_140404A6C[v3 + 278847328];
        if ( v13 > -2 )
          dword_140404A6C[v3 + 278847328] = v13 - 1;
        break;
      case 17:
        v14 = dword_140404A6C[v3 + 278847328];
        if ( v14 < 7 )
          dword_140404A6C[v3 + 278847328] = v14 + 1;
        break;
      case 10:
        v15 = dword_140404A6C[v3 + 278847328];
        if ( v15 > 6 )
        {
          if ( v15 == -1 )
          {
            v16 = 0;
            dword_140404A6C[v3 + 278847332] = 0;
            v17 = 0;
            if ( (int)dword_140404A6C[2570 * v6 + 275754072] > 0 )
            {
              v18 = dword_140404A6C[v3 + 278846098];
              v19 = 0;
              do
              {
                if ( dword_140404A6C[2570 * (int)v18 + 275754078 + v19] == dword_140404A6C[v3 + 278847331] )
                {
                  dword_140404A6C[1760 * v4 + 278847333 + v16] = v17;
                  v16 = dword_140404A6C[v3 + 278847332] + 1;
                  dword_140404A6C[v3 + 278847332] = v16;
                  v18 = dword_140404A6C[v3 + 278846098];
                }
                ++v17;
                v19 += 6;
              }
              while ( v17 < (int)dword_140404A6C[2570 * v18 + 275754072] );
            }
            *v11 = 2;
            dword_140404A6C[v3 + 278847329] = 0;
          }
          else
          {
            if ( v15 != -2 )
            {
              v21 = 0;
              dword_140404A6C[v3 + 278847324] = 0;
              v22 = &dword_140404A6C[v3 + 278846114];
              v23 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 1119599860;
              do
              {
                v24 = _mm_load_si128((     __m128i *)&xmmword_140279200);
                *(_BYTE *)v22 = 0;
                *(__m128i *)v23 = v24;
                *(__m128i *)(v23 + 16) = v24;
                *(__m128i *)(v23 + 32) = v24;
                *(_QWORD *)(v23 + 48) = SR_VEC_LANES(128, v24, i64)[0];
                *(_DWORD *)(v23 + 56) = SR_VEC_LANES(128, v24, i32)[0];
                *(_WORD *)(v23 + 60) = SR_VEC_LANES(128, v24, i16)[0];
                *(_BYTE *)(v23 + 62) = SR_VEC_LANES(128, v24, i8)[0];
                sub_140050F90(a1, v21++);
                v23 += 64;
                v22 += 16;
              }
              while ( v21 < 24 );
              return;
            }
            v20 = 5 * v5;
            if ( (int)dword_140404A6C[v20 + 188872240] <= 8 )
              dword_140404A6C[v20 + 188872240] = 0;
          }
        }
        else
        {
          *v11 = 1;
          dword_140404A6C[v3 + 278847329] = 0;
        }
        break;
    }
    goto LABEL_54;
  }
  if ( v12 == 1 )
  {
    if ( a2 == 16 )
    {
      v25 = dword_140404A6C[v3 + 278847329];
      if ( v25 > 0 )
        dword_140404A6C[v3 + 278847329] = v25 - 1;
      goto LABEL_54;
    }
    if ( a2 == 17 )
    {
      v26 = dword_140404A6C[v3 + 278847329];
      if ( v26 < 0 )
        dword_140404A6C[v3 + 278847329] = v26 + 1;
      goto LABEL_54;
    }
    if ( a2 != 10 )
      goto LABEL_54;
    v27 = dword_140404A6C[v3 + 278847329] == 0;
    goto LABEL_52;
  }
  if ( v12 != 2 )
    goto LABEL_54;
  if ( a2 == 16 )
  {
    v28 = dword_140404A6C[v3 + 278847330];
    if ( v28 > 0 )
      dword_140404A6C[v3 + 278847330] = v28 - 1;
    goto LABEL_54;
  }
  if ( a2 == 17 )
  {
    v29 = dword_140404A6C[v3 + 278847330];
    if ( v29 < (int)dword_140404A6C[v3 + 278847332] )
      dword_140404A6C[v3 + 278847330] = v29 + 1;
    goto LABEL_54;
  }
  if ( a2 != 10 )
  {
    v27 = a2 == 8;
LABEL_52:
    if ( v27 )
      goto LABEL_53;
    goto LABEL_54;
  }
  if ( (int)dword_140404A6C[v3 + 278847330] >= (int)dword_140404A6C[v3 + 278847332] )
  {
LABEL_53:
    *v11 = 0;
    goto LABEL_54;
  }
  dword_140404A6C[v3 + 278847325] = 1;
  dword_140404A6C[v3 + 278847326] = 255;
LABEL_54:
  v30 = *v11;
  if ( !*v11 )
  {
    sub_1400C7890(a1);
    v30 = *v11;
  }
  if ( v30 == 1 )
  {
    sub_1400C7FC0(a1);
    v30 = *v11;
  }
  if ( v30 == 2 )
    sub_1400C86D0(a1);
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C7890) ----------------------------------------------------
__int64            sub_1400C7890(int a1)
{
    extern void computer_draw_mission_menu(int);
    computer_draw_mission_menu(a1);
    return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400C7FC0) ----------------------------------------------------
__int64            sub_1400C7FC0(int a1)
{
    extern void computer_draw_mission_document(int);
    computer_draw_mission_document(a1);
    return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400C8500) ----------------------------------------------------
void sub_1400C8500(int item)
{
  extern void computer_update_program(int);
  computer_update_program(item);
}

//----- (00000001400C86D0) ----------------------------------------------------
__int64            sub_1400C86D0(int a1)
{
    extern void computer_draw_mission_upload(int);
    computer_draw_mission_upload(a1);
    return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400C8E10) ----------------------------------------------------
__int64            sub_1400C8E10(int a1)
{
  /* src/engine/items/computer_snake.c */
  extern void snake_draw(int item);
  snake_draw(a1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C9120) ----------------------------------------------------
void            sub_1400C9120(int a1, int a2)
{
  __int64 v2; // rbp
  signed int v3; // edi
  unsigned int *v4; // rsi
  unsigned int *v5; // rbx
  __m128i si128; // xmm0

  v2 = a1;
  if ( (a2 & 0x100) != 0 )
  {
    if ( toupper((unsigned __int8)a2) == 88 )
    {
      v3 = 0;
      v4 = &dword_140404A6C[1760 * v2 + 278846114];
      dword_140404A6C[1760 * v2 + 278847324] = 0;
      v5 = &dword_140404A6C[1760 * v2 + 278846626];
      do
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
        *(_BYTE *)v4 = 0;
        *(__m128i *)v5 = si128;
        *((__m128i *)v5 + 1) = si128;
        *((__m128i *)v5 + 2) = si128;
        *((_QWORD *)v5 + 6) = SR_VEC_LANES(128, si128, i64)[0];
        v5[14] = SR_VEC_LANES(128, si128, i32)[0];
        *((_WORD *)v5 + 30) = SR_VEC_LANES(128, si128, i16)[0];
        *((_BYTE *)v5 + 62) = SR_VEC_LANES(128, si128, i8)[0];
        sub_140050F90(v2, v3++);
        v5 += 16;
        v4 += 16;
      }
      while ( v3 < 24 );
    }
  }
  else
  {
    switch ( a2 )
    {
      case 19:
        if ( dword_140404A6C[1760 * a1 + 278847330] != 2 )
          dword_140404A6C[1760 * a1 + 278847330] = 0;
        break;
      case 18:
        if ( dword_140404A6C[1760 * a1 + 278847330] )
          dword_140404A6C[1760 * a1 + 278847330] = 2;
        break;
      case 17:
        if ( dword_140404A6C[1760 * a1 + 278847330] != 3 )
          dword_140404A6C[1760 * a1 + 278847330] = 1;
        break;
      default:
        if ( a2 == 16 && dword_140404A6C[1760 * a1 + 278847330] != 1 )
          dword_140404A6C[1760 * a1 + 278847330] = 3;
        break;
    }
  }
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C92B0) ----------------------------------------------------
__int64            sub_1400C92B0(int a1)
{
  /* src/engine/items/computer_snake.c */
  extern void snake_start_level(int item);
  snake_start_level(a1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C9820) ----------------------------------------------------
void            sub_1400C9820(int a1)
{
  /* src/engine/items/computer_snake.c */
  extern void computer_update_snake(int item);
  computer_update_snake(a1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C9B60) ----------------------------------------------------
void            sub_1400C9B60(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // esi
  int v8; // r8d
  __int64 v9; // rdi
  __int64 v10; // rax

  v1 = a1;
  v2 = 1760LL * a1;
  v3 = dword_140404A6C[v2 + 278847324];
  if ( !v3 )
  {
    sub_1400C3ED0(a1);
    v3 = dword_140404A6C[v2 + 278847324];
  }
  v4 = v3;
  if ( v3 == 1 )
  {
    v5 = dword_140404A6C[v2 + 278847584];
    if ( v5 > 0 )
    {
      v6 = v5 - 1;
      dword_140404A6C[v2 + 278847584] = v6;
      if ( !v6 )
      {
        v7 = 0;
        v8 = rand() % 26;
        v9 = 1760 * v1;
        do
        {
          v10 = v9 + (int)dword_140404A6C[v9 + 278847455 + v8];
          if ( dword_140404A6C[v10 + 278847519] && dword_140404A6C[v10 + 278847551] == -1 )
            break;
          ++v7;
          v8 = rand() % 26;
        }
        while ( v7 < 1000 );
        dword_140404A6C[v9 + 278847551 + (int)dword_140404A6C[v9 + 278847455 + v8]] = v8;
        sub_1400C5750(v1);
        LOBYTE(dword_140404A6C[v2 + 278846130]) = 0;
        sub_140050F90(v1, 1);
        v4 = dword_140404A6C[v2 + 278847324];
      }
    }
  }
  if ( v4 == 2 )
  {
    sub_1400C8500(v1);
    v4 = dword_140404A6C[v2 + 278847324];
  }
  if ( v4 == 3 )
    sub_1400C9820(v1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CDFF0) ----------------------------------------------------
__int64 sub_1400CDFF0(int item)
{
  extern void item_restore_block_part(int item);
  item_restore_block_part(item);
  return 0; /* compatibility result is unused by the reviewed callers */
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];


//----- (000000014004C960) ----------------------------------------------------
__int64 sub_14004C960(int item, int drive)
{
  extern uint32_t computer_resolve_drive(int, int);
  return (__int64)computer_resolve_drive(item, drive);
}

//----- (000000014004C9C0) ----------------------------------------------------
__int64            sub_14004C9C0(int a1, int *a2, int *a3, __int64 a4, int *a5)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 i; // rax
  unsigned __int8 v11; // al
  int *v12; // r11
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  signed int v16; // r10d
  __int64 v17; // r8
  __int64 v18; // r13
  int v19; // edx
  char v20; // cl
  __int64 v21; // rcx
  char v22; // al
  int v23; // r10d
  __int64 v24; // rbp
  int v25; // edi
  _DWORD *j; // r11
  unsigned int *v27; // rax
  _BYTE *v28; // r9
  int v29; // ecx
  int v30; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004C9C0[576];
#define v32 (*(__int64 (*))(void *)(sr_frame_14004C9C0 + 0)) /* [rsp+0h] */
#define v33 (*(int * (*))(void *)(sr_frame_14004C9C0 + 32)) /* [rsp+20h] */
#define v34 (*(_BYTE (*)[512])(void *)(sr_frame_14004C9C0 + 48)) /* [rsp+30h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_14004C9C0 + 560)) /* [rsp+230h] */

  v33 = a5;
  v8 = a1;
  v9 = *a5;
  for ( i = v9; i < 62; ++i )
  {
    if ( *(_BYTE *)(i + a4) != 32 )
      break;
    LODWORD(v9) = v9 + 1;
  }
  v11 = toupper(*(unsigned __int8 *)((int)v9 + a4));
  if ( (unsigned __int8)(v11 - 65) <= 0x19u && *(_BYTE *)((int)v9 + a4 + 1) == 58 )
  {
    *a2 = v11 - 65;
    LODWORD(v9) = v9 + 2;
  }
  v12 = v33;
  *v33 = v9;
  v13 = *a2;
  if ( (_DWORD)v13 == 2 )
  {
    v14 = 1760 * v8;
    v15 = v8;
    v16 = dword_140404A6C[1760 * v8 + 278846098];
  }
  else
  {
    if ( (_DWORD)v13 )
      return (unsigned int)-1; /* 0x14004CA7E: jne -> mov eax, 0xffffffff */
    v14 = 1760 * v8;
    v15 = v8;
    if ( (int)dword_140404A6C[1760 * v8 + 278845906] <= 0 )
      return (unsigned int)-1; /* 0x14004CA9D: jle -> mov eax, 0xffffffff */
    v16 = dword_140404A6C[1760 * dword_140404A6C[v14 + 278845907] + 278846098];
  }
  if ( v16 != -1 )
  {
    *a3 = dword_140404A6C[1760 * v15 + 278847173 + 18 * v13 + (int)dword_140404A6C[18 * v13 + 278847172 + v14]];
    if ( *(_BYTE *)((int)v9 + a4) == 92 )
    {
      *a3 = 0;
      LODWORD(v9) = v9 + 1;
    }
    v17 = (int)v9;
    v18 = v16;
    while ( 1 )
    {
      while ( 1 )
      {
        *v12 = v9;
        if ( *(_BYTE *)(v17 + a4) != 46 )
          break;
        ++v17;
        v19 = v9 + 1;
        if ( *(_BYTE *)(v17 + a4) == 46 )
        {
          v20 = *(_BYTE *)((int)v9 + a4 + 2);
          if ( v20 != 92 && v20 )
            return (unsigned int)-1; /* 0x14004CB3A: jne -> mov eax, 0xffffffff */
          ++v17;
          *a3 = dword_140404A6C[2570 * v18 + 275753051 + 4 * *a3];
        }
        else
        {
          v19 = v9;
        }
        LODWORD(v9) = v19 + 1;
        if ( *(_BYTE *)(v17 + a4) != 92 )
          break;
        LODWORD(v9) = v19 + 2;
        ++v17;
      }
      v21 = 0;
      if ( v17 < 62 )
      {
        do
        {
          v22 = *(_BYTE *)(v17 + a4);
          if ( v22 == 92 || v22 == 32 || !v22 )
            break;
          if ( v21 >= 12 )
            return (unsigned int)-1; /* 0x14004CB9A: jge -> mov eax, 0xffffffff */
          v34[v21] = v22;
          LODWORD(v9) = v9 + 1;
          ++v21;
          ++v17;
        }
        while ( v17 < 62 );
        if ( (unsigned __int64)v21 >= 0x200 )
          sub_1401F8694();
      }
      v34[v21] = 0;
      if ( v21 <= 0 )
        return 1; /* 0x14004CBC7: jle -> mov eax, 1 */
      v23 = 1;
      v24 = 2570 * v18;
      v25 = dword_140404A6C[2570 * v18 + 275753047];
      if ( v25 <= 1 )
        return 0; /* 0x14004CBE9: jle -> xor eax, eax */
      for ( j = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v24 * 4 + 1107225576); ; j += 4 )
      {
        if ( *j == *a3 )
        {
          v27 = &dword_140404A6C[4 * v23 + 275753048 + v24];
          v28 = (_BYTE *)(v34 - (_BYTE *)v27);
          do
          {
            v29 = (unsigned __int8)v28[(_QWORD)v27];
            v30 = *(unsigned __int8 *)v27 - v29;
            if ( v30 )
              break;
            v27 = (unsigned int *)((char *)v27 + 1);
          }
          while ( v29 );
          if ( !v30 )
            break;
        }
        if ( ++v23 >= v25 )
          return 0; /* 0x14004CC31: jge -> xor eax, eax */
      }
      if ( v23 == -1 )
        return 0; /* 0x14004CC40: je -> xor eax, eax */
      *a3 = v23;
      if ( *(_BYTE *)(v17 + a4) != 92 )
        return 1; /* 0x14004CC4B: jne -> mov eax, 1 */
      v12 = v33;
      LODWORD(v9) = v9 + 1;
      ++v17;
    }
  }
  return (unsigned int)-1; /* 0x14004CABE: je -> mov eax, 0xffffffff */
}
#undef v32
#undef v33
#undef v34
#undef v35

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140050F90) ----------------------------------------------------
__int64            sub_140050F90(int a1, signed int a2)
{
  /* src/engine/item_text.c */
  extern unsigned int computer_line_link(int item, int line);
  return computer_line_link(a1, a2);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (0000000140051170) ----------------------------------------------------
__int64            sub_140051170(int a1, unsigned int a2, int a3)
{
  __int64 v4; // rdx
  unsigned int *v5; // rax
  unsigned int v6; // ebx
  signed int v8; // ecx
  __int64 v9; // r9
  unsigned int v10; // eax

  v4 = a1;
  v5 = &dword_140404A6C[290382645];
  v6 = 0;
  while ( *v5 )
  {
    ++v6;
    v5 += 39;
    if ( (__int64)v5 >= (__int64)&dword_140404A6C[291021621] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v8 = 64;
  if ( a3 <= 64 )
    v8 = a3;
  v9 = 39LL * (int)v6;
  v10 = dword_140404A6C[283831474];
  dword_140404A6C[v9 + 290382649] = v4;
  dword_140404A6C[v9 + 290382651] = v8;
  dword_140404A6C[v9 + 290382650] = a2;
  dword_140404A6C[v9 + 290382648] = v10;
  *(_QWORD *)&dword_140404A6C[v9 + 290382645] = 1;
  dword_140404A6C[v9 + 290382647] = 0;
  sub_1401FC920(
    (__m128i *)&dword_140404A6C[v9 + 290382652],
    (     __m128i *)((char *)&dword_140404A6C[1760 * v4 + 278846111] + (int)(a2 << 6)),
    v8);
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (0000000140080690) ----------------------------------------------------
__int64 sub_140080690(int disk, unsigned int directory, char *name, unsigned int content)
{
  extern uint32_t disk_append_file(int, uint32_t, const char *, uint32_t);
  return (__int64)disk_append_file(disk, directory, name, content);
}

//----- (0000000140080720) ----------------------------------------------------
__int64            sub_140080720(int a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdi
  int v7; // r11d
  unsigned int *i; // r10
  unsigned int *v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  v3 = 1;
  v4 = 2570LL * a1;
  v7 = dword_140404A6C[v4 + 275753047];
  if ( v7 <= 1 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[v4 + 275753055]; ; i += 4 )
  {
    if ( *i == a2 )
    {
      v9 = &dword_140404A6C[4 * v3 + 275753048 + v4];
      v10 = a3 - (_QWORD)v9;
      do
      {
        v11 = *((unsigned __int8 *)v9 + v10);
        v12 = *(unsigned __int8 *)v9 - v11;
        if ( v12 )
          break;
        v9 = (unsigned int *)((char *)v9 + 1);
      }
      while ( v11 );
      if ( !v12 )
        break;
    }
    if ( (int)++v3 >= v7 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140080820) ----------------------------------------------------
__int64            sub_140080820(int a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  int v7; // r11d
  unsigned int *i; // r10
  unsigned int *v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  v3 = 0;
  v4 = 2570LL * a1;
  v7 = dword_140404A6C[v4 + 275754072];
  if ( v7 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[v4 + 275754078]; ; i += 6 )
  {
    if ( *i == a2 )
    {
      v9 = &dword_140404A6C[6 * v3 + 275754074 + v4];
      v10 = a3 - (_QWORD)v9;
      do
      {
        v11 = *((unsigned __int8 *)v9 + v10);
        v12 = *(unsigned __int8 *)v9 - v11;
        if ( v12 )
          break;
        v9 = (unsigned int *)((char *)v9 + 1);
      }
      while ( v11 );
      if ( !v12 )
        break;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (int)v3 >= v7 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v3;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C6B30) ----------------------------------------------------
void            sub_1400C6B30(_BYTE *a1, int a2, int a3)
{
    extern void computer_format_drive_path(char *, int, int);
    computer_format_drive_path((char *)a1, a2, a3);
}

//----- (00000001400C6C90) ----------------------------------------------------
__m128i *           sub_1400C6C90(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  signed int v4; // ebx
  __int64 v5; // rdx
  __m128i *result; // rax
  __m128i si128; // xmm0

  v2 = 1760LL * a1;
  v3 = (int)dword_140404A6C[v2 + 278846111];
  v4 = 2;
  dword_140404A6C[v2 + 278847170] = 2;
  dword_140404A6C[v2 + 278847323] = -1;
  strcpy((char *)&dword_140404A6C[1760 * a1 + 278846114 + 16 * v3], "STARTING CS-DOS...");
  sub_1400C3E00(a1);
  sub_1400C3E00(a1);
  sub_1400C6D90(a1, 0);
  do
    sub_140050F90(a1, v4++);
  while ( v4 < 24 );
  v5 = 32;
  result = (__m128i *)&dword_140404A6C[v2 + 278846626];
  do
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
    *result = si128;
    result[1] = si128;
    result[2] = si128;
    result += 4;
    SR_VEC_LANES(128, result[-1], i64)[0] = SR_VEC_LANES(128, si128, i64)[0];
    SR_VEC_LANES(128, result[-1], i32)[2] = SR_VEC_LANES(128, si128, i32)[0];
    SR_VEC_LANES(128, result[-1], i16)[6] = SR_VEC_LANES(128, si128, i16)[0];
    SR_VEC_LANES(128, result[-1], i8)[14] = SR_VEC_LANES(128, si128, i8)[0];
    --v5;
  }
  while ( v5 );
  return result;
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C8AD0) ----------------------------------------------------
__int64            sub_1400C8AD0(_BYTE *a1, __int64 a2, int *a3)
{
  int v3; // r10d
  unsigned int v4; // edi
  int v7; // r11d
  int v8; // r9d
  char v9; // cl
  _BYTE *v10; // rdx
  char v11; // cl

  v3 = *a3;
  v4 = 0;
  v7 = 0;
  if ( *a3 < 62 )
  {
    v8 = *a3;
    do
    {
      v9 = *(_BYTE *)(v3 + a2);
      if ( (unsigned __int8)(v9 - 97) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 65) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 48) <= 9u )
        break;
      if ( !v9 )
        break;
      *a3 = ++v3;
      v8 = v3;
    }
    while ( v3 < 62 );
    if ( v8 < 62 )
    {
      v10 = a1;
      do
      {
        v11 = *(_BYTE *)(v8 + a2);
        if ( (unsigned __int8)(v11 - 97) > 0x19u
          && (unsigned __int8)(v11 - 65) > 0x19u
          && (unsigned __int8)(v11 - 48) > 9u
          && v11 != 46 )
        {
          break;
        }
        *v10 = v11;
        ++v7;
        ++v10;
        v8 = *a3 + 1;
        *a3 = v8;
      }
      while ( v8 < 62 );
    }
  }
  a1[v7] = 0;
  LOBYTE(v4) = v7 > 0;
  return v4;
}

// 1400C8B63: conditional instruction was optimized away because cl.1 is in (==2E|30..39)

//----- (00000001400C8BA0) ----------------------------------------------------
__int64            sub_1400C8BA0(_BYTE *a1, __int64 a2, int *a3)
{
  int v3; // r10d
  unsigned int v4; // edi
  int v7; // r11d
  int v8; // r9d
  char v9; // cl
  _BYTE *v10; // rdx
  char v11; // cl

  v3 = *a3;
  v4 = 0;
  v7 = 0;
  if ( *a3 < 62 )
  {
    v8 = *a3;
    do
    {
      v9 = *(_BYTE *)(v3 + a2);
      if ( (unsigned __int8)(v9 - 97) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 65) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 48) <= 9u )
        break;
      if ( !v9 )
        break;
      *a3 = ++v3;
      v8 = v3;
    }
    while ( v3 < 62 );
    if ( v8 < 62 )
    {
      v10 = a1;
      do
      {
        v11 = *(_BYTE *)(v8 + a2);
        if ( (unsigned __int8)(v11 - 97) > 0x19u
          && (unsigned __int8)(v11 - 65) > 0x19u
          && (unsigned __int8)(v11 - 48) > 9u )
        {
          break;
        }
        *v10 = v11;
        ++v7;
        ++v10;
        v8 = *a3 + 1;
        *a3 = v8;
      }
      while ( v8 < 62 );
    }
  }
  a1[v7] = 0;
  LOBYTE(v4) = v7 > 0;
  return v4;
}

// 1400C8C2E: conditional instruction was optimized away because cl.1 is in (30..39)

//----- (00000001400C8C70) ----------------------------------------------------
__int64            sub_1400C8C70(_BYTE *a1, __int64 a2, int *a3)
{
  int v3; // eax
  int v4; // r9d
  int v6; // r10d
  char v7; // dl
  __int64 v8; // rdx
  char v9; // al

  v3 = *a3;
  v4 = 0;
  if ( *a3 < 62 )
  {
    v6 = *a3;
    do
    {
      if ( *(_BYTE *)(v6 + a2) != 32 )
        break;
      *a3 = ++v6;
      v3 = v6;
    }
    while ( v6 < 62 );
  }
  v7 = *(_BYTE *)(v3 + a2);
  if ( (unsigned __int8)(v7 - 97) <= 0x19u || (unsigned __int8)(v7 - 65) <= 0x19u || (unsigned __int8)(v7 - 48) <= 9u )
  {
    *a1 = 0;
  }
  else
  {
    if ( v7 && v3 < 62 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= 2 )
          break;
        v9 = *(_BYTE *)(v3 + a2);
        if ( !v9 )
          break;
        a1[v8] = v9;
        ++v4;
        ++v8;
        v3 = *a3 + 1;
        *a3 = v3;
      }
      while ( v3 < 62 );
    }
    a1[v4] = 0;
    if ( v4 > 0 )
      return 1;
  }
  return 0;
}


//----- (00000001400C8D20) ----------------------------------------------------
__int64            sub_1400C8D20(int a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // ebx
  char *v6; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C8D20[2096];
#define v9 (*(_BYTE (*)[32])(void *)(sr_frame_1400C8D20 + 0)) /* [rsp+0h] */
#define v10 (*(__m128i (*)[64])(void *)(sr_frame_1400C8D20 + 32)) /* [rsp+20h] */
#define v11 (*(char (*)[1024])(void *)(sr_frame_1400C8D20 + 1056)) /* [rsp+420h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_1400C8D20 + 2080)) /* [rsp+820h] */

  SR_VEC_LANES(128, v10[0], i8)[0] = 0;
  v3 = 110LL * a2;
  v4 = 23;
  v5 = dword_140404A6C[1760 * a2 + 278846112];
  do
  {
    sub_140158AB0(v11, "%s\n", (     char *)&dword_140404A6C[16 * (v3 + v5) + 278846114]);
    v6 = &v9[31];
    while ( *++v6 != 0 )
      ;
    strcpy(v6, v11);
    v5 = ((_BYTE)v5 + 1) & 0x1F;
    --v4;
  }
  while ( v4 );
  return sub_1400584B0(a1, v10); /* 0x1400C8DE3: the result of this call is still in rax at the exit */
}
#undef v9
#undef v10
#undef v11
#undef v12

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C90D0) ----------------------------------------------------
__int64            sub_1400C90D0(int a1)
{
  __int64 v2; // rdx

  v2 = 1760LL * a1;
  *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x520u);
  return sub_1400C92B0(a1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

