#include "shared_client.h"

//----- (000000014004CCB0) ----------------------------------------------------
__int64            sub_14004CCB0(int a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int *v12;
  int *v13;
  __int64 v14;
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
      v12 = (int *)((char *)&g_182BBC57C + v9);
      *(unsigned int *)((char *)&g_182BBC57C + v9) = 0;
      *(unsigned int *)((char *)&g_182BBC580 + v9) = 0;
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

//----- (00000001400584B0) ----------------------------------------------------
__m128i *           sub_1400584B0(int a1,      __m128i *a2)
{
  __int64 v3;
  int v4;
  int *v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __m128i *result;
  int v12;
  signed int v13;
  unsigned int v14;
  __int64 v15;
  signed int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;

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
  result = crt_memcpy((__m128i *)&dword_140404A6C[v8 + 278846111], a2, v10);
  v12 = v10 >> 6;
  v13 = 0;
  HIBYTE(dword_140404A6C[v8 + 278846366]) = 0;
  if ( v12 >= 0 )
  {
    v14 = game_tick;
    v15 = 0;
    do
    {
      v16 = 0;
      v17 = 0;
      result = (__m128i *)&g_1857BD740;
      while ( SR_VEC_PTR_LANES(128, result, i32)[0] )
      {
        ++v16;
        ++v17;
        result = (__m128i *)((char *)result + 156);
        if ( (__int64)result >= (__int64)&g_185A2D740 )
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

//----- (000000014008F050) ----------------------------------------------------
void sub_14008F050()
{
  unsigned int *v0;
       __m128i *v1;
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;

  v0 = &g_1857BD750;
  v1 = (     __m128i *)&g_1857BD75C;
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
          crt_memcpy((__m128i *)((char *)&g_182BBB4F4 + v8), v1, v5);
          *((_BYTE *)&g_182BBB4F4 + v8 + v7) = 0;
          crt_memcpy((__m128i *)((char *)&g_182BBBCF4 + v8), v1 + 4, v7);
          dword_140404A6C[1760 * v6 + 278846101] = 0;
        }
      }
      else
      {
        v4 = 1760LL * (int)*v0;
        crt_memcpy((__m128i *)((char *)&dword_140404A6C[v4 + 278846111] + (int)(v0[1] << 6)), v1, (int)v0[2]);
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
  __m128i si128;
  __int64 v2;
  __int64 v3;
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  __int64 result;

  si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
  v2 = a1;
  v3 = 1760LL * a1;
  v4 = &dword_140404A6C[16 * ((int)dword_140404A6C[v3 + 278846111] + 110LL * a1) + 278846626];
  _mm_storeu_si128((__m128i *)(void *)v4, si128);
  _mm_storeu_si128((__m128i *)(void *)(v4 + 4), si128);
  _mm_storeu_si128((__m128i *)(void *)(v4 + 8), si128);
  *((_QWORD *)v4 + 6) = SR_VEC_LANES(128, si128, i64)[0];
  v4[14] = SR_VEC_LANES(128, si128, i32)[0];
  *((_WORD *)v4 + 30) = SR_VEC_LANES(128, si128, i16)[0];
  *((_BYTE *)v4 + 62) = SR_VEC_LANES(128, si128, i8)[0];
  sub_140050F90(a1, dword_140404A6C[v3 + 278846111]);
  v5 = dword_140404A6C[v3 + 278846111];
  v6 = dword_140404A6C[v3 + 278846112];
  if ( (((_BYTE)v5 + 10) & 0x1F) == v6 )
    dword_140404A6C[v3 + 278846112] = ((_BYTE)v6 + 1) & 0x1F;
  v7 = ((_BYTE)v5 + 1) & 0x1F;
  dword_140404A6C[v3 + 278846111] = v7;
  result = (unsigned int)(v7 << 6);
  ++dword_140404A6C[v2 + 280648157];
  dword_140404A6C[v3 + 278846113] = result;
  return result;
}

//----- (00000001400C3ED0) ----------------------------------------------------
int            sub_1400C3ED0(int a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  signed int v7;
  int *v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char *v15;
  unsigned int *v17;
  signed int v18;
  int *v19;

  v2 = 1760LL * a1;
  v3 = a1;
  LODWORD(v4) = dword_140404A6C[v2 + 278847244];
  if ( (int)v4 > 0 )
  {
    LODWORD(v4) = v4 - 1;
    dword_140404A6C[v2 + 278847244] = v4;
    if ( !(_DWORD)v4 )
    {
      if ( !dword_140404A6C[v2 + 278847243] )
      {
        v5 = sub_14004C960(a1, dword_140404A6C[v2 + 278847245]);
        v6 = 110 * v3;
        if ( v5 == -1 )
        {
          crt_sprintf(&dword_140404A6C[16 * (v6 + (int)dword_140404A6C[v2 + 278846111]) + 278846114], "DISK ERROR");
        }
        else
        {
          sub_140080690(
            v5,
            dword_140404A6C[v2 + 278847246],
            (char *)&dword_140404A6C[v2 + 278847249],
            dword_140404A6C[v2 + 278847257]);
          crt_sprintf(
            &dword_140404A6C[16 * (v6 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
            "  1 FILE(S) COPIED.");
        }
        sub_1400C3E00(a1);
        LODWORD(v4) = dword_140404A6C[v2 + 278847258];
        if ( (_DWORD)v4 )
        {
          v7 = 0;
          if ( (int)v4 > 0 )
          {
            v8 = (int *)&dword_140404A6C[v2 + 278847259];
            do
            {
              LODWORD(v4) = sub_1400C6D90(a1, *v8);
              ++v7;
              ++v8;
            }
            while ( v7 < (int)dword_140404A6C[v2 + 278847258] );
          }
          dword_140404A6C[v2 + 278847258] = 0;
        }
        else
        {
          LODWORD(v4) = sub_1400C6D90(a1, 8);
        }
      }
      if ( dword_140404A6C[v2 + 278847243] == 1 )
      {
        LODWORD(v4) = sub_14004C960(a1, dword_140404A6C[v2 + 278847245]);
        if ( (_DWORD)v4 == -1 )
        {
          crt_sprintf(
            &dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
            "DISK ERROR");
          LODWORD(v4) = sub_1400C3E00(a1);
        }
        else
        {
          v9 = 2570LL * (int)v4;
          v10 = dword_140404A6C[v9 + 275753047];
          while ( 1 )
          {
            while ( 1 )
            {
              v11 = (int)dword_140404A6C[v2 + 278847247];
              if ( (int)v11 < v10 )
                break;
              v13 = (int)dword_140404A6C[v2 + 278847248];
              if ( (int)v13 >= (int)dword_140404A6C[v9 + 275754072] )
                goto LABEL_27;
              v14 = v9 * 4 + 24 * v13;
              if ( *(unsigned int *)((char *)&g_181FEFBE4 + v14) == dword_140404A6C[v2 + 278847246] )
              {
                crt_sprintf(
                  &dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
                  "%s",
                  (     char *)&g_181FEFBD4 + v14);
                sub_1400C3E00(a1);
                v4 = (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *((_BYTE *)&g_182BBB4F4 + v4) = 0;
                ++dword_140404A6C[v2 + 278847248];
                dword_140404A6C[v2 + 278847244] = 4;
                goto LABEL_27;
              }
              LODWORD(v4) = v13 + 1;
              dword_140404A6C[v2 + 278847248] = v13 + 1;
            }
            v12 = v9 * 4 + 16 * v11;
            if ( *(unsigned int *)((char *)&g_181FEEBD8 + v12) == dword_140404A6C[v2 + 278847246] )
              break;
            LODWORD(v4) = v11 + 1;
            dword_140404A6C[v2 + 278847247] = v11 + 1;
          }
          crt_sprintf(
            &dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
            "%s            ",
            (     char *)&g_181FEEBCC + v12);
          HIBYTE(dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846116]) = 0;
          v15 = (char *)&dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846113] + 3;
          while ( *++v15 != 0 )
            ;
          strcpy(v15, "<DIR>");
          sub_1400C3E00(a1);
          v4 = (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) << 6;
          *((_BYTE *)&g_182BBB4F4 + v4) = 0;
          ++dword_140404A6C[v2 + 278847247];
          dword_140404A6C[v2 + 278847244] = 4;
        }
LABEL_27:
        if ( !dword_140404A6C[v2 + 278847244] )
        {
          sub_1400C3E00(a1);
          v17 = &dword_140404A6C[v2 + 278847258];
          LOBYTE(dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114]) = 0;
          LOBYTE(dword_140404A6C[v2 + 278847154]) = 0;
          LODWORD(v4) = dword_140404A6C[v2 + 278847258];
          if ( (_DWORD)v4 )
          {
            v18 = 0;
            if ( (int)v4 > 0 )
            {
              v19 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v2 * 4 + 1119602392);
              do
              {
                LODWORD(v4) = sub_1400C6D90(a1, *v19);
                ++v18;
                ++v19;
              }
              while ( v18 < (int)*v17 );
            }
            *v17 = 0;
          }
          else
          {
            LODWORD(v4) = sub_1400C6D90(a1, 8);
          }
        }
      }
    }
  }
  return v4;
}

//----- (00000001400C4280) ----------------------------------------------------
__int64            sub_1400C4280(int a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned int *v11;
  int v12;
  char v13;
  int v14;
  int v15;
  char *v16;
  char v17;
  int v18;
  char v19;
  __int64 v20;
  char v21;
  int v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char *v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  signed int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int *v43;
  char *v44;
  bool v45;
  char *v46;
  __int64 v47;
  char v48;
  int v49;
  __int64 v50;
  int v51;
  int v52;
  char v53;
  __int64 v54;
  __int64 v55;
  char *v56;
  char v57;
  __int64 v58;
  int v59;
  int v60;
  unsigned int *v61;
       char *v62;
  unsigned int v63;
  int v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  char *v68;
  char v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char v75;
  __int64 v76;
  signed int v77;
  char *v78;
  __m128i si128;
  unsigned int *v80;
  __int64 v81;
  unsigned int v82;
  __int64 v83;
  __int64 v84;
  char v85;
  int v86;
  int v87;
  int v88;
  int v89;
  char v90;
  __int64 v91;
  __int64 v92;
  char v93;
  __int64 v94;
  char *v95;
  char v96;
  __int64 v97;
  int v98;
  unsigned int *v99;
       char *v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
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
  v9 = *(int *)((char *)&g_182BBC57C + v8);
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
                                                        + *(int *)((char *)&g_182BBC57C + v8)];
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
          crt_sprintf(v115, "%c:\\", v106 + 65);
          v39 = *(unsigned int *)((char *)&g_182BBC57C + v8);
          if ( v39 >= 1 )
          {
            v40 = (unsigned int)v39;
            v41 = (int)dword_140404A6C[2 * v109 + 278847172 + v2];
            v42 = 2570LL * v38;
            v43 = (int *)((char *)&g_182BBC584 + v8);
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
        crt_sprintf(
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
              crt_memset((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x520u);
              sub_1400C92B0(v1);
              return 0; /* no result: rax is residue at 0x1400C532F */
            }
            if ( *(_BYTE *)v11 )
            {
              v94 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
              *(_OWORD *)((char *)&g_182BBB4F4 + v94) = xmmword_140276030;
              *(_QWORD *)((char *)&g_182BBB504 + v94) = 0x454D414E20454C49LL;
              *((_BYTE *)&g_182BBB50C + v94) = 0;
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
            *(_OWORD *)((char *)&g_182BBB4F4 + v91) = xmmword_140276080;
            *(_QWORD *)((char *)&g_182BBB504 + v91) = 0x656D616E656C6966LL;
            *(_WORD *)((char *)&g_182BBB50C + v91) = 34;
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
          *(_OWORD *)((char *)&g_182BBB4F4 + v102) = xmmword_140276068;
          *(unsigned int *)((char *)&g_182BBB504 + v102) = 4542553;
          goto LABEL_178;
        }
LABEL_131:
        v76 = 110 * v1;
        if ( dword_140404A6C[v2 + 278847323] == -1 )
        {
          v103 = (v76 + (int)dword_140404A6C[v2 + 278846111]) << 6;
          *(_OWORD *)((char *)&g_182BBB4F4 + v103) = xmmword_140276030;
          *(_QWORD *)((char *)&g_182BBB504 + v103) = 0x454D414E20454C49LL;
          *((_BYTE *)&g_182BBB50C + v103) = 0;
          goto LABEL_178;
        }
        dword_140404A6C[v2 + 278847324] = 2;
        dword_140404A6C[v2 + 278846113] = -1;
        *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
        v110 = &dword_140404A6C[v2 + 278847325];
        crt_memset((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x420u);
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
          *(__m128i_u *)v80 = si128;
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
        v45 = game_connected == 0;
        *v110 = 0;
        *(unsigned int *)((char *)&g_182BBC7E4 + v81) = 256;
        if ( !v45 )
        {
          v82 = game_tick;
          v83 = (__int64)(int)world_event_count++ << 7;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + v83) = 19;
          *(unsigned int *)((char *)&g_1873DE464 + v83) = v82;
          *(unsigned int *)((char *)&g_1873DE480 + v83) = g_183E936F0;
          *(unsigned int *)((char *)&g_1873DE484 + v83) = v1;
          *(unsigned int *)((char *)&g_1873DE490 + v83) = 1065353216;
          *(unsigned int *)((char *)&g_1873DE494 + v83) = 1065353216;
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
      *(_OWORD *)((char *)&g_182BBB4F4 + v73) = xmmword_140275FB8;
      *(_OWORD *)((char *)&g_182BBB504 + v73) = xmmword_140275FC8;
      *(_QWORD *)((char *)&g_182BBB514 + v73) = 0x4549464943455053LL;
      *(_WORD *)((char *)&g_182BBB51C + v73) = 68;
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
                    *(_OWORD *)((char *)&g_182BBB4F4 + v67) = xmmword_140275F88;
                    *(_QWORD *)((char *)&g_182BBB504 + v67) = 0x4543415053204BLL;
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
                    v68[(_QWORD)&g_182BBC6B0 + v2 * 4 - (_QWORD)Str1] = *v68;
                    ++v68;
                  }
                  while ( v69 );
                  v70 = (int)dword_140404A6C[v2 + 278846111];
                  dword_140404A6C[v2 + 278847257] = *(unsigned int *)((char *)&dword_140404A6C[6 * v3 + 275754073] + v109);
                  LOBYTE(dword_140404A6C[16 * (110 * v1 + v70) + 278846114]) = 0;
                  sub_140051650(g_183E936F4, v1, 1.0, 1.0);
                  return 0; /* no result: rax is residue at 0x1400C532F */
                }
                v71 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *(_OWORD *)((char *)&g_182BBB4F4 + v71) = xmmword_140275FA0;
                *(unsigned int *)((char *)&g_182BBB504 + v71) = 5461075;
              }
              else
              {
                v72 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *(_OWORD *)((char *)&g_182BBB4F4 + v72) = xmmword_140275FB8;
                *(_OWORD *)((char *)&g_182BBB504 + v72) = xmmword_140275FC8;
                *(_QWORD *)((char *)&g_182BBB514 + v72) = 0x4549464943455053LL;
                *(_WORD *)((char *)&g_182BBB51C + v72) = 68;
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
    *(_OWORD *)((char *)&g_182BBB4F4 + v55) = xmmword_140275FE8;
    *(_OWORD *)((char *)&g_182BBB504 + v55) = xmmword_140275FF8;
    *(_QWORD *)((char *)&g_182BBB514 + v55) = 0x4549464943455053LL;
    *(_WORD *)((char *)&g_182BBB51C + v55) = 68;
    goto LABEL_178;
  }
  v106 = v5;
  if ( (unsigned int)sub_14004C9C0(v1, (int *)&v106, (int *)&v108, (__int64)v11, &v107) != 1 )
  {
    v33 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
    *(_OWORD *)((char *)&g_182BBB4F4 + v33) = xmmword_140275F58;
    *(_WORD *)((char *)&g_182BBB504 + v33) = 89;
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
      *(_QWORD *)((char *)&g_182BBC57C + v29) = 0;
      if ( v26 >= 1LL )
      {
        v30 = 18 * v23;
        v31 = &v112[4 * v26];
        do
        {
          v32 = *(int *)((char *)&g_182BBC57C + v29);
          v31 -= 4;
          *(unsigned int *)((char *)&g_182BBC57C + v29) = v32 + 1;
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

//----- (00000001400C5360) ----------------------------------------------------
__int64            sub_1400C5360(int a1)
{
  __int64 v2;
  int v3;
  unsigned int *v4;
  int v5;
  __int64 v6;
  char *v7;
  unsigned int *v8;
  int v9;
  char v10;
  char v11;
  __int64 v12;
  __int64 v13;
  unsigned int *v14;
  char *v15;
  unsigned int *v16;
  char v17;
  char *v18;
  unsigned int *v19;
  _BYTE *v20;
  int v21;
  char v22;
  char v23;
  __int64 v24;
  unsigned int *v25;
  char *v26;
  unsigned int *v27;
  char v28;

  v2 = 1760LL * a1;
  v3 = 0;
  v4 = &dword_140404A6C[v2 + 278847519];
  v5 = 0;
  v6 = a1;
  v7 = (char *)&dword_140404A6C[v2 + 278846386] + 1;
  v8 = &dword_140404A6C[v2 + 278845893];
  do
  {
    v9 = *v4;
    *(v7 - 1) = v5 + 65;
    v10 = 12;
    if ( v8[1690] != v5 )
      v10 = 15;
    v7[2047] = v10;
    v7[2048] = -113;
    if ( v9 < 10 )
      v11 = 32;
    else
      v11 = v9 / 10 + 48;
    *v7 = v11;
    ++v5;
    v7[1] = v9 % 10 + 48;
    ++v4;
    v7[2049] = -113;
    v7[2] = 32;
    v7 += 4;
  }
  while ( v5 < 15 );
  v12 = 1760 * v6;
  LOBYTE(dword_140404A6C[1760 * v6 + 278846401]) = 0;
  sub_140050F90(a1, 17);
  v13 = 15;
  v14 = &dword_140404A6C[1760 * v6 + 278846402];
  v15 = (char *)&dword_140404A6C[1760 * v6 + 278846402] + 2;
  v16 = &dword_140404A6C[1760 * v6 + 278847551];
  do
  {
    if ( *v16 == -1 )
      v17 = 32;
    else
      v17 = *v16 + 65;
    *(_BYTE *)v14 = v17;
    ++v16;
    *(_WORD *)(v15 - 1) = 8224;
    ++v14;
    v15[1] = 32;
    v15 += 4;
    --v13;
  }
  while ( v13 );
  LOBYTE(dword_140404A6C[v12 + 278846417]) = 0;
  sub_140050F90(a1, 18);
  sub_140050F90(a1, 19);
  v18 = (char *)&dword_140404A6C[v12 + 278846434] + 1;
  v19 = &dword_140404A6C[v12 + 278847534];
  v20 = (char *)&dword_140404A6C[v12 + 278846946] + 2;
  do
  {
    v21 = *v19;
    *(v20 - 2050) = v3 + 80;
    v22 = 12;
    if ( dword_140404A6C[v12 + 278847583] != v3 + 15 )
      v22 = 15;
    *(v20 - 2) = v22;
    if ( v21 < 10 )
    {
      v18[2048] = -113;
      v23 = 32;
    }
    else
    {
      *(v20 - 1) = -113;
      v23 = v21 / 10 + 48;
    }
    *v18 = v23;
    ++v3;
    v18[1] = v21
           - 2
           * (4
            * (((((unsigned __int64)(1717986919LL * v21) >> 32) & 0x80000000) != 0LL)
             + ((int)((unsigned __int64)(1717986919LL * v21) >> 32) >> 2))
            + v21 / 10)
           + 48;
    ++v19;
    *v20 = -113;
    v20 += 4;
    v18[2] = 32;
    v18 += 4;
  }
  while ( v3 < 11 );
  LOBYTE(dword_140404A6C[v12 + 278846445]) = 0;
  sub_140050F90(a1, 20);
  v24 = 11;
  v25 = &dword_140404A6C[v12 + 278846450];
  v26 = (char *)&dword_140404A6C[v12 + 278846450] + 2;
  v27 = &dword_140404A6C[v12 + 278847566];
  do
  {
    if ( *v27 == -1 )
      v28 = 32;
    else
      v28 = *v27 + 65;
    *(_BYTE *)v25 = v28;
    ++v27;
    *(_WORD *)(v26 - 1) = 8224;
    ++v25;
    v26[1] = 32;
    v26 += 4;
    --v24;
  }
  while ( v24 );
  LOBYTE(dword_140404A6C[v12 + 278846461]) = 0;
  return sub_140050F90(a1, 21);
}

//----- (00000001400C5610) ----------------------------------------------------
__int64            sub_1400C5610(int a1, int a2, __int64 a3, int a4)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  unsigned __int8 v9;
  __int64 v10;
  __int64 v11;
  char v12;

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
        *((_BYTE *)&g_182BBB4F4 + v10) = v8;
      }
      else
      {
        v11 = *(char *)(v5 + a3);
        v12 = LOBYTE(dword_140404A6C[1760 * v6 + 278847390 + v8]) + 65;
        *((_BYTE *)&g_182BBBCF4 + v10) = 15;
        *((_BYTE *)&g_182BBB4F4 + v10) = v12;
        if ( dword_140404A6C[1760 * v6 + 278847583] == dword_140404A6C[1760 * v6 + 278847390 + v11] )
          *((_BYTE *)&g_182BBBCF4 + v10) = 12;
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

//----- (00000001400C5750) ----------------------------------------------------
__int64            sub_1400C5750(int a1)
{
  __int64 v2;
  unsigned int *v3;
  signed int v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  char v14;
  __int64 v15;

  v2 = a1;
  v3 = &dword_140404A6C[1760 * a1 + 278847325];
  v4 = 3;
  v5 = 1760LL * a1;
  v6 = v5 * 4 + 128;
  do
  {
    for ( i = 0; i < 62; ++i )
    {
      v8 = *((char *)v3 + i);
      if ( !(_BYTE)v8 )
        break;
      v9 = v6 + i;
      if ( (unsigned __int8)(v8 - 65) > 0x19u )
      {
        *((_BYTE *)&g_182BBB4F4 + v9) = v8;
      }
      else
      {
        v10 = LOBYTE(dword_140404A6C[1760 * v2 + 278847390 + v8]) + 65;
        *((_BYTE *)&g_182BBBCF4 + v9) = 15;
        *((_BYTE *)&g_182BBB4F4 + v9) = v10;
        if ( dword_140404A6C[v5 + 278847583] == dword_140404A6C[1760 * v2 + 278847390 + v8] )
          *((_BYTE *)&g_182BBBCF4 + v9) = 12;
      }
    }
    *((_BYTE *)&g_182BBB4F4 + i + v6) = 0;
    sub_140050F90(a1, v4 - 1);
    v11 = 0;
    do
    {
      v12 = *((char *)v3 + v11);
      if ( !(_BYTE)v12 )
        break;
      if ( (unsigned __int8)(v12 - 65) > 0x19u )
      {
        v14 = *((_BYTE *)v3 + v11);
      }
      else
      {
        v13 = dword_140404A6C[1760 * v2 + 278847551 + (int)dword_140404A6C[1760 * v2 + 278847390 + v12]];
        v14 = v13 == -1 ? 32 : v13 + 65;
      }
      v15 = v6 + v11++;
      *((_BYTE *)&g_182BBB534 + v15) = v14;
    }
    while ( v11 < 62 );
    *((_BYTE *)&g_182BBB534 + v6 + v11) = 0;
    sub_140050F90(a1, v4);
    v4 += 3;
    v3 += 16;
    v6 += 192;
  }
  while ( v4 < 18 );
  return sub_1400C5360(a1);
}

//----- (00000001400C58E0) ----------------------------------------------------
float            sub_1400C58E0(int a1)
{
  int v1;
  __int64 v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;

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

//----- (00000001400C5C00) ----------------------------------------------------
__int64            sub_1400C5C00(int a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int *v3;
  _BYTE *v4;
  char v5;
  __int64 v6;
  __int64 v7;
  signed int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _BYTE *v53;
  unsigned __int8 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char *v58;
       char *v59;
  __int64 v60;
  char v61;
  char v62;
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
    *((_BYTE *)&g_182BBC7E0 + v18) = v17;
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
      *((_BYTE *)&g_182BBC7E0 + v19) = 0;
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
  *(unsigned int *)((char *)&g_182BBCBE8 + v23) = -1;
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
  *(_QWORD *)((char *)&g_182BBB4E8 + v23) = 0;
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
      *((_BYTE *)&g_182BBB530 + v56 + 2) = 0;
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

//----- (00000001400C6580) ----------------------------------------------------
__int64            sub_1400C6580(int a1, __int16 a2)
{
  signed int v2;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char *v18;
  unsigned int *v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
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
        crt_sprintf(v28, "%s\n", (     char *)&dword_140404A6C[16 * (v17 + v14) + 278846114]);
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

//----- (00000001400C6980) ----------------------------------------------------
__int64            sub_1400C6980(int a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;

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

//----- (00000001400C6D90) ----------------------------------------------------
int            sub_1400C6D90(int a1, int a2)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned int *v7;
  int v8;
  unsigned int *v9;
  signed int v10;
  unsigned int *v11;
  __m128i si128;
  int v13;
  _BYTE *v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int *v18;
  __int64 v19;
  char *v20;
  int *v21;
  char *v22;
  bool v23;
  int v24;
  _WORD *v25;
  _WORD *v26;
  __int64 v27;
  unsigned int *v28;
  char v29;
  __int64 v30;
  unsigned int *v31;
  char v32;
  __int64 v33;
  __m128i v34;
  __int64 v35;
  unsigned int *v36;

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
      *((_BYTE *)&g_182BBC534 + v15) = v4;
      *((_BYTE *)&g_182BBC534 + v15 + 1) = 0;
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
    crt_sprintf(v18, "%c:\\", (unsigned int)(v16 + 65));
    v19 = v3 * 4 + 72 * v16;
    v20 = (char *)&g_182BBB180 + v19;
    if ( *(int *)((char *)&g_182BBC57C + v19) >= 1 )
    {
      v21 = (int *)((char *)&g_182BBC584 + v19);
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
        *((_BYTE *)&g_182BBB4F4 + v33) = v32;
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
    v7 = &g_182BBB180;
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

//----- (00000001400C72B0) ----------------------------------------------------
__int64            sub_1400C72B0(int a1)
{
  __int64 v1;
  __int64 v2;
  signed int v3;
  char *v4;
  __m128i si128;
  unsigned int *v6;
  __int64 result;
  bool v8;
  unsigned int v9;
  __int64 v10;

  v1 = a1;
  v2 = 1760LL * a1;
  *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x420u);
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
    *(__m128i_u *)v6 = si128;
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
  v8 = game_connected == 0;
  dword_140404A6C[v2 + 278847325] = 0;
  if ( !v8 )
  {
    v9 = game_tick;
    v10 = (__int64)(int)world_event_count++ << 7;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&g_1873DE460 + v10) = 19;
    *(unsigned int *)((char *)&g_1873DE464 + v10) = v9;
    result = g_183E936F0;
    *(unsigned int *)((char *)&g_1873DE480 + v10) = g_183E936F0;
    *(unsigned int *)((char *)&g_1873DE484 + v10) = v1;
    *(unsigned int *)((char *)&g_1873DE490 + v10) = 1065353216;
    *(unsigned int *)((char *)&g_1873DE494 + v10) = 1065353216;
  }
  return result;
}

//----- (00000001400C7450) ----------------------------------------------------
void            sub_1400C7450(int a1, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  signed int v7;
  unsigned int *v8;
  __int64 v9;
  __m128i v10;
  unsigned int *v11;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  signed int v16;
  signed int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  signed int v21;
  unsigned int *v22;
  __int64 v23;
  __m128i v24;
  int v25;
  int v26;
  bool v27;
  int v28;
  signed int v29;
  unsigned int v30;
  signed int v31;
  unsigned int *v32;
  __int64 v33;
  __m128i si128;

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
      *(__m128i_u *)v33 = si128;
      *(__m128i_u *)(v33 + 16) = si128;
      *(__m128i_u *)(v33 + 32) = si128;
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
        *(__m128i_u *)v9 = v10;
        *(__m128i_u *)(v9 + 16) = v10;
        *(__m128i_u *)(v9 + 32) = v10;
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
                *(__m128i_u *)v23 = v24;
                *(__m128i_u *)(v23 + 16) = v24;
                *(__m128i_u *)(v23 + 32) = v24;
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

//----- (00000001400C7890) ----------------------------------------------------
__int64            sub_1400C7890(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  signed int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  int v10;
       char *v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  char *v15;
  int v17;
  __int64 v18;
  __int64 v19;
  char *v20;
  char v21;
  char v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char v32;
  char v33;
  char v34;
  char v35;
  char v36;
  char v37;
  char v38;
  char v39;
  char v40;
  char v41;
  char v42;
  char v43;
  char v44;
  char v45;
  char v46;
  char v47;
  char v48;
  char v49;
  char v50;
  char v51;
  char v52;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C7890[576];
#define v54 (*(_BYTE (*)[40])(void *)(sr_frame_1400C7890 + 0)) /* [rsp+0h] */
#define v55 (*(__int64 (*))(void *)(sr_frame_1400C7890 + 40)) /* [rsp+28h] */
#define v56 (*(_BYTE (*)[512])(void *)(sr_frame_1400C7890 + 48)) /* [rsp+30h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_1400C7890 + 560)) /* [rsp+230h] */

  v1 = a1;
  v2 = 1760LL * a1;
  v3 = v1;
  v4 = 0;
  v55 = v2 * 4;
  if ( dword_140404A6C[v2 + 278847323] == -1 )
  {
    dword_140404A6C[v2 + 278847327] = 0;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  v5 = 0;
  v6 = (int)dword_140404A6C[v2 + 278847323];
  v7 = 0;
  do
  {
    if ( v5 == 1 )
    {
      v8 = 1760 * v3;
      dword_140404A6C[v8 + 278846130] = 1397967181;
      dword_140404A6C[v8 + 278846642] = 252645135;
      dword_140404A6C[v8 + 278846131] = 542003017;
      dword_140404A6C[v8 + 278846643] = 252645135;
      dword_140404A6C[v8 + 278846132] = 1162626387;
      dword_140404A6C[v8 + 278846644] = 252645135;
      dword_140404A6C[v8 + 278846133] = 538989635;
      dword_140404A6C[v8 + 278846645] = 252645135;
      LOBYTE(dword_140404A6C[v8 + 278846134]) = 0;
      goto LABEL_128;
    }
    if ( (unsigned __int64)(v5 - 3) > 9 )
    {
      LOBYTE(dword_140404A6C[16 * (v5 + 110 * v3) + 278846114]) = 0;
      goto LABEL_128;
    }
    v9 = v7 - 5;
    if ( v7 == 3 )
    {
      v10 = dword_140404A6C[5 * v6 + 188872240];
      if ( v10 > 0 )
      {
        if ( v10 <= 8 )
        {
          crt_sprintf(v56, "REQUEST INTEL");
          goto LABEL_26;
        }
        if ( v10 == 11 )
        {
          crt_sprintf(v56, "INTEL FAXED");
          goto LABEL_26;
        }
LABEL_14:
        crt_sprintf(v56, "NO INTEL AVAILABLE");
        goto LABEL_26;
      }
      v11 = "INTEL REQUESTED";
      if ( v10 )
        goto LABEL_14;
      goto LABEL_25;
    }
    if ( v7 == 4 )
    {
      crt_sprintf(v56, "UPLOAD FILE");
      goto LABEL_26;
    }
    if ( v9 > 6 )
    {
      v11 = "EXIT";
LABEL_25:
      crt_sprintf(v56, v11);
      goto LABEL_26;
    }
    v12 = v9 + 1;
    v13 = 138612LL * v7;
    if ( dword_140404A6C[34653 * v5 + 179827806] )
    {
      v14 = v13 - 693060;
      crt_sprintf(v56, "%d. PROJECT %s                ", v12, (     char *)&g_16B2CCC50 + v14);
    }
    else
    {
      crt_sprintf(v56, "%d. UNKNOWN                   ", v12);
      v14 = v13 - 693060;
    }
    v56[24] = 0;
    v15 = &v54[47];
    while ( *++v15 != 0 )
      ;
    strcpy(v15, (     char *)&dword_140404A6C[539 * v6 + 180001596] + v14);
LABEL_26:
    v17 = 0;
    v18 = 2;
    v19 = (v5 + 110 * v3) << 6;
    v20 = (char *)&g_182BBBCF4 + v19;
    if ( *(unsigned int *)((char *)&g_182BBC7EC + v55) == v9 )
    {
      do
      {
        v21 = v56[v17];
        if ( v21 )
          ++v17;
        else
          v21 = 32;
        *(v20 - 2048) = v21;
        *v20 = -24;
        v22 = v56[v17];
        if ( v22 )
          ++v17;
        else
          v22 = 32;
        *(v20 - 2047) = v22;
        v20[1] = -24;
        v23 = v56[v17];
        if ( v23 )
          ++v17;
        else
          v23 = 32;
        *(v20 - 2046) = v23;
        v20[2] = -24;
        v24 = v56[v17];
        if ( v24 )
          ++v17;
        else
          v24 = 32;
        *(v20 - 2045) = v24;
        v20[3] = -24;
        v25 = v56[v17];
        if ( v25 )
          ++v17;
        else
          v25 = 32;
        *(v20 - 2044) = v25;
        v20[4] = -24;
        v26 = v56[v17];
        if ( v26 )
          ++v17;
        else
          v26 = 32;
        *(v20 - 2043) = v26;
        v20[5] = -24;
        v27 = v56[v17];
        if ( v27 )
          ++v17;
        else
          v27 = 32;
        *(v20 - 2042) = v27;
        v20[6] = -24;
        v28 = v56[v17];
        if ( v28 )
          ++v17;
        else
          v28 = 32;
        *(v20 - 2041) = v28;
        v20[7] = -24;
        v29 = v56[v17];
        if ( v29 )
          ++v17;
        else
          v29 = 32;
        *(v20 - 2040) = v29;
        v20[8] = -24;
        v30 = v56[v17];
        if ( v30 )
          ++v17;
        else
          v30 = 32;
        *(v20 - 2039) = v30;
        v20[9] = -24;
        v31 = v56[v17];
        if ( v31 )
          ++v17;
        else
          v31 = 32;
        *(v20 - 2038) = v31;
        v20[10] = -24;
        v32 = v56[v17];
        if ( v32 )
          ++v17;
        else
          v32 = 32;
        *(v20 - 2037) = v32;
        v20[11] = -24;
        v33 = v56[v17];
        if ( v33 )
          ++v17;
        else
          v33 = 32;
        *(v20 - 2036) = v33;
        v20[12] = -24;
        v34 = v56[v17];
        if ( v34 )
          ++v17;
        else
          v34 = 32;
        *(v20 - 2035) = v34;
        v20[13] = -24;
        v35 = v56[v17];
        if ( v35 )
          ++v17;
        else
          v35 = 32;
        *(v20 - 2034) = v35;
        v20[14] = -24;
        v36 = v56[v17];
        if ( v36 )
          ++v17;
        else
          v36 = 32;
        *(v20 - 2033) = v36;
        v20[15] = -24;
        v20 += 16;
        --v18;
      }
      while ( v18 );
      *((_BYTE *)&g_182BBB514 + v19) = 0;
    }
    else
    {
      do
      {
        v37 = v56[v17];
        if ( v37 )
          ++v17;
        else
          v37 = 32;
        *(v20 - 2048) = v37;
        *v20 = 15;
        v38 = v56[v17];
        if ( v38 )
          ++v17;
        else
          v38 = 32;
        *(v20 - 2047) = v38;
        v20[1] = 15;
        v39 = v56[v17];
        if ( v39 )
          ++v17;
        else
          v39 = 32;
        *(v20 - 2046) = v39;
        v20[2] = 15;
        v40 = v56[v17];
        if ( v40 )
          ++v17;
        else
          v40 = 32;
        *(v20 - 2045) = v40;
        v20[3] = 15;
        v41 = v56[v17];
        if ( v41 )
          ++v17;
        else
          v41 = 32;
        *(v20 - 2044) = v41;
        v20[4] = 15;
        v42 = v56[v17];
        if ( v42 )
          ++v17;
        else
          v42 = 32;
        *(v20 - 2043) = v42;
        v20[5] = 15;
        v43 = v56[v17];
        if ( v43 )
          ++v17;
        else
          v43 = 32;
        *(v20 - 2042) = v43;
        v20[6] = 15;
        v44 = v56[v17];
        if ( v44 )
          ++v17;
        else
          v44 = 32;
        *(v20 - 2041) = v44;
        v20[7] = 15;
        v45 = v56[v17];
        if ( v45 )
          ++v17;
        else
          v45 = 32;
        *(v20 - 2040) = v45;
        v20[8] = 15;
        v46 = v56[v17];
        if ( v46 )
          ++v17;
        else
          v46 = 32;
        *(v20 - 2039) = v46;
        v20[9] = 15;
        v47 = v56[v17];
        if ( v47 )
          ++v17;
        else
          v47 = 32;
        *(v20 - 2038) = v47;
        v20[10] = 15;
        v48 = v56[v17];
        if ( v48 )
          ++v17;
        else
          v48 = 32;
        *(v20 - 2037) = v48;
        v20[11] = 15;
        v49 = v56[v17];
        if ( v49 )
          ++v17;
        else
          v49 = 32;
        *(v20 - 2036) = v49;
        v20[12] = 15;
        v50 = v56[v17];
        if ( v50 )
          ++v17;
        else
          v50 = 32;
        *(v20 - 2035) = v50;
        v20[13] = 15;
        v51 = v56[v17];
        if ( v51 )
          ++v17;
        else
          v51 = 32;
        *(v20 - 2034) = v51;
        v20[14] = 15;
        v52 = v56[v17];
        if ( v52 )
          ++v17;
        else
          v52 = 32;
        *(v20 - 2033) = v52;
        v20[15] = 15;
        v20 += 16;
        --v18;
      }
      while ( v18 );
      *((_BYTE *)&g_182BBB514 + v19) = 0;
    }
LABEL_128:
    ++v7;
    ++v5;
  }
  while ( v5 < 24 );
  do
    sub_140050F90(v3, v4++);
  while ( v4 < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v54
#undef v55
#undef v56
#undef v57

//----- (00000001400C7FC0) ----------------------------------------------------
__int64            sub_1400C7FC0(int a1)
{
  __int64 v2;
  __int64 v3;
  signed int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  char **v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  char *v13;
  char v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  int v24;
  __int64 v25;
  __int64 v26;
  char *v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char v32;
  char v33;
  char v34;
  char v35;
  char v36;
  char v37;
  __int64 v38;
  char *v39;
  char v40;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C7FC0[592];
#define v42 (*(_BYTE (*)[32])(void *)(sr_frame_1400C7FC0 + 0)) /* [rsp+0h] */
#define v43 (*(int (*))(void *)(sr_frame_1400C7FC0 + 32)) /* [rsp+20h] */
#define v44 (*(char * (*))(void *)(sr_frame_1400C7FC0 + 48)) /* [rsp+30h] */
#define v45 (*(char * (*))(void *)(sr_frame_1400C7FC0 + 56)) /* [rsp+38h] */
#define v46 (*(_BYTE (*)[512])(void *)(sr_frame_1400C7FC0 + 64)) /* [rsp+40h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_1400C7FC0 + 576)) /* [rsp+240h] */

  v2 = 1760LL * a1;
  v44 = "BACK";
  v3 = a1;
  v45 = "UPLOAD";
  if ( dword_140404A6C[v2 + 278847323] == -1 || (dword_140404A6C[v2 + 278847328] & 0x80000000) != 0 )
  {
    dword_140404A6C[v2 + 278847327] = 0;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = (int)dword_140404A6C[v2 + 278847323];
  v8 = (char **)&v42[-48];
  do
  {
    if ( !v6 )
    {
      v9 = 34653LL * (int)dword_140404A6C[v2 + 278847328];
      if ( dword_140404A6C[v9 + 180001071] )
        crt_sprintf(v46, "PROJECT %s", (     char *)&dword_140404A6C[v9 + 180035705]);
      else
        crt_sprintf(v46, "UNKNOWN                     ");
      v10 = 0;
      v11 = (v5 + 110 * v3) << 6;
      v12 = 2;
      v13 = (char *)&g_182BBBCF4 + v11;
      do
      {
        v14 = v46[v10];
        if ( v14 )
          ++v10;
        else
          v14 = 32;
        *(v13 - 2048) = v14;
        *v13 = 15;
        v15 = v46[v10];
        if ( v15 )
          ++v10;
        else
          v15 = 32;
        *(v13 - 2047) = v15;
        v13[1] = 15;
        v16 = v46[v10];
        if ( v16 )
          ++v10;
        else
          v16 = 32;
        *(v13 - 2046) = v16;
        v13[2] = 15;
        v17 = v46[v10];
        if ( v17 )
          ++v10;
        else
          v17 = 32;
        *(v13 - 2045) = v17;
        v13[3] = 15;
        v18 = v46[v10];
        if ( v18 )
          ++v10;
        else
          v18 = 32;
        *(v13 - 2044) = v18;
        v13[4] = 15;
        v19 = v46[v10];
        if ( v19 )
          ++v10;
        else
          v19 = 32;
        *(v13 - 2043) = v19;
        v13[5] = 15;
        v20 = v46[v10];
        if ( v20 )
          ++v10;
        else
          v20 = 32;
        *(v13 - 2042) = v20;
        v13[6] = 15;
        v21 = v46[v10];
        if ( v21 )
          ++v10;
        else
          v21 = 32;
        *(v13 - 2041) = v21;
        v13[7] = 15;
        v22 = v46[v10];
        if ( v22 )
          ++v10;
        else
          v22 = 32;
        *(v13 - 2040) = v22;
        v13[8] = 15;
        v23 = v46[v10];
        if ( v23 )
          ++v10;
        else
          v23 = 32;
        *(v13 - 2039) = v23;
        v13[9] = 15;
        v13 += 10;
        --v12;
      }
      while ( v12 );
      *((_BYTE *)&g_182BBB508 + v11) = 0;
      goto LABEL_84;
    }
    if ( v6 != 3 )
    {
      if ( (unsigned int)(v6 - 4) > 3 )
      {
        if ( v6 == 12 )
        {
          v40 = -72;
          v39 = *v8;
          if ( dword_140404A6C[v2 + 278847329] )
            v40 = 15;
          v43 = 16;
          goto LABEL_82;
        }
      }
      else
      {
        v38 = 2156 * v7 + 138612LL * (int)dword_140404A6C[v2 + 278847328];
        if ( v6 - 4 < *(int *)((char *)&g_16B2AAF58 + v38) )
        {
          v43 = 60;
          v39 = (char *)&dword_140404A6C[64 * (unsigned __int64)(unsigned int)v6 + 180000828] + v38;
          v40 = 15;
LABEL_82:
          sub_1400C6AB0(a1, v6, v39, v40, v43);
          goto LABEL_84;
        }
      }
      LOBYTE(dword_140404A6C[16 * (v5 + 110 * v3) + 278846114]) = 0;
      goto LABEL_84;
    }
    v24 = 0;
    v25 = 2;
    v26 = (v5 + 110 * v3) << 6;
    v27 = (char *)&g_182BBBCF4 + v26;
    do
    {
      v28 = aStatus[v24];
      if ( v28 )
        ++v24;
      else
        v28 = 32;
      *(v27 - 2048) = v28;
      *v27 = 15;
      v29 = aStatus[v24];
      if ( v29 )
        ++v24;
      else
        v29 = 32;
      *(v27 - 2047) = v29;
      v27[1] = 15;
      v30 = aStatus[v24];
      if ( v30 )
        ++v24;
      else
        v30 = 32;
      *(v27 - 2046) = v30;
      v27[2] = 15;
      v31 = aStatus[v24];
      if ( v31 )
        ++v24;
      else
        v31 = 32;
      *(v27 - 2045) = v31;
      v27[3] = 15;
      v32 = aStatus[v24];
      if ( v32 )
        ++v24;
      else
        v32 = 32;
      *(v27 - 2044) = v32;
      v27[4] = 15;
      v33 = aStatus[v24];
      if ( v33 )
        ++v24;
      else
        v33 = 32;
      *(v27 - 2043) = v33;
      v27[5] = 15;
      v34 = aStatus[v24];
      if ( v34 )
        ++v24;
      else
        v34 = 32;
      *(v27 - 2042) = v34;
      v27[6] = 15;
      v35 = aStatus[v24];
      if ( v35 )
        ++v24;
      else
        v35 = 32;
      *(v27 - 2041) = v35;
      v27[7] = 15;
      v36 = aStatus[v24];
      if ( v36 )
        ++v24;
      else
        v36 = 32;
      *(v27 - 2040) = v36;
      v27[8] = 15;
      v37 = aStatus[v24];
      if ( v37 )
        ++v24;
      else
        v37 = 32;
      *(v27 - 2039) = v37;
      v27[9] = 15;
      v27 += 10;
      --v25;
    }
    while ( v25 );
    *((_BYTE *)&g_182BBB508 + v26) = 0;
LABEL_84:
    ++v6;
    ++v5;
    ++v8;
  }
  while ( v6 < 24 );
  do
    sub_140050F90(a1, v4++);
  while ( v4 < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47

//----- (00000001400C8500) ----------------------------------------------------
void            sub_1400C8500(int a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  unsigned int v6;
  bool v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  __int64 v12;
  unsigned int *v13;
  unsigned int v14;

  v2 = 1760LL * a1;
  v3 = a1;
  v4 = dword_140404A6C[v2 + 278847323];
  if ( v4 != -1 && dword_140404A6C[v2 + 278846098] != -1 )
  {
    v5 = dword_140404A6C[v2 + 278847326];
    if ( v5 <= 0 )
    {
      if ( (((unsigned __int8)a1 ^ LOBYTE(game_tick)) & 0xF) == 0 )
      {
        v14 = dword_140404A6C[v2 + 278847327];
        if ( !v14 )
        {
          sub_1400C7890(a1);
          v14 = dword_140404A6C[v2 + 278847327];
        }
        if ( v14 == 1 )
        {
          sub_1400C7FC0(a1);
          v14 = dword_140404A6C[v2 + 278847327];
        }
        if ( v14 == 2 )
          sub_1400C86D0(a1);
      }
    }
    else
    {
      v6 = v5 - 1;
      v7 = dword_140404A6C[v2 + 278847325] == 1;
      v8 = v6;
      dword_140404A6C[v2 + 278847326] = v6;
      if ( v7 && (v6 & 0xF) == 0 )
      {
        sub_1400C86D0(a1);
        v8 = dword_140404A6C[v2 + 278847326];
      }
      if ( !v8 )
      {
        v9 = dword_140404A6C[v2 + 278847325];
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = 0;
            v11 = 0;
            v12 = 1760 * v3;
            v13 = &g_16B2CCA30;
            dword_140404A6C[v2 + 278847327] = 0;
            do
            {
              if ( dword_140404A6C[2570 * dword_140404A6C[v2 + 278846098]
                                 + 275754073
                                 + 6 * dword_140404A6C[v12 + 278847333 + (int)dword_140404A6C[v2 + 278847330]]] == *v13 )
              {
                sub_140195FB0(v11, v4);
                v10 = 1;
                dword_140404A6C[v2 + 278847328] = v11;
                dword_140404A6C[v2 + 278847327] = 1;
                dword_140404A6C[v2 + 278847329] = 0;
              }
              ++v11;
              v13 += 34653;
            }
            while ( v11 < 7 );
            if ( !v10 )
              sub_1400C7890(a1);
            if ( dword_140404A6C[v2 + 278847327] == 1 )
              sub_1400C7FC0(a1);
          }
        }
        else
        {
          sub_1400C7890(a1);
        }
      }
    }
  }
}

//----- (00000001400C86D0) ----------------------------------------------------
__int64            sub_1400C86D0(int a1)
{
  signed int v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 j;
  unsigned int *v7;
  char *v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  char v13;
  unsigned int *v14;
  char *v15;
  __int64 v16;
  char v17;
  int v18;
  __int64 i;
  unsigned int *v20;
  char *v21;
  __int64 v22;
  char v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  char *v28;
  char *v29;
  char v30;
  char v31;
  __int64 v32;
  __int64 v33;
  char *v34;
       char *v35;
  __int64 v36;
  char v37;
  char v38;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C86D0[576];
#define v40 (*(__int64 (*))(void *)(sr_frame_1400C86D0 + 0)) /* [rsp+0h] */
#define v41 (*(_BYTE (*)[512])(void *)(sr_frame_1400C86D0 + 48)) /* [rsp+30h] */
#define v42 (*(__int64 (*))(void *)(sr_frame_1400C86D0 + 560)) /* [rsp+230h] */

  v1 = 0;
  v2 = a1;
  v3 = a1;
  v4 = 1760LL * a1;
  v5 = 110LL * a1;
  if ( (int)dword_140404A6C[v4 + 278847326] <= 0 )
  {
    v18 = 0;
    for ( i = 0; i < 24; ++i )
    {
      if ( i )
      {
        if ( (unsigned __int64)(i - 4) > 0xF )
        {
          LOBYTE(dword_140404A6C[16 * v5 + 278846114 + 16 * i]) = 0;
        }
        else
        {
          v24 = v18 + (dword_140404A6C[v4 + 278847330] & 0xFFFFFFF0);
          v25 = v24 - 4;
          if ( v24 - 4 >= (int)dword_140404A6C[v4 + 278847332] )
          {
            v32 = i + v5;
            if ( v25 == dword_140404A6C[v4 + 278847332] )
            {
              v33 = v32 << 6;
              v34 = (char *)&g_182BBBCF4 + v33;
              v35 = " CANCEL";
              v36 = 16;
              if ( v25 == dword_140404A6C[v4 + 278847330] )
              {
                do
                {
                  v37 = *v35;
                  if ( *v35 )
                    ++v35;
                  else
                    v37 = 32;
                  *(v34 - 2048) = v37;
                  *v34++ = -72;
                  --v36;
                }
                while ( v36 );
                *((_BYTE *)&g_182BBB504 + v33) = 0;
              }
              else
              {
                do
                {
                  v38 = *v35;
                  if ( *v35 )
                    ++v35;
                  else
                    v38 = 32;
                  *(v34 - 2048) = v38;
                  *v34++ = 15;
                  --v36;
                }
                while ( v36 );
                *((_BYTE *)&g_182BBB504 + v33) = 0;
              }
            }
            else
            {
              LOBYTE(dword_140404A6C[16 * v32 + 278846114]) = 0;
            }
          }
          else
          {
            crt_sprintf(
              v41,
              " %s",
              (     char *)&dword_140404A6C[2570 * dword_140404A6C[v4 + 278846098]
                                           + 275754074
                                           + 6 * dword_140404A6C[1760 * v3 + 278847329 + v24]]);
            v26 = 16;
            v27 = (i + v5) << 6;
            v28 = (char *)&g_182BBBCF4 + v27;
            v29 = v41;
            if ( v25 == dword_140404A6C[v4 + 278847330] )
            {
              do
              {
                v30 = *v29;
                if ( *v29 )
                  ++v29;
                else
                  v30 = 32;
                *(v28 - 2048) = v30;
                *v28++ = -72;
                --v26;
              }
              while ( v26 );
              *((_BYTE *)&g_182BBB504 + v27) = 0;
            }
            else
            {
              do
              {
                v31 = *v29;
                if ( *v29 )
                  ++v29;
                else
                  v31 = 32;
                *(v28 - 2048) = v31;
                *v28++ = 15;
                --v26;
              }
              while ( v26 );
              *((_BYTE *)&g_182BBB504 + v27) = 0;
            }
          }
        }
      }
      else
      {
        crt_sprintf(v41, "UPLOAD FILE");
        v20 = &dword_140404A6C[v4 + 278846626];
        v21 = v41;
        v22 = 20;
        do
        {
          v23 = *v21;
          if ( *v21 )
            ++v21;
          else
            v23 = 32;
          *((_BYTE *)v20 - 2048) = v23;
          *(_BYTE *)v20 = -16;
          v20 = (unsigned int *)((char *)v20 + 1);
          --v22;
        }
        while ( v22 );
        LOBYTE(dword_140404A6C[16 * v5 + 278846119]) = 0;
      }
      ++v18;
    }
    v2 = v3;
  }
  else
  {
    for ( j = 0; j < 24; ++j )
    {
      if ( j )
      {
        if ( j == 1 )
        {
          v11 = 0;
          v12 = (__int64)(int)(255 - dword_140404A6C[v4 + 278847326]) >> 4;
          do
          {
            v13 = 127;
            if ( v11 > v12 )
              v13 = 32;
            v41[v11++] = v13;
          }
          while ( v11 < 16 );
          v41[16] = 0;
          v14 = &dword_140404A6C[v4 + 278846642];
          v15 = v41;
          v16 = 16;
          do
          {
            v17 = *v15;
            if ( *v15 )
              ++v15;
            else
              v17 = 32;
            *((_BYTE *)v14 - 2048) = v17;
            *(_BYTE *)v14 = -16;
            v14 = (unsigned int *)((char *)v14 + 1);
            --v16;
          }
          while ( v16 );
          LOBYTE(dword_140404A6C[16 * v5 + 278846134]) = 0;
        }
        else
        {
          LOBYTE(dword_140404A6C[16 * v5 + 278846114 + 16 * j]) = 0;
        }
      }
      else
      {
        crt_sprintf(v41, "UPLOADING");
        v7 = &dword_140404A6C[v4 + 278846626];
        v8 = v41;
        v9 = 16;
        do
        {
          v10 = *v8;
          if ( *v8 )
            ++v8;
          else
            v10 = 32;
          *((_BYTE *)v7 - 2048) = v10;
          *(_BYTE *)v7 = -16;
          v7 = (unsigned int *)((char *)v7 + 1);
          --v9;
        }
        while ( v9 );
        LOBYTE(dword_140404A6C[16 * v5 + 278846118]) = 0;
      }
    }
  }
  do
    sub_140050F90(v2, v1++);
  while ( v1 < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v40
#undef v41
#undef v42

//----- (00000001400C8E10) ----------------------------------------------------
__int64            sub_1400C8E10(int a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  unsigned int *v5;
  char *v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE *v15;
  char *v16;
  char v17;
  char v18;
  char v19;
  char v20;
  signed int v21;
  int v22;
  _BYTE *v23;
  char *v24;
  char v25;
  char v26;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C8E10[576];
#define v28 (*(__int64 (*))(void *)(sr_frame_1400C8E10 + 0)) /* [rsp+0h] */
#define v29 (*(int (*))(void *)(sr_frame_1400C8E10 + 32)) /* [rsp+20h] */
#define v30 (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 48)) /* [rsp+30h] */
#define v31 (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 64)) /* [rsp+40h] */
#define v32 (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 80)) /* [rsp+50h] */
#define v33 (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 96)) /* [rsp+60h] */
#define v34 (*(__int64 (*))(void *)(sr_frame_1400C8E10 + 560)) /* [rsp+230h] */

  v1 = 1760LL * a1;
  v30 = 0;
  v31 = 0;
  v29 = a1;
  v32 = 0;
  v2 = dword_140404A6C[v1 + 278847327];
  v3 = dword_140404A6C[v1 + 278847325];
  v33 = 0;
  crt_sprintf(&v30, "  SNAKE    SCORE:%05d  LEVEL:%03d    Ctrl-X EXIT", v3, v2);
  v4 = 31;
  v5 = &dword_140404A6C[v1 + 278846114];
  v6 = (char *)&v30;
  v7 = 31;
  do
  {
    v8 = *v6;
    if ( *v6 )
      ++v6;
    else
      v8 = 32;
    *(_BYTE *)v5 = v8;
    v9 = *v6;
    *((_BYTE *)v5 + 2048) = 112;
    if ( v9 )
      ++v6;
    else
      v9 = 32;
    *((_BYTE *)v5 + 1) = v9;
    *((_BYTE *)v5 + 2049) = 112;
    v5 = (unsigned int *)((char *)v5 + 2);
    --v7;
  }
  while ( v7 );
  BYTE2(dword_140404A6C[v1 + 278846129]) = 0;
  v10 = v1 * 4 + 64;
  v11 = v1 * 4 + 32;
  v12 = 23;
  do
  {
    v13 = 0;
    v14 = 31;
    v15 = (char *)&g_182BBB530 + v10 + 2;
    v16 = v15 + 1987;
    do
    {
      *(v16 - 2049) = 32;
      v17 = *((_BYTE *)&g_182BBCA00 + v11 + (v13 >> 1));
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          *(v16 - 1) = 127;
        }
        else if ( v17 == 2 )
        {
          *(v16 - 1) = 31;
        }
        else
        {
          v18 = 47;
          if ( v17 == 3 )
            v18 = -97;
          *(v16 - 1) = v18;
        }
      }
      else
      {
        *(v16 - 1) = 15;
      }
      v16[(char *)&g_182BBAD30 + 2 - ((char *)&g_182BBB530 + 2)] = 32;
      v19 = *((_BYTE *)&g_182BBCA00 + v11 + ((v13 + 1) >> 1));
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          *v16 = 127;
        }
        else if ( v19 == 2 )
        {
          *v16 = 31;
        }
        else
        {
          v20 = 47;
          if ( v19 == 3 )
            v20 = -97;
          *v16 = v20;
        }
      }
      else
      {
        *v16 = 15;
      }
      v13 += 2;
      v16 += 2;
      --v14;
    }
    while ( v14 );
    v11 += 32;
    *v15 = 0;
    v10 += 64;
    v21 = 0;
    --v12;
  }
  while ( v12 );
  v22 = v29;
  if ( dword_140404A6C[v1 + 278847329] )
  {
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    crt_sprintf(&v30, "                           GAME OVER!", v13);
    v23 = (char *)&dword_140404A6C[v1 + 278846642] + 1;
    v24 = (char *)&v30;
    do
    {
      v25 = *v24;
      if ( *v24 )
        ++v24;
      else
        v25 = 32;
      *(v23 - 2049) = v25;
      v26 = *v24;
      *(v23 - 1) = 15;
      if ( v26 )
        ++v24;
      else
        v26 = 32;
      *(v23 - 2048) = v26;
      *v23 = 15;
      v23 += 2;
      --v4;
    }
    while ( v4 );
    BYTE2(dword_140404A6C[v1 + 278846145]) = 0;
  }
  do
    sub_140050F90(v22, v21++);
  while ( v21 < 24 );
  return 0; /* no result: rax is residue of the loop's last call at 0x1400C9086 */
}
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34

//----- (00000001400C9120) ----------------------------------------------------
void            sub_1400C9120(int a1, int a2)
{
  __int64 v2;
  signed int v3;
  unsigned int *v4;
  unsigned int *v5;
  __m128i si128;

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
        *(__m128i_u *)v5 = si128;
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

//----- (00000001400C92B0) ----------------------------------------------------
__int64            sub_1400C92B0(int a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int *v3;
  __int64 v4;
  __int64 i;
  bool v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  int j;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C92B0[16];
#define v26 (*(int (*))(void *)(sr_frame_1400C92B0 + 0)) /* [rsp+68h] */

  v1 = 1760LL * a1;
  v2 = 0;
  v3 = &dword_140404A6C[v1 + 278847461];
  v4 = a1;
  do
  {
    for ( i = 0; i < 32; ++i )
    {
      *((_BYTE *)v3 + i) = 0;
      if ( !v2 || (v6 = (unsigned __int64)v2 < 0x15, v2 == 21) )
      {
        *((_BYTE *)v3 + i) = 1;
        v6 = (unsigned __int64)v2 < 0x15;
      }
      if ( v6 && (!i || i == 30) )
        *((_BYTE *)&dword_140404A6C[1760 * a1 + 278847461 + 8 * v2] + i) = 1;
    }
    ++v2;
    v3 += 8;
  }
  while ( v2 < 24 );
  v7 = 1760LL * a1;
  v8 = dword_140404A6C[v7 + 278847327] & 7;
  if ( v8 )
  {
    LOBYTE(dword_140404A6C[1760 * a1 + 278847479]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847487]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847495]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847503]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847511]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847519]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847527]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847618]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847610]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847602]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847594]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847586]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847578]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847570]) = 1;
  }
  if ( v8 >= 2 )
  {
    BYTE2(dword_140404A6C[1760 * a1 + 278847482]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847490]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847498]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847506]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847514]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847522]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847530]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847615]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847607]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847599]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847591]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847583]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847575]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847567]) = 1;
  }
  if ( v8 >= 3 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847549] + 1) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847550] + 1) = 16843009;
  }
  if ( v8 >= 4 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847555] + 2) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847554] + 2) = 16843009;
  }
  if ( v8 >= 5 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847495] + 3) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847496] + 3) = 16843009;
    HIBYTE(dword_140404A6C[v7 + 278847497]) = 1;
  }
  if ( v8 >= 6 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v1 + 278847599] + 3) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v1 + 278847600] + 3) = 16843009;
    HIBYTE(dword_140404A6C[v1 + 278847601]) = 1;
  }
  if ( v8 >= 7 )
  {
    BYTE2(dword_140404A6C[v7 + 278847562]) = 1;
    LOBYTE(dword_140404A6C[v7 + 278847471]) = 1;
  }
  v9 = 0;
  v26 = 0;
  v10 = 220LL * a1;
  do
  {
    if ( v9 )
    {
      v11 = 17;
      if ( v9 == 1 )
      {
        v12 = 1;
      }
      else
      {
        v12 = 11;
        if ( v9 != 2 )
          v11 = 1;
      }
    }
    else
    {
      v11 = 1;
      v12 = 1;
    }
    v13 = 2;
    do
    {
      v14 = v11 + rand() % 12;
      v15 = v12 + rand() % 9;
      for ( j = 0; j < 512; ++j )
      {
        if ( !*((_BYTE *)&dword_140404A6C[8 * v10 + 278847461 + 8 * v15] + v14) )
          break;
        v14 = v11 + rand() % 12;
        v15 = v12 + rand() % 9;
      }
      v17 = v14 + 32 * (220 * v4 + v15);
      if ( !*((_BYTE *)&g_182BBCA00 + v17) )
      {
        *((_BYTE *)&g_182BBCA00 + v17) = 4;
        ++dword_140404A6C[1760 * v4 + 278847326];
      }
      --v13;
    }
    while ( v13 );
    v9 = v26 + 1;
    v26 = v9;
  }
  while ( v9 < 4 );
  v18 = 1760 * v4;
  v19 = 880 * v4;
  *(_QWORD *)&dword_140404A6C[v18 + 278847331] = 0;
  dword_140404A6C[2 * v19 + 278847333] = 15;
  dword_140404A6C[2 * v19 + 278847334] = 10;
  v20 = ((unsigned __int8)dword_140404A6C[1760 * v4 + 278847331] + 1) & 0x3F;
  dword_140404A6C[v18 + 278847331] = v20;
  v21 = 880 * v4 + v20;
  dword_140404A6C[2 * v21 + 278847333] = 15;
  dword_140404A6C[2 * v21 + 278847334] = 10;
  v22 = ((unsigned __int8)dword_140404A6C[1760 * v4 + 278847331] + 1) & 0x3F;
  dword_140404A6C[v18 + 278847331] = v22;
  v23 = 880 * v4 + v22;
  dword_140404A6C[2 * v23 + 278847333] = 15;
  dword_140404A6C[2 * v23 + 278847334] = 10;
  HIBYTE(dword_140404A6C[v18 + 278847544]) = 3;
  dword_140404A6C[v18 + 278847330] = 0;
  ++dword_140404A6C[v18 + 278847327];
  dword_140404A6C[v18 + 278847328] = 64;
  return sub_1400C8E10(a1);
}
#undef v26

//----- (00000001400C9820) ----------------------------------------------------
void            sub_1400C9820(int a1)
{
  __int64 v2;
  __int64 v3;
  signed int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  signed int v8;
  signed int v9;
  unsigned int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  __int64 v32;

  v2 = 1760LL * a1;
  v3 = a1;
  if ( !dword_140404A6C[v2 + 278847329] && (int)--dword_140404A6C[v2 + 278847328] <= 0 )
  {
    if ( dword_140404A6C[v2 + 278847326] )
    {
      v4 = 16 - (((int)dword_140404A6C[v2 + 278847327] >> 1) & 0xFFFFFFFC);
      if ( v4 < 4 )
        v4 = 4;
      dword_140404A6C[v2 + 278847328] = v4;
      v5 = 880 * v3;
      v6 = 880 * v3 + (dword_140404A6C[v2 + 278847331] & 0x3F);
      v7 = ((unsigned __int8)dword_140404A6C[v2 + 278847331] + 1) & 0x3F;
      v8 = dword_140404A6C[2 * v6 + 278847333];
      v9 = dword_140404A6C[2 * v6 + 278847334];
      v10 = dword_140404A6C[v2 + 278847330];
      dword_140404A6C[v2 + 278847331] = v7;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v12 = v9 + 1;
          v9 = 0;
          if ( v12 < 22 )
            v9 = v12;
        }
        else if ( v10 == 2 )
        {
          if ( --v8 < 0 )
            v8 = 30;
        }
        else if ( v10 == 3 && --v9 < 0 )
        {
          v9 = 21;
        }
      }
      else
      {
        v11 = v8 + 1;
        v8 = 0;
        if ( v11 < 31 )
          v8 = v11;
      }
      v13 = v5 + v7;
      v14 = 220 * v3;
      dword_140404A6C[2 * v13 + 278847333] = v8;
      dword_140404A6C[2 * v13 + 278847334] = v9;
      v15 = v8 + 32 * (v14 + v9);
      if ( *((_BYTE *)&g_182BBCA00 + v15) == 4 )
      {
        *((_BYTE *)&g_182BBCA00 + v15) = 0;
        dword_140404A6C[v2 + 278847325] += 5;
        --dword_140404A6C[v2 + 278847326];
        HIWORD(dword_140404A6C[v2 + 278847325]) = 0;
        if ( (int)dword_140404A6C[v2 + 278847326] <= 0 )
        {
          dword_140404A6C[v2 + 278847328] = 32;
          dword_140404A6C[v2 + 278847326] = 0;
        }
        v16 = (int)dword_140404A6C[v2 + 278847332];
        v17 = v5 + v16;
        v18 = dword_140404A6C[2 * v5 + 278847333 + 2 * v16];
        v19 = ((_BYTE)v16 - 1) & 0x3F;
        v20 = dword_140404A6C[2 * v17 + 278847334];
        dword_140404A6C[v2 + 278847332] = v19;
        v21 = v5 + v19;
        dword_140404A6C[2 * v21 + 278847333] = v18;
        dword_140404A6C[2 * v21 + 278847334] = v20;
        v22 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] - 1) & 0x3F;
        dword_140404A6C[v2 + 278847332] = v22;
        v23 = v5 + v22;
        dword_140404A6C[2 * v23 + 278847333] = v18;
        dword_140404A6C[2 * v23 + 278847334] = v20;
        v24 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] - 1) & 0x3F;
        dword_140404A6C[v2 + 278847332] = v24;
        v25 = v5 + v24;
        dword_140404A6C[2 * v25 + 278847333] = v18;
        dword_140404A6C[2 * v25 + 278847334] = v20;
        v26 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] - 1) & 0x3F;
        dword_140404A6C[v2 + 278847332] = v26;
        v27 = v5 + v26;
        dword_140404A6C[2 * v27 + 278847333] = v18;
        dword_140404A6C[2 * v27 + 278847334] = v20;
      }
      v28 = v5 + (int)dword_140404A6C[v2 + 278847331];
      if ( *((_BYTE *)&dword_140404A6C[8 * v14 + 278847461 + 8 * (int)dword_140404A6C[2 * v28 + 278847334]]
           + (int)dword_140404A6C[2 * v28 + 278847333]) )
        dword_140404A6C[v2 + 278847329] = 1;
      v29 = v5 + (int)dword_140404A6C[v2 + 278847332];
      *((_BYTE *)&dword_140404A6C[8 * v14 + 278847461 + 8 * (int)dword_140404A6C[2 * v29 + 278847334]]
      + (int)dword_140404A6C[2 * v29 + 278847333]) = 0;
      v30 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] + 1) & 0x3F;
      v31 = dword_140404A6C[v2 + 278847331] & 0x3F;
      for ( dword_140404A6C[v2 + 278847332] = v30; v30 != v31; *((_BYTE *)&g_182BBCA00 + v32) = 2 )
      {
        v32 = (int)dword_140404A6C[2 * v5 + 278847333 + 2 * v30]
            + 32 * (v14 + (int)dword_140404A6C[2 * v5 + 278847334 + 2 * v30]);
        v30 = ((_BYTE)v30 + 1) & 0x3F;
      }
      *((_BYTE *)&dword_140404A6C[8 * v14 + 278847461 + 8 * (int)dword_140404A6C[2 * v5 + 278847334 + 2 * v30]]
      + (int)dword_140404A6C[2 * v5 + 278847333 + 2 * v30]) = 3;
      sub_1400C8E10(a1);
    }
    else
    {
      sub_1400C92B0(a1);
    }
  }
}

//----- (00000001400C9B60) ----------------------------------------------------
void            sub_1400C9B60(int a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;

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

//----- (00000001400CDFF0) ----------------------------------------------------
__int64 sub_1400CDFF0(int item)
{
  extern void item_restore_block_part(int item);
  item_restore_block_part(item);
  return 0; /* compatibility result is unused by the reviewed callers */
}

