#include "shared_client.h"


//----- (0000000140180060) ----------------------------------------------------
__int64            sub_140180060(__int64 a1, float a2, float a3)
{
  bool v3; // zf
  float v5; // xmm1_4
  float v6; // xmm2_4
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  __int64 result; // rax

  v3 = *(_DWORD *)a1 == 0;
  v5 = a2 + *(float *)(a1 + 16);
  v6 = a3 + *(float *)(a1 + 20);
  *(float *)(a1 + 16) = v5;
  *(float *)(a1 + 20) = v6;
  v7 = (int)v6;
  v8 = (int)v5;
  if ( v3 )
  {
    v9 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
    *(_WORD *)(v9 + 2) = v7;
    *(_DWORD *)(v9 + 4) = 0;
    *(_BYTE *)(v9 + 12) = 2;
    *(_WORD *)v9 = v8;
    *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = 0;
    result = *(_QWORD *)(a1 + 40);
    *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + result + 10) = 0;
  }
  else
  {
    if ( v8 > *(_DWORD *)(a1 + 28) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 28) = v8;
    if ( v7 > *(_DWORD *)(a1 + 36) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 36) = v7;
    if ( v8 < *(_DWORD *)(a1 + 24) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 24) = v8;
    if ( v7 < *(_DWORD *)(a1 + 32) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 32) = v7;
    ++*(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 4) = 1;
  }
  return result;
}


//----- (0000000140180120) ----------------------------------------------------
__int64            sub_140180120(__int64 a1, float a2, float a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  bool v5; // zf
  float v6; // xmm3_4
  float v7; // xmm2_4
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx

  result = sub_14017FF00(a1);
  v5 = *(_DWORD *)v4 == 0;
  v6 = a2 + *(float *)(v4 + 16);
  v7 = a3 + *(float *)(v4 + 20);
  *(float *)(v4 + 16) = v6;
  *(float *)(v4 + 8) = v6;
  *(float *)(v4 + 20) = v7;
  *(float *)(v4 + 12) = v7;
  v8 = (int)v7;
  v9 = (int)v6;
  if ( v5 )
  {
    v10 = *(_QWORD *)(v4 + 40) + 14LL * *(int *)(v4 + 48);
    *(_WORD *)(v10 + 2) = v8;
    *(_DWORD *)(v10 + 4) = 0;
    *(_BYTE *)(v10 + 12) = 1;
    *(_WORD *)v10 = v9;
    *(_WORD *)(14LL * *(int *)(v4 + 48) + *(_QWORD *)(v4 + 40) + 8) = 0;
    result = *(_QWORD *)(v4 + 40);
    *(_WORD *)(14LL * (int)(*(_DWORD *)(v4 + 48))++ + result + 10) = 0;
  }
  else
  {
    if ( v9 > *(_DWORD *)(v4 + 28) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 28) = v9;
    if ( v8 > *(_DWORD *)(v4 + 36) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 36) = v8;
    if ( v9 < *(_DWORD *)(v4 + 24) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 24) = v9;
    if ( v8 < *(_DWORD *)(v4 + 32) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 32) = v8;
    ++*(_DWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 4) = 1;
  }
  return result;
}

// 14018012F: variable 'v4' is possibly undefined

//----- (0000000140180200) ----------------------------------------------------
void            sub_140180200(__int64 a1, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // r11d
  int v11; // ebx
  int v12; // edi
  int v13; // edx
  __int64 v14; // rcx

  if ( *(_DWORD *)a1 )
  {
    v10 = *(_DWORD *)(a1 + 28);
    if ( a3 > v10 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 28) = a3;
      v10 = a3;
    }
    v11 = *(_DWORD *)(a1 + 36);
    if ( a4 > v11 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 36) = a4;
      v11 = a4;
    }
    v12 = *(_DWORD *)(a1 + 24);
    if ( a3 < v12 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 24) = a3;
      v12 = a3;
    }
    v13 = *(_DWORD *)(a1 + 32);
    if ( a4 < v13 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 32) = a4;
      v13 = a4;
    }
    *(_DWORD *)(a1 + 4) = 1;
    if ( a2 == 4 )
    {
      if ( a5 > v10 )
      {
        *(_DWORD *)(a1 + 28) = a5;
        v10 = a5;
      }
      if ( a6 > v11 )
      {
        *(_DWORD *)(a1 + 36) = a6;
        v11 = a6;
      }
      if ( a5 < v12 )
      {
        *(_DWORD *)(a1 + 24) = a5;
        v12 = a5;
      }
      if ( a6 < v13 )
      {
        *(_DWORD *)(a1 + 32) = a6;
        v13 = a6;
      }
      if ( a7 > v10 )
        *(_DWORD *)(a1 + 28) = a7;
      if ( a8 > v11 )
        *(_DWORD *)(a1 + 36) = a8;
      if ( a7 < v12 )
        *(_DWORD *)(a1 + 24) = a7;
      ++*(_DWORD *)(a1 + 48);
      if ( a8 < v13 )
        *(_DWORD *)(a1 + 32) = a8;
    }
    else
    {
      ++*(_DWORD *)(a1 + 48);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
    *(_WORD *)(v14 + 4) = a5;
    *(_WORD *)(v14 + 6) = a6;
    *(_BYTE *)(v14 + 12) = a2;
    *(_WORD *)v14 = a3;
    *(_WORD *)(v14 + 2) = a4;
    *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = a7;
    *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + *(_QWORD *)(a1 + 40) + 10) = a8;
  }
}


//----- (0000000140180360) ----------------------------------------------------
float            sub_140180360(float a1)
{
  float v1; // xmm0_4

  if ( a1 >= 0.0 )
    return pow(a1, 0.3333333432674408);
  v1 = pow((float)-a1, 0.3333333432674408);
  return -v1;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401803B0) ----------------------------------------------------
_OWORD *           sub_1401803B0(_OWORD *a1, __int64 a2, int a3)
{
  int v5; // edx
  int v7; // esi
  int v8; // ebx
  int v9; // r9d
  unsigned __int8 v10; // dl
  int v11; // r11d
  int v12; // r8d
  int v13; // eax
  char v14; // cl
  __int64 v15; // rdx
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r8d
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  __int64 v22; // rax
  int v24; // r9d
  __int128 v25; // [rsp+20h] [rbp-28h]

  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 < 0 )
  {
    sub_14023E640(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
    v5 = *(_DWORD *)(a2 + 12);
  }
  v7 = 0;
  if ( v5 < 0 )
    v7 = v5;
  *(_DWORD *)(a2 + 8) = v7;
  if ( v7 >= v5 )
  {
LABEL_38:
    v25 = 0u;
    if ( v5 >= 0 )
    {
      v22 = *(_QWORD *)a2;
LABEL_40:
      *(_QWORD *)&v25 = v22;
    }
  }
  else
  {
    v8 = v7;
    while ( 1 )
    {
      while ( (unsigned __int8)sub_14017F0C0(a2) >= 0x1Cu )
      {
        v9 = *(_DWORD *)(a2 + 12);
        if ( v8 >= v9 || (v10 = *(_BYTE *)(v8 + *(_QWORD *)a2), v10 < 0x1Cu) )
        {
          sub_14023E640((char *)L"b0 >= 28", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x4A1u);
        }
        else if ( v10 == 30 )
        {
          if ( (++v8 > v9 || (v11 = *(_DWORD *)(a2 + 12), v8 < 0))
            && ((sub_14023E640(
                   (char *)L"!(o > b->size || o < 0)",
                   (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                   0x45Cu),
                 v11 = *(_DWORD *)(a2 + 12),
                 v9 = v11,
                 v8 > v11)
             || v8 < 0) )
          {
            v8 = *(_DWORD *)(a2 + 12);
            *(_DWORD *)(a2 + 8) = v11;
          }
          else
          {
            *(_DWORD *)(a2 + 8) = v8;
            if ( v8 < v9 )
            {
              v12 = v9;
              v13 = v8;
              do
              {
                if ( v13 < v9 )
                {
                  v12 = v11;
                  v15 = v13++;
                  v14 = *(_BYTE *)(v15 + *(_QWORD *)a2);
                  *(_DWORD *)(a2 + 8) = v13;
                }
                else
                {
                  v14 = 0;
                }
                v8 = v13;
              }
              while ( (v14 & 0xF) != 0xF && (v14 & 0xF0) != 0xF0 && v13 < v12 );
            }
          }
          continue;
        }
        sub_14017F5B0(a2);
        v8 = *(_DWORD *)(a2 + 8);
      }
      v5 = *(_DWORD *)(a2 + 12);
      v16 = v8;
      if ( v8 < v5 )
      {
        v18 = v8++;
        LOBYTE(v17) = *(_BYTE *)(v18 + *(_QWORD *)a2);
        *(_DWORD *)(a2 + 8) = v8;
      }
      else
      {
        LOBYTE(v17) = 0;
      }
      v17 = (unsigned __int8)v17;
      v19 = v8;
      if ( (unsigned __int8)v17 == 12 )
      {
        if ( v8 < v5 )
        {
          ++v8;
          v21 = v19;
          v19 = v8;
          v20 = *(_BYTE *)(v21 + *(_QWORD *)a2);
          *(_DWORD *)(a2 + 8) = v8;
        }
        else
        {
          v20 = 0;
        }
        v17 = v20 | 0x100;
      }
      if ( v17 == a3 )
        break;
      v7 = v19;
      if ( v19 >= v5 )
        goto LABEL_38;
    }
    v24 = v16 - v7;
    v25 = 0u;
    if ( v7 >= 0 && v24 >= 0 && v7 <= v5 && v24 <= v5 - v7 )
    {
      v22 = *(_QWORD *)a2 + v7;
      HIDWORD(v25) = v24;
      goto LABEL_40;
    }
  }
  *a1 = v25;
  return a1;
}

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];
// 140272F80: using guessed type __int16[9];

//----- (00000001401805D0) ----------------------------------------------------
__int64            sub_1401805D0(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  result = (__int64)sub_1401803B0(&v9, a1, a2);
  v7 = v4;
  v9 = *(_OWORD *)result;
  if ( (int)v4 > 0 )
  {
    v8 = 0;
    do
    {
      result = HIDWORD(v9);
      if ( SDWORD2(v9) >= SHIDWORD(v9) )
        break;
      result = sub_14017F5B0((__int64)&v9);
      *(_DWORD *)(a4 + 4 * v8++) = result;
    }
    while ( v8 < v7 );
  }
  return result;
}


//----- (0000000140180640) ----------------------------------------------------
void            sub_140180640(__int64 a1, __int64 a2, int a3, float *a4, float a5)
{
  float *v5; // rdi
  float v8; // xmm15_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm13_4
  float v13; // xmm14_4
  float v14; // xmm12_4
  float v15; // xmm10_4
  float v16; // xmm9_4
  float v17; // xmm8_4
  int v18; // ebx
  float v19; // xmm10_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  int v22; // ebp
  int v23; // ecx
  __int64 v24; // rdx
  float v25; // xmm12_4
  float v26; // xmm7_4
  float v27; // xmm2_4
  float v28; // xmm12_4
  float v29; // xmm6_4
  float *v30; // rax
  unsigned __int64 v31; // rcx
  float v32; // xmm3_4
  float v33; // xmm0_4
  float v34; // xmm6_4
  float v35; // xmm0_4
  float v36; // xmm6_4
  float v37; // xmm1_4
  float v38; // xmm6_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm12_4
  int v42; // ebx
  float v43; // xmm13_4
  int v44; // ebp
  float v45; // xmm9_4
  float v46; // xmm6_4
  float v47; // xmm8_4
  bool v48; // cf
  bool v49; // cf

  if ( a4 )
  {
    v5 = a4;
    v8 = a5 + 1.0;
    while ( 1 )
    {
      if ( a5 > v5[7] )
        sub_14023E640((char *)L"e->ey >= y_top", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xB92u);
      v10 = v5[3];
      v11 = v5[2];
      if ( v10 == 0.0 )
      {
        if ( v11 < (float)a3 )
        {
          if ( v11 < 0.0 )
          {
            sub_140181350(a2 - 4, 0, v5, v11, a5, v11, v8);
          }
          else
          {
            sub_140181350(a1, (int)v11, v5, v11, a5, v11, v8);
            sub_140181350(a2 - 4, (int)v11 + 1, v5, v11, a5, v11, v8);
          }
        }
        goto LABEL_63;
      }
      v12 = v5[6];
      v13 = v5[4];
      v14 = v10 + v11;
      if ( v12 > v8 || (v15 = v5[7], v15 < a5) )
      {
        sub_14023E640(
          (char *)L"e->sy <= y_bottom && e->ey >= y_top",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
          0xBA5u);
        v12 = v5[6];
        v15 = v5[7];
      }
      if ( v12 <= a5 )
      {
        v16 = v11;
        v12 = a5;
      }
      else
      {
        v16 = (float)((float)(v12 - a5) * v10) + v11;
      }
      if ( v15 >= v8 )
      {
        v17 = v10 + v11;
        v15 = a5 + 1.0;
      }
      else
      {
        v17 = (float)((float)(v15 - a5) * v10) + v11;
      }
      if ( v16 >= 0.0 && v17 >= 0.0 && v16 < (float)a3 && v17 < (float)a3 )
      {
        v18 = (int)v16;
        if ( SLODWORD(v16) == SLODWORD(v17) )
        {
          v19 = v15 - v12;
          if ( v18 < 0 || v18 >= a3 )
            sub_14023E640(
              (char *)L"x >= 0 && x < len",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xBC1u);
          *(float *)(a1 + 4LL * v18) = (float)((float)((float)(1.0
                                                             - (float)((float)((float)(v17 - (float)v18)
                                                                             + (float)(v16 - (float)v18))
                                                                     * 0.5))
                                                     * v5[5])
                                             * v19)
                                     + *(float *)(a1 + 4LL * v18);
          *(float *)(a2 + 4LL * v18) = (float)(v19 * v5[5]) + *(float *)(a2 + 4LL * v18);
        }
        else
        {
          if ( v16 > v17 )
          {
            v13 = -v13;
            v11 = v10 + v11;
            v20 = v8 - (float)(v12 - a5);
            v12 = v8 - (float)(v15 - a5);
            v15 = v20;
            v21 = v17;
            v17 = v16;
            v16 = v21;
          }
          v22 = (int)v17;
          v23 = (int)v16 + 1;
          v24 = v23;
          v25 = (float)v23 - v11;
          v26 = v5[5];
          v27 = v26 * v13;
          v28 = (float)(v25 * v13) + a5;
          v29 = (float)(v28 - v12) * v26;
          *(float *)(a1 + 4LL * (int)v16) = (float)((float)(0.5 - (float)((float)(v16 - (float)(int)v16) * 0.5)) * v29)
                                          + *(float *)(a1 + 4LL * (int)v16);
          if ( v23 < (__int64)(int)v17 )
          {
            if ( v22 - (__int64)v23 < 4 )
              goto LABEL_66;
            v30 = (float *)(a1 + 8 + 4LL * v23);
            v31 = ((unsigned __int64)(v22 - (__int64)v23 - 4) >> 2) + 1;
            v32 = v27 * 0.5;
            v24 += 4 * v31;
            do
            {
              v33 = v32 + v29;
              v34 = v29 + v27;
              *(v30 - 2) = v33 + *(v30 - 2);
              v35 = v32 + v34;
              v36 = v34 + v27;
              v37 = v32 + v36;
              v38 = v36 + v27;
              *(v30 - 1) = v35 + *(v30 - 1);
              v39 = v32 + v38;
              v29 = v38 + v27;
              *v30 = v37 + *v30;
              v30[1] = v39 + v30[1];
              v30 += 4;
              --v31;
            }
            while ( v31 );
            if ( v24 < v22 )
            {
LABEL_66:
              do
              {
                v40 = (float)(v27 * 0.5) + v29;
                v29 = v29 + v27;
                *(float *)(a1 + 4 * v24) = v40 + *(float *)(a1 + 4 * v24);
                ++v24;
              }
              while ( v24 < v22 );
            }
          }
          v41 = v28 + (float)((float)(v22 - (int)v16 - 1) * v13);
          if ( fabs(v29) > 1.01 )
            sub_14023E640(
              (char *)L"fabs(area) <= 1.01f",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xBE6u);
          *(float *)(a1 + 4LL * v22) = (float)((float)((float)((float)(1.0 - (float)((float)(v17 - (float)v22) * 0.5))
                                                             * v26)
                                                     * (float)(v15 - v41))
                                             + v29)
                                     + *(float *)(a1 + 4LL * v22);
          *(float *)(a2 + 4LL * v22) = (float)((float)(v15 - v12) * v26) + *(float *)(a2 + 4LL * v22);
        }
        goto LABEL_63;
      }
      v42 = 0;
      if ( a3 > 0 )
        break;
LABEL_63:
      v5 = *(float **)v5;
      if ( !v5 )
        return;
    }
    v43 = 1.0 / v10;
    while ( 1 )
    {
      v44 = v42 + 1;
      v45 = (float)v42;
      v46 = (float)(v42 + 1);
      v47 = (float)((float)(v46 - v11) * v43) + a5;
      if ( v11 >= (float)v42 || v14 <= v46 )
        break;
      sub_140181350(a1, v42, v5, v11, a5, (float)v42, (float)((float)((float)v42 - v11) * v43) + a5);
      sub_140181350(
        a1,
        v42,
        v5,
        v45,
        (float)((float)((float)v42 - v11) * v43) + a5,
        (float)v44,
        (float)((float)((float)v44 - v11) * v43) + a5);
LABEL_62:
      sub_140181350(a1, v42++, v5, v46, v47, v14, v8);
      if ( v44 >= a3 )
        goto LABEL_63;
    }
    if ( v14 < v45 && v11 > v46 )
    {
      sub_140181350(a1, v42, v5, v11, a5, (float)v44, (float)((float)((float)v44 - v11) * v43) + a5);
      sub_140181350(
        a1,
        v42,
        v5,
        v46,
        (float)((float)((float)v44 - v11) * v43) + a5,
        (float)v42,
        (float)((float)((float)v42 - v11) * v43) + a5);
LABEL_54:
      v46 = (float)v42;
      v47 = (float)((float)((float)v42 - v11) * v43) + a5;
      goto LABEL_62;
    }
    if ( v11 >= v45 )
    {
      v48 = v14 < v45;
    }
    else
    {
      v48 = v14 < v45;
      if ( v14 > v45 )
      {
LABEL_53:
        sub_140181350(a1, v42, v5, v11, a5, (float)v42, (float)((float)((float)v42 - v11) * v43) + a5);
        goto LABEL_54;
      }
    }
    if ( !v48 || v11 <= v45 )
    {
      if ( v11 >= v46 )
      {
        v49 = v14 < v46;
      }
      else
      {
        v49 = v14 < v46;
        if ( v14 > v46 )
        {
LABEL_57:
          sub_140181350(a1, v42, v5, v11, a5, (float)v44, (float)((float)((float)v44 - v11) * v43) + a5);
          goto LABEL_62;
        }
      }
      if ( !v49 || v11 <= v46 )
      {
        v46 = v11;
        v47 = a5;
        goto LABEL_62;
      }
      goto LABEL_57;
    }
    goto LABEL_53;
  }
}

// 140272E60: using guessed type __int16[45];
// 140273300: using guessed type __int16[15];
// 140273320: using guessed type __int16[36];
// 140273368: using guessed type __int16 aX0XLen[18];
// 140273390: using guessed type __int16[20];
// 140279870: using guessed type __int128 xmmword_140279870;

//----- (0000000140180D50) ----------------------------------------------------
__int64            sub_140180D50(__int64 a1, unsigned int a2, char *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // edx
  int v6; // r10d
  __int64 v7; // r9

  v3 = a2;
  v4 = a2 + 12;
  v5 = 0;
  v6 = *(unsigned __int8 *)(v3 + a1 + 5) + (*(unsigned __int8 *)(v3 + a1 + 4) << 8);
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    v7 = v4 + 16 * v5;
    if ( *(unsigned __int8 *)(v7 + a1) == *a3
      && *(unsigned __int8 *)(v7 + a1 + 1) == a3[1]
      && *(unsigned __int8 *)(v7 + a1 + 2) == a3[2]
      && *(unsigned __int8 *)(v7 + a1 + 3) == a3[3] )
    {
      break;
    }
    if ( ++v5 >= v6 )
      return 0;
  }
  return *(unsigned __int8 *)(v7 + a1 + 11)
       + ((*(unsigned __int8 *)(v7 + a1 + 10)
         + ((*(unsigned __int8 *)(v7 + a1 + 9) + (*(unsigned __int8 *)(v7 + a1 + 8) << 8)) << 8)) << 8);
}


//----- (0000000140180E10) ----------------------------------------------------
_QWORD *           sub_140180E10(_QWORD *a1, __int64 *a2, int a3)
{
  int v3; // esi
  int v7; // eax
  int v8; // edx
  unsigned __int8 v9; // cl
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // ebp
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140180E10[32];
#define v17 (*(__int128 (*))(void *)(sr_frame_140180E10 + 0)) /* [rsp+20h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140180E10 + 16)) /* [rsp+30h] */

  v3 = *((_DWORD *)a2 + 3);
  if ( v3 < 0 )
    sub_14023E640(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
  v7 = 0;
  if ( v3 < 0 )
    v7 = v3;
  *((_DWORD *)a2 + 2) = v7;
  if ( v7 < v3 )
  {
    v10 = v7 + 1;
    v11 = v7;
    v12 = *a2;
    *((_DWORD *)a2 + 2) = v10;
    v8 = *(unsigned __int8 *)(v11 + v12);
    if ( v10 < v3 )
    {
      v9 = *(_BYTE *)(v10 + v12);
      *((_DWORD *)a2 + 2) = v10 + 1;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  v13 = v9 | (v8 << 8);
  v14 = 107;
  if ( v13 < 0x846C )
  {
    if ( v13 >= 0x4D8 )
      v14 = 1131;
  }
  else
  {
    v14 = 0x8000;
  }
  v15 = v14 + a3;
  if ( v15 < 0 || v15 >= (int)v13 )
  {
    *a1 = 0;
    a1[1] = 0;
  }
  else
  {
    v17 = *(_OWORD *)a2;
    *(_OWORD *)a1 = *sub_14017F410(&v18, (__int64)&v17, v15);
  }
  return a1;
}
#undef v17
#undef v18

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];

//----- (0000000140180F10) ----------------------------------------------------
__int64            sub_140180F10(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // rbx
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140180F10[80];
#define v12 (*(__int128 (*))(void *)(sr_frame_140180F10 + 0)) /* [rsp+20h] */
#define v13 (*(_OWORD (*)[2])(void *)(sr_frame_140180F10 + 16)) /* [rsp+30h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140180F10 + 64)) /* [rsp+60h] */

  v14 = 0;
  v5 = 0;
  v6 = 0;
  v12 = *sub_1401803B0(&v12, a3, 18);
  do
  {
    if ( SDWORD2(v12) >= SHIDWORD(v12) )
      break;
    *((_DWORD *)&v14 + v6++) = sub_14017F5B0((__int64)&v12);
  }
  while ( v6 < 2 );
  v7 = HIDWORD(v14);
  if ( !HIDWORD(v14) || !(_DWORD)v14 )
    goto LABEL_20;
  v12 = 0u;
  if ( v14 >= 0 && (int)v14 >= 0 )
  {
    v8 = *(_DWORD *)(a2 + 12);
    if ( SHIDWORD(v14) <= v8 && (int)v14 <= v8 - HIDWORD(v14) )
    {
      HIDWORD(v12) = v14;
      *(_QWORD *)&v12 = *(_QWORD *)a2 + SHIDWORD(v14);
    }
  }
  v12 = *sub_1401803B0(v13, (__int64)&v12, 19);
  if ( SDWORD2(v12) < SHIDWORD(v12) )
    v5 = sub_14017F5B0((__int64)&v12);
  if ( v5 )
  {
    v9 = v5 + v7;
    v10 = *(_DWORD *)(a2 + 12);
    if ( v9 > v10 || v9 < 0 )
    {
      sub_14023E640(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      if ( v9 > v10 || v9 < 0 )
        v9 = v10;
    }
    *(_DWORD *)(a2 + 8) = v9;
    *(_OWORD *)a1 = *sub_14017F1F0(v13, a2);
  }
  else
  {
LABEL_20:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  return a1;
}
#undef v12
#undef v13
#undef v14

// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];

//----- (0000000140181080) ----------------------------------------------------
__int64            sub_140181080(unsigned __int8 *a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5; // ebp
  __int64 v6; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int v10; // ebx
  int v11; // ecx
  unsigned __int8 *v12; // r9
  __int64 v13; // r10
  int v14; // r8d
  __int64 v15; // rax
  unsigned __int8 *v16; // r9
  __int64 v17; // r10
  int v18; // r8d
  __int64 v19; // rax
  unsigned __int8 *v20; // r9
  __int64 v21; // r10
  int v22; // r8d
  __int64 v23; // rax
  unsigned __int8 *v24; // r9
  __int64 v25; // r10
  int v26; // r8d
  __int64 v27; // rax
  unsigned __int8 *v28; // r9
  __int64 v29; // r10
  int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rbp
  unsigned __int8 *v34; // rdi
  __int64 v35; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140181080[64];
#define v37 (*(__int64 (*))(void *)(sr_frame_140181080 + 0)) /* [rsp+0h] */
#define v38 (*(int (*))(void *)(sr_frame_140181080 + 32)) /* [rsp+20h] */
#define v39 (*(__int64 (*))(void *)(sr_frame_140181080 + 40)) /* [rsp+28h] */
#define v40 (*(_QWORD (*)[2])(void *)(sr_frame_140181080 + 48)) /* [rsp+30h] */

  v38 = a2;
  v40[0] = 0;
  v5 = a2;
  v6 = (int)(a2 - a5);
  if ( a3 > 0 )
  {
    v8 = a5;
    v9 = (unsigned int)a3;
    v39 = a4;
    do
    {
      sub_1401FCD30((void *)(uintptr_t)(v40), 0, v8);
      v10 = 0;
      switch ( a5 )
      {
        case 2u:
          v11 = 0;
          if ( v6 >= 0 )
          {
            v28 = a1;
            v29 = v6 + 1;
            do
            {
              v30 = *v28++;
              v31 = ((_BYTE)v11 + 2) & 7;
              v10 += v30 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v31) = v30;
              *(v28 - 1) = v10 >> 1;
              --v29;
            }
            while ( v29 );
          }
          break;
        case 3u:
          v11 = 0;
          if ( v6 >= 0 )
          {
            v24 = a1;
            v25 = v6 + 1;
            do
            {
              v26 = *v24++;
              v27 = ((_BYTE)v11 + 3) & 7;
              v10 += v26 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v27) = v26;
              *(v24 - 1) = v10 / 3;
              --v25;
            }
            while ( v25 );
          }
          break;
        case 4u:
          v11 = 0;
          if ( v6 >= 0 )
          {
            v20 = a1;
            v21 = v6 + 1;
            do
            {
              v22 = *v20++;
              v23 = ((_BYTE)v11 - 4) & 7;
              v10 += v22 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v23) = v22;
              *(v20 - 1) = v10 >> 2;
              --v21;
            }
            while ( v21 );
          }
          break;
        default:
          v11 = 0;
          if ( a5 == 5 )
          {
            if ( v6 >= 0 )
            {
              v16 = a1;
              v17 = v6 + 1;
              do
              {
                v18 = *v16++;
                v19 = ((_BYTE)v11 - 3) & 7;
                v10 += v18 - *((unsigned __int8 *)v40 + (v11++ & 7));
                *((_BYTE *)v40 + v19) = v18;
                *(v16 - 1) = v10 / 5;
                --v17;
              }
              while ( v17 );
            }
          }
          else if ( v6 >= 0 )
          {
            v12 = a1;
            v13 = v6 + 1;
            do
            {
              v14 = *v12++;
              v15 = ((_BYTE)a5 + (_BYTE)v11) & 7;
              v10 += v14 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v15) = v14;
              *(v12 - 1) = v10 / a5;
              --v13;
            }
            while ( v13 );
          }
          break;
      }
      if ( v11 < v5 )
      {
        v32 = v11;
        v33 = (unsigned int)(v5 - v11);
        v34 = &a1[v11];
        do
        {
          if ( *v34 )
            sub_14023E640(
              (char *)L"pixels[i] == 0",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xF20u);
          v35 = v32++ & 7;
          v10 -= *((unsigned __int8 *)v40 + v35);
          *v34++ = v10 / a5;
          --v33;
        }
        while ( v33 );
        v5 = v38;
      }
      a1 += v39;
      v8 = a5;
      --v9;
    }
    while ( v9 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v37
#undef v38
#undef v39
#undef v40

// 140272E60: using guessed type __int16[45];
// 140273480: using guessed type __int16[15];

//----- (0000000140181350) ----------------------------------------------------
__int64            sub_140181350(__int64 a1, int a2, float *a3, float a4, float a5, float a6, float a7)
{
  float v8; // xmm6_4
  float v11; // xmm11_4
  __int64 v12; // rdi
  __int64 result; // rax
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm7_4
  float v17; // xmm9_4
  float v18; // xmm10_4
  unsigned int v19; // r8d
  __int16 *v20; // rcx

  v8 = a7;
  v11 = a5;
  v12 = a2;
  if ( a5 != a7 )
  {
    if ( a5 >= a7 )
      result = sub_14023E640((char *)L"y0 < y1", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xB68u);
    v14 = a3[7];
    if ( v14 < a3[6] )
    {
      result = sub_14023E640(
                 (char *)L"e->sy <= e->ey",
                 (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                 0xB69u);
      v14 = a3[7];
    }
    if ( a5 <= v14 )
    {
      v15 = a3[6];
      if ( a7 >= v15 )
      {
        v16 = a6;
        if ( a5 < v15 )
        {
          v11 = a3[6];
          a4 = a4 + (float)((float)((float)(v15 - a5) * (float)(a6 - a4)) / (float)(a7 - a5));
        }
        if ( a7 > v14 )
        {
          v8 = v14;
          v16 = a6 + (float)((float)((float)(v14 - a7) * (float)(a6 - a4)) / (float)(a7 - v11));
        }
        result = (unsigned int)(v12 + 1);
        v17 = (float)(int)v12;
        v18 = (float)(v12 + 1);
        if ( a4 == (float)(int)v12 )
        {
          if ( v16 <= v18 )
            goto LABEL_24;
          v19 = 2934;
          v20 = L"x1 <= x+1";
          goto LABEL_23;
        }
        if ( a4 == v18 )
        {
          if ( v16 < v17 )
            result = sub_14023E640(
                       (char *)L"x1 >= x",
                       (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                       0xB78u);
          if ( a4 <= v17 )
          {
LABEL_24:
            if ( v16 <= v17 )
              goto LABEL_25;
            if ( a4 < v18 )
              goto LABEL_32;
          }
        }
        else
        {
          if ( a4 <= v17 )
          {
            if ( v16 <= v17 )
            {
LABEL_25:
              *(float *)(a1 + 4 * v12) = (float)((float)(v8 - v11) * a3[5]) + *(float *)(a1 + 4 * v12);
              return result;
            }
            v19 = 2938;
            v20 = L"x1 <= x";
LABEL_23:
            result = sub_14023E640((char *)v20, (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", v19);
            goto LABEL_24;
          }
          if ( a4 < v18 )
          {
            if ( v16 >= v17 && v16 <= v18 )
              goto LABEL_41;
            result = sub_14023E640(
                       (char *)L"x1 >= x && x1 <= x+1",
                       (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                       0xB7Eu);
            goto LABEL_38;
          }
          if ( v16 >= v18 )
            return result;
          result = sub_14023E640(
                     (char *)L"x1 >= x+1",
                     (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                     0xB7Cu);
        }
        if ( v16 >= v18 )
          return result;
LABEL_32:
        if ( a4 < v17 || a4 > v18 )
        {
LABEL_40:
          result = sub_14023E640(
                     (char *)L"x0 >= x && x0 <= x+1 && x1 >= x && x1 <= x+1",
                     (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                     0xB85u);
LABEL_41:
          *(float *)(a1 + 4 * v12) = (float)((float)(1.0 - (float)((float)((float)(a4 - v17) + (float)(v16 - v17)) * 0.5))
                                           * (float)((float)(v8 - v11) * a3[5]))
                                   + *(float *)(a1 + 4 * v12);
          return result;
        }
LABEL_38:
        if ( v16 >= v17 && v16 <= v18 )
          goto LABEL_41;
        goto LABEL_40;
      }
    }
  }
  return result;
}

// 140272E60: using guessed type __int16[45];
// 1402731E8: using guessed type __int16 aY0Y1[8];
// 1402731F8: using guessed type __int16[15];
// 140273218: using guessed type __int16[10];
// 140273230: using guessed type __int16[8];
// 140273240: using guessed type __int16[8];
// 140273250: using guessed type __int16[10];
// 140273268: using guessed type __int16 aX1XX1X1[21];
// 1402732A0: using guessed type __int16 aX0XX0X1X1XX1X1[45];

//----- (0000000140181620) ----------------------------------------------------
_QWORD *           sub_140181620(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  unsigned int v5; // ebx

  result = *(_QWORD **)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = *result;
    return result;
  }
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 )
    goto LABEL_10;
  if ( a2 >= 0x20 )
  {
    v5 = 100;
    if ( a2 < 0x80 )
      v5 = 800;
  }
  else
  {
    v5 = 2000;
  }
  result = (_QWORD *)sr_path_malloc(a2 * v5 + 8);
  if ( result )
  {
    *result = *(_QWORD *)a1;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(result);
LABEL_10:
    *(_DWORD *)(a1 + 16) = v5 - 1;
    return (_QWORD *)(a2 * (int)(v5 - 1) + *(_QWORD *)a1 + 8LL);
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (00000001401816D0) ----------------------------------------------------
void            sub_1401816D0(_QWORD **a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v1 = *a1;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      free(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}


//----- (0000000140181710) ----------------------------------------------------
__int64            sub_140181710(char *a1)
{
  char v1; // al

  v1 = *a1;
  if ( *a1 == 49 )
  {
    if ( a1[1] || a1[2] )
      return 0;
    return a1[3] == 0;
  }
  else
  {
    if ( v1 == 116 && a1[1] == 121 && a1[2] == 112 && a1[3] == 49 )
      return 1;
    if ( v1 == 79 )
    {
      if ( a1[1] != 84 || a1[2] != 84 )
        return 0;
      return a1[3] == 79;
    }
    else if ( v1 )
    {
      if ( v1 != 116 || a1[1] != 114 || a1[2] != 117 )
        return 0;
      return a1[3] == 101;
    }
    else
    {
      if ( a1[1] != 1 || a1[2] )
        return 0;
      return a1[3] == 0;
    }
  }
}


//----- (0000000140181790) ----------------------------------------------------
_BOOL8            sub_140181790(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ebp
  int v11; // eax

  v8 = -1;
  do
    ++v8;
  while ( *(_BYTE *)(a3 + v8) );
  if ( !(unsigned int)sub_140181710((char *)(a2 + a1))
    || a4 && (((unsigned __int8)a4 ^ *(_BYTE *)((unsigned int)sub_140180D50(a1, a2, "head") + a1 + 45)) & 7) != 0 )
  {
    return 0;
  }
  v9 = sub_140180D50(a1, a2, "name");
  v10 = v9;
  if ( !v9 )
    return 0;
  if ( !a4 )
  {
    if ( !(unsigned int)sub_1401818E0(a1, v9, a3, v8, 16, 17) )
    {
      v11 = sub_1401818E0(a1, v10, a3, v8, 1, 2);
      return v11 || (unsigned int)sub_1401818E0(a1, v10, a3, v8, 3, -1);
    }
    return 1;
  }
  if ( (unsigned int)sub_1401818E0(a1, v9, a3, v8, 16, -1) )
    return 1;
  v11 = sub_1401818E0(a1, v10, a3, v8, 1, -1);
  return v11 || (unsigned int)sub_1401818E0(a1, v10, a3, v8, 3, -1);
}


//----- (00000001401818E0) ----------------------------------------------------
__int64            sub_1401818E0(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // esi
  unsigned __int8 *v7; // r11
  int v9; // r12d
  int v10; // r8d
  __int64 v11; // r10
  __int64 v12; // rbx
  int v13; // r14d
  int v14; // edi
  int v15; // r15d
  __int64 v16; // r13
  int v17; // eax
  int v18; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401818E0[96];
#define v20 (*(int (*))(void *)(sr_frame_1401818E0 + 0)) /* [rsp+20h] */
#define v22 (*(unsigned int (*))(void *)(sr_frame_1401818E0 + 88)) /* [rsp+78h] */

  v22 = a2;
  v6 = 0;
  v7 = (unsigned __int8 *)(a1 + a2);
  v9 = v7[3] + (v7[2] << 8);
  v10 = a2 + (v7[4] << 8) + v7[5];
  v20 = v10;
  if ( !v9 )
    return 0;
  v11 = a1;
  while ( 1 )
  {
    v12 = a2 + 12 * v6 + 6;
    if ( *(unsigned __int8 *)(v12 + v11 + 7) + (*(unsigned __int8 *)(v12 + v11 + 6) << 8) != a5 )
      goto LABEL_21;
    v13 = *(unsigned __int8 *)(v12 + v11 + 1) + (*(unsigned __int8 *)(v12 + v11) << 8);
    v14 = *(unsigned __int8 *)(v12 + v11 + 3) + (*(unsigned __int8 *)(v12 + v11 + 2) << 8);
    v15 = *(unsigned __int8 *)(v12 + v11 + 5) + (*(unsigned __int8 *)(v12 + v11 + 4) << 8);
    if ( v13 )
    {
      if ( v13 != 3 || v14 != 1 && v14 != 10 )
        goto LABEL_21;
    }
    v16 = v10;
    v17 = sub_14017D6B0(
            a3,
            a4,
            (unsigned __int8 *)(v11
                              + v10
                              + ((unsigned __int64)*(unsigned __int8 *)(v12 + v11 + 10) << 8)
                              + *(unsigned __int8 *)(v12 + v11 + 11)),
            (*(unsigned __int8 *)(v12 + v11 + 8) << 8) + (unsigned int)*(unsigned __int8 *)(v12 + v11 + 9));
    v11 = a1;
    if ( v17 >= 0 )
    {
      if ( v6 + 1 < v9
        && *(unsigned __int8 *)(v12 + a1 + 19) + (*(unsigned __int8 *)(v12 + a1 + 18) << 8) == a6
        && *(unsigned __int8 *)(v12 + a1 + 13) + (*(unsigned __int8 *)(v12 + a1 + 12) << 8) == v13
        && *(unsigned __int8 *)(v12 + a1 + 15) + (*(unsigned __int8 *)(v12 + a1 + 14) << 8) == v14
        && *(unsigned __int8 *)(v12 + a1 + 17) + (*(unsigned __int8 *)(v12 + a1 + 16) << 8) == v15 )
      {
        v18 = *(unsigned __int8 *)(v12 + a1 + 21) + (*(unsigned __int8 *)(v12 + a1 + 20) << 8);
        if ( v18 )
        {
          if ( v17 < a4 && *(_BYTE *)(v17 + a3) == 32 )
          {
            if ( a4 - (v17 + 1) == (unsigned int)sub_14017D6B0(
                                                   a3 + v17 + 1,
                                                   a4 - (v17 + 1),
                                                   (unsigned __int8 *)(a1
                                                                     + v16
                                                                     + ((unsigned __int64)*(unsigned __int8 *)(v12 + a1 + 22) << 8)
                                                                     + *(unsigned __int8 *)(v12 + a1 + 23)),
                                                   v18) )
              return 1;
            v11 = a1;
          }
          goto LABEL_20;
        }
      }
      if ( v17 == a4 )
        return 1;
    }
LABEL_20:
    v10 = v20;
    a2 = v22;
LABEL_21:
    if ( ++v6 >= v9 )
      return 0;
  }
}
#undef v20
#undef v22


//----- (0000000140181B30) ----------------------------------------------------
__int64            sub_140181B30(__int64 a1, __int64 a2, int a3, float a4)
{
  __int64 v4; // r9
  int v8; // eax
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  int v11; // eax
  float v12; // xmm1_4
  int v14; // xmm2_4
  float v15; // xmm0_4

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)v4;
    goto LABEL_8;
  }
  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v9 = (_QWORD *)sr_path_malloc(25608);
    v10 = v9;
    if ( !v9 )
    {
      v4 = 0;
      goto LABEL_8;
    }
    *v9 = *(_QWORD *)a1;
    v8 = 800;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(v10);
  }
  v11 = v8 - 1;
  v4 = 32LL * v11 + *(_QWORD *)a1 + 8LL;
  *(_DWORD *)(a1 + 16) = v11;
LABEL_8:
  v12 = (float)(*(float *)(a2 + 8) - *(float *)a2) / (float)(*(float *)(a2 + 12) - *(float *)(a2 + 4));
  if ( v4 )
  {
    v14 = 1065353216;
    v15 = 0.0;
    *(float *)(v4 + 12) = v12;
    if ( v12 != 0.0 )
      v15 = 1.0 / v12;
    *(float *)(v4 + 16) = v15;
    *(float *)(v4 + 8) = (float)((float)((float)(a4 - *(float *)(a2 + 4)) * v12) + *(float *)a2) - (float)a3;
    if ( !*(_DWORD *)(a2 + 16) )
      v14 = -1082130432;
    *(_DWORD *)(v4 + 20) = v14;
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)v4 = 0;
    return v4;
  }
  else
  {
    sub_14023E640((char *)L"z != ((void *)0)", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xABEu);
    return 0;
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272E60: using guessed type __int16[45];
// 1402731C0: using guessed type __int16 aZVoid0[17];

//----- (0000000140181C60) ----------------------------------------------------
__int64            sub_140181C60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // edi

  v3 = a3;
  if ( a3 >= 0x40000000 )
    sub_14023E640((char *)L"size < 0x40000000", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x472u);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = v3;
  *(_DWORD *)(a1 + 8) = 0;
  return a1;
}

// 140272E60: using guessed type __int16[45];
// 140272F18: using guessed type __int16[18];

//----- (0000000140181CF0) ----------------------------------------------------
__int64            sub_140181CF0(
        int *a1,
        __int64 a2,
        int *a3,
        unsigned int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  int *v12; // rdi
  float v13; // xmm6_4
  __int64 v14; // r15
  __int64 v15; // rbx
  int *v16; // rsi
  int v17; // r9d
  __int64 v18; // rcx
  __m128i v19; // xmm2
  __m128i v20; // xmm1
  signed __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm1
  int v26; // edx
  int v27; // r8d
  float *v28; // r12
  int v29; // ecx
  int v30; // r14d
  __int64 v31; // rsi
  int v32; // r13d
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r15d
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rbx
  float *v39; // rcx
  float *v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // r12
  float v43; // xmm0_4
  __int64 v44; // r10
  float v45; // xmm2_4
  int v46; // eax
  bool v47; // cf
  bool v48; // zf
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  __int64 v53; // rdx
  __int64 v54; // r10
  __int64 v55; // r11
  int v56; // eax
  bool v57; // cf
  bool v58; // zf
  float v59; // xmm1_4
  float v60; // xmm0_4
  float v61; // xmm1_4
  float v62; // xmm2_4
  __int64 v63; // r10
  int v64; // eax
  bool v65; // cf
  bool v66; // zf
  float v67; // xmm1_4
  float v68; // xmm0_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  __int64 v71; // r10
  __int64 v72; // r11
  int v73; // eax
  bool v74; // cf
  bool v75; // zf
  float v76; // xmm1_4
  float v77; // xmm0_4
  float v78; // xmm1_4
  __int64 v79; // r11
  float *v80; // rcx
  float v81; // xmm0_4
  __int64 v82; // r10
  float v83; // xmm1_4
  int v84; // eax
  bool v85; // cf
  bool v86; // zf
  float v87; // xmm1_4
  float v88; // xmm0_4
  float v89; // xmm1_4
  __int64 v90; // r10
  float *v91; // r11
  __int128 v92; // xmm2
  float v93; // r8d
  float *v94; // rcx
  __int64 v95; // rdx
  float v96; // xmm1_4
  int v97; // eax
  __int64 v98; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140181CF0[144];
#define v100 (*(_QWORD (*)[8])(void *)(sr_frame_140181CF0 + 0)) /* [rsp+0h] */
#define v101 (*(int (*))(void *)(sr_frame_140181CF0 + 64)) /* [rsp+40h] */
#define v102 (*(int * (*))(void *)(sr_frame_140181CF0 + 72)) /* [rsp+48h] */
#define v103 (*(__int64 (*))(void *)(sr_frame_140181CF0 + 80)) /* [rsp+50h] */
#define v104 (*(__int64 (*))(void *)(sr_frame_140181CF0 + 88)) /* [rsp+58h] */
#define v105 (*(__int64 (*))(void *)(sr_frame_140181CF0 + 96)) /* [rsp+60h] */
#define v106 (*(int * (*))(void *)(sr_frame_140181CF0 + 104)) /* [rsp+68h] */
#define v107 (*(__int128 (*))(void *)(sr_frame_140181CF0 + 112)) /* [rsp+70h] */
#define v108 (*(__int64 (*))(void *)(sr_frame_140181CF0 + 136)) /* [rsp+88h] */

  v12 = a3;
  v13 = a6;
  v14 = a2;
  v15 = a4;
  v16 = a1;
  v102 = a3;
  v105 = a2;
  v106 = a1;
  if ( a11 )
    v13 = -a6;
  v17 = 0;
  LODWORD(v18) = 0;
  if ( (int)v15 >= 8 )
  {
    v19 = _mm_cvtsi64_si128((long long)(0));
    v20 = _mm_cvtsi64_si128((long long)(0));
    v21 = 0;
    do
    {
      LODWORD(v18) = v18 + 8;
      v19 = _mm_add_epi32(_mm_loadu_si128((     __m128i *)&a3[v21]), v19);
      v22 = _mm_loadu_si128((     __m128i *)&a3[v21 + 4]);
      v21 += 8LL;
      v23 = _mm_add_epi32(v22, v20);
      v20 = v23;
    }
    while ( v21 < (__int64)((int)v15 & 0xFFFFFFFFFFFFFFF8uLL) );
    v24 = _mm_add_epi32(v23, v19);
    v25 = _mm_add_epi32(v24, _mm_srli_si128(v24, 8));
    v17 = _mm_cvtsi128_si32(_mm_add_epi32(v25, _mm_srli_si128(v25, 4)));
  }
  v26 = 0;
  v18 = (int)v18;
  v27 = 0;
  if ( (int)v18 < (__int64)(int)v15 )
  {
    if ( (int)v15 - (__int64)(int)v18 < 2 )
      goto LABEL_11;
    do
    {
      v26 += v12[v18];
      v27 += v12[v18 + 1];
      v18 += 2;
    }
    while ( v18 < (int)v15 - 1LL );
    if ( v18 < (int)v15 )
LABEL_11:
      v17 += v12[v18];
    v17 += v27 + v26;
  }
  v104 = sr_path_malloc(20LL * (v17 + 1));
  v28 = (float *)v104;
  if ( !v104 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v29 = 0;
  v30 = 0;
  if ( (int)v15 <= 0 )
    goto LABEL_63;
  v31 = 0;
  v103 = v15;
  do
  {
    v32 = 0;
    v33 = 0;
    v34 = v14 + 8LL * v29;
    v35 = *v12;
    v29 += *v12;
    v101 = v29;
    v36 = v35 - 1;
    if ( v35 < 4 )
    {
      if ( v35 <= 0 )
        goto LABEL_61;
      v37 = v36;
    }
    else
    {
      v37 = v36;
      v38 = 2;
      v39 = &v28[5 * v31];
      v40 = (float *)(v34 + 20);
      v41 = ((unsigned int)(v35 - 4) >> 2) + 1;
      v42 = v41;
      v32 = 4 * v41;
      do
      {
        v43 = *(float *)(v34 + 8 * v37 + 4);
        v44 = v33;
        v45 = *(v40 - 4);
        if ( v43 != v45 )
        {
          v46 = 0;
          v39[4] = 0.0;
          if ( a11 )
          {
            v47 = v43 < v45;
            v48 = v43 == v45;
          }
          else
          {
            v47 = v45 < v43;
            v48 = v45 == v43;
          }
          LOBYTE(v46) = !v47 && !v48;
          if ( v46 )
          {
            v44 = v37;
            *((_DWORD *)v39 + 4) = 1;
            v37 = v33;
          }
          ++v30;
          ++v31;
          v49 = (float)(v13 * *(float *)(v34 + 8 * v44 + 4)) + a8;
          *v39 = (float)(a5 * *(float *)(v34 + 8 * v44)) + a7;
          v50 = a5 * *(float *)(v34 + 8 * v37);
          v39[1] = v49;
          v51 = (float)(v13 * *(float *)(v34 + 8 * v37 + 4)) + a8;
          v39[2] = v50 + a7;
          v39[3] = v51;
          v39 += 5;
        }
        v52 = *(v40 - 2);
        v53 = v38 - 1;
        v54 = v38 - 1;
        v55 = v33;
        if ( v45 != v52 )
        {
          v56 = 0;
          v39[4] = 0.0;
          if ( a11 )
          {
            v57 = v45 < v52;
            v58 = v45 == v52;
          }
          else
          {
            v57 = v52 < v45;
            v58 = v52 == v45;
          }
          LOBYTE(v56) = !v57 && !v58;
          if ( v56 )
          {
            *((_DWORD *)v39 + 4) = 1;
            v54 = v33;
            v55 = v38 - 1;
          }
          ++v30;
          ++v31;
          v59 = (float)(v13 * *(float *)(v34 + 8 * v54 + 4)) + a8;
          *v39 = (float)(a5 * *(float *)(v34 + 8 * v54)) + a7;
          v60 = a5 * *(float *)(v34 + 8 * v55);
          v39[1] = v59;
          v61 = (float)(v13 * *(float *)(v34 + 8 * v55 + 4)) + a8;
          v39[2] = v60 + a7;
          v39[3] = v61;
          v39 += 5;
        }
        v62 = *v40;
        v63 = v38;
        if ( v52 != *v40 )
        {
          v64 = 0;
          v39[4] = 0.0;
          if ( a11 )
          {
            v65 = v52 < v62;
            v66 = v52 == v62;
          }
          else
          {
            v65 = v62 < v52;
            v66 = v62 == v52;
          }
          LOBYTE(v64) = !v65 && !v66;
          if ( v64 )
          {
            v63 = v38 - 1;
            *((_DWORD *)v39 + 4) = 1;
            v53 = v38;
          }
          ++v30;
          ++v31;
          v67 = (float)(v13 * *(float *)(v34 + 8 * v63 + 4)) + a8;
          *v39 = (float)(a5 * *(float *)(v34 + 8 * v63)) + a7;
          v68 = a5 * *(float *)(v34 + 8 * v53);
          v39[1] = v67;
          v69 = (float)(v13 * *(float *)(v34 + 8 * v53 + 4)) + a8;
          v39[2] = v68 + a7;
          v39[3] = v69;
          v39 += 5;
        }
        v70 = v40[2];
        v37 = v38 + 1;
        v71 = v38 + 1;
        v72 = v38;
        if ( v62 != v70 )
        {
          v73 = 0;
          v39[4] = 0.0;
          if ( a11 )
          {
            v74 = v62 < v70;
            v75 = v62 == v70;
          }
          else
          {
            v74 = v70 < v62;
            v75 = v70 == v62;
          }
          LOBYTE(v73) = !v74 && !v75;
          if ( v73 )
          {
            *((_DWORD *)v39 + 4) = 1;
            v71 = v38;
            v72 = v38 + 1;
          }
          ++v30;
          ++v31;
          v76 = (float)(v13 * *(float *)(v34 + 8 * v71 + 4)) + a8;
          *v39 = (float)(a5 * *(float *)(v34 + 8 * v71)) + a7;
          v77 = a5 * *(float *)(v34 + 8 * v72);
          v39[1] = v76;
          v78 = (float)(v13 * *(float *)(v34 + 8 * v72 + 4)) + a8;
          v39[2] = v77 + a7;
          v39[3] = v78;
          v39 += 5;
        }
        v33 += 4;
        v38 += 4;
        v40 += 8;
        --v42;
      }
      while ( v42 );
      v12 = v102;
      v28 = (float *)v104;
      v15 = v103;
      if ( v32 >= v35 )
        goto LABEL_60;
    }
    v79 = (unsigned int)(v35 - v32);
    v80 = &v28[4 * v31 + 4 + v31];
    do
    {
      v81 = *(float *)(v34 + 8 * v37 + 4);
      v82 = v33;
      v83 = *(float *)(v34 + 8 * v33 + 4);
      if ( v81 != v83 )
      {
        v84 = 0;
        *v80 = 0.0;
        if ( a11 )
        {
          v85 = v81 < v83;
          v86 = v81 == v83;
        }
        else
        {
          v85 = v83 < v81;
          v86 = v83 == v81;
        }
        LOBYTE(v84) = !v85 && !v86;
        if ( v84 )
        {
          v82 = v37;
          *(_DWORD *)v80 = 1;
          v37 = v33;
        }
        ++v30;
        ++v31;
        v87 = (float)(v13 * *(float *)(v34 + 8 * v82 + 4)) + a8;
        *(v80 - 4) = (float)(a5 * *(float *)(v34 + 8 * v82)) + a7;
        v88 = a5 * *(float *)(v34 + 8 * v37);
        *(v80 - 3) = v87;
        v89 = (float)(v13 * *(float *)(v34 + 8 * v37 + 4)) + a8;
        *(v80 - 2) = v88 + a7;
        *(v80 - 1) = v89;
        v80 += 5;
      }
      v37 = v33++;
      --v79;
    }
    while ( v79 );
LABEL_60:
    v29 = v101;
LABEL_61:
    v14 = v105;
    ++v12;
    --v15;
    v102 = v12;
    v103 = v15;
  }
  while ( v15 );
  v16 = v106;
LABEL_63:
  sub_140183BF0(v28, v30);
  if ( v30 > 1LL )
  {
    v90 = 1;
    v91 = v28 + 5;
    do
    {
      v92 = *(_OWORD *)v91;
      v93 = v91[4];
      v94 = v91 - 5;
      v95 = v90;
      v107 = *(_OWORD *)v91;
      v96 = *((float *)&v107 + 1);
      do
      {
        if ( v96 >= v94[1] )
          break;
        v97 = *((_DWORD *)v94 + 4);
        --v95;
        *(_OWORD *)(v94 + 5) = *(_OWORD *)v94;
        *((_DWORD *)v94 + 9) = v97;
        v94 -= 5;
      }
      while ( v95 > 0 );
      if ( v90 != v95 )
      {
        v98 = 5 * v95;
        *(_OWORD *)&v28[v98] = v92;
        v28[v98 + 4] = v93;
      }
      ++v90;
      v91 += 5;
    }
    while ( v90 < v30 );
  }
  v100[6] = a12;
  sub_140182310(v16, (__int64)v28, v30, 1, a9, a10);
  free(v28);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140279870: using guessed type __int128 xmmword_140279870;

//----- (0000000140182310) ----------------------------------------------------
__int64            sub_140182310(int *a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  int v6; // eax
  int v7; // ebp
  float *v9; // rdi
  _QWORD *v10; // r12
  float *v12; // r15
  int v13; // r11d
  __int64 v14; // rbx
  _WORD *v15; // r14
  int v16; // edx
  char *v17; // rcx
  int v18; // eax
  int v19; // ebx
  float **v20; // r14
  float v21; // xmm6_4
  float v22; // xmm8_4
  int v23; // eax
  char *v24; // rbx
  float v25; // xmm0_4
  __int64 v26; // rbx
  _QWORD *v27; // rax
  float v28; // xmm2_4
  float v29; // xmm0_4
  int v30; // xmm0_4
  float v31; // xmm0_4
  int v32; // r11d
  int v33; // r8d
  float v34; // xmm1_4
  float *v35; // r9
  signed __int64 v36; // r10
  int v37; // edx
  int v38; // eax
  float **v39; // rcx
  float **v40; // rax
  _QWORD *v41; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140182310[624];
#define v43 (*(__int64 (*))(void *)(sr_frame_140182310 + 0)) /* [rsp+0h] */
#define v44 (*(int (*))(void *)(sr_frame_140182310 + 48)) /* [rsp+30h] */
#define v45 (*(_WORD * (*))(void *)(sr_frame_140182310 + 56)) /* [rsp+38h] */
#define v46 (*(float * (*))(void *)(sr_frame_140182310 + 64)) /* [rsp+40h] */
#define v47 (*(char * (*))(void *)(sr_frame_140182310 + 72)) /* [rsp+48h] */
#define v48 (*(_BYTE (*)[528])(void *)(sr_frame_140182310 + 80)) /* [rsp+50h] */
#define v49 (*(__int64 (*))(void *)(sr_frame_140182310 + 608)) /* [rsp+260h] */

  v6 = *a1;
  v7 = 0;
  v9 = nullptr;
  v10 = nullptr;
  v12 = nullptr;
  v13 = 0;
  v14 = a3;
  v46 = nullptr;
  v44 = 0;
  if ( v6 <= 64 )
  {
    v15 = v48;
  }
  else
  {
    v15 = (_WORD *)sr_path_malloc(4LL * (2 * v6 + 1));
    v13 = 0;
    v6 = *a1;
  }
  v16 = a6;
  v45 = v15;
  v17 = (char *)&v15[2 * v6];
  v18 = a6 + a1[1];
  v47 = v17;
  *(float *)(a2 + 20 * v14 + 4) = (float)v18 + 1.0;
  if ( a1[1] > 0 )
  {
    while ( 1 )
    {
      v19 = *a1;
      v20 = &v46;
      v21 = (float)(v13 + v16);
      v22 = v21 + 1.0;
      sub_1401FCD30((void *)(uintptr_t)(v45), 0, 4LL * *a1);
      v23 = v19 + 1;
      v24 = v47;
      sub_1401FCD30((void *)(uintptr_t)(v47), 0, 4LL * v23);
      if ( v9 )
      {
        do
        {
          if ( v21 < v9[7] )
          {
            v20 = (float **)v9;
          }
          else
          {
            *v20 = *(float **)v9;
            if ( v9[5] == 0.0 )
              sub_14023E640(
                (char *)L"z->direction",
                (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                0xC4Eu);
            *(_QWORD *)v9 = (uint64)(uintptr_t)(v12);
            v12 = v9;
            v9[5] = 0.0;
          }
          v9 = *v20;
        }
        while ( *v20 );
        v9 = v46;
      }
      v25 = *(float *)(a2 + 4);
      if ( v25 <= v22 )
        break;
LABEL_35:
      v15 = v45;
      if ( v9 )
        sub_140180640((__int64)v45, (__int64)(v24 + 4), *a1, v9, v21);
      v32 = v44;
      v33 = 0;
      v34 = 0.0;
      if ( *a1 > 0 )
      {
        v35 = (float *)v45;
        v36 = v24 - (char *)v45;
        do
        {
          v34 = v34 + *(float *)((char *)v35 + v36);
          v37 = (int)(float)((float)(fabs(v34 + *v35) * 255.0) + 0.5);
          if ( v37 > 255 )
            LOBYTE(v37) = -1;
          ++v35;
          v38 = v33 + v32 * a1[2];
          ++v33;
          *(_BYTE *)(v38 + *((_QWORD *)a1 + 2)) = v37;
        }
        while ( v33 < *a1 );
        v15 = v45;
      }
      v39 = &v46;
      if ( v9 )
      {
        v40 = (float **)v9;
        do
        {
          *((float *)v40 + 2) = *((float *)v40 + 3) + *((float *)v40 + 2);
          v39 = (float **)*v39;
          v40 = (float **)*v39;
        }
        while ( *v39 );
      }
      v16 = a6;
      v13 = v32 + 1;
      v44 = v13;
      if ( v13 >= a1[1] )
        goto LABEL_47;
    }
    while ( v25 == *(float *)(a2 + 12) )
    {
LABEL_33:
      v25 = *(float *)(a2 + 24);
      a2 += 20;
      if ( v25 > v22 )
      {
        v24 = v47;
        goto LABEL_35;
      }
    }
    if ( v12 )
    {
      v26 = (__int64)v12;
      v12 = *(float **)v12;
      goto LABEL_22;
    }
    if ( !v7 )
    {
      v27 = (_QWORD *)sr_path_malloc(25608);
      if ( !v27 )
      {
        v26 = 0;
        goto LABEL_22;
      }
      *v27 = (uint64)(uintptr_t)(v10);
      v7 = 800;
      v10 = v27;
    }
    v26 = (__int64)&v10[4 * --v7 + 1];
LABEL_22:
    v28 = (float)(*(float *)(a2 + 8) - *(float *)a2) / (float)(*(float *)(a2 + 12) - *(float *)(a2 + 4));
    if ( v26 )
    {
      *(float *)(v26 + 12) = v28;
      if ( v28 == 0.0 )
        v29 = 0.0;
      else
        v29 = 1.0 / v28;
      *(float *)(v26 + 16) = v29;
      *(float *)(v26 + 8) = (float)((float)((float)(v21 - *(float *)(a2 + 4)) * v28) + *(float *)a2) - (float)a5;
      if ( *(_DWORD *)(a2 + 16) )
        v30 = 1065353216;
      else
        v30 = -1082130432;
      *(_DWORD *)(v26 + 20) = v30;
      *(_DWORD *)(v26 + 24) = *(_DWORD *)(a2 + 4);
      v31 = *(float *)(a2 + 12);
      *(_QWORD *)v26 = 0;
      *(float *)(v26 + 28) = v31;
      if ( v31 < v21 )
        sub_14023E640(
          (char *)L"z->ey >= scan_y_top",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
          0xC5Bu);
      *(_QWORD *)v26 = (uint64)(uintptr_t)(v9);
      v9 = (float *)v26;
      v46 = (float *)v26;
    }
    else
    {
      sub_14023E640((char *)L"z != ((void *)0)", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xABEu);
    }
    goto LABEL_33;
  }
LABEL_47:
  if ( v10 )
  {
    do
    {
      v41 = (_QWORD *)*v10;
      free(v10);
      v10 = v41;
    }
    while ( v41 );
  }
  if ( v15 != (_WORD *)v48 )
    free(v15);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140272E60: using guessed type __int16[45];
// 1402731C0: using guessed type __int16 aZVoid0[17];
// 1402733B8: using guessed type __int16 aZDirection[13];
// 1402733D8: using guessed type __int16 aZEyScanYTop[20];

//----- (00000001401827E0) ----------------------------------------------------
__int64            sub_1401827E0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v6; // xmm2_4
  float v7; // xmm9_4
  float v8; // xmm4_4
  float v9; // xmm10_4
  unsigned int v10; // edx
  float v11; // xmm14_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm7_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v22; // xmm4_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm8_4
  float v26; // xmm12_4
  float v27; // xmm11_4
  float v28; // xmm8_4

  v6 = 0.0;
  v7 = *a2;
  v8 = *a2;
  v9 = a2[1];
  v10 = 0;
  v11 = a3[1];
  v12 = (float)(v8 * v11) - (float)(*a3 * v9);
  v13 = (float)(a4[1] * v7) - (float)(*a4 * v9);
  v14 = v13 + v13;
  v15 = v13 - v12;
  v16 = (float)((float)(a5[1] * v7) - (float)(*a5 * v9)) + (float)(v12 - v14);
  v17 = v12 - (float)((float)(a1[1] * v7) - (float)(*a1 * v9));
  if ( v16 == 0.0 )
  {
    v20 = (float)(-0.5 / v15) * v17;
    if ( v20 < 0.0 || v20 > 1.0 )
      return 0;
    v10 = 1;
  }
  else
  {
    v18 = (float)(v15 * v15) - (float)(v17 * v16);
    if ( v18 <= 0.0 )
      return 0;
    v19 = fsqrt(v18);
    v6 = (float)(v15 - v19) * (float)(-1.0 / v16);
    v20 = (float)(v19 + v15) * (float)(-1.0 / v16);
    if ( v20 >= 0.0 )
      v10 = v20 <= 1.0;
    if ( v19 > 0.0 && v6 >= 0.0 && v6 <= 1.0 )
    {
      if ( !v10 )
        v20 = (float)(v15 - v19) * (float)(-1.0 / v16);
      ++v10;
    }
    if ( !v10 )
      return 0;
  }
  v22 = 1.0 / (float)((float)(v9 * v9) + (float)(v7 * v7));
  v23 = v7 * v22;
  v24 = v9 * v22;
  v25 = (float)(*a3 * v23) + (float)(v11 * v24);
  v26 = (float)((float)(*a5 * v23) + (float)(a5[1] * v24)) - v25;
  v27 = (float)((float)(*a4 * v23) + (float)(a4[1] * v24)) - v25;
  v28 = v25 - (float)((float)(*a1 * v23) + (float)(a1[1] * v24));
  a6[1] = (float)(v20 * v16) + v15;
  *a6 = (float)((float)((float)((float)(2.0 - (float)(v20 + v20)) * v20) * v27) + v28)
      + (float)((float)(v20 * v20) * v26);
  if ( v10 <= 1 )
    return 1;
  a6[3] = (float)(v6 * v16) + v15;
  a6[2] = (float)((float)((float)((float)(2.0 - (float)(v6 + v6)) * v6) * v27) + v28) + (float)((float)(v6 * v6) * v26);
  return 2;
}


//----- (0000000140182AD0) ----------------------------------------------------
__int64            sub_140182AD0(__int64 a1, int a2, __int64 a3)
{
  int v4; // r15d
  int v5; // edi
  __m128i v6; // xmm1
  __m128i *v7; // rax
  float v8; // xmm13_4
  float v9; // xmm14_4
  float v10; // xmm15_4
  float v11; // xmm11_4
  float v12; // xmm10_4
  float v13; // xmm12_4
  float v14; // xmm9_4
  float v15; // xmm6_4
  int v16; // r13d
  int v17; // ebx
  __int64 v18; // rax
  __int32 v19; // r8d
  int v20; // r14d
  int v21; // esi
  int v22; // esi
  __int32 v23; // ebx
  float *v24; // r10
  int v25; // r11d
  __int64 v26; // r10
  float v28; // xmm0_4
  float v29; // xmm1_4
  int v30; // esi
  float *v31; // rbx
  int v32; // r14d
  float *v33; // rsi
  float *v34; // r10
  __int64 v35; // r10
  int v36; // r11d
  float v37; // xmm5_4
  __int64 v38; // rax
  int v39; // esi
  float *v40; // rbx
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm4_4
  __int64 v44; // r14
  int v45; // ebx
  __int64 v46; // rax
  __m128i *v47; // rax
  unsigned __int8 v48; // al
  __int32 v49; // ecx
  __int64 v50; // rax
  int v51; // edx
  unsigned __int8 v52; // al
  unsigned int v53; // edx
  int v54; // eax
  int v55; // r8d
  __m128i v56; // xmm0
  char v57; // al
  float v58; // xmm6_4
  float v59; // xmm7_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  float v62; // xmm3_4
  __int32 v63; // esi
  int v64; // ebx
  __int16 v65; // ax
  float v66; // xmm0_4
  unsigned __int8 v67; // al
  int v68; // ecx
  unsigned __int8 v69; // al
  __int64 v70; // rax
  int v71; // ecx
  unsigned __int8 v72; // al
  __int64 v73; // rax
  int v74; // ecx
  unsigned __int8 v75; // al
  __int64 v76; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140182AD0[560];
#define v77 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 0)) /* [rsp+8h] */
#define v78 (*(float (*))(void *)(sr_frame_140182AD0 + 40)) /* [rsp+30h] */
#define v79 (*(float (*))(void *)(sr_frame_140182AD0 + 48)) /* [rsp+38h] */
#define v80 (*(int (*))(void *)(sr_frame_140182AD0 + 64)) /* [rsp+48h] */
#define v81 (*(__m128i (*))(void *)(sr_frame_140182AD0 + 80)) /* [rsp+58h] */
#define v82 (*(int (*))(void *)(sr_frame_140182AD0 + 96)) /* [rsp+68h] */
#define v83 (*(int (*))(void *)(sr_frame_140182AD0 + 100)) /* [rsp+6Ch] */
#define v84 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 104)) /* [rsp+70h] */
#define v85 (*(__m128i (*))(void *)(sr_frame_140182AD0 + 112)) /* [rsp+78h] */
#define v86 (*(int (*))(void *)(sr_frame_140182AD0 + 128)) /* [rsp+88h] */
#define v87 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 136)) /* [rsp+90h] */
#define v88 (*(__int128 (*))(void *)(sr_frame_140182AD0 + 144)) /* [rsp+98h] */
#define v89 (*(__int128 (*))(void *)(sr_frame_140182AD0 + 160)) /* [rsp+A8h] */
#define v90 (*(__int128 (*))(void *)(sr_frame_140182AD0 + 176)) /* [rsp+B8h] */
#define v91 (*(float (*))(void *)(sr_frame_140182AD0 + 192)) /* [rsp+C8h] */
#define v92 (*(float (*))(void *)(sr_frame_140182AD0 + 196)) /* [rsp+CCh] */
#define v93 (*(float (*))(void *)(sr_frame_140182AD0 + 200)) /* [rsp+D0h] */
#define v94 (*(float (*))(void *)(sr_frame_140182AD0 + 204)) /* [rsp+D4h] */
#define v95 (*(float (*))(void *)(sr_frame_140182AD0 + 208)) /* [rsp+D8h] */
#define v96 (*(float (*))(void *)(sr_frame_140182AD0 + 212)) /* [rsp+DCh] */
#define v97 (*(float (*))(void *)(sr_frame_140182AD0 + 216)) /* [rsp+E0h] */
#define v98 (*(float (*))(void *)(sr_frame_140182AD0 + 220)) /* [rsp+E4h] */
#define v99 (*(float (*))(void *)(sr_frame_140182AD0 + 224)) /* [rsp+E8h] */
#define v100 (*(float (*))(void *)(sr_frame_140182AD0 + 228)) /* [rsp+ECh] */
#define v101 (*(float (*))(void *)(sr_frame_140182AD0 + 232)) /* [rsp+F0h] */
#define v102 (*(float (*))(void *)(sr_frame_140182AD0 + 236)) /* [rsp+F4h] */
#define v103 (*(__m128i (*)[10])(void *)(sr_frame_140182AD0 + 384)) /* [rsp+188h] */
#define v104 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 544)) /* [rsp+228h] */

  v87 = a1;
  v86 = a2;
  v82 = 0;
  v4 = 0;
  v84 = 0;
  v5 = 0;
  v6 = *(__m128i *)(a1 + 80);
  v88 = *(_OWORD *)(a1 + 112);
  v83 = 1;
  v85 = v6;
  v7 = (__m128i *)sub_14017F410(&v81, (__int64)&v85, a2);
  v8 = v97;
  v9 = v96;
  v10 = v95;
  v11 = v94;
  v12 = v93;
  v13 = v92;
  v14 = v91;
  v15 = v99;
  v81 = *v7;
  v16 = SR_VEC_LANES(128, v81, i32)[2];
  while ( v16 < SR_VEC_LANES(128, v81, i32)[3] )
  {
    v17 = 0;
    v18 = v16++;
    v80 = 1;
    v19 = v16;
    SR_VEC_LANES(128, v81, i32)[2] = v16;
    v20 = *(unsigned __int8 *)(v18 + SR_VEC_LANES(128, v81, i64)[0]);
    v21 = v20;
    switch ( *(_BYTE *)(v18 + SR_VEC_LANES(128, v81, i64)[0]) )
    {
      case 1:
      case 3:
      case 0x12:
      case 0x17:
        v82 += v5 / 2;
        v5 = 0;
        continue;
      case 4:
        v83 = 0;
        if ( v5 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180120(a3, 0.0, *((float *)&v90 + v5 + 3));
        v5 = 0;
        continue;
      case 5:
        if ( v5 < 2 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v24 = &v91;
        do
        {
          sub_140180060(a3, *v24, v24[1]);
          v24 = (float *)(v26 + 8);
        }
        while ( v25 + 2 < v5 );
        v5 = 0;
        continue;
      case 6:
        if ( v5 >= 1 )
          goto LABEL_27;
        return 0; /* 0x140182DEF: xor eax, eax */
      case 7:
        if ( v5 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        while ( v17 < v5 )
        {
          sub_140180060(a3, 0.0, *(&v91 + v17++));
LABEL_27:
          if ( v17 >= v5 )
            break;
          sub_140180060(a3, *(&v91 + v17++), 0.0);
        }
        goto LABEL_68;
      case 8:
        if ( v5 < 6 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v30 = 5;
        v31 = &v95;
        do
        {
          sub_14017FFC0(a3, *(v31 - 4), *(v31 - 3), *(v31 - 2), *(v31 - 1), *v31, v31[1]);
          v30 += 6;
          v31 += 6;
        }
        while ( v30 < v5 );
        v5 = 0;
        continue;
      case 0xA:
        v44 = v87;
        if ( !HIDWORD(v84) )
        {
          if ( *(_DWORD *)(v87 + 156) )
            v88 = *sub_14017F820(&v89, v87, v86);
          HIDWORD(v84) = 1;
        }
        goto LABEL_74;
      case 0xB:
        if ( v4 <= 0 )
          return 0; /* 0x140182DEF: xor eax, eax */
        LODWORD(v84) = --v4;
        v81 = v103[v4];
        v16 = SR_VEC_LANES(128, v81, i32)[2];
        continue;
      case 0xC:
        if ( v16 < SR_VEC_LANES(128, v81, i32)[3] )
        {
          v57 = *(_BYTE *)(v16++ + SR_VEC_LANES(128, v81, i64)[0]);
          SR_VEC_LANES(128, v81, i32)[2] = v19 + 1;
        }
        else
        {
          v57 = 0;
        }
        switch ( v57 )
        {
          case '"':
            if ( v5 < 7 )
              return 0; /* 0x140182DEF: xor eax, eax */
            sub_14017FFC0(a3, v14, 0.0, v13, v12, v11, 0.0);
            sub_14017FFC0(a3, v10, 0.0, v9, -v12, v8, 0.0);
            v5 = 0;
            break;
          case '#':
            if ( v5 < 13 )
              return 0; /* 0x140182DEF: xor eax, eax */
            sub_14017FFC0(a3, v14, v13, v12, v11, v10, v9);
            v79 = v102;
            v78 = v101;
LABEL_115:
            v62 = v99;
            sub_14017FFC0(a3, v8, v98, v99, v100, v78, v79);
            v15 = v62;
            v5 = 0;
            continue;
          case '$':
            if ( v5 < 9 )
              return 0; /* 0x140182DEF: xor eax, eax */
            sub_14017FFC0(a3, v14, v13, v12, v11, v10, 0.0);
            sub_14017FFC0(a3, v9, 0.0, v8, v98, v15, -(float)((float)(v11 + v13) + v98));
            v5 = 0;
            break;
          default:
            if ( v57 != 37 || v5 < 11 )
              return 0; /* 0x140182DEF: xor eax, eax */
            v58 = v101;
            v59 = v101;
            v60 = (float)((float)((float)(v12 + v14) + v10) + v8) + v99;
            v61 = (float)((float)((float)(v11 + v13) + v9) + v98) + v100;
            if ( fabs(v60) <= fabs(v61) )
              v59 = -v60;
            else
              v58 = -v61;
            sub_14017FFC0(a3, v14, v13, v12, v11, v10, v9);
            v79 = v58;
            v78 = v59;
            goto LABEL_115;
        }
        break;
      case 0xE:
        sub_14017FF00(a3);
        return 1; /* 0x14018378E: mov eax, 1 */
      case 0x13:
      case 0x14:
        v22 = v82;
        if ( v83 )
        {
          v22 = v5 / 2 + v82;
          v82 = v22;
        }
        v23 = SR_VEC_LANES(128, v81, i32)[3];
        v83 = 0;
        v16 += (v22 + 7) / 8;
        if ( v16 > SR_VEC_LANES(128, v81, i32)[3] || v16 < 0 )
          sub_14023E640(
            (char *)L"!(o > b->size || o < 0)",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
            0x45Cu);
        if ( v16 > v23 || v16 < 0 )
        {
          SR_VEC_LANES(128, v81, i32)[2] = v23;
          v16 = v23;
          v5 = 0;
        }
        else
        {
          SR_VEC_LANES(128, v81, i32)[2] = v16;
          v5 = 0;
        }
        continue;
      case 0x15:
        v83 = 0;
        if ( v5 < 2 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180120(a3, *((float *)&v90 + v5 + 2), *((float *)&v90 + v5 + 3));
        v5 = 0;
        continue;
      case 0x16:
        v83 = 0;
        if ( v5 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180120(a3, *((float *)&v90 + v5 + 3), 0.0);
        v5 = 0;
        continue;
      case 0x18:
        if ( v5 < 8 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v32 = 5;
        v33 = &v95;
        do
        {
          sub_14017FFC0(a3, *(v33 - 4), *(v33 - 3), *(v33 - 2), *(v33 - 1), *v33, v33[1]);
          v17 += 6;
          v33 += 6;
          v32 += 6;
        }
        while ( v32 < v5 - 2 );
        if ( v17 + 1 >= v5 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180060(a3, *(&v91 + v17), *(&v92 + v17));
        v4 = v84;
        v5 = 0;
        continue;
      case 0x19:
        if ( v5 < 8 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v34 = &v91;
        do
        {
          sub_140180060(a3, *v34, v34[1]);
          v17 += 2;
          v34 = (float *)(v35 + 8);
        }
        while ( v36 + 2 < v5 - 6 );
        if ( v17 + 5 >= v5 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_14017FFC0(a3, *(&v91 + v17), *(&v92 + v17), *(&v93 + v17), *(&v94 + v17), *(&v95 + v17), *(&v96 + v17));
        v5 = 0;
        continue;
      case 0x1A:
      case 0x1B:
        if ( v5 < 4 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v37 = 0.0;
        v38 = v5 & 1;
        if ( (v5 & 1) != 0 )
          v37 = v14;
        v39 = v38 + 3;
        if ( (int)v38 + 3 >= v5 )
          goto LABEL_68;
        v40 = &v93 + v38;
        do
        {
          v41 = v40[1];
          if ( (_BYTE)v20 == 27 )
          {
            v42 = v40[1];
            v43 = *(v40 - 2);
            v41 = 0.0;
          }
          else
          {
            v43 = v37;
            v42 = 0.0;
            v37 = *(v40 - 2);
          }
          sub_14017FFC0(a3, v43, v37, *(v40 - 1), *v40, v42, v41);
          v39 += 4;
          v40 += 4;
          v37 = 0.0;
        }
        while ( v39 < v5 );
        v5 = 0;
        continue;
      case 0x1D:
        v44 = v87;
LABEL_74:
        if ( v5 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v45 = (int)*(&v91 + --v5);
        if ( v4 >= 10 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v46 = v4++;
        LODWORD(v84) = v4;
        v103[v46] = v81;
        v47 = (__m128i *)&v88;
        if ( v21 != 10 )
          v47 = (__m128i *)(v44 + 96);
        v81 = *v47;
        if ( SR_VEC_READ_LANES(128, _mm_srli_si128(v81, 8), i32)[1] < 0 )
          sub_14023E640(
            (char *)L"!(o > b->size || o < 0)",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
            0x45Cu);
        v48 = 0;
        v49 = SR_VEC_LANES(128, v81, i32)[3];
        if ( SR_VEC_LANES(128, v81, i32)[3] >= 0 )
          v49 = 0;
        SR_VEC_LANES(128, v81, i32)[2] = v49;
        if ( v49 < SR_VEC_LANES(128, v81, i32)[3] )
        {
          v50 = v49++;
          SR_VEC_LANES(128, v81, i32)[2] = v49;
          v48 = *(_BYTE *)(v50 + SR_VEC_LANES(128, v81, i64)[0]);
        }
        v51 = v48;
        if ( v49 < SR_VEC_LANES(128, v81, i32)[3] )
        {
          SR_VEC_LANES(128, v81, i32)[2] = v49 + 1;
          v52 = *(_BYTE *)(v49 + SR_VEC_LANES(128, v81, i64)[0]);
        }
        else
        {
          v52 = 0;
        }
        v53 = v52 | (v51 << 8);
        if ( v53 < 0x846C )
        {
          v54 = 107;
          if ( v53 >= 0x4D8 )
            v54 = 1131;
        }
        else
        {
          v54 = 0x8000;
        }
        v55 = v54 + v45;
        if ( v54 + v45 < 0 || v55 >= (int)v53 )
        {
          v85 = _mm_cvtsi64_si128((long long)(0u));
          v56 = _mm_cvtsi64_si128((long long)(0u));
        }
        else
        {
          v85 = v81;
          v56 = *(__m128i *)sub_14017F410(&v90, (__int64)&v85, v55);
          v85 = v56;
        }
        v81 = v56;
        if ( !SR_VEC_READ_LANES(128, _mm_srli_si128(v56, 8), u32)[1] )
          return 0; /* 0x140182DEF: xor eax, eax */
        SR_VEC_LANES(128, v81, i32)[2] = 0;
        v16 = 0;
        continue;
      case 0x1E:
        if ( v5 >= 4 )
          goto LABEL_34;
        return 0; /* 0x140182DEF: xor eax, eax */
      case 0x1F:
        if ( v5 < 4 )
          return 0; /* 0x140182DEF: xor eax, eax */
        while ( v17 + 3 < v5 )
        {
          v29 = v5 - v17 == 5 ? *(&v91 + v17 + 4) : 0.0;
          sub_14017FFC0(a3, *(&v91 + v17), 0.0, *(&v92 + v17), *(&v93 + v17), v29, *(&v94 + v17));
          v17 += 4;
LABEL_34:
          if ( v17 + 3 >= v5 )
            break;
          if ( v5 - v17 == 5 )
            v28 = *(&v91 + v17 + 4);
          else
            v28 = 0.0;
          sub_14017FFC0(a3, 0.0, *(&v91 + v17), *(&v92 + v17), *(&v93 + v17), *(&v94 + v17), v28);
          v17 += 4;
        }
LABEL_68:
        v5 = 0;
        continue;
      default:
        if ( v20 == 255 )
        {
          if ( v16 < SR_VEC_LANES(128, v81, i32)[3] )
          {
            v67 = *(_BYTE *)(v16++ + SR_VEC_LANES(128, v81, i64)[0]);
            SR_VEC_LANES(128, v81, i32)[2] = ++v19;
          }
          else
          {
            v67 = 0;
          }
          v68 = v67;
          if ( v19 < SR_VEC_LANES(128, v81, i32)[3] )
          {
            v70 = v16++;
            SR_VEC_LANES(128, v81, i32)[2] = v16;
            v69 = *(_BYTE *)(v70 + SR_VEC_LANES(128, v81, i64)[0]);
          }
          else
          {
            v69 = 0;
          }
          v71 = v69 | (v68 << 8);
          if ( v16 < SR_VEC_LANES(128, v81, i32)[3] )
          {
            v73 = v16++;
            SR_VEC_LANES(128, v81, i32)[2] = v16;
            v72 = *(_BYTE *)(v73 + SR_VEC_LANES(128, v81, i64)[0]);
          }
          else
          {
            v72 = 0;
          }
          v74 = v72 | (v71 << 8);
          if ( v16 < SR_VEC_LANES(128, v81, i32)[3] )
          {
            v76 = v16++;
            SR_VEC_LANES(128, v81, i32)[2] = v16;
            v75 = *(_BYTE *)(v76 + SR_VEC_LANES(128, v81, i64)[0]);
          }
          else
          {
            v75 = 0;
          }
          v66 = (float)(v75 | (v74 << 8)) * 0.000015258789;
        }
        else
        {
          if ( v20 != 28 && (unsigned int)(v20 - 32) > 0xDE )
            return 0; /* 0x140182DEF: xor eax, eax */
          v63 = SR_VEC_LANES(128, v81, i32)[3];
          v64 = v16 - 1;
          if ( v16 - 1 > SR_VEC_LANES(128, v81, i32)[3] || v64 < 0 )
            sub_14023E640(
              (char *)L"!(o > b->size || o < 0)",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0x45Cu);
          if ( v64 > v63 || (SR_VEC_LANES(128, v81, i32)[2] = v16 - 1, v64 < 0) )
            SR_VEC_LANES(128, v81, i32)[2] = v63;
          v65 = sub_14017F5B0((__int64)&v81);
          v16 = SR_VEC_LANES(128, v81, i32)[2];
          v66 = (float)v65;
        }
        if ( v5 >= 48 )
          return 0; /* 0x140182DEF: xor eax, eax */
        *(&v91 + v5) = v66;
        v8 = v97;
        v9 = v96;
        ++v5;
        v10 = v95;
        v11 = v94;
        v12 = v93;
        v13 = v92;
        v14 = v91;
        v15 = v99;
        continue;
    }
  }
  return 0; /* 0x140182DEF: xor eax, eax */
}
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83
#undef v84
#undef v85
#undef v86
#undef v87
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95
#undef v96
#undef v97
#undef v98
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104

// 140182CAF: conditional instruction was optimized away because %var_2C0.4==1
// 140182CC9: conditional instruction was optimized away because %var_2C0.4==1
// 140182CE7: conditional instruction was optimized away because %var_2C0.4==1
// 140182D22: conditional instruction was optimized away because %var_2C0.4==1
// 140182D5B: conditional instruction was optimized away because %var_2C0.4==1
// 140182D94: conditional instruction was optimized away because %var_2C0.4==1
// 140182DDC: conditional instruction was optimized away because %var_2C0.4==1
// 140182FDE: conditional instruction was optimized away because %var_2C0.4==1
// 140182FF9: conditional instruction was optimized away because edi.4>=8
// 14018308B: conditional instruction was optimized away because %var_2C0.4==1
// 1401830A4: conditional instruction was optimized away because edi.4>=8
// 14018312D: conditional instruction was optimized away because %var_2C0.4==1
// 1401831CC: conditional instruction was optimized away because %var_2C0.4==1
// 1401831E2: conditional instruction was optimized away because %var_2C0.4==1
// 140183524: conditional instruction was optimized away because %var_2C0.4==1
// 1401835A6: conditional instruction was optimized away because %var_2C0.4==1
// 140183621: conditional instruction was optimized away because %var_2C0.4==1
// 140182DC7: variable 'v26' is possibly undefined
// 140182DC3: variable 'v25' is possibly undefined
// 1401830C6: variable 'v35' is possibly undefined
// 1401830CA: variable 'v36' is possibly undefined
// 140272E60: using guessed type __int16[45];
// 140272EC0: using guessed type __int16[24];
// 140279870: using guessed type __int128 xmmword_140279870;

//----- (0000000140183820) ----------------------------------------------------
__int64            sub_140183820(float a1, float a2, float a3, float *a4)
{
  float v5; // xmm4_4
  float v6; // xmm11_4
  float v7; // xmm3_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  __m128 v18; // xmm0
  float v19; // xmm8_4
  float v20; // xmm6_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm2_4
  float v24; // xmm2_4

  v5 = a2 - (float)((float)(a1 * a1) * 0.33333334);
  v6 = a1 * -0.33333334;
  v7 = (float)(v5 * v5) * v5;
  v8 = (float)((float)((float)((float)((float)(a1 + a1) * a1) - (float)(a2 * 9.0)) * a1) * 0.037037037) + a3;
  v9 = (float)(v8 * v8) + (float)(v7 * 0.14814815);
  if ( v9 < 0.0 )
  {
    v18 = ((__m128)_mm_cvtsi32_si128((int)(0xC1D80000)));
    SR_VEC_LANES(128, v18, f32)[0] = -27.0 / v7;
    v19 = fsqrt(v5 * -0.33333334);
    v20 = acos(SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v18)), f64)[0] * v8 * -0.5);
    v21 = v20 * 0.33333334;
    v22 = cosf(v21);
    *(double *)SR_VEC_LANES(128, v18, u64) = cos(v21 - 1.570796);
    v23 = *(double *)SR_VEC_LANES(128, v18, u64);
    v24 = v23 * 1.7320508;
    *a4 = (float)((float)(v19 + v19) * v22) + v6;
    a4[1] = v6 - (float)((float)(v24 + v22) * v19);
    a4[2] = v6 - (float)((float)(v22 - v24) * v19);
    return 3;
  }
  else
  {
    v10 = fsqrt(v9);
    v11 = (float)(v10 - v8) * 0.5;
    v12 = (float)((float)-v8 - v10) * 0.5;
    if ( v11 >= 0.0 )
    {
      v14 = pow(v11, 0.3333333432674408);
    }
    else
    {
      v13 = pow((float)-v11, 0.3333333432674408);
      v14 = -v13;
    }
    if ( v12 >= 0.0 )
    {
      v16 = pow(v12, 0.3333333432674408);
    }
    else
    {
      v15 = pow((float)-v12, 0.3333333432674408);
      v16 = -v15;
    }
    *a4 = (float)(v14 + v6) + v16;
    return 1;
  }
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (0000000140183A70) ----------------------------------------------------
__int64            sub_140183A70(float *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  float *v5; // r9
  __int128 v6; // xmm2
  float v7; // r11d
  float *v8; // rcx
  __int64 v9; // rdx
  float v10; // xmm1_4
  int v11; // eax
  __int64 v12; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140183A70[64];
#define v14 (*(__int64 (*))(void *)(sr_frame_140183A70 + 0)) /* [rsp+0h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140183A70 + 32)) /* [rsp+20h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140183A70 + 56)) /* [rsp+38h] */

  v2 = a2;
  sub_140183BF0(a1, a2);
  if ( v2 > 1 )
  {
    v4 = 1;
    v5 = a1 + 5;
    do
    {
      v6 = *(_OWORD *)v5;
      v7 = v5[4];
      v8 = v5 - 5;
      v9 = v4;
      v15 = *(_OWORD *)v5;
      v10 = *((float *)&v15 + 1);
      do
      {
        if ( v10 >= v8[1] )
          break;
        v11 = *((_DWORD *)v8 + 4);
        --v9;
        *(_OWORD *)(v8 + 5) = *(_OWORD *)v8;
        *((_DWORD *)v8 + 9) = v11;
        v8 -= 5;
      }
      while ( v9 > 0 );
      if ( v4 != v9 )
      {
        v12 = 5 * v9;
        *(_OWORD *)&a1[v12] = v6;
        a1[v12 + 4] = v7;
      }
      ++v4;
      v5 += 5;
    }
    while ( v4 < v2 );
  }
  return 0; /* the function has no caller */
}
#undef v14
#undef v15
#undef v16


//----- (0000000140183B30) ----------------------------------------------------
__int64            sub_140183B30(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int128 *v4; // r9
  __int64 v5; // r10
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v8; // xmm2
  float v9; // xmm1_4
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140183B30[32];
#define v14 (*(__int128 (*))(void *)(sr_frame_140183B30 + 0)) /* [rsp+0h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_140183B30 + 24)) /* [rsp+18h] */

  if ( a2 > 1 )
  {
    v3 = 1;
    v4 = (__int128 *)(a1 + 20);
    v5 = (unsigned int)(a2 - 1);
    do
    {
      v6 = *((_DWORD *)v4 + 4);
      v7 = v3;
      v8 = *v4;
      v14 = *v4;
      if ( v3 > 0 )
      {
        v9 = *((float *)&v14 + 1);
        v10 = (__int64)v4 - 20;
        do
        {
          if ( v9 >= *(float *)(v10 + 4) )
            break;
          v11 = *(_DWORD *)(v10 + 16);
          --v7;
          *(_OWORD *)(v10 + 20) = *(_OWORD *)v10;
          *(_DWORD *)(v10 + 36) = v11;
          v10 -= 20;
        }
        while ( v7 > 0 );
        if ( v3 != v7 )
        {
          v12 = 5 * v7;
          *(_OWORD *)(a1 + 4 * v12) = v8;
          *(_DWORD *)(a1 + 4 * v12 + 16) = v6;
        }
      }
      ++v3;
      v4 = (__int128 *)((char *)v4 + 20);
      --v5;
    }
    while ( v5 );
    return 0; /* the function has no caller */
  }
  return result;
}
#undef v14
#undef v15


//----- (0000000140183BF0) ----------------------------------------------------
void            sub_140183BF0(float *a1, int a2)
{
  unsigned int v2; // ebp
  float v4; // xmm2_4
  signed int v5; // edi
  float *v6; // r15
  float *v7; // r14
  __int64 v8; // r9
  float v9; // xmm0_4
  float v10; // xmm1_4
  BOOL v11; // edx
  signed int v12; // eax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  float v15; // edx
  float v16; // ecx
  int v17; // r11d
  __int128 v18; // xmm1
  __int64 v19; // r10
  float v20; // xmm0_4
  __int64 v21; // rcx
  float *v22; // rcx
  __int64 v23; // rcx
  bool v24; // cf
  float *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int128 v28; // xmm1
  float v29; // r8d
  float v30; // eax
  bool v31; // cc
  signed int v32; // ebx
  int v33; // edx

  if ( a2 > 12 )
  {
    v2 = a2;
    do
    {
      v4 = a1[1];
      v5 = v2 - 1;
      v6 = a1;
      v7 = a1;
      v8 = v2 - 1LL;
      v9 = a1[5 * ((unsigned __int64)v2 >> 1) + 1];
      v10 = a1[5 * v8 + 1];
      v11 = v10 > v9;
      if ( v9 > v4 != v11 )
      {
        v12 = 0;
        if ( v10 > v4 != v11 )
          v12 = v2 - 1;
        v13 = 5LL * v12;
        v14 = *(_OWORD *)&a1[5 * v12];
        v15 = a1[5 * v12 + 4];
        *(_OWORD *)&a1[v13] = *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)];
        a1[v13 + 4] = a1[5 * ((unsigned __int64)v2 >> 1) + 4];
        *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)] = v14;
        a1[5 * ((unsigned __int64)v2 >> 1) + 4] = v15;
      }
      v16 = a1[4];
      v17 = 1;
      v18 = *(_OWORD *)a1;
      v19 = 1;
      *(_OWORD *)a1 = *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)];
      a1[4] = a1[5 * ((unsigned __int64)v2 >> 1) + 4];
      *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)] = v18;
      a1[5 * ((unsigned __int64)v2 >> 1) + 4] = v16;
      while ( 1 )
      {
        v20 = a1[1];
        v21 = v19 + 4 * v19 + 1;
        v31 = v20 <= a1[v21];
        v22 = &a1[v21];
        if ( !v31 )
        {
          do
          {
            ++v17;
            v22 += 5;
            ++v19;
          }
          while ( v20 > *v22 );
        }
        v23 = v8 + 4 * v8 + 1;
        v24 = v20 < a1[v23];
        v25 = &a1[v23];
        if ( v24 )
        {
          do
          {
            --v5;
            v25 -= 5;
            --v8;
          }
          while ( v20 < *v25 );
        }
        if ( v19 >= v8 )
          break;
        v26 = 5 * v8;
        ++v17;
        v27 = 5 * v19;
        --v5;
        v28 = *(_OWORD *)&a1[5 * v19];
        v29 = a1[5 * v19++ + 4];
        *(_OWORD *)&a1[v27] = *(_OWORD *)&a1[5 * v8];
        v30 = a1[5 * v8-- + 4];
        a1[v27 + 4] = v30;
        *(_OWORD *)&a1[v26] = v28;
        a1[v26 + 4] = v29;
      }
      v2 -= v17;
      v31 = v5 < (int)v2;
      v32 = v2;
      v33 = v5;
      if ( v5 >= (int)v2 )
      {
        v33 = v2;
        v2 = v5;
      }
      a1 += 5 * v17;
      if ( !v31 )
        v7 = a1;
      sub_140183BF0(v7, v33);
      if ( v5 >= v32 )
        a1 = v6;
    }
    while ( (int)v2 > 12 );
  }
}


//----- (0000000140183DC0) ----------------------------------------------------
__int64            sub_140183DC0(
        __int64 a1,
        int *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        int a12)
{
  float v12 = a3; // xmm2_4: x0 (0x140183DC0 keeps it in its home slot [rsp+120h]); Hex-Rays had lost it
  float v13 = a4; // xmm3_4: y0 ([rsp+128h])
  __int64 result; // rax
  int v15; // esi
  __m128 v18; // xmm0
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  __m128 v22; // xmm12
  __m128 v23; // xmm5
  __m128 v24; // xmm3
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm9_4
  float v28; // xmm2_4
  float v29; // xmm11_4
  float v30; // xmm4_4
  __m128 v31; // xmm0
  unsigned int v32; // xmm3_4
  float v33; // xmm8_4
  float v34; // xmm1_4
  float v35; // xmm7_4
  unsigned int v36; // xmm9_4
  __m128 v37; // xmm0
  float v38; // xmm1_4
  float v39; // xmm4_4
  float v40; // xmm6_4
  float v41; // xmm8_4
  __m128 v42; // xmm5
  float v43; // xmm7_4
  double v44; // xmm2_8
  __m128d v45; // xmm0
  __int64 v46; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140183DC0[64];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_140183DC0 + 0)) /* [rsp+108h] */
#define v48 (*(float (*))(void *)(sr_frame_140183DC0 + 24)) /* [rsp+120h] */
#define v49 (*(float (*))(void *)(sr_frame_140183DC0 + 32)) /* [rsp+128h] */
#define v50 (*(float (*))(void *)(sr_frame_140183DC0 + 56)) /* [rsp+140h] */

  result = (__int64)&retaddr;
  v49 = v13;
  v48 = v12;
  v15 = a12;
  v18 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a8))));
  v19 = a7;
  v20 = v13;
  v21 = a5;
  SR_VEC_LANES(128, v22, f32)[0] = a6;
  v23 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a6))));
  SR_VEC_LANES(128, v23, f32)[0] = a6 - v13;
  v24 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a10))));
  SR_VEC_LANES(128, v18, f32)[0] = (float)((float)(a8 - a6) * (float)(a8 - a6)) + (float)((float)(a7 - a5) * (float)(a7 - a5));
  SR_VEC_LANES(128, v23, f32)[0] = (float)(SR_VEC_LANES(128, v23, f32)[0] * SR_VEC_LANES(128, v23, f32)[0]) + (float)((float)(a5 - v12) * (float)(a5 - v12));
  SR_VEC_LANES(128, v24, f32)[0] = (float)((float)(a10 - a8) * (float)(a10 - a8)) + (float)((float)(a9 - a7) * (float)(a9 - a7));
  SR_VEC_LANES(128, v18, f32)[0] = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v18)), f64)[0]
                  + SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v23)), f64)[0]
                  + SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v24)), f64)[0];
  v25 = (float)(SR_VEC_LANES(128, v18, f32)[0] * SR_VEC_LANES(128, v18, f32)[0])
      - (float)((float)((float)(a10 - v20) * (float)(a10 - v20)) + (float)((float)(a9 - v12) * (float)(a9 - v12)));
  if ( a12 <= 16 )
  {
    while ( v25 > a11 )
    {
      ++v15;
      v26 = v21 * 0.5;
      v27 = v19 * 0.5;
      v28 = SR_VEC_LANES(128, v22, f32)[0] * 0.5;
      v29 = v27 + (float)(v21 * 0.5);
      v30 = (float)(v48 * 0.5) + v26;
      v31 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a8))));
      *(float *)&v32 = (float)(v49 * 0.5) + (float)(SR_VEC_LANES(128, v22, f32)[0] * 0.5);
      SR_VEC_LANES(128, v31, f32)[0] = a8 * 0.5;
      v33 = (float)(a9 * 0.5) + v27;
      v22 = v31;
      SR_VEC_LANES(128, v22, f32)[0] = (float)(a8 * 0.5) + v28;
      v50 = v33;
      v34 = (float)(v29 + v30) * 0.5;
      SR_VEC_LANES(128, v31, f32)[0] = SR_VEC_LANES(128, v22, f32)[0] + *(float *)&v32;
      v21 = (float)(v29 + v33) * 0.5;
      SR_VEC_LANES(128, v22, f32)[0] = SR_VEC_LANES(128, v22, f32)[0] + (float)((float)(a10 * 0.5) + (float)(a8 * 0.5));
      a8 = (float)(a10 * 0.5) + (float)(a8 * 0.5);
      SR_VEC_LANES(128, v31, f32)[0] = SR_VEC_LANES(128, v31, f32)[0] * 0.5;
      SR_VEC_LANES(128, v22, f32)[0] = SR_VEC_LANES(128, v22, f32)[0] * 0.5;
      v35 = (float)(v21 + v34) * 0.5;
      *(float *)&v36 = (float)(SR_VEC_LANES(128, v22, f32)[0] + SR_VEC_LANES(128, v31, f32)[0]) * 0.5;
      /* 0x140184044: x0, y0 from [rsp+120h] / [rsp+128h] (0x140183F37, 0x140183F2A), the current start point */
      result = sub_140183DC0(a1, a2, v48, v49, v30, *(float *)&v32, v34, SR_VEC_LANES(128, v31, f32)[0], v35, *(float *)&v36, a11, v15);
      v37 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a8))));
      v48 = v35;
      v49 = *(float *)&v36;
      v38 = v33 - v21;
      v39 = a9 - v33;
      v40 = v21 - v35;
      v41 = a9 - v35;
      v42 = v22;
      SR_VEC_LANES(128, v42, f32)[0] = SR_VEC_LANES(128, v22, f32)[0] - *(float *)&v36;
      v43 = a10 - *(float *)&v36;
      SR_VEC_LANES(128, v37, f32)[0] = (float)((float)(a8 - SR_VEC_LANES(128, v22, f32)[0]) * (float)(a8 - SR_VEC_LANES(128, v22, f32)[0])) + (float)(v38 * v38);
      v19 = v50;
      v44 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v37)), f64)[0];
      SR_VEC_LANES(128, v42, f32)[0] = (float)(SR_VEC_LANES(128, v42, f32)[0] * SR_VEC_LANES(128, v42, f32)[0]) + (float)(v40 * v40);
      v45 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
      SR_VEC_LANES(128, v45, f64)[0] = (float)((float)((float)(a10 - a8) * (float)(a10 - a8)) + (float)(v39 * v39));
      *(float *)SR_VEC_LANES(128, v45, f64) = v44 + SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v42)), f64)[0] + SR_VEC_READ_LANES(128, _mm_sqrt_pd(v45), f64)[0];
      v25 = (float)(*(float *)SR_VEC_LANES(128, v45, f64) * *(float *)SR_VEC_LANES(128, v45, f64))
          - (float)((float)(v43 * v43) + (float)(v41 * v41));
      if ( v15 > 16 )
        return result;
    }
    v46 = *a2;
    if ( a1 )
    {
      *(float *)(a1 + 8 * v46) = a9;
      *(float *)(a1 + 8 * v46 + 4) = a10;
      LODWORD(v46) = *a2;
    }
    result = (unsigned int)(v46 + 1);
    *a2 = result;
  }
  return result;
}
#undef retaddr
#undef v48
#undef v49
#undef v50

// 140183DCB: variable 'v13' is possibly undefined
// 140183DD0: variable 'v12' is possibly undefined
// 140184044: variable 'a3' is possibly undefined
// 140184044: variable 'a4' is possibly undefined

//----- (0000000140184190) ----------------------------------------------------
__int64            sub_140184190(
        __int64 a1,
        int *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        int a10)
{
  float v10 = a3; // xmm2_4: x0; Hex-Rays had lost it
  float v11 = a4; // xmm3_4: y0
  float v12; // xmm4_4
  float v15; // xmm11_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax

  v12 = v10;
  v15 = (float)((float)(a5 + a5) + (float)(v10 + a7)) * 0.25;
  v16 = (float)((float)(v10 + a7) * 0.5) - v15;
  if ( a10 <= 16 )
  {
    v17 = (float)((float)(v11 + a8) * 0.5) - (float)((float)((float)(a6 + a6) + (float)(v11 + a8)) * 0.25);
    if ( (float)((float)(v17 * v17) + (float)(v16 * v16)) <= a9 )
    {
      v20 = *a2;
      if ( a1 )
      {
        *(float *)(a1 + 8 * v20) = a7;
        *(float *)(a1 + 8 * v20 + 4) = a8;
        LODWORD(v20) = *a2;
      }
      *a2 = v20 + 1;
    }
    else
    {
      sub_140184190(
        a1,
        a2,
        a3,
        a4,
        (float)(v12 + a5) * 0.5,
        (float)(v11 + a6) * 0.5,
        v15,
        (float)((float)(a6 + a6) + (float)(v11 + a8)) * 0.25,
        a9,
        a10 + 1);
      /* 0x14018431E: the second half starts at the midpoint (xmm2 = xmm11 from 0x140184237, xmm3 = xmm12 from
         0x140184252); the C had passed undefined locals */
      sub_140184190(
        a1,
        a2,
        v15,
        (float)((float)((float)(a6 + a6) + (float)(v11 + a8)) * 0.25),
        (float)(a5 + a7) * 0.5,
        (float)(a6 + a8) * 0.5,
        a7,
        a8,
        a9,
        a10 + 1);
    }
  }
  return 1;
}

// 1401841B1: variable 'v10' is possibly undefined
// 140184248: variable 'v11' is possibly undefined
// 14018431E: variable 'v18' is possibly undefined
// 14018431E: variable 'v19' is possibly undefined

//----- (00000001401843E0) ----------------------------------------------------
__int64            sub_1401843E0(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5; // edi
  int v6; // esi
  __int64 v7; // r12
  int v8; // r15d
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // ebx
  int v13; // ecx
  int v14; // r10d
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r10d
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // r10d
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // r10d
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rbp
  _BYTE *v30; // rdi
  __int64 v31; // r15
  unsigned int v32; // ecx
  __int64 v33; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401843E0[64];
#define v35 (*(__int64 (*))(void *)(sr_frame_1401843E0 + 0)) /* [rsp+0h] */
#define v36 (*(unsigned int (*))(void *)(sr_frame_1401843E0 + 32)) /* [rsp+20h] */
#define v37 (*(int (*))(void *)(sr_frame_1401843E0 + 36)) /* [rsp+24h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_1401843E0 + 40)) /* [rsp+28h] */
#define v39 (*(_QWORD (*)[2])(void *)(sr_frame_1401843E0 + 48)) /* [rsp+30h] */

  v5 = a5;
  v6 = a3 - a5;
  v7 = a4;
  v37 = a3;
  v8 = a3;
  v36 = a5;
  v39[0] = 0;
  if ( a2 > 0 )
  {
    v10 = a5;
    v11 = (unsigned int)a2;
    v38 = (unsigned int)a2;
    do
    {
      sub_1401FCD30((void *)(uintptr_t)(v39), 0, v10);
      v12 = 0;
      switch ( v5 )
      {
        case 2u:
          v13 = 0;
          if ( v6 >= 0 )
          {
            v26 = 0;
            do
            {
              v27 = v26;
              v26 += v7;
              v12 += *(unsigned __int8 *)(v27 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v28 = ((_BYTE)v13++ + 2) & 7;
              *((_BYTE *)v39 + v28) = *(_BYTE *)(v27 + a1);
              *(_BYTE *)(v27 + a1) = v12 >> 1;
            }
            while ( v13 <= v6 );
          }
          break;
        case 3u:
          v13 = 0;
          if ( v6 >= 0 )
          {
            v23 = 0;
            do
            {
              v24 = v23;
              v23 += v7;
              v12 += *(unsigned __int8 *)(v24 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v25 = ((_BYTE)v13++ + 3) & 7;
              *((_BYTE *)v39 + v25) = *(_BYTE *)(v24 + a1);
              *(_BYTE *)(v24 + a1) = v12 / 3;
            }
            while ( v13 <= v6 );
          }
          break;
        case 4u:
          v13 = 0;
          if ( v6 >= 0 )
          {
            v20 = 0;
            do
            {
              v21 = v20;
              v20 += v7;
              v12 += *(unsigned __int8 *)(v21 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v22 = ((_BYTE)v13++ - 4) & 7;
              *((_BYTE *)v39 + v22) = *(_BYTE *)(v21 + a1);
              *(_BYTE *)(v21 + a1) = v12 >> 2;
            }
            while ( v13 <= v6 );
          }
          break;
        default:
          v13 = 0;
          if ( v5 == 5 )
          {
            if ( v6 >= 0 )
            {
              v17 = 0;
              do
              {
                v18 = v17;
                v17 += v7;
                v12 += *(unsigned __int8 *)(v18 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
                v19 = ((_BYTE)v13++ - 3) & 7;
                *((_BYTE *)v39 + v19) = *(_BYTE *)(v18 + a1);
                *(_BYTE *)(v18 + a1) = v12 / 5;
              }
              while ( v13 <= v6 );
            }
          }
          else if ( v6 >= 0 )
          {
            v14 = 0;
            do
            {
              v15 = v14;
              v14 += v7;
              v12 += *(unsigned __int8 *)(v15 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v16 = ((_BYTE)v5 + (_BYTE)v13++) & 7;
              *((_BYTE *)v39 + v16) = *(_BYTE *)(v15 + a1);
              *(_BYTE *)(v15 + a1) = v12 / v5;
            }
            while ( v13 <= v6 );
          }
          break;
      }
      if ( v13 < v8 )
      {
        v29 = v13;
        v30 = (_BYTE *)(a1 + v13 * (int)v7);
        v31 = (unsigned int)(v8 - v13);
        v32 = v36;
        do
        {
          if ( *v30 )
          {
            sub_14023E640(
              (char *)L"pixels[i*stride_in_bytes] == 0",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xF5Eu);
            v32 = v36;
          }
          v33 = v29++ & 7;
          v12 -= *((unsigned __int8 *)v39 + v33);
          *v30 = v12 / v32;
          v30 += v7;
          --v31;
        }
        while ( v31 );
        v5 = v36;
        v11 = v38;
        v8 = v37;
      }
      ++a1;
      v10 = v5;
      v38 = --v11;
    }
    while ( v11 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39

// 140272E60: using guessed type __int16[45];
// 1402734A0: using guessed type __int16[31];

//----- (0000000140184710) ----------------------------------------------------
_BOOL8            sub_140184710(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  float v8; // xmm2_4
  float v10; // xmm3_4
  float v12; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm6_4
  float v19; // xmm8_4
  float v20; // xmm3_4
  float *v21; // rbp
  float *v22; // rsi
  float *v23; // rbx
  float v24; // xmm5_4
  float v25; // xmm8_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm6_4
  float v29; // xmm10_4
  float v30; // xmm0_4
  float v31; // xmm9_4
  float v32; // xmm8_4
  float v33; // xmm0_4
  _BOOL8 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140184710[176];
#define v35 (*(__int64 (*))(void *)(sr_frame_140184710 + 0)) /* [rsp+40h] */
#define v36 (*(float (*))(void *)(sr_frame_140184710 + 8)) /* [rsp+48h] */
#define v37 (*(float (*))(void *)(sr_frame_140184710 + 168)) /* [rsp+E8h] */

  v8 = a4[1] - a2[1];
  v10 = a3[2] - a2[2];
  v12 = a3[1] - a2[1];
  v14 = *a3 - *a2;
  v15 = a4[2] - a2[2];
  v16 = *a4 - *a2;
  v17 = (float)(v8 * v10) - (float)(v15 * v12);
  v18 = (float)(v15 * v14) - (float)(v16 * v10);
  v19 = (float)(v16 * v12) - (float)(v8 * v14);
  v20 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
  if ( v20 == 0.0 )
  {
    v35 = 0;
    v36 = 0.0;
  }
  else
  {
    *(float *)&v35 = v17 * (float)(1.0 / v20);
    *((float *)&v35 + 1) = v18 * (float)(1.0 / v20);
    v36 = v19 * (float)(1.0 / v20);
  }
  v21 = a6;
  v22 = a7;
  if ( sub_140078230(a1, (float *)&v35, &v37, a6, a7, a2, a3, a4) )
    return 1;
  v23 = a5;
  v24 = a4[1] - a2[1];
  v25 = a5[2] - a2[2];
  v26 = a5[1] - a2[1];
  v27 = a4[2] - a2[2];
  v28 = *a4 - *a2;
  v29 = (float)(v26 * v27) - (float)(v25 * v24);
  v30 = *a5 - *a2;
  v31 = (float)(v30 * v24) - (float)(v26 * v28);
  v32 = (float)(v25 * v28) - (float)(v30 * v27);
  v33 = fsqrt((float)((float)(v32 * v32) + (float)(v29 * v29)) + (float)(v31 * v31));
  if ( v33 == 0.0 )
  {
    v35 = 0;
    v36 = 0.0;
  }
  else
  {
    *(float *)&v35 = v29 * (float)(1.0 / v33);
    *((float *)&v35 + 1) = v32 * (float)(1.0 / v33);
    v36 = v31 * (float)(1.0 / v33);
  }
  if ( sub_140078230(a1, (float *)&v35, &v37, v21, v22, a2, a4, a5) )
    return 1;
  sub_14006EC40((float *)&v35, a2, a3, v23);
  if ( sub_140078230(a1, (float *)&v35, &v37, v21, v22, a2, a3, v23) )
    return 1;
  sub_14006EC40((float *)&v35, a3, a4, v23);
  result = sub_140078230(a1, (float *)&v35, &v37, v21, v22, a3, a4, v23);
  if ( result )
    return 1;
  return result;
}
#undef v35
#undef v36
#undef v37


//----- (0000000140184A70) ----------------------------------------------------
int sub_140184A70()
{
  int result; // eax
  __int64 PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  result = QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  if ( result )
    return (int)((double)(long long)PerformanceCount * *(double *)&dword_140404A6C[278520505]);
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140184AB0) ----------------------------------------------------
void            sub_140184AB0(int a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx

  if ( a1 >= 0 )
  {
    v1 = dword_140404A6C[70998846];
    if ( a1 < (int)dword_140404A6C[70998846] )
    {
      v2 = a1;
      --dword_140404A6C[70998846];
      v3 = 2LL * a1;
      dword_140404A6C[2 * v3 + 70998847] = dword_140404A6C[4 * (v1 - 1) + 70998847];
      dword_140404A6C[2 * v3 + 70998848] = dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
      dword_140404A6C[2 * v3 + 70998849] = dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
      dword_140404A6C[2 * v3 + 70998850] = dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
      v4 = 3 * v2;
      dword_140404A6C[v2 + 71064383] = dword_140404A6C[dword_140404A6C[70998846] + 71064383];
      dword_140404A6C[v2 + 71097151] = dword_140404A6C[dword_140404A6C[70998846] + 71097151];
      v5 = 3LL * (int)dword_140404A6C[70998846];
      dword_140404A6C[v4 + 71113535] = dword_140404A6C[3 * dword_140404A6C[70998846] + 71113535];
      dword_140404A6C[v4 + 71113536] = dword_140404A6C[v5 + 71113536];
      dword_140404A6C[v4 + 71113537] = dword_140404A6C[v5 + 71113537];
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1512DB764: using guessed type unsigned int;

//----- (0000000140184BB0) ----------------------------------------------------
void sub_140184BB0()
{
  float v0; // xmm3_4
  int v1; // r12d
  int v2; // eax
  int v3; // r13d
  unsigned int *v4; // r10
  int *v5; // rbp
  float *v6; // r14
  int v7; // esi
  float *v8; // rdi
  unsigned int *v9; // r15
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r11
  float v18; // xmm10_4
  float v19; // xmm13_4
  float v20; // xmm8_4
  float v21; // xmm14_4
  float v22; // xmm4_4
  float v23; // xmm9_4
  float v24; // xmm5_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  float v27; // xmm11_4
  float v28; // xmm8_4
  float v29; // xmm4_4
  float v30; // xmm9_4
  float v31; // xmm1_4
  float v32; // xmm5_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  __int64 v35; // r8
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm7_4
  float v39; // xmm12_4
  float v40; // xmm8_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  float v43; // xmm9_4
  float v44; // xmm6_4
  float v45; // xmm1_4
  float v46; // xmm7_4
  float v47; // xmm4_4
  float v48; // xmm8_4
  float v49; // xmm1_4
  float v50; // xmm5_4
  float v51; // xmm6_4
  float v52; // xmm0_4
  float v53; // xmm0_4
  float v54; // xmm10_4
  float v55; // xmm1_4
  float v56; // xmm14_4
  float v57; // xmm12_4
  float v58; // xmm13_4
  float v59; // xmm15_4
  float v60; // xmm8_4
  float v61; // xmm11_4
  float v62; // xmm0_4
  float v63; // xmm12_4
  float v64; // xmm2_4
  float v65; // xmm1_4
  float v66; // xmm5_4
  float v67; // xmm7_4
  float v68; // xmm9_4
  float v69; // xmm0_4
  float v70; // xmm4_4
  float v71; // xmm3_4
  float v72; // xmm1_4
  float v73; // xmm14_4
  float v74; // xmm15_4
  float v75; // xmm3_4
  int v76; // r11d
  int v77; // r13d
  unsigned int *v78; // r8
  int *v79; // rbp
  float *v80; // r14
  int v81; // esi
  float *v82; // rdi
  unsigned int *v83; // r15
  int *v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r9
  __int64 v88; // r10
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // r9
  __int64 v92; // rax
  float v93; // xmm0_4
  float v94; // xmm1_4
  float v95; // xmm9_4
  float v96; // xmm12_4
  float v97; // xmm10_4
  float v98; // xmm4_4
  float v99; // xmm7_4
  float v100; // xmm8_4
  float v101; // xmm6_4
  float v102; // xmm0_4
  float v103; // xmm11_4
  float v104; // xmm4_4
  float v105; // xmm5_4
  float v106; // xmm1_4
  float v107; // xmm0_4
  float v108; // xmm1_4
  float v109; // xmm2_4
  float v110; // xmm0_4
  __int64 v111; // rcx
  float v112; // xmm0_4
  float v113; // xmm14_4
  float v114; // xmm10_4
  float v115; // xmm13_4
  float v116; // xmm4_4
  __int64 v117; // r10
  float v118; // xmm9_4
  float v119; // xmm8_4
  float v120; // xmm6_4
  float v121; // xmm7_4
  float v122; // xmm0_4
  float v123; // xmm11_4
  float v124; // xmm4_4
  float v125; // xmm5_4
  float v126; // xmm0_4
  float v127; // xmm3_4
  float v128; // xmm0_4
  float v129; // xmm1_4
  float v130; // xmm13_4
  float v131; // xmm0_4
  float v132; // xmm9_4
  float v133; // xmm14_4
  float v134; // xmm12_4
  float v135; // xmm10_4
  float v136; // xmm15_4
  float v137; // xmm13_4
  float v138; // xmm14_4
  float v139; // xmm0_4
  float v140; // xmm13_4
  __int64 v141; // rax
  float v142; // xmm2_4
  float v143; // xmm1_4
  float v144; // xmm6_4
  float v145; // xmm11_4
  float v146; // xmm0_4
  float v147; // xmm3_4
  float v148; // xmm2_4
  float v149; // xmm5_4
  float v150; // xmm1_4
  float v151; // xmm0_4
  float v152; // xmm14_4
  float v153; // xmm15_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140184BB0[32];
#define v154 (*(int (*))(void *)(sr_frame_140184BB0 + 0)) /* [rsp+110h] */
#define v155 (*(float (*))(void *)(sr_frame_140184BB0 + 8)) /* [rsp+118h] */
#define v156 (*(unsigned int * (*))(void *)(sr_frame_140184BB0 + 16)) /* [rsp+120h] */
#define v157 (*(unsigned int * (*))(void *)(sr_frame_140184BB0 + 24)) /* [rsp+128h] */

  v0 = 0.0;
  v1 = dword_140404A6C[70998846];
LABEL_2:
  while ( 1 )
  {
    v2 = 0;
    v3 = 0;
    v154 = 0;
    if ( v1 <= 0 )
      break;
    v4 = &dword_140404A6C[71064383];
    v157 = &dword_140404A6C[71064383];
    v5 = (int *)&dword_140404A6C[70998847];
    v6 = (float *)&dword_140404A6C[71113536];
    do
    {
      v7 = 0;
      if ( v1 > 0 )
      {
        v8 = (float *)&dword_140404A6C[71113536];
        v9 = &dword_140404A6C[71064383];
        v10 = &dword_140404A6C[70998850];
        do
        {
          if ( v3 != v7 )
          {
            v11 = (int)*(v10 - 3);
            v12 = v5[1];
            if ( dword_140404A6C[v12 + 70933310] == dword_140404A6C[v11 + 70933310] )
            {
              v13 = (int)*v10;
              v14 = v5[2];
              if ( dword_140404A6C[v14 + 70933310] == dword_140404A6C[v13 + 70933310] && *v4 == *v9 )
              {
                v15 = 3 * v12;
                if ( fabs(*(float *)&dword_140404A6C[v15 + 70687550] - *(float *)&dword_140404A6C[3 * v11 + 70687550]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[v15 + 70687551] - *(float *)&dword_140404A6C[3 * v11 + 70687551]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[v15 + 70687552] - *(float *)&dword_140404A6C[3 * v11 + 70687552]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[v15 + 70736702] - *(float *)&dword_140404A6C[3 * v11 + 70736702]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[v15 + 70736703] - *(float *)&dword_140404A6C[3 * v11 + 70736703]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[v15 + 70736704] - *(float *)&dword_140404A6C[3 * v11 + 70736704]) < 0.000099999997
                  && *(float *)&dword_140404A6C[3 * v11 + 70835008] == *(float *)&dword_140404A6C[v15 + 70835008]
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70687550] - *(float *)&dword_140404A6C[3 * v13 + 70687550]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70687551] - *(float *)&dword_140404A6C[3 * v13 + 70687551]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70687552] - *(float *)&dword_140404A6C[3 * v13 + 70687552]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70736702] - *(float *)&dword_140404A6C[3 * v13 + 70736702]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70736703] - *(float *)&dword_140404A6C[3 * v13 + 70736703]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70736704] - *(float *)&dword_140404A6C[3 * v13 + 70736704]) < 0.000099999997
                  && *(float *)&dword_140404A6C[3 * v13 + 70835008] == *(float *)&dword_140404A6C[3 * v14 + 70835008]
                  && fabs(*(v6 - 1) - *(v8 - 1)) < 0.000099999997
                  && fabs(*v6 - *v8) < 0.000099999997
                  && fabs(v6[1] - v8[1]) < 0.000099999997 )
                {
                  v16 = *v5;
                  v17 = (int)*(v10 - 2);
                  v18 = *(float *)&dword_140404A6C[3 * v16 + 70687550];
                  v19 = *(float *)&dword_140404A6C[3 * v16 + 70687551];
                  v20 = *(float *)&dword_140404A6C[v15 + 70687550] - v18;
                  v21 = *(float *)&dword_140404A6C[3 * v16 + 70687552];
                  v22 = *(float *)&dword_140404A6C[v15 + 70687551] - v19;
                  v23 = *(float *)&dword_140404A6C[v15 + 70687552] - v21;
                  v24 = *(float *)&dword_140404A6C[3 * v17 + 70687550] - v18;
                  v25 = *(float *)&dword_140404A6C[3 * v17 + 70687551] - v19;
                  v26 = *(float *)&dword_140404A6C[3 * v17 + 70687552] - v21;
                  v27 = fsqrt((float)((float)(v22 * v22) + (float)(v20 * v20)) + (float)(v23 * v23));
                  if ( v27 == 0.0 )
                  {
                    v28 = 0.0;
                    v29 = 0.0;
                    v30 = 0.0;
                  }
                  else
                  {
                    v28 = v20 * (float)(1.0 / v27);
                    v29 = v22 * (float)(1.0 / v27);
                    v30 = v23 * (float)(1.0 / v27);
                  }
                  v31 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26));
                  if ( v31 == 0.0 )
                  {
                    v32 = 0.0;
                    v33 = 0.0;
                    v34 = 0.0;
                  }
                  else
                  {
                    v32 = v24 * (float)(1.0 / v31);
                    v33 = v25 * (float)(1.0 / v31);
                    v34 = v26 * (float)(1.0 / v31);
                  }
                  if ( (float)((float)((float)(v29 * v33) + (float)(v32 * v28)) + (float)(v34 * v30)) < 0.99998748 )
                  {
                    v4 = v157;
                  }
                  else
                  {
                    v35 = 3LL * v5[3];
                    v36 = *(float *)&dword_140404A6C[3 * v5[3] + 70687550];
                    v37 = *(float *)&dword_140404A6C[3 * v5[3] + 70687552];
                    v38 = *(float *)&dword_140404A6C[3 * v14 + 70687550] - v36;
                    v39 = *(float *)&dword_140404A6C[3 * v5[3] + 70687551];
                    v40 = *(float *)&dword_140404A6C[3 * v14 + 70687552] - v37;
                    v41 = *(float *)&dword_140404A6C[3 * v14 + 70687551] - v39;
                    v42 = *(float *)&dword_140404A6C[3 * *(v10 - 1) + 70687550] - v36;
                    v43 = *(float *)&dword_140404A6C[3 * *(v10 - 1) + 70687552] - v37;
                    v44 = *(float *)&dword_140404A6C[3 * *(v10 - 1) + 70687551] - v39;
                    v45 = fsqrt((float)((float)(v41 * v41) + (float)(v38 * v38)) + (float)(v40 * v40));
                    if ( v45 == 0.0 )
                    {
                      v46 = 0.0;
                      v47 = 0.0;
                      v48 = 0.0;
                    }
                    else
                    {
                      v46 = v38 * (float)(1.0 / v45);
                      v47 = v41 * (float)(1.0 / v45);
                      v48 = v40 * (float)(1.0 / v45);
                    }
                    v49 = fsqrt((float)((float)(v44 * v44) + (float)(v42 * v42)) + (float)(v43 * v43));
                    if ( v49 == 0.0 )
                    {
                      v50 = 0.0;
                      v51 = 0.0;
                      v52 = 0.0;
                    }
                    else
                    {
                      v50 = v42 * (float)(1.0 / v49);
                      v51 = v44 * (float)(1.0 / v49);
                      v52 = (float)(1.0 / v49) * v43;
                    }
                    if ( (float)((float)((float)(v47 * v51) + (float)(v50 * v46)) + (float)(v52 * v48)) >= 0.99998748 )
                    {
                      v53 = *(float *)&dword_140404A6C[3 * v5[3] + 70687550] - v18;
                      v54 = *(float *)&dword_140404A6C[3 * v16 + 70835006];
                      v55 = *(float *)&dword_140404A6C[3 * v5[3] + 70687552] - v21;
                      v56 = *(float *)&dword_140404A6C[v15 + 70835006];
                      v57 = v39 - v19;
                      v58 = *(float *)&dword_140404A6C[3 * v16 + 70835007];
                      v59 = *(float *)&dword_140404A6C[v15 + 70835007];
                      v60 = 1.0 / v27;
                      v61 = *(float *)&dword_140404A6C[3 * v5[3] + 70835006];
                      v62 = fsqrt((float)((float)(v57 * v57) + (float)(v53 * v53)) + (float)(v55 * v55));
                      v63 = *(float *)&dword_140404A6C[3 * v5[3] + 70835007];
                      v5[1] = v17;
                      v5[2] = *(v10 - 1);
                      v64 = *(float *)&dword_140404A6C[3 * v16 + 70687550];
                      v65 = *(float *)&dword_140404A6C[3 * v16 + 70687551];
                      v66 = *(float *)&dword_140404A6C[3 * v17 + 70687550] - v64;
                      v67 = *(float *)&dword_140404A6C[v35 + 70687551] - v65;
                      v68 = 1.0 / v62;
                      v69 = *(float *)&dword_140404A6C[3 * v16 + 70687552];
                      v70 = *(float *)&dword_140404A6C[v35 + 70687550] - v64;
                      v71 = *(float *)&dword_140404A6C[3 * v17 + 70687552] - v69;
                      v72 = fsqrt(
                              (float)((float)((float)(*(float *)&dword_140404A6C[3 * v17 + 70687551] - v65)
                                            * (float)(*(float *)&dword_140404A6C[3 * v17 + 70687551] - v65))
                                    + (float)(v66 * v66))
                            + (float)(v71 * v71));
                      v73 = (float)((float)(v56 - v54) * v60) * v72;
                      v74 = (float)((float)(v59 - v58) * v60) * v72;
                      v75 = fsqrt(
                              (float)((float)(v67 * v67) + (float)(v70 * v70))
                            + (float)((float)(*(float *)&dword_140404A6C[v35 + 70687552] - v69)
                                    * (float)(*(float *)&dword_140404A6C[v35 + 70687552] - v69)));
                      *(float *)&dword_140404A6C[3 * v17 + 70835006] = v73
                                                                     + *(float *)&dword_140404A6C[3 * v16 + 70835006];
                      *(float *)&dword_140404A6C[3 * v5[1] + 70835007] = v74
                                                                       + *(float *)&dword_140404A6C[3 * *v5 + 70835007];
                      *(float *)&dword_140404A6C[3 * v5[2] + 70835006] = (float)((float)((float)(v61 - v54) * v68) * v75)
                                                                       + (float)(v73
                                                                               + *(float *)&dword_140404A6C[3 * *v5 + 70835006]);
                      *(float *)&dword_140404A6C[3 * v5[2] + 70835007] = (float)((float)((float)(v63 - v58) * v68) * v75)
                                                                       + (float)(v74
                                                                               + *(float *)&dword_140404A6C[3 * *v5 + 70835007]);
                      sub_140184AB0(v7);
                      v1 = dword_140404A6C[70998846];
                      v2 = 1;
                      v0 = 0.0;
                      v154 = 1;
                      if ( v3 == dword_140404A6C[70998846] )
                        goto LABEL_2;
                      v4 = v157;
                      goto LABEL_45;
                    }
                    v4 = v157;
                  }
                }
              }
            }
            v2 = v154;
          }
LABEL_45:
          ++v7;
          ++v9;
          v8 += 3;
          v10 += 4;
        }
        while ( v7 < v1 );
      }
      ++v4;
      ++v3;
      v6 += 3;
      v157 = v4;
      v5 += 4;
    }
    while ( v3 < v1 );
    if ( !v2 )
      goto LABEL_48;
  }
  do
  {
LABEL_48:
    v76 = 0;
    v77 = 0;
    if ( v1 <= 0 )
      break;
    v78 = &dword_140404A6C[71064383];
    v156 = &dword_140404A6C[71064383];
    v79 = (int *)&dword_140404A6C[70998847];
    v80 = (float *)&dword_140404A6C[71113536];
    do
    {
      v81 = 0;
      if ( v1 > 0 )
      {
        v82 = (float *)&dword_140404A6C[71113536];
        v83 = &dword_140404A6C[71064383];
        v84 = (int *)&dword_140404A6C[70998847];
        do
        {
          if ( v77 != v81 )
          {
            v85 = v84[1];
            v86 = v79[2];
            if ( dword_140404A6C[v86 + 70933310] == dword_140404A6C[v85 + 70933310] )
            {
              v87 = *v84;
              v88 = v79[3];
              v1 = dword_140404A6C[70998846];
              if ( dword_140404A6C[v88 + 70933310] == dword_140404A6C[v87 + 70933310] && *v78 == *v83 )
              {
                v89 = 3 * v86;
                if ( fabs(*(float *)&dword_140404A6C[3 * v86 + 70687550] - *(float *)&dword_140404A6C[3 * v85 + 70687550]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v86 + 70687551] - *(float *)&dword_140404A6C[3 * v85 + 70687551]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v86 + 70687552] - *(float *)&dword_140404A6C[3 * v85 + 70687552]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v86 + 70736702] - *(float *)&dword_140404A6C[3 * v85 + 70736702]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v86 + 70736703] - *(float *)&dword_140404A6C[3 * v85 + 70736703]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v86 + 70736704] - *(float *)&dword_140404A6C[3 * v85 + 70736704]) < 0.000099999997
                  && *(float *)&dword_140404A6C[3 * v85 + 70835008] == *(float *)&dword_140404A6C[3 * v86 + 70835008] )
                {
                  v90 = 3 * v88;
                  if ( fabs(*(float *)&dword_140404A6C[3 * v88 + 70687550] - *(float *)&dword_140404A6C[3 * v87 + 70687550]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * v88 + 70687551] - *(float *)&dword_140404A6C[3 * v87 + 70687551]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * v88 + 70687552] - *(float *)&dword_140404A6C[3 * v87 + 70687552]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * v88 + 70736702] - *(float *)&dword_140404A6C[3 * v87 + 70736702]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * v88 + 70736703] - *(float *)&dword_140404A6C[3 * v87 + 70736703]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * v88 + 70736704] - *(float *)&dword_140404A6C[3 * v87 + 70736704]) < 0.000099999997
                    && *(float *)&dword_140404A6C[3 * v87 + 70835008] == *(float *)&dword_140404A6C[3 * v88 + 70835008]
                    && fabs(*(v80 - 1) - *(v82 - 1)) < 0.000099999997
                    && fabs(*v80 - *v82) < 0.000099999997
                    && fabs(v80[1] - v82[1]) < 0.000099999997 )
                  {
                    v91 = 3LL * *v79;
                    v92 = v84[3];
                    v93 = *(float *)&dword_140404A6C[3 * *v79 + 70687551];
                    v94 = *(float *)&dword_140404A6C[3 * *v79 + 70687552];
                    v95 = *(float *)&dword_140404A6C[3 * v88 + 70687551] - v93;
                    v96 = *(float *)&dword_140404A6C[3 * *v79 + 70687550];
                    v97 = *(float *)&dword_140404A6C[3 * v88 + 70687552] - v94;
                    v98 = *(float *)&dword_140404A6C[3 * v88 + 70687550] - v96;
                    v99 = *(float *)&dword_140404A6C[3 * v92 + 70687551] - v93;
                    v100 = *(float *)&dword_140404A6C[3 * v92 + 70687552] - v94;
                    v101 = *(float *)&dword_140404A6C[3 * v92 + 70687550] - v96;
                    v102 = fsqrt((float)((float)(v95 * v95) + (float)(v98 * v98)) + (float)(v97 * v97));
                    v155 = v102;
                    if ( v102 == 0.0 )
                    {
                      v103 = 0.0;
                      v104 = 0.0;
                      v105 = 0.0;
                    }
                    else
                    {
                      v103 = (float)(1.0 / v102) * v98;
                      v104 = (float)(1.0 / v102) * v95;
                      v105 = (float)(1.0 / v102) * v97;
                    }
                    v106 = fsqrt((float)((float)(v99 * v99) + (float)(v101 * v101)) + (float)(v100 * v100));
                    if ( v106 == 0.0 )
                    {
                      v108 = 0.0;
                      v109 = 0.0;
                      v110 = 0.0;
                    }
                    else
                    {
                      v107 = 1.0 / v106;
                      v108 = (float)(1.0 / v106) * v101;
                      v109 = v107 * v99;
                      v110 = v107 * v100;
                    }
                    if ( (float)((float)((float)(v104 * v109) + (float)(v108 * v103)) + (float)(v110 * v105)) >= 0.99998748 )
                    {
                      v111 = 3LL * v79[1];
                      v112 = *(float *)&dword_140404A6C[3 * v79[1] + 70687552];
                      v113 = *(float *)&dword_140404A6C[3 * v79[1] + 70687550];
                      v114 = *(float *)&dword_140404A6C[v89 + 70687552] - v112;
                      v115 = *(float *)&dword_140404A6C[3 * v79[1] + 70687551];
                      v116 = *(float *)&dword_140404A6C[v89 + 70687550] - v113;
                      v117 = v84[2];
                      v118 = *(float *)&dword_140404A6C[v89 + 70687551] - v115;
                      v119 = *(float *)&dword_140404A6C[3 * v117 + 70687552] - v112;
                      v120 = *(float *)&dword_140404A6C[3 * v117 + 70687550] - v113;
                      v121 = *(float *)&dword_140404A6C[3 * v117 + 70687551] - v115;
                      v122 = fsqrt((float)((float)(v116 * v116) + (float)(v118 * v118)) + (float)(v114 * v114));
                      if ( v122 == 0.0 )
                      {
                        v123 = 0.0;
                        v124 = 0.0;
                        v125 = 0.0;
                      }
                      else
                      {
                        v123 = (float)(1.0 / v122) * v116;
                        v124 = (float)(1.0 / v122) * v118;
                        v125 = (float)(1.0 / v122) * v114;
                      }
                      v126 = fsqrt((float)((float)(v121 * v121) + (float)(v120 * v120)) + (float)(v119 * v119));
                      if ( v126 == 0.0 )
                      {
                        v128 = 0.0;
                        v129 = 0.0;
                      }
                      else
                      {
                        v127 = 1.0 / v126;
                        v128 = (float)(1.0 / v126) * v120;
                        v129 = v127 * v121;
                        v0 = v127 * v119;
                      }
                      if ( (float)((float)((float)(v124 * v129) + (float)(v128 * v123)) + (float)(v0 * v125)) >= 0.99998748 )
                      {
                        v130 = v115 - *(float *)&dword_140404A6C[3 * *v79 + 70687551];
                        v131 = *(float *)&dword_140404A6C[3 * v79[1] + 70687552]
                             - *(float *)&dword_140404A6C[3 * *v79 + 70687552];
                        v132 = *(float *)&dword_140404A6C[3 * *v79 + 70835006];
                        v133 = v113 - v96;
                        v134 = *(float *)&dword_140404A6C[3 * v79[1] + 70835006];
                        v135 = *(float *)&dword_140404A6C[3 * *v79 + 70835007];
                        v136 = *(float *)&dword_140404A6C[v90 + 70835007];
                        v137 = (float)(v130 * v130) + (float)(v133 * v133);
                        v138 = *(float *)&dword_140404A6C[v90 + 70835006];
                        v139 = fsqrt(v137 + (float)(v131 * v131));
                        v140 = *(float *)&dword_140404A6C[3 * v79[1] + 70835007];
                        v79[2] = v117;
                        v141 = v84[3];
                        v79[3] = v141;
                        v142 = *(float *)&dword_140404A6C[v91 + 70687550];
                        v143 = *(float *)&dword_140404A6C[v91 + 70687551];
                        v144 = *(float *)&dword_140404A6C[v111 + 70687550] - v142;
                        v145 = 1.0 / v139;
                        v146 = *(float *)&dword_140404A6C[v91 + 70687552];
                        v147 = *(float *)&dword_140404A6C[3 * v141 + 70687550] - v142;
                        v148 = *(float *)&dword_140404A6C[3 * v141 + 70687552] - v146;
                        v149 = (float)(*(float *)&dword_140404A6C[3 * v141 + 70687551] - v143)
                             * (float)(*(float *)&dword_140404A6C[3 * v141 + 70687551] - v143);
                        v150 = fsqrt(
                                 (float)((float)((float)(*(float *)&dword_140404A6C[v111 + 70687551] - v143)
                                               * (float)(*(float *)&dword_140404A6C[v111 + 70687551] - v143))
                                       + (float)(v144 * v144))
                               + (float)((float)(*(float *)&dword_140404A6C[v111 + 70687552] - v146)
                                       * (float)(*(float *)&dword_140404A6C[v111 + 70687552] - v146)));
                        v151 = fsqrt((float)(v149 + (float)(v147 * v147)) + (float)(v148 * v148));
                        v152 = (float)((float)(v138 - v132) * (float)(1.0 / v155)) * v151;
                        v153 = (float)((float)(v136 - v135) * (float)(1.0 / v155)) * v151;
                        *(float *)&dword_140404A6C[3 * v117 + 70835006] = (float)((float)((float)((float)(v134 - v132)
                                                                                                * v145)
                                                                                        * v150)
                                                                                + *(float *)&dword_140404A6C[v91 + 70835006])
                                                                        + v152;
                        *(float *)&dword_140404A6C[3 * v79[2] + 70835007] = (float)((float)((float)((float)(v140 - v135)
                                                                                                  * v145)
                                                                                          * v150)
                                                                                  + *(float *)&dword_140404A6C[3 * *v79 + 70835007])
                                                                          + v153;
                        *(float *)&dword_140404A6C[3 * v79[3] + 70835006] = v152
                                                                          + *(float *)&dword_140404A6C[3 * *v79 + 70835006];
                        *(float *)&dword_140404A6C[3 * v79[3] + 70835007] = v153
                                                                          + *(float *)&dword_140404A6C[3 * *v79 + 70835007];
                        sub_140184AB0(v81);
                        v1 = dword_140404A6C[70998846];
                        v76 = 1;
                        v0 = 0.0;
                        if ( v77 == dword_140404A6C[70998846] )
                          goto LABEL_48;
                      }
                    }
                  }
                }
                v78 = v156;
              }
            }
          }
          ++v81;
          ++v83;
          v82 += 3;
          v84 += 4;
          v0 = 0.0;
        }
        while ( v81 < v1 );
      }
      ++v78;
      ++v77;
      v80 += 3;
      v79 += 4;
      v156 = v78;
      v0 = 0.0;
    }
    while ( v77 < v1 );
  }
  while ( v76 );
}
#undef v154
#undef v155
#undef v156
#undef v157

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1512DB764: using guessed type unsigned int;

//----- (0000000140185D00) ----------------------------------------------------
__int64 sub_140185D00()
{
  int v0; // r11d
  int v1; // r8d
  unsigned int *v2; // rdx
  __int64 v3; // rax
  int v4; // ecx
  int v5; // eax
  unsigned int *v6; // r12
  int *v7; // rbp
  float *v8; // r14
  int v9; // r15d
  unsigned int *v10; // rdi
  float *v11; // rsi
  unsigned int *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rax
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm14_4
  float v22; // xmm8_4
  __int64 v23; // r13
  float v24; // xmm7_4
  __int64 v25; // r10
  float v26; // xmm6_4
  float v27; // xmm9_4
  float v28; // xmm5_4
  float v29; // xmm13_4
  float v30; // xmm7_4
  float v31; // xmm4_4
  float v32; // xmm8_4
  float v33; // xmm1_4
  float v34; // xmm5_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  __int64 v37; // r8
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm4_4
  float v41; // xmm12_4
  float v42; // xmm10_4
  float v43; // xmm9_4
  float v44; // xmm6_4
  float v45; // xmm8_4
  float v46; // xmm7_4
  float v47; // xmm0_4
  float v48; // xmm11_4
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm10_4
  float v57; // xmm15_4
  float v58; // xmm11_4
  float v59; // xmm0_4
  float v60; // xmm14_4
  float v61; // xmm8_4
  float v62; // xmm13_4
  float v63; // xmm0_4
  float v64; // xmm12_4
  float v65; // xmm2_4
  float v66; // xmm1_4
  float v67; // xmm7_4
  float v68; // xmm9_4
  float v69; // xmm0_4
  float v70; // xmm1_4
  float v71; // xmm14_4
  float v72; // xmm15_4
  float v73; // xmm3_4
  int v74; // r8d
  unsigned int *v75; // rdx
  __int64 v76; // rax
  __int64 result; // rax
  int v78; // r13d
  unsigned int *v79; // r12
  int *v80; // rbp
  float *v81; // r14
  int v82; // r15d
  unsigned int *v83; // rdi
  float *v84; // rsi
  int *v85; // rbx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // r10
  __int64 v89; // r9
  __int64 v90; // r8
  __int64 v91; // rdx
  float v92; // xmm8_4
  float v93; // xmm4_4
  float v94; // xmm9_4
  __int64 v95; // r9
  __int64 v96; // rax
  float v97; // xmm0_4
  float v98; // xmm10_4
  float v99; // xmm9_4
  float v100; // xmm12_4
  float v101; // xmm8_4
  float v102; // xmm4_4
  float v103; // xmm6_4
  float v104; // xmm5_4
  float v105; // xmm7_4
  float v106; // xmm1_4
  float v107; // xmm8_4
  float v108; // xmm4_4
  float v109; // xmm9_4
  float v110; // xmm1_4
  float v111; // xmm5_4
  float v112; // xmm7_4
  float v113; // xmm6_4
  __int64 v114; // rcx
  float v115; // xmm13_4
  float v116; // xmm11_4
  float v117; // xmm8_4
  float v118; // xmm14_4
  float v119; // xmm4_4
  __int64 v120; // r10
  float v121; // xmm9_4
  float v122; // xmm5_4
  float v123; // xmm7_4
  float v124; // xmm6_4
  float v125; // xmm1_4
  float v126; // xmm8_4
  float v127; // xmm4_4
  float v128; // xmm9_4
  float v129; // xmm1_4
  float v130; // xmm5_4
  float v131; // xmm7_4
  float v132; // xmm6_4
  float v133; // xmm9_4
  float v134; // xmm11_4
  float v135; // xmm12_4
  float v136; // xmm13_4
  float v137; // xmm10_4
  float v138; // xmm11_4
  float v139; // xmm13_4
  float v140; // xmm11_4
  float v141; // xmm14_4
  float v142; // xmm15_4
  __int64 v143; // rax
  float v144; // xmm2_4
  float v145; // xmm1_4
  float v146; // xmm11_4
  float v147; // xmm0_4
  float v148; // xmm5_4
  float v149; // xmm1_4
  float v150; // xmm0_4
  float v151; // xmm14_4
  float v152; // xmm15_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140185D00[32];
#define v153 (*(int (*))(void *)(sr_frame_140185D00 + 0)) /* [rsp+110h] */
#define v154 (*(unsigned int (*))(void *)(sr_frame_140185D00 + 0)) /* [rsp+110h] */
#define v155 (*(int (*))(void *)(sr_frame_140185D00 + 8)) /* [rsp+118h] */
#define v156 (*(float (*))(void *)(sr_frame_140185D00 + 8)) /* [rsp+118h] */
#define v157 (*(float (*))(void *)(sr_frame_140185D00 + 24)) /* [rsp+128h] */

  v0 = dword_140404A6C[70998846];
  v1 = 0;
  if ( (int)dword_140404A6C[70998846] > 0 )
  {
    v2 = &dword_140404A6C[71162687];
    do
    {
      v3 = (int)*(v2 - 98304);
      ++v2;
      ++v1;
      *(v2 - 1) = dword_140404A6C[46 * v3 + 421784738] != 0 ? 2 : 0;
      v0 = dword_140404A6C[70998846];
    }
    while ( v1 < (int)dword_140404A6C[70998846] );
  }
  do
  {
LABEL_4:
    v4 = 0;
    v5 = 0;
    v153 = 0;
    v155 = 0;
    if ( v0 <= 0 )
      break;
    v6 = &dword_140404A6C[71162687];
    v7 = (int *)&dword_140404A6C[70998847];
    v8 = (float *)&dword_140404A6C[71113536];
    do
    {
      if ( !*v6 )
      {
        v9 = 0;
        if ( v0 > 0 )
        {
          v10 = &dword_140404A6C[71162687];
          v11 = (float *)&dword_140404A6C[71113536];
          v12 = &dword_140404A6C[70998850];
          do
          {
            if ( (int)*v10 < 2 )
            {
              v13 = (int)*(v12 - 3);
              v14 = v7[1];
              if ( dword_140404A6C[v14 + 70933310] != dword_140404A6C[v13 + 70933310] )
                goto LABEL_49;
              v15 = (int)*v12;
              v16 = v7[2];
              if ( dword_140404A6C[v16 + 70933310] != dword_140404A6C[v15 + 70933310]
                || *(v6 - 98304) != *(v10 - 98304)
                || *(v6 - 0x10000) != *(v10 - 0x10000)
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70687550] - *(float *)&dword_140404A6C[3 * v13 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70687551] - *(float *)&dword_140404A6C[3 * v13 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70687552] - *(float *)&dword_140404A6C[3 * v13 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70736702] - *(float *)&dword_140404A6C[3 * v13 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70736703] - *(float *)&dword_140404A6C[3 * v13 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70736704] - *(float *)&dword_140404A6C[3 * v13 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * v13 + 70835008] != *(float *)&dword_140404A6C[3 * v14 + 70835008]
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70687550] - *(float *)&dword_140404A6C[3 * v15 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70687551] - *(float *)&dword_140404A6C[3 * v15 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70687552] - *(float *)&dword_140404A6C[3 * v15 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70736702] - *(float *)&dword_140404A6C[3 * v15 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70736703] - *(float *)&dword_140404A6C[3 * v15 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70736704] - *(float *)&dword_140404A6C[3 * v15 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * v15 + 70835008] != *(float *)&dword_140404A6C[3 * v16 + 70835008]
                || fabs(*(v8 - 1) - *(v11 - 1)) >= 0.000099999997
                || fabs(*v8 - *v11) >= 0.000099999997
                || fabs(v8[1] - v11[1]) >= 0.000099999997 )
              {
                goto LABEL_49;
              }
              v17 = *v7;
              v18 = *(float *)&dword_140404A6C[3 * v17 + 70687551];
              v19 = *(float *)&dword_140404A6C[3 * v17 + 70687552];
              v20 = *(float *)&dword_140404A6C[3 * v14 + 70687551] - v18;
              v21 = *(float *)&dword_140404A6C[3 * v17 + 70687550];
              v22 = *(float *)&dword_140404A6C[3 * v14 + 70687552] - v19;
              v23 = (int)*(v12 - 2);
              v24 = *(float *)&dword_140404A6C[3 * v14 + 70687550] - v21;
              v26 = *(float *)&dword_140404A6C[3 * v23 + 70687551] - v18;
              v27 = *(float *)&dword_140404A6C[3 * v23 + 70687552] - v19;
              v28 = *(float *)&dword_140404A6C[3 * v23 + 70687550] - v21;
              v29 = fsqrt((float)((float)(v20 * v20) + (float)(v24 * v24)) + (float)(v22 * v22));
              if ( v29 == 0.0 )
              {
                v30 = 0.0;
                v31 = 0.0;
                v32 = 0.0;
              }
              else
              {
                v30 = v24 * (float)(1.0 / v29);
                v31 = v20 * (float)(1.0 / v29);
                v32 = v22 * (float)(1.0 / v29);
              }
              v33 = fsqrt((float)((float)(v26 * v26) + (float)(v28 * v28)) + (float)(v27 * v27));
              if ( v33 == 0.0 )
              {
                v34 = 0.0;
                v35 = 0.0;
                v36 = 0.0;
              }
              else
              {
                v34 = v28 * (float)(1.0 / v33);
                v35 = v26 * (float)(1.0 / v33);
                v36 = (float)(1.0 / v33) * v27;
              }
              if ( (float)((float)((float)(v31 * v35) + (float)(v34 * v30)) + (float)(v36 * v32)) < 0.99998748 )
                goto LABEL_49;
              v37 = 3LL * v7[3];
              v38 = *(float *)&dword_140404A6C[3 * v7[3] + 70687550];
              v39 = *(float *)&dword_140404A6C[3 * v7[3] + 70687552];
              v40 = *(float *)&dword_140404A6C[3 * v16 + 70687550] - v38;
              v41 = *(float *)&dword_140404A6C[3 * v7[3] + 70687551];
              v42 = *(float *)&dword_140404A6C[3 * v16 + 70687552] - v39;
              v43 = *(float *)&dword_140404A6C[3 * v16 + 70687551] - v41;
              v44 = *(float *)&dword_140404A6C[3 * *(v12 - 1) + 70687550] - v38;
              v45 = *(float *)&dword_140404A6C[3 * *(v12 - 1) + 70687552] - v39;
              v46 = *(float *)&dword_140404A6C[3 * *(v12 - 1) + 70687551] - v41;
              v47 = fsqrt((float)((float)(v43 * v43) + (float)(v40 * v40)) + (float)(v42 * v42));
              if ( v47 == 0.0 )
              {
                v48 = 0.0;
                v49 = 0.0;
                v50 = 0.0;
              }
              else
              {
                v48 = (float)(1.0 / v47) * v40;
                v49 = (float)(1.0 / v47) * v43;
                v50 = (float)(1.0 / v47) * v42;
              }
              v51 = fsqrt((float)((float)(v46 * v46) + (float)(v44 * v44)) + (float)(v45 * v45));
              if ( v51 == 0.0 )
              {
                v53 = 0.0;
                v54 = 0.0;
                v55 = 0.0;
              }
              else
              {
                v52 = 1.0 / v51;
                v53 = (float)(1.0 / v51) * v44;
                v54 = v52 * v46;
                v55 = v52 * v45;
              }
              if ( (float)((float)((float)(v49 * v54) + (float)(v53 * v48)) + (float)(v55 * v50)) >= 0.99998748 )
              {
                v56 = *(float *)&dword_140404A6C[3 * v17 + 70835006];
                v57 = *(float *)&dword_140404A6C[3 * v14 + 70835007];
                v58 = *(float *)&dword_140404A6C[3 * v7[3] + 70835006];
                v59 = *(float *)&dword_140404A6C[3 * v7[3] + 70687550] - v21;
                v60 = *(float *)&dword_140404A6C[3 * v14 + 70835006];
                v61 = 1.0 / v29;
                v62 = *(float *)&dword_140404A6C[3 * v17 + 70835007];
                v157 = *(float *)&dword_140404A6C[3 * v7[3] + 70687552];
                v63 = fsqrt(
                        (float)((float)((float)(v41 - *(float *)&dword_140404A6C[3 * v17 + 70687551])
                                      * (float)(v41 - *(float *)&dword_140404A6C[3 * v17 + 70687551]))
                              + (float)(v59 * v59))
                      + (float)((float)(v157 - *(float *)&dword_140404A6C[3 * v17 + 70687552])
                              * (float)(v157 - *(float *)&dword_140404A6C[3 * v17 + 70687552])));
                v64 = *(float *)&dword_140404A6C[3 * v7[3] + 70835007];
                v7[1] = v23;
                v7[2] = *(v12 - 1);
                v65 = *(float *)&dword_140404A6C[3 * v17 + 70687550];
                v66 = *(float *)&dword_140404A6C[3 * v17 + 70687551];
                v67 = *(float *)&dword_140404A6C[v37 + 70687551] - v66;
                v68 = 1.0 / v63;
                v69 = *(float *)&dword_140404A6C[3 * v17 + 70687552];
                v25 = 3 * v23;
                v70 = fsqrt(
                        (float)((float)((float)(*(float *)&dword_140404A6C[v25 + 70687551] - v66)
                                      * (float)(*(float *)&dword_140404A6C[v25 + 70687551] - v66))
                              + (float)((float)(*(float *)&dword_140404A6C[v25 + 70687550] - v65)
                                      * (float)(*(float *)&dword_140404A6C[v25 + 70687550] - v65)))
                      + (float)((float)(*(float *)&dword_140404A6C[v25 + 70687552] - v69)
                              * (float)(*(float *)&dword_140404A6C[v25 + 70687552] - v69)));
                v71 = (float)((float)(v60 - v56) * v61) * v70;
                v72 = (float)((float)(v57 - v62) * v61) * v70;
                v73 = fsqrt(
                        (float)((float)(v67 * v67)
                              + (float)((float)(*(float *)&dword_140404A6C[v37 + 70687550] - v65)
                                      * (float)(*(float *)&dword_140404A6C[v37 + 70687550] - v65)))
                      + (float)((float)(*(float *)&dword_140404A6C[v37 + 70687552] - v69)
                              * (float)(*(float *)&dword_140404A6C[v37 + 70687552] - v69)));
                *(float *)&dword_140404A6C[3 * v23 + 70835006] = v71 + *(float *)&dword_140404A6C[3 * v17 + 70835006];
                *(float *)&dword_140404A6C[3 * v7[1] + 70835007] = v72 + *(float *)&dword_140404A6C[3 * *v7 + 70835007];
                *(float *)&dword_140404A6C[3 * v7[2] + 70835006] = (float)((float)((float)(v58 - v56) * v68) * v73)
                                                                 + (float)(v71
                                                                         + *(float *)&dword_140404A6C[3 * *v7 + 70835006]);
                *(float *)&dword_140404A6C[3 * v7[2] + 70835007] = (float)((float)((float)(v64 - v62) * v68) * v73)
                                                                 + (float)(v72
                                                                         + *(float *)&dword_140404A6C[3 * *v7 + 70835007]);
                sub_140184AB0(v9);
                v4 = v153;
                *v10 = dword_140404A6C[dword_140404A6C[70998846] + 71162687];
                v5 = v155;
                v0 = dword_140404A6C[70998846];
                if ( v9 < v155 )
                  v4 = 1;
                v153 = v4;
                if ( v155 == dword_140404A6C[70998846] )
                  goto LABEL_4;
              }
              else
              {
LABEL_49:
                v5 = v155;
                v4 = v153;
              }
            }
            ++v9;
            v11 += 3;
            v12 += 4;
            ++v10;
          }
          while ( v9 < v0 );
        }
        if ( !v4 )
        {
          *v6 = 1;
          v0 = dword_140404A6C[70998846];
        }
      }
      ++v5;
      v8 += 3;
      v7 += 4;
      v155 = v5;
      ++v6;
    }
    while ( v5 < v0 );
  }
  while ( v4 );
  v74 = 0;
  if ( v0 > 0 )
  {
    v75 = &dword_140404A6C[71162687];
    do
    {
      v76 = (int)*(v75 - 98304);
      ++v75;
      ++v74;
      *(v75 - 1) = dword_140404A6C[46 * v76 + 421784738] != 0 ? 2 : 0;
      v0 = dword_140404A6C[70998846];
    }
    while ( v74 < (int)dword_140404A6C[70998846] );
  }
  do
  {
LABEL_58:
    result = 0;
    v78 = 0;
    v154 = 0;
    if ( v0 <= 0 )
      break;
    v79 = &dword_140404A6C[71162687];
    v80 = (int *)&dword_140404A6C[70998847];
    v81 = (float *)&dword_140404A6C[71113536];
    do
    {
      if ( !*v79 )
      {
        v82 = 0;
        if ( v0 > 0 )
        {
          v83 = &dword_140404A6C[71162687];
          v84 = (float *)&dword_140404A6C[71113536];
          v85 = (int *)&dword_140404A6C[70998847];
          do
          {
            if ( (int)*v83 < 2 )
            {
              v86 = v85[1];
              v87 = v80[2];
              if ( dword_140404A6C[v87 + 70933310] != dword_140404A6C[v86 + 70933310] )
                goto LABEL_103;
              v88 = *v85;
              v89 = v80[3];
              if ( dword_140404A6C[v89 + 70933310] != dword_140404A6C[v88 + 70933310] )
                goto LABEL_103;
              if ( *(v79 - 98304) != *(v83 - 98304) )
                goto LABEL_103;
              if ( *(v79 - 0x10000) != *(v83 - 0x10000) )
                goto LABEL_103;
              v90 = 3 * v87;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70687550] - *(float *)&dword_140404A6C[3 * v86 + 70687550]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70687551] - *(float *)&dword_140404A6C[3 * v86 + 70687551]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70687552] - *(float *)&dword_140404A6C[3 * v86 + 70687552]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70736702] - *(float *)&dword_140404A6C[3 * v86 + 70736702]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70736703] - *(float *)&dword_140404A6C[3 * v86 + 70736703]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70736704] - *(float *)&dword_140404A6C[3 * v86 + 70736704]) >= 0.000099999997 )
                goto LABEL_103;
              if ( *(float *)&dword_140404A6C[3 * v86 + 70835008] != *(float *)&dword_140404A6C[3 * v87 + 70835008] )
                goto LABEL_103;
              v91 = 3 * v89;
              if ( fabs(*(float *)&dword_140404A6C[3 * v89 + 70687550] - *(float *)&dword_140404A6C[3 * v88 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70687551] - *(float *)&dword_140404A6C[3 * v88 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70687552] - *(float *)&dword_140404A6C[3 * v88 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70736702] - *(float *)&dword_140404A6C[3 * v88 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70736703] - *(float *)&dword_140404A6C[3 * v88 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70736704] - *(float *)&dword_140404A6C[3 * v88 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * v88 + 70835008] != *(float *)&dword_140404A6C[3 * v89 + 70835008]
                || fabs(*(v81 - 1) - *(v84 - 1)) >= 0.000099999997
                || fabs(*v81 - *v84) >= 0.000099999997
                || fabs(v81[1] - v84[1]) >= 0.000099999997 )
              {
                goto LABEL_103;
              }
              v92 = *(float *)&dword_140404A6C[3 * v89 + 70687550];
              v93 = *(float *)&dword_140404A6C[3 * v89 + 70687551];
              v94 = *(float *)&dword_140404A6C[3 * v89 + 70687552];
              v95 = 3LL * *v80;
              v96 = v85[3];
              v97 = *(float *)&dword_140404A6C[3 * *v80 + 70687552];
              v98 = *(float *)&dword_140404A6C[3 * *v80 + 70687550];
              v99 = v94 - v97;
              v100 = *(float *)&dword_140404A6C[3 * *v80 + 70687551];
              v101 = v92 - v98;
              v102 = v93 - v100;
              v103 = *(float *)&dword_140404A6C[3 * v96 + 70687552] - v97;
              v104 = *(float *)&dword_140404A6C[3 * v96 + 70687550] - v98;
              v105 = *(float *)&dword_140404A6C[3 * v96 + 70687551] - v100;
              v106 = fsqrt((float)((float)(v102 * v102) + (float)(v101 * v101)) + (float)(v99 * v99));
              v156 = v106;
              if ( v106 == 0.0 )
              {
                v107 = 0.0;
                v108 = 0.0;
                v109 = 0.0;
              }
              else
              {
                v107 = v101 * (float)(1.0 / v106);
                v108 = v102 * (float)(1.0 / v106);
                v109 = v99 * (float)(1.0 / v106);
              }
              v110 = fsqrt((float)((float)(v105 * v105) + (float)(v104 * v104)) + (float)(v103 * v103));
              if ( v110 == 0.0 )
              {
                v111 = 0.0;
                v112 = 0.0;
                v113 = 0.0;
              }
              else
              {
                v111 = v104 * (float)(1.0 / v110);
                v112 = v105 * (float)(1.0 / v110);
                v113 = v103 * (float)(1.0 / v110);
              }
              if ( (float)((float)((float)(v108 * v112) + (float)(v111 * v107)) + (float)(v113 * v109)) < 0.99998748 )
                goto LABEL_103;
              v114 = 3LL * v80[1];
              v115 = *(float *)&dword_140404A6C[3 * v80[1] + 70687550];
              v116 = *(float *)&dword_140404A6C[3 * v80[1] + 70687551];
              v117 = *(float *)&dword_140404A6C[v90 + 70687550] - v115;
              v118 = *(float *)&dword_140404A6C[3 * v80[1] + 70687552];
              v119 = *(float *)&dword_140404A6C[v90 + 70687551] - v116;
              v120 = v85[2];
              v121 = *(float *)&dword_140404A6C[v90 + 70687552] - v118;
              v122 = *(float *)&dword_140404A6C[3 * v120 + 70687550] - v115;
              v123 = *(float *)&dword_140404A6C[3 * v120 + 70687551] - v116;
              v124 = *(float *)&dword_140404A6C[3 * v120 + 70687552] - v118;
              v125 = fsqrt((float)((float)(v119 * v119) + (float)(v117 * v117)) + (float)(v121 * v121));
              if ( v125 == 0.0 )
              {
                v126 = 0.0;
                v127 = 0.0;
                v128 = 0.0;
              }
              else
              {
                v126 = v117 * (float)(1.0 / v125);
                v127 = v119 * (float)(1.0 / v125);
                v128 = v121 * (float)(1.0 / v125);
              }
              v129 = fsqrt((float)((float)(v123 * v123) + (float)(v122 * v122)) + (float)(v124 * v124));
              if ( v129 == 0.0 )
              {
                v130 = 0.0;
                v131 = 0.0;
                v132 = 0.0;
              }
              else
              {
                v130 = v122 * (float)(1.0 / v129);
                v131 = v123 * (float)(1.0 / v129);
                v132 = v124 * (float)(1.0 / v129);
              }
              if ( (float)((float)((float)(v127 * v131) + (float)(v130 * v126)) + (float)(v132 * v128)) >= 0.99998748 )
              {
                v133 = *(float *)&dword_140404A6C[3 * *v80 + 70835007];
                v134 = v116 - v100;
                v135 = *(float *)&dword_140404A6C[3 * v80[1] + 70835006];
                v136 = v115 - v98;
                v137 = *(float *)&dword_140404A6C[3 * *v80 + 70835006];
                v138 = (float)(v134 * v134) + (float)(v136 * v136);
                v139 = *(float *)&dword_140404A6C[3 * v80[1] + 70835007];
                v140 = v138
                     + (float)((float)(v118 - *(float *)&dword_140404A6C[3 * *v80 + 70687552])
                             * (float)(v118 - *(float *)&dword_140404A6C[3 * *v80 + 70687552]));
                v141 = *(float *)&dword_140404A6C[v91 + 70835006];
                v142 = *(float *)&dword_140404A6C[v91 + 70835007];
                v80[2] = v120;
                v143 = v85[3];
                v80[3] = v143;
                v144 = *(float *)&dword_140404A6C[v95 + 70687550];
                v145 = *(float *)&dword_140404A6C[v95 + 70687551];
                v146 = 1.0 / fsqrt(v140);
                v147 = *(float *)&dword_140404A6C[v95 + 70687552];
                v148 = (float)(*(float *)&dword_140404A6C[3 * v143 + 70687551] - v145)
                     * (float)(*(float *)&dword_140404A6C[3 * v143 + 70687551] - v145);
                v149 = fsqrt(
                         (float)((float)((float)(*(float *)&dword_140404A6C[v114 + 70687551] - v145)
                                       * (float)(*(float *)&dword_140404A6C[v114 + 70687551] - v145))
                               + (float)((float)(*(float *)&dword_140404A6C[v114 + 70687550] - v144)
                                       * (float)(*(float *)&dword_140404A6C[v114 + 70687550] - v144)))
                       + (float)((float)(*(float *)&dword_140404A6C[v114 + 70687552] - v147)
                               * (float)(*(float *)&dword_140404A6C[v114 + 70687552] - v147)));
                v150 = fsqrt(
                         (float)(v148
                               + (float)((float)(*(float *)&dword_140404A6C[3 * v143 + 70687550] - v144)
                                       * (float)(*(float *)&dword_140404A6C[3 * v143 + 70687550] - v144)))
                       + (float)((float)(*(float *)&dword_140404A6C[3 * v143 + 70687552] - v147)
                               * (float)(*(float *)&dword_140404A6C[3 * v143 + 70687552] - v147)));
                v151 = (float)((float)(v141 - v137) * (float)(1.0 / v156)) * v150;
                v152 = (float)((float)(v142 - v133) * (float)(1.0 / v156)) * v150;
                *(float *)&dword_140404A6C[3 * v120 + 70835006] = (float)((float)((float)((float)(v135 - v137) * v146)
                                                                                * v149)
                                                                        + *(float *)&dword_140404A6C[v95 + 70835006])
                                                                + v151;
                *(float *)&dword_140404A6C[3 * v80[2] + 70835007] = (float)((float)((float)((float)(v139 - v133) * v146)
                                                                                  * v149)
                                                                          + *(float *)&dword_140404A6C[3 * *v80 + 70835007])
                                                                  + v152;
                *(float *)&dword_140404A6C[3 * v80[3] + 70835006] = v151
                                                                  + *(float *)&dword_140404A6C[3 * *v80 + 70835006];
                *(float *)&dword_140404A6C[3 * v80[3] + 70835007] = v152
                                                                  + *(float *)&dword_140404A6C[3 * *v80 + 70835007];
                sub_140184AB0(v82);
                *v83 = dword_140404A6C[dword_140404A6C[70998846] + 71162687];
                result = v154;
                v0 = dword_140404A6C[70998846];
                if ( v82 < v78 )
                  result = 1;
                v154 = result;
                if ( v78 == dword_140404A6C[70998846] )
                  goto LABEL_58;
              }
              else
              {
LABEL_103:
                result = v154;
              }
            }
            ++v82;
            v84 += 3;
            v85 += 4;
            ++v83;
          }
          while ( v82 < v0 );
        }
        if ( !(_DWORD)result )
        {
          *v79 = 1;
          v0 = dword_140404A6C[70998846];
        }
      }
      ++v78;
      v81 += 3;
      v80 += 4;
      ++v79;
    }
    while ( v78 < v0 );
  }
  while ( (_DWORD)result );
  return result;
}
#undef v153
#undef v154
#undef v155
#undef v156
#undef v157

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1512DB764: using guessed type unsigned int;

//----- (0000000140187180) ----------------------------------------------------
float            sub_140187180(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float v7; // xmm3_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // [rsp+30h] [rbp+8h]

  v7 = 1.0 - a2;
  if ( a1 == 1 )
    return (float)(v7 * a3) + (float)(a2 * a6);
  v9 = a2 * a6;
  v10 = v7 * a3;
  if ( a1 == 2 )
    return (float)((float)((float)((float)(a4 + a4) * v7) + v9) * a2) + (float)(v10 * v7);
  if ( a1 == 3 )
    return (float)((float)((float)((float)(v7 * v7) * (float)(a4 * 3.0))
                         + (float)((float)((float)((float)(a5 * 3.0) * v7) + v9) * a2))
                 * a2)
         + (float)((float)(v10 * v7) * v7);
  return v11;
}


//----- (0000000140187270) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_140187270(float a1, float a2, float a3, double a4, float a5)
{
  __int128 v5; // xmm7

  v5 = *(_OWORD *)&a4;
  *(float *)&v5 = (float)((float)((float)((float)((float)((float)(*(float *)&a4 * 3.0) * (float)(1.0 - a1))
                                                + (float)(a1 * a5))
                                        * a1)
                                + (float)((float)((float)(1.0 - a1) * (float)(1.0 - a1)) * (float)(a3 * 3.0)))
                        * a1)
                + (float)((float)((float)(1.0 - a1) * (float)(1.0 - a1)) * (float)((float)(1.0 - a1) * a2));
  return (__m128)v5;
}

// 140187270: inconsistent variable size for 'xmm3_8.8'

//----- (00000001401872F0) ----------------------------------------------------
float            sub_1401872F0(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float v7; // xmm8_4
  float v8; // [rsp+40h] [rbp+8h]

  if ( a1 == 1 )
    return a6 - a3;
  v7 = a2 + a2;
  if ( a1 == 2 )
    return (float)((float)((float)((float)(a3 - (float)(a4 + a4)) + a6) * v7) - (float)(a3 + a3)) + (float)(a4 + a4);
  if ( a1 == 3 )
    return (float)((float)((float)((float)((float)((float)((float)((float)(a4 * 3.0) - a3) - (float)(a5 * 3.0)) + a6)
                                         * a2)
                                 * (float)(a2 * 3.0))
                         + (float)((float)((float)((float)(a3 * 3.0) - (float)(a4 * 6.0)) + (float)(a5 * 3.0)) * v7))
                 - (float)(a3 * 3.0))
         + (float)(a4 * 3.0);
  return v8;
}


//----- (0000000140187410) ----------------------------------------------------
_BOOL8            sub_140187410(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v8; // xmm4_4
  float v9; // xmm15_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm12_4
  float v17; // xmm13_4
  float v18; // xmm9_4
  float v19; // xmm4_4
  float v20; // xmm7_4
  float v21; // xmm14_4
  float v22; // xmm11_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm8_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm8_4
  float v32; // xmm11_4
  float v33; // xmm14_4
  float v34; // xmm8_4
  float v35; // xmm5_4
  float v36; // xmm2_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187410[48];
#define v37 (*(float (*))(void *)(sr_frame_140187410 + 0)) /* [rsp+B0h] */
#define v38 (*(float (*))(void *)(sr_frame_140187410 + 8)) /* [rsp+B8h] */
#define v39 (*(float (*))(void *)(sr_frame_140187410 + 16)) /* [rsp+C0h] */
#define v40 (*(float (*))(void *)(sr_frame_140187410 + 24)) /* [rsp+C8h] */
#define v41 (*(float (*))(void *)(sr_frame_140187410 + 32)) /* [rsp+D0h] */

  v5 = a3[1];
  v6 = a3[2];
  v8 = *a5;
  v9 = *a3;
  v10 = a5[1] - v5;
  v41 = a5[1];
  v11 = v8 - *a3;
  v40 = a5[2];
  v38 = a4[1] - v5;
  v37 = a4[2] - v6;
  v39 = *a4 - *a3;
  v12 = (float)(v10 * v37) - (float)((float)(v40 - v6) * v38);
  v13 = (float)((float)(v40 - v6) * v39) - (float)(v11 * v37);
  v14 = (float)(v11 * v38) - (float)(v10 * v39);
  v15 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( v15 == 0.0 )
  {
    v16 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
  }
  else
  {
    v16 = (float)(1.0 / v15) * v12;
    v17 = (float)(1.0 / v15) * v13;
    v18 = (float)(1.0 / v15) * v14;
  }
  v19 = a2[1];
  v20 = a2[2];
  v21 = *a1;
  v22 = a1[1];
  v23 = (float)((float)((float)(v9 - *a2) * v16) + (float)((float)(v5 - v19) * v17)) + (float)((float)(v6 - v20) * v18);
  v24 = a1[2];
  v25 = (float)((float)((float)(v9 - *a1) * v16) + (float)((float)(v5 - v22) * v17)) + (float)((float)(v6 - v24) * v18);
  if ( v25 <= 0.0 )
  {
    if ( v25 < 0.0 && v23 < 0.0 )
      return 0;
  }
  else if ( v23 > 0.0 )
  {
    return 0;
  }
  v27 = v20 - v24;
  v28 = *a2 - v21;
  v29 = v19 - v22;
  v30 = (float)((float)(v28 * v16) + (float)(v29 * v17)) + (float)(v27 * v18);
  if ( v30 == 0.0 )
    return 0;
  v31 = v25 / v30;
  v32 = (float)(v31 * v28) + v21;
  v33 = (float)(v31 * v29) + a1[1];
  v34 = (float)(v31 * v27) + a1[2];
  if ( (float)((float)((float)((float)((float)((float)(v33 - v5) * v37) - (float)((float)(v34 - v6) * v38)) * v16)
                     + (float)((float)((float)((float)(v34 - v6) * v39) - (float)((float)(v32 - v9) * v37)) * v17))
             + (float)((float)((float)((float)(v32 - v9) * v38) - (float)((float)(v33 - v5) * v39)) * v18)) < 0.0 )
    return 0;
  v35 = a5[1] - a4[1];
  v36 = a5[2] - a4[2];
  return (float)((float)((float)((float)((float)((float)(v33 - a4[1]) * v36) - (float)((float)(v34 - a4[2]) * v35)) * v16)
                       + (float)((float)((float)((float)(v34 - a4[2]) * (float)(*a5 - *a4))
                                       - (float)((float)(v32 - *a4) * v36))
                               * v17))
               + (float)((float)((float)((float)(v32 - *a4) * v35) - (float)((float)(v33 - a4[1]) * (float)(*a5 - *a4)))
                       * v18)) >= 0.0
      && (float)((float)((float)((float)((float)((float)(v33 - v41) * (float)(a3[2] - v40))
                                       - (float)((float)(v34 - v40) * (float)(a3[1] - v41)))
                               * v16)
                       + (float)((float)((float)((float)(v34 - v40) * (float)(v9 - *a5))
                                       - (float)((float)(v32 - *a5) * (float)(a3[2] - v40)))
                               * v17))
               + (float)((float)((float)((float)(v32 - *a5) * (float)(a3[1] - v41))
                               - (float)((float)(v33 - v41) * (float)(v9 - *a5)))
                       * v18)) >= 0.0;
}
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41


//----- (0000000140187860) ----------------------------------------------------
void            sub_140187860(int a1, float a2, float a3, float a4)
{
  int v6; // ebx
  __int128 v8; // xmm10
  __int128 v9; // xmm14
  __int128 v10; // xmm11
  unsigned int v11; // xmm8_4
  unsigned int v12; // xmm9_4
  __int128 v13; // xmm12
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187860[16];
#define v21 (*(float (*))(void *)(sr_frame_140187860 + 0)) /* [rsp+20h] */
#define v22 (*(float (*))(void *)(sr_frame_140187860 + 4)) /* [rsp+24h] */

  v6 = 0;
  /* x arrives in xmm1 (0x14018788A movaps xmm10, xmm1), y in xmm2 (0x1401878A8 movaps xmm14, xmm2); Hex-Rays had
     lost both (v4, v5) and typed the parameters as integers */
  v8 = 0;
  v9 = 0;
  *(float *)&v8 = a2;
  *(float *)&v9 = a3;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  do
  {
    v21 = *(float *)&v8;
    v10 = v9;
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279700;
    *(float *)&v11 = (float)((v6 + a1) >> 4) * 0.0625;
    v22 = *(float *)&v9 + a4;
    *(float *)&v12 = (float)(((_BYTE)v6 + (_BYTE)a1) & 0xF) * 0.0625;
    dword_140404A6C[456807037] = v12;
    *(float *)&dword_140404A6C[456807038] = *(float *)&v11 + 0.0625;
    sub_14007D320((unsigned int *)&v21, a2, a3);
    v13 = v8;
    *(float *)&dword_140404A6C[456807038] = *(float *)&v11 + 0.0625;
    v21 = *(float *)&v8 + a4;
    *(float *)&dword_140404A6C[456807037] = *(float *)&v12 + 0.0625;
    sub_14007D320((unsigned int *)&v21, v14, v15);
    v22 = *(float *)&v9;
    *(float *)&dword_140404A6C[456807037] = *(float *)&v12 + 0.0625;
    dword_140404A6C[456807038] = v11;
    sub_14007D320((unsigned int *)&v21, v16, v17);
    v21 = *(float *)&v8;
    dword_140404A6C[456807037] = v12;
    dword_140404A6C[456807038] = v11;
    sub_14007D320((unsigned int *)&v21, v18, v19);
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      *(float *)&v8 = *(float *)&v8 - a4;
      *(float *)&v10 = *(float *)&v9 + a4;
      v9 = v10;
    }
    else
    {
      *(float *)&v13 = *(float *)&v8 + a4;
      v8 = v13;
    }
    ++v6;
  }
  while ( v6 < 4 );
  sub_14006E0D0(v20, a2, a3);
}
#undef v21
#undef v22

// 14018788A: variable 'v4' is possibly undefined
// 1401878A8: variable 'v5' is possibly undefined
// 14018794B: variable 'a2' is possibly undefined
// 14018794B: variable 'a3' is possibly undefined
// 14018797E: variable 'v14' is possibly undefined
// 14018797E: variable 'v15' is possibly undefined
// 1401879A0: variable 'v16' is possibly undefined
// 1401879A0: variable 'v17' is possibly undefined
// 1401879C3: variable 'v18' is possibly undefined
// 1401879C3: variable 'v19' is possibly undefined
// 140187A2E: variable 'v20' is possibly undefined
// 140279700: using guessed type __int128 xmmword_140279700;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299460: using guessed type unsigned int;
// 1AD299464: using guessed type unsigned int;

//----- (0000000140187A40) ----------------------------------------------------
void            sub_140187A40(_BYTE *a1, __int64 a2, float a3, float a4, float a5)
{
  float v5 = a3; // xmm2_4: x arrives in xmm2 (0x140187A89 movaps xmm15, xmm2); Hex-Rays had lost it
  float v7; // xmm13_4
  _BYTE *v8; // rbx
  float v9; // xmm12_4
  int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // xmm9_4
  unsigned int v13; // xmm10_4
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187A40[16];
#define v20 (*(float (*))(void *)(sr_frame_140187A40 + 0)) /* [rsp+D0h] */
#define v21 (*(float (*))(void *)(sr_frame_140187A40 + 4)) /* [rsp+D4h] */

  v7 = 0.0;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  if ( *a1 )
  {
    v8 = a1;
    v9 = a5;
    do
    {
      if ( v8 - a1 >= 1000 )
        break;
      v10 = 39;
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279700;
      v11 = (unsigned __int8)*v8;
      if ( (unsigned __int8)(v11 - 65) <= 0x19u )
        v10 = v11 - 52;
      *(float *)&v12 = (float)(v10 >> 4) * 0.0625;
      v20 = v7 + v5;
      *(float *)&v13 = (float)(v10 & 0xF) * 0.0625;
      v21 = a4 + v9;
      dword_140404A6C[456807037] = v13;
      *(float *)&dword_140404A6C[456807038] = *(float *)&v12 + 0.0625;
      sub_14007D320((unsigned int *)&v20, v11, a3);
      *(float *)&dword_140404A6C[456807038] = *(float *)&v12 + 0.0625;
      v20 = (float)(v7 + v5) + v9;
      *(float *)&dword_140404A6C[456807037] = *(float *)&v13 + 0.0625;
      sub_14007D320((unsigned int *)&v20, v14, v15);
      v21 = a4;
      *(float *)&dword_140404A6C[456807037] = *(float *)&v13 + 0.0625;
      dword_140404A6C[456807038] = v12;
      sub_14007D320((unsigned int *)&v20, v16, v17);
      v20 = v7 + v5;
      dword_140404A6C[456807037] = v13;
      dword_140404A6C[456807038] = v12;
      sub_14007D320((unsigned int *)&v20, v18, v19);
      ++v8;
      v7 = v7 + v9;
    }
    while ( *v8 );
  }
  sub_14006E0D0((__int64)a1, a2, a3);
}
#undef v20
#undef v21

// 140187B3F: variable 'v5' is possibly undefined
// 140187B6D: variable 'a3' is possibly undefined
// 140187BA5: variable 'v14' is possibly undefined
// 140187BA5: variable 'v15' is possibly undefined
// 140187BCD: variable 'v16' is possibly undefined
// 140187BCD: variable 'v17' is possibly undefined
// 140187BF6: variable 'v18' is possibly undefined
// 140187BF6: variable 'v19' is possibly undefined
// 140187C62: variable 'a1' is possibly undefined
// 140187C62: variable 'a2' is possibly undefined
// 140279700: using guessed type __int128 xmmword_140279700;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299460: using guessed type unsigned int;
// 1AD299464: using guessed type unsigned int;

//----- (0000000140187C70) ----------------------------------------------------
void            sub_140187C70(__int64 a1, __int64 a2, float a3, float a4, float a5)
{
  float v5 = a3; // xmm2_4: x arrives in xmm2 (0x140187CBB movaps xmm11, xmm2); Hex-Rays had lost it
  __int64 v6; // rbx
  float v7; // xmm10_4
  __int64 v8; // rsi
  _BYTE *v9; // rdi
  float v10; // xmm8_4
  unsigned __int64 v11; // rax
  int v12; // xmm0_4
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // xmm1_4
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // xmm0_4
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // xmm1_4
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // xmm1_4
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187C70[16];
#define v39 (*(float (*))(void *)(sr_frame_140187C70 + 0)) /* [rsp+B0h] */
#define v40 (*(float (*))(void *)(sr_frame_140187C70 + 4)) /* [rsp+B4h] */

  dword_140404A6C[456217205] = 1;
  v6 = a1;
  dword_140404A6C[456217207] = 0;
  v7 = 0.0;
  dword_140404A6C[456217208] = 9;
  if ( *(_BYTE *)a1 )
  {
    v8 = a2 - a1;
    v9 = (_BYTE *)a1;
    v10 = a5;
    do
    {
      if ( (__int64)&v9[-v6] >= 1000 )
        break;
      v11 = (unsigned __int64)(unsigned __int8)v9[v8] >> 4;
      v40 = a4;
      *(_QWORD *)&dword_140404A6C[456807036] = 1065353216;
      dword_140404A6C[456807038] = 0;
      v12 = dword_1402B2550[3 * v11];
      v11 *= 3LL;
      dword_140404A6C[456807033] = v12;
      dword_140404A6C[456807034] = dword_1402B2554[v11];
      dword_140404A6C[456807035] = dword_1402B2558[v11];
      v39 = v7 + v5;
      sub_14007D320((unsigned int *)&v39, a2, a3);
      v13 = (unsigned __int8)*v9;
      *(_QWORD *)&dword_140404A6C[456807037] = 0;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v13])
          + (float)(v7 + v5);
      sub_14007D320((unsigned int *)&v39, v14, v15);
      v16 = (unsigned __int8)*v9;
      *(_QWORD *)&dword_140404A6C[456807037] = 0;
      v40 = a4 + v10;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v16])
          + (float)(v7 + v5);
      sub_14007D320((unsigned int *)&v39, v17, v18);
      v39 = v7 + v5;
      *(_QWORD *)&dword_140404A6C[456807037] = 0;
      sub_14007D320((unsigned int *)&v39, v19, v20);
      v21 = v9[v8] & 0xF;
      dword_140404A6C[456807036] = 1065353216;
      v40 = a4;
      dword_140404A6C[456807033] = dword_1402B2550[3 * v21];
      dword_140404A6C[456807034] = dword_1402B2554[3 * v21];
      dword_140404A6C[456807035] = dword_1402B2558[3 * v21];
      v22 = 8 * ((unsigned __int8)*v9 + 449LL * (int)dword_140404A6C[438291413]);
      v23 = dword_140404A6C[v22 + 72777350];
      dword_140404A6C[456807037] = dword_140404A6C[v22 + 72777349];
      dword_140404A6C[456807038] = v23;
      sub_14007D320((unsigned int *)&v39, v24, v25);
      v26 = (unsigned __int8)*v9;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v26])
          + (float)(v7 + v5);
      v27 = 8 * (v26 + 449LL * (int)dword_140404A6C[438291413]);
      v28 = dword_140404A6C[v27 + 72777351];
      dword_140404A6C[456807038] = dword_140404A6C[v27 + 72777352];
      dword_140404A6C[456807037] = v28;
      sub_14007D320((unsigned int *)&v39, v26, v29);
      v30 = (unsigned __int8)*v9;
      v40 = a4 + v10;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v30])
          + (float)(v7 + v5);
      v31 = 8 * (v30 + 449LL * (int)dword_140404A6C[438291413]);
      v32 = dword_140404A6C[v31 + 72777354];
      dword_140404A6C[456807037] = dword_140404A6C[v31 + 72777353];
      dword_140404A6C[456807038] = v32;
      sub_14007D320((unsigned int *)&v39, v30, v33);
      v39 = v7 + v5;
      v34 = 8 * ((unsigned __int8)*v9 + 449LL * (int)dword_140404A6C[438291413]);
      v35 = dword_140404A6C[v34 + 72777356];
      dword_140404A6C[456807037] = dword_140404A6C[v34 + 72777355];
      dword_140404A6C[456807038] = v35;
      sub_14007D320((unsigned int *)&v39, v36, v37);
      v38 = (unsigned __int8)*v9++;
      a1 = v38 + 3592LL * (int)dword_140404A6C[438291413];
      v7 = v7 + (float)(v10 * *(float *)&dword_140404A6C[a1 + 72777093]);
    }
    while ( *v9 );
  }
  sub_14006E0D0(a1, a2, a3);
}
#undef v39
#undef v40

// 140187DA5: variable 'v5' is possibly undefined
// 140187DAE: variable 'a2' is possibly undefined
// 140187DAE: variable 'a3' is possibly undefined
// 140187DF4: variable 'v14' is possibly undefined
// 140187DF4: variable 'v15' is possibly undefined
// 140187E4C: variable 'v17' is possibly undefined
// 140187E4C: variable 'v18' is possibly undefined
// 140187E6D: variable 'v19' is possibly undefined
// 140187E6D: variable 'v20' is possibly undefined
// 140187F01: variable 'v24' is possibly undefined
// 140187F01: variable 'v25' is possibly undefined
// 140187F67: variable 'v29' is possibly undefined
// 140187FD6: variable 'v33' is possibly undefined
// 140188021: variable 'v36' is possibly undefined
// 140188021: variable 'v37' is possibly undefined
// 1402B2550: using guessed type int dword_1402B2550[];
// 1402B2554: using guessed type int dword_1402B2554[];
// 1402B2558: using guessed type int dword_1402B2558[6];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;
// 1AD299460: using guessed type unsigned int;
// 1AD299464: using guessed type unsigned int;

//----- (00000001401880C0) ----------------------------------------------------
__m128i *           sub_1401880C0(     __m128i *a1, unsigned int a2)
{
  __m128i *result; // rax

  if ( a2 <= 0x400 )
  {
    dword_140404A6C[278384730] = a2;
    result = sub_1401FC920((__m128i *)&dword_140404A6C[278384731], a1, a2);
    dword_140404A6C[278384987] = 1;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1829F8BD4: using guessed type unsigned int;
// 1829F8FD8: using guessed type unsigned int;

//----- (0000000140188120) ----------------------------------------------------
__int64 sub_140188120()
{
  unsigned int *v0; // rsi
  int v1; // ecx
  signed int v2; // edi
  float *v3; // rbx
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  float v16; // xmm13_4
  float *v17; // rcx
  float v18; // xmm11_4
  float v19; // xmm12_4
  int v20; // eax
  __int64 v21; // rdx
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float *v25; // rcx
  float v26; // xmm0_4
  float v27; // xmm2_4
  int v28; // eax
  __int64 v29; // rdx
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float *v33; // rcx
  float v34; // xmm0_4
  float v35; // xmm2_4
  int v36; // eax
  __int64 v37; // rdx
  float v38; // xmm2_4
  float v39; // xmm1_4
  float *v40; // rcx
  float v41; // xmm0_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  int v44; // eax
  __int64 v45; // rdx
  unsigned int v46; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140188120[64];
#define v48 (*(__int64 (*))(void *)(sr_frame_140188120 + 0)) /* [rsp+0h] */
#define v49 (*(float (*))(void *)(sr_frame_140188120 + 32)) /* [rsp+20h] */
#define v50 (*(float (*))(void *)(sr_frame_140188120 + 36)) /* [rsp+24h] */
#define v51 (*(float (*))(void *)(sr_frame_140188120 + 40)) /* [rsp+28h] */
#define v52 (*(__int64 (*))(void *)(sr_frame_140188120 + 48)) /* [rsp+30h] */

  v0 = &dword_140404A6C[129720373];
  v1 = dword_140404A6C[431138493];
  do
  {
    if ( *(v0 - 3664) )
    {
      v2 = 0;
      if ( (int)*v0 > 0 )
      {
        v3 = (float *)(v0 + 36);
        do
        {
          if ( *(v3 - 2) > 0.03125 )
          {
            v4 = *(v3 - 16) - *(v3 - 1);
            v5 = *(v3 - 15) - *v3;
            v6 = *(v3 - 14) - v3[1];
            v7 = fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6));
            if ( v7 == 0.0 )
            {
              v8 = 0.0;
              v9 = 0.0;
              v10 = 0.0;
            }
            else
            {
              v8 = (float)(1.0 / v7) * v4;
              v9 = (float)(1.0 / v7) * v5;
              v10 = (float)(1.0 / v7) * v6;
            }
            v11 = v10 * -0.0625;
            v12 = v9 * 0.0625;
            v13 = v8 * 0.0625;
            v14 = *(v3 - 16) - v11;
            v15 = *(v3 - 15) - v12;
            v16 = *(v3 - 14) - v13;
            v17 = (float *)&dword_140404A6C[17 * v1 + 430859966];
            *v17 = v14;
            v18 = v14 - *(float *)&dword_1402F6188;
            v17[1] = v15;
            v19 = v15 - *(float *)&dword_1402F618C;
            v17[2] = v16;
            v49 = v18;
            v50 = v19;
            v51 = v16 - *(float *)&dword_1402F6190;
            v20 = sub_1400DC050(v17, &v49, 0);
            v21 = (int)dword_140404A6C[431138493];
            if ( v20 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859967] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v22 = v11 + *(v3 - 16);
            v23 = v12 + *(v3 - 15);
            *(float *)&dword_140404A6C[17 * v21 + 430859969] = *(v3 - 2) * 8.0;
            v24 = v13 + *(v3 - 14);
            v25 = (float *)&dword_140404A6C[17 * v21 + 430859970];
            v25[2] = v24;
            v26 = v24 - *(float *)&dword_1402F6190;
            *v25 = v22;
            v27 = v22 - *(float *)&dword_1402F6188;
            v25[1] = v23;
            v51 = v26;
            v49 = v27;
            v50 = v23 - *(float *)&dword_1402F618C;
            v28 = sub_1400DC050(v25, &v49, 0);
            v29 = (int)dword_140404A6C[431138493];
            if ( v28 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859971] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v30 = v11 + *(v3 - 1);
            v31 = v12 + *v3;
            *(float *)&dword_140404A6C[17 * v29 + 430859973] = *(v3 - 2) * 8.0;
            v32 = v13 + v3[1];
            v33 = (float *)&dword_140404A6C[17 * v29 + 430859974];
            v33[2] = v32;
            v34 = v32 - *(float *)&dword_1402F6190;
            *v33 = v30;
            v35 = v30 - *(float *)&dword_1402F6188;
            v33[1] = v31;
            v51 = v34;
            v49 = v35;
            v50 = v31 - *(float *)&dword_1402F618C;
            v36 = sub_1400DC050(v33, &v49, 0);
            v37 = (int)dword_140404A6C[431138493];
            if ( v36 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859975] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v38 = *(v3 - 1) - v11;
            v39 = *v3 - v12;
            *(float *)&dword_140404A6C[17 * v37 + 430859977] = v3[2] * 8.0;
            v40 = (float *)&dword_140404A6C[17 * v37 + 430859978];
            v41 = v3[1] - v13;
            *v40 = v38;
            v42 = v38 - *(float *)&dword_1402F6188;
            v40[2] = v41;
            v43 = v41 - *(float *)&dword_1402F6190;
            v40[1] = v39;
            v49 = v42;
            v51 = v43;
            v50 = v39 - *(float *)&dword_1402F618C;
            v44 = sub_1400DC050(v40, &v49, 0);
            v45 = (int)dword_140404A6C[431138493];
            if ( v44 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859979] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v46 = dword_140404A6C[431138494];
            *(float *)&dword_140404A6C[17 * v45 + 430859981] = v3[2] * 8.0;
            v1 = ((_WORD)v45 + 1) & 0x3FFF;
            dword_140404A6C[431138493] = v1;
            if ( v46 == v1 )
              dword_140404A6C[431138494] = ((_WORD)v46 + 1) & 0x3FFF;
          }
          ++v2;
          *(v3 - 1) = *(v3 - 16);
          *v3 = *(v3 - 15);
          v3[1] = *(v3 - 14);
          v3[2] = *(v3 - 2);
          v3 += 43;
        }
        while ( v2 < (int)*v0 );
      }
    }
    v0 += 5210;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[132387893] );
  return 0; /* the function has no caller */
}
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52

// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A70AE560: using guessed type unsigned int;
// 1A70AE564: using guessed type unsigned int;

//----- (00000001401885C0) ----------------------------------------------------
__int64            sub_1401885C0(int *a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v6; // rdi
  signed int v7; // r10d
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v3 = a2;
  result = a3;
  v6 = a3 + 15432LL * a2;
  v7 = dword_140404A6C[v6 + 358300580];
  if ( v7 < (int)dword_140404A6C[v6 + 358300584] )
  {
    v8 = (int)dword_140404A6C[v6 + 358300580];
    do
    {
      v9 = *a1;
      if ( (int)v9 < 1024 )
      {
        v10 = 6 * v9;
        v11 = 3 * (5144 * v3 + (int)dword_140404A6C[15432 * v3 + 358300588 + 3 * v8]);
        a1[2 * v10 + 1] = dword_140404A6C[15432 * v3
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * v3 + 358300588 + 3 * v8]];
        a1[2 * v10 + 2] = dword_140404A6C[v11 + 358297508];
        a1[2 * v10 + 3] = dword_140404A6C[v11 + 358297509];
        v12 = 3 * (5144 * v3 + (int)dword_140404A6C[15432 * v3 + 358300589 + 3 * v8]);
        v13 = 6LL * *a1;
        a1[2 * v13 + 4] = dword_140404A6C[15432 * v3
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * v3 + 358300589 + 3 * v8]];
        a1[2 * v13 + 5] = dword_140404A6C[v12 + 358297508];
        a1[2 * v13 + 6] = dword_140404A6C[v12 + 358297509];
        v14 = 3 * (5144 * v3 + (int)dword_140404A6C[15432 * v3 + 358300590 + 3 * v8]);
        v15 = 6LL * *a1;
        a1[2 * v15 + 7] = dword_140404A6C[15432 * v3
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * v3 + 358300590 + 3 * v8]];
        a1[2 * v15 + 8] = dword_140404A6C[v14 + 358297508];
        a1[2 * v15 + 9] = dword_140404A6C[v14 + 358297509];
        v16 = 6LL * *a1;
        a1[2 * v16 + 10] = dword_140404A6C[15432 * v3 + 358303660 + 3 * v8];
        a1[2 * v16 + 11] = dword_140404A6C[15432 * v3 + 358303661 + 3 * v8];
        result = dword_140404A6C[15432 * v3 + 358303662 + 3 * v8];
        a1[2 * v16 + 12] = result;
        ++*a1;
      }
      ++v7;
      ++v8;
    }
    while ( v7 < (int)dword_140404A6C[v6 + 358300584] );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140188720) ----------------------------------------------------
__int64            sub_140188720(int *a1, float *a2, float *a3, int a4, int a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  signed int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx

  result = a5;
  v8 = a5 + 15432LL * a4;
  v9 = dword_140404A6C[v8 + 358300580];
  if ( v9 < (int)dword_140404A6C[v8 + 358300584] )
  {
    v10 = (int)dword_140404A6C[v8 + 358300580];
    do
    {
      v11 = *a1;
      if ( (int)v11 < 1024 )
      {
        result = v10 + 2572LL * a4;
        if ( *(float *)&dword_140404A6C[6 * result + 358306732] <= *a3
          && *(float *)&dword_140404A6C[6 * result + 358306733] <= a3[1]
          && *(float *)&dword_140404A6C[6 * result + 358306734] <= a3[2]
          && *(float *)&dword_140404A6C[6 * result + 358306735] >= *a2
          && *(float *)&dword_140404A6C[6 * result + 358306736] >= a2[1]
          && *(float *)&dword_140404A6C[6 * result + 358306737] >= a2[2] )
        {
          v12 = 6 * v11;
          v13 = 3 * (5144LL * a4 + (int)dword_140404A6C[15432 * a4 + 358300588 + 3 * v10]);
          a1[2 * v12 + 1] = dword_140404A6C[15432 * a4
                                          + 358297507
                                          + 3 * dword_140404A6C[15432 * a4 + 358300588 + 3 * v10]];
          a1[2 * v12 + 2] = dword_140404A6C[v13 + 358297508];
          a1[2 * v12 + 3] = dword_140404A6C[v13 + 358297509];
          v14 = 3 * (5144LL * a4 + (int)dword_140404A6C[15432 * a4 + 358300589 + 3 * v10]);
          v15 = 6LL * *a1;
          a1[2 * v15 + 4] = dword_140404A6C[15432 * a4
                                          + 358297507
                                          + 3 * dword_140404A6C[15432 * a4 + 358300589 + 3 * v10]];
          a1[2 * v15 + 5] = dword_140404A6C[v14 + 358297508];
          a1[2 * v15 + 6] = dword_140404A6C[v14 + 358297509];
          v16 = 3 * (5144LL * a4 + (int)dword_140404A6C[15432 * a4 + 358300590 + 3 * v10]);
          v17 = 6LL * *a1;
          a1[2 * v17 + 7] = dword_140404A6C[15432 * a4
                                          + 358297507
                                          + 3 * dword_140404A6C[15432 * a4 + 358300590 + 3 * v10]];
          a1[2 * v17 + 8] = dword_140404A6C[v16 + 358297508];
          result = dword_140404A6C[v16 + 358297509];
          a1[2 * v17 + 9] = result;
          ++*a1;
        }
      }
      ++v9;
      ++v10;
    }
    while ( v9 < (int)dword_140404A6C[v8 + 358300584] );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140188900) ----------------------------------------------------
__int64            sub_140188900(int *a1, float *a2, float *a3, int a4)
{
  float *v4; // rbp
  float v5; // xmm0_4
  int *v6; // r13
  int v7; // ebx
  float v9; // xmm1_4
  char v10; // r15
  int v11; // r12d
  int v12; // edx
  float v13; // xmm0_4
  int v14; // ecx
  unsigned __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // r13
  unsigned __int64 v19; // r11
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140188900[352];
#define v28 (*(__int64 (*))(void *)(sr_frame_140188900 + 0)) /* [rsp+0h] */
#define v29 (*(int (*))(void *)(sr_frame_140188900 + 48)) /* [rsp+30h] */
#define v30 (*(int (*))(void *)(sr_frame_140188900 + 52)) /* [rsp+34h] */
#define v31 (*(float * (*))(void *)(sr_frame_140188900 + 56)) /* [rsp+38h] */
#define v32 (*(int * (*))(void *)(sr_frame_140188900 + 64)) /* [rsp+40h] */
#define v33 (*(_DWORD (*)[64])(void *)(sr_frame_140188900 + 80)) /* [rsp+50h] */
#define v34 (*(__int64 (*))(void *)(sr_frame_140188900 + 336)) /* [rsp+150h] */

  v4 = a2;
  v5 = *a2;
  v6 = a1;
  v7 = 0;
  v9 = a2[2];
  v10 = a4;
  v31 = a2;
  v11 = (int)(float)(v5 * 0.015625);
  v32 = a1;
  v30 = a4;
  v12 = (int)(float)(*a3 * 0.015625);
  v13 = a3[2] * 0.015625;
  v29 = v12;
  v14 = (int)(float)(v9 * 0.015625);
  if ( v14 <= (int)v13 )
  {
    v15 = v14;
    v16 = 0;
    v17 = (__int64)v14 << 6;
    v18 = (unsigned int)((int)v13 - v14 + 1);
    do
    {
      if ( v15 <= 0x3F && v11 <= v12 )
      {
        v19 = v11;
        v20 = (unsigned int)(v12 - v11 + 1);
        do
        {
          if ( v19 <= 0x3F )
          {
            v21 = 0;
            v22 = (int)dword_140404A6C[9 * v17 + 254352099 + 9 * v19];
            if ( v22 > 0 )
            {
              do
              {
                if ( v16 < 64 )
                {
                  ++v7;
                  v33[v16++] = dword_140404A6C[8 * v17 + 254352100 + 8 * v19 + v17 + v19 + v21];
                }
                ++v21;
              }
              while ( v21 < v22 );
            }
          }
          ++v19;
          --v20;
        }
        while ( v20 );
        v12 = v29;
      }
      ++v15;
      v17 += 64;
      --v18;
    }
    while ( v18 );
    v4 = v31;
    v10 = v30;
    v6 = v32;
  }
  v23 = v7;
  if ( v7 > 0 )
  {
    v24 = 0;
    do
    {
      v25 = (int)v33[v24];
      v26 = 15432 * v25;
      if ( *(float *)&dword_140404A6C[15432 * v25 + 358312926] <= *a3
        && *(float *)&dword_140404A6C[v26 + 358312927] <= a3[1]
        && *(float *)&dword_140404A6C[v26 + 358312928] <= a3[2]
        && *(float *)&dword_140404A6C[v26 + 358312929] >= *v4
        && *(float *)&dword_140404A6C[v26 + 358312930] >= v4[1]
        && *(float *)&dword_140404A6C[v26 + 358312931] >= v4[2] )
      {
        if ( (v10 & 1) != 0 )
          sub_140188720(v6, v4, a3, v25, 0);
        if ( (v10 & 2) != 0 )
          sub_140188720(v6, v4, a3, v25, 1);
        if ( (v10 & 4) != 0 )
          sub_140188720(v6, v4, a3, v25, 2);
      }
      ++v24;
    }
    while ( v24 < v23 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140188B80) ----------------------------------------------------
__int64            sub_140188B80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r12
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  signed int v6; // ebp
  signed int v7; // r15d
  unsigned int v8; // xmm9_4
  __int64 v9; // r14
  unsigned int v10; // xmm10_4
  unsigned int *v11; // rsi
  int v12; // edx
  __int64 v13; // rdi
  unsigned int *v14; // r10
  unsigned int v15; // xmm15_4
  unsigned int v16; // xmm14_4
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // xmm12_4
  unsigned int v20; // xmm13_4
  unsigned int v21; // xmm11_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm4_4
  float v26; // xmm8_4
  float v27; // xmm7_4
  float v28; // xmm5_4
  float v29; // xmm3_4
  unsigned int v30; // xmm8_4
  unsigned int v31; // xmm5_4
  unsigned int v32; // xmm7_4
  unsigned int v33; // xmm0_4
  unsigned int v34; // xmm1_4
  unsigned int v35; // xmm2_4
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // xmm0_4
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // eax
  unsigned int v42; // xmm0_4
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r8
  unsigned int v49; // r9d
  signed int v50; // r15d
  signed int v51; // ebp
  unsigned int v52; // xmm10_4
  unsigned int *v53; // r14
  unsigned int v54; // xmm11_4
  __int64 v55; // rsi
  __int64 v56; // r11
  unsigned int *v57; // r10
  unsigned int v58; // xmm14_4
  unsigned int v59; // xmm15_4
  unsigned int v60; // xmm13_4
  __int64 v61; // rax
  float v62; // xmm1_4
  float v63; // xmm8_4
  float v64; // xmm4_4
  float v65; // xmm0_4
  float v66; // xmm2_4
  float v67; // xmm5_4
  float v68; // xmm3_4
  float v69; // xmm1_4
  float v70; // xmm8_4
  float v71; // xmm9_4
  float v72; // xmm7_4
  float v73; // xmm0_4
  unsigned int v74; // xmm2_4
  unsigned int v75; // xmm3_4
  unsigned int v76; // xmm1_4
  unsigned int v77; // xmm4_4
  unsigned int v78; // xmm5_4
  __int64 v79; // rcx
  unsigned int v80; // xmm4_4
  unsigned int v81; // xmm5_4
  __int64 v82; // rcx
  unsigned int v83; // xmm0_4
  __int64 v84; // rcx
  __int64 v85; // rcx
  unsigned int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rcx
  unsigned int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r8
  signed int v93; // esi
  signed int v94; // ebp
  unsigned int v95; // xmm9_4
  __int64 v96; // rdi
  unsigned int v97; // xmm10_4
  int v98; // edx
  __int64 v99; // r11
  unsigned int *v100; // r9
  unsigned int v101; // xmm15_4
  unsigned int v102; // xmm14_4
  __int64 v103; // rdx
  __int64 v104; // rax
  unsigned int v105; // xmm12_4
  unsigned int v106; // xmm13_4
  unsigned int v107; // xmm11_4
  float v108; // xmm5_4
  float v109; // xmm3_4
  float v110; // xmm1_4
  float v111; // xmm4_4
  float v112; // xmm8_4
  float v113; // xmm7_4
  float v114; // xmm5_4
  float v115; // xmm3_4
  unsigned int v116; // xmm1_4
  unsigned int v117; // xmm2_4
  unsigned int v118; // xmm0_4
  unsigned int v119; // xmm3_4
  unsigned int v120; // xmm4_4
  unsigned int v121; // xmm5_4
  __int64 v122; // rcx
  __int64 v123; // rcx
  unsigned int v124; // xmm3_4
  __int64 v125; // rcx
  __int64 v126; // rcx
  unsigned int v127; // eax
  unsigned int v128; // xmm3_4
  __int64 v129; // rcx
  __int64 v130; // rcx
  unsigned int v131; // eax
  __int64 v132; // rcx
  __int64 v133; // r8

  v3 = &dword_140404A6C[358300582];
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = dword_140404A6C[421506973];
  *(_QWORD *)&dword_140404A6C[349908877] = 8;
  if ( (int)dword_140404A6C[421506973] > 0 )
  {
    v8 = dword_1402B364C;
    v9 = 0;
    v10 = dword_1402B3648;
    v11 = &dword_140404A6C[358300582];
    do
    {
      if ( !*(v11 - 3081) )
      {
        a3 = (int)*v11;
        v12 = v11[4];
        if ( (int)a3 < v12 )
        {
          v13 = (unsigned int)(v12 - a3);
          v14 = &dword_140404A6C[3 * v9 + 358300589 + 3 * a3];
          do
          {
            a3 = 3 * (v9 + (int)v14[1]);
            v15 = dword_140404A6C[3 * v9 + 358297508 + 3 * (int)v14[1]];
            v16 = dword_140404A6C[3 * v9 + 358297507 + 3 * (int)v14[1]];
            v17 = 3 * (v9 + (int)*v14);
            v18 = v9 + (int)*(v14 - 1);
            v19 = dword_140404A6C[3 * v18 + 358297508];
            v20 = dword_140404A6C[3 * v18 + 358297509];
            v21 = dword_140404A6C[3 * v18 + 358297507];
            v22 = *(float *)&dword_140404A6C[3 * v9 + 358297509 + 3 * (int)v14[1]] - *(float *)&v20;
            v23 = *(float *)&dword_140404A6C[3 * v9 + 358297508 + 3 * (int)*v14] - *(float *)&v19;
            v24 = *(float *)&dword_140404A6C[3 * v9 + 358297509 + 3 * (int)*v14] - *(float *)&v20;
            v25 = *(float *)&dword_140404A6C[3 * v9 + 358297507 + 3 * (int)*v14] - *(float *)&v21;
            v26 = (float)((float)(*(float *)&v15 - *(float *)&v19) * v24) - (float)(v22 * v23);
            v27 = (float)((float)(*(float *)&v16 - *(float *)&v21) * v23)
                - (float)((float)(*(float *)&v15 - *(float *)&v19) * v25);
            v28 = (float)(v22 * v25) - (float)((float)(*(float *)&v16 - *(float *)&v21) * v24);
            v29 = fsqrt((float)((float)(v28 * v28) + (float)(v26 * v26)) + (float)(v27 * v27));
            if ( v29 == 0.0 )
            {
              *(float *)&v30 = 0.0;
              *(float *)&v31 = 0.0;
              *(float *)&v32 = 0.0;
            }
            else
            {
              *(float *)&v30 = v26 * (float)(1.0 / v29);
              *(float *)&v31 = v28 * (float)(1.0 / v29);
              *(float *)&v32 = v27 * (float)(1.0 / v29);
            }
            v33 = dword_1402B3638;
            v34 = dword_140404A6C[3 * v9 + 358297508 + 3 * (int)*v14];
            v35 = dword_140404A6C[3 * v9 + 358297509 + 3 * (int)*v14];
            v36 = (int)(v5 * dword_140404A6C[349908877]);
            dword_140404A6C[v36 + 349908879] = v21;
            dword_140404A6C[v36 + 349908880] = v19;
            dword_140404A6C[v36 + 349908881] = v20;
            v37 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v37 + 349908882] = v33;
            dword_140404A6C[v37 + 349908883] = dword_1402B363C;
            v38 = dword_140404A6C[v17 + 358297507];
            v39 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v39 + 349908884] = v30;
            dword_140404A6C[v39 + 349908885] = v31;
            dword_140404A6C[v39 + 349908886] = v32;
            v40 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v40 + 349908879] = v38;
            dword_140404A6C[v40 + 349908880] = v34;
            dword_140404A6C[v40 + 349908881] = v35;
            v41 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            if ( (v6 & 1) != 0 )
            {
              dword_140404A6C[v41 + 349908882] = dword_1402B3650;
              dword_140404A6C[v41 + 349908883] = dword_1402B3654;
            }
            else
            {
              dword_140404A6C[v41 + 349908882] = v10;
              dword_140404A6C[v41 + 349908883] = v8;
            }
            v42 = dword_140404A6C[a3 + 358297509];
            v43 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v43 + 349908884] = v30;
            dword_140404A6C[v43 + 349908885] = v31;
            dword_140404A6C[v43 + 349908886] = v32;
            v44 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v44 + 349908879] = v16;
            dword_140404A6C[v44 + 349908880] = v15;
            dword_140404A6C[v44 + 349908881] = v42;
            v45 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            if ( (v6 & 1) != 0 )
            {
              dword_140404A6C[v45 + 349908882] = v10;
              dword_140404A6C[v45 + 349908883] = v8;
            }
            else
            {
              dword_140404A6C[v45 + 349908882] = dword_1402B3640;
              dword_140404A6C[v45 + 349908883] = dword_1402B3644;
            }
            v14 += 3;
            v46 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v46 + 349908884] = v30;
            dword_140404A6C[v46 + 349908885] = v31;
            dword_140404A6C[v46 + 349908886] = v32;
            v5 = ++dword_140404A6C[349908878];
            --v13;
          }
          while ( v13 );
        }
      }
      ++v6;
      v11 += 15432;
      v9 += 5144;
    }
    while ( v6 < v7 );
  }
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790158] + 283793813], a3);
  unk_140404190(34962, 4 * dword_140404A6C[349908878] * dword_140404A6C[349908877], &dword_140404A6C[349908879], 35044);
  qword_140404170(34962, 0, v47);
  v49 = 0;
  v50 = dword_140404A6C[421506973];
  v51 = 0;
  *(_QWORD *)&dword_140404A6C[358297493] = *(_QWORD *)&dword_140404A6C[349908877];
  *(_QWORD *)&dword_140404A6C[349908877] = 8;
  if ( (int)dword_140404A6C[421506973] > 0 )
  {
    v52 = dword_1402B364C;
    v53 = &dword_140404A6C[358300584];
    v54 = dword_1402B3648;
    v55 = 0;
    do
    {
      v48 = (int)*(v53 - 4);
      if ( (int)v48 < (int)*v53 )
      {
        v56 = *v53 - (unsigned int)v48;
        v57 = &dword_140404A6C[3 * v55 + 358300589 + 3 * v48];
        do
        {
          v58 = dword_140404A6C[3 * v55 + 358297508 + 3 * (int)v57[1]];
          v59 = dword_140404A6C[3 * v55 + 358297509 + 3 * (int)v57[1]];
          v60 = dword_140404A6C[3 * v55 + 358297507 + 3 * (int)v57[1]];
          v48 = 3 * (v55 + (int)*v57);
          v61 = v55 + (int)*(v57 - 1);
          v62 = *(float *)&dword_140404A6C[3 * v61 + 358297508];
          v63 = *(float *)&dword_140404A6C[3 * v61 + 358297509];
          v64 = *(float *)&dword_140404A6C[3 * v55 + 358297508 + 3 * (int)*v57] - v62;
          v65 = *(float *)&dword_140404A6C[3 * v61 + 358297507];
          v66 = *(float *)&dword_140404A6C[3 * v55 + 358297509 + 3 * (int)*v57] - v63;
          v67 = *(float *)&dword_140404A6C[3 * v55 + 358297507 + 3 * (int)*v57] - v65;
          v68 = *(float *)&v58 - v62;
          v69 = *(float *)&v59 - v63;
          v70 = (float)(v68 * v66) - (float)(v64 * (float)(*(float *)&v59 - v63));
          v71 = (float)(v67 * v69) - (float)((float)(*(float *)&v60 - v65) * v66);
          v72 = (float)((float)(*(float *)&v60 - v65) * v64) - (float)(v68 * v67);
          v73 = fsqrt((float)((float)(v71 * v71) + (float)(v70 * v70)) + (float)(v72 * v72));
          if ( v73 == 0.0 )
          {
            *(float *)&v74 = 0.0;
            *(float *)&v75 = 0.0;
            *(float *)&v76 = 0.0;
          }
          else
          {
            *(float *)&v74 = (float)(1.0 / v73) * v70;
            *(float *)&v75 = (float)(1.0 / v73) * v71;
            *(float *)&v76 = (float)(1.0 / v73) * v72;
          }
          v77 = dword_140404A6C[3 * v61 + 358297508];
          v78 = dword_140404A6C[3 * v61 + 358297509];
          v79 = (int)(v49 * dword_140404A6C[349908877]);
          dword_140404A6C[v79 + 349908879] = dword_140404A6C[3 * v61 + 358297507];
          dword_140404A6C[v79 + 349908880] = v77;
          dword_140404A6C[v79 + 349908881] = v78;
          v80 = dword_140404A6C[v48 + 358297508];
          v81 = dword_140404A6C[v48 + 358297509];
          *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] = *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] + 0.125;
          v82 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v82 + 349908882] = dword_1402B3638;
          dword_140404A6C[v82 + 349908883] = dword_1402B363C;
          v83 = dword_140404A6C[v48 + 358297507];
          v84 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v84 + 349908884] = v74;
          dword_140404A6C[v84 + 349908885] = v75;
          dword_140404A6C[v84 + 349908886] = v76;
          v85 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v85 + 349908879] = v83;
          dword_140404A6C[v85 + 349908880] = v80;
          dword_140404A6C[v85 + 349908881] = v81;
          *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] = *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] + 0.125;
          v86 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          if ( (v51 & 1) != 0 )
          {
            dword_140404A6C[v86 + 349908882] = dword_1402B3650;
            dword_140404A6C[v86 + 349908883] = dword_1402B3654;
          }
          else
          {
            dword_140404A6C[v86 + 349908882] = v54;
            dword_140404A6C[v86 + 349908883] = v52;
          }
          v87 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v87 + 349908884] = v74;
          dword_140404A6C[v87 + 349908885] = v75;
          dword_140404A6C[v87 + 349908886] = v76;
          v88 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v88 + 349908879] = v60;
          dword_140404A6C[v88 + 349908880] = v58;
          dword_140404A6C[v88 + 349908881] = v59;
          *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] = *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] + 0.125;
          v89 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          if ( (v51 & 1) != 0 )
          {
            dword_140404A6C[v89 + 349908882] = v54;
            dword_140404A6C[v89 + 349908883] = v52;
          }
          else
          {
            dword_140404A6C[v89 + 349908882] = dword_1402B3640;
            dword_140404A6C[v89 + 349908883] = dword_1402B3644;
          }
          v57 += 3;
          v90 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v90 + 349908884] = v74;
          dword_140404A6C[v90 + 349908885] = v75;
          dword_140404A6C[v90 + 349908886] = v76;
          v49 = ++dword_140404A6C[349908878];
          --v56;
        }
        while ( v56 );
      }
      ++v51;
      v53 += 15432;
      v55 += 5144;
    }
    while ( v51 < v50 );
  }
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790159] + 283793813], v48);
  unk_140404190(34962, 4 * dword_140404A6C[349908878] * dword_140404A6C[349908877], &dword_140404A6C[349908879], 35044);
  qword_140404170(34962, 0, v91);
  v93 = 0;
  v94 = dword_140404A6C[421506973];
  *(_QWORD *)&dword_140404A6C[358297495] = *(_QWORD *)&dword_140404A6C[349908877];
  *(_QWORD *)&dword_140404A6C[349908877] = 8;
  if ( (int)dword_140404A6C[421506973] > 0 )
  {
    v95 = dword_1402B364C;
    v96 = 0;
    v97 = dword_1402B3648;
    do
    {
      if ( *(v3 - 3081) == 1 )
      {
        v92 = (int)*v3;
        v98 = v3[4];
        if ( (int)v92 < v98 )
        {
          v99 = (unsigned int)(v98 - v92);
          v100 = &dword_140404A6C[3 * v96 + 358300589 + 3 * v92];
          do
          {
            v92 = 3 * (v96 + (int)v100[1]);
            v101 = dword_140404A6C[3 * v96 + 358297508 + 3 * (int)v100[1]];
            v102 = dword_140404A6C[3 * v96 + 358297507 + 3 * (int)v100[1]];
            v103 = 3 * (v96 + (int)*v100);
            v104 = v96 + (int)*(v100 - 1);
            v105 = dword_140404A6C[3 * v104 + 358297508];
            v106 = dword_140404A6C[3 * v104 + 358297509];
            v107 = dword_140404A6C[3 * v104 + 358297507];
            v108 = *(float *)&dword_140404A6C[3 * v96 + 358297509 + 3 * (int)v100[1]] - *(float *)&v106;
            v109 = *(float *)&dword_140404A6C[3 * v96 + 358297508 + 3 * (int)*v100] - *(float *)&v105;
            v110 = *(float *)&dword_140404A6C[3 * v96 + 358297509 + 3 * (int)*v100] - *(float *)&v106;
            v111 = *(float *)&dword_140404A6C[3 * v96 + 358297507 + 3 * (int)*v100] - *(float *)&v107;
            v112 = (float)((float)(*(float *)&v101 - *(float *)&v105) * v110) - (float)(v108 * v109);
            v113 = (float)((float)(*(float *)&v102 - *(float *)&v107) * v109)
                 - (float)((float)(*(float *)&v101 - *(float *)&v105) * v111);
            v114 = (float)(v108 * v111) - (float)((float)(*(float *)&v102 - *(float *)&v107) * v110);
            v115 = fsqrt((float)((float)(v114 * v114) + (float)(v112 * v112)) + (float)(v113 * v113));
            if ( v115 == 0.0 )
            {
              *(float *)&v116 = 0.0;
              *(float *)&v117 = 0.0;
              *(float *)&v118 = 0.0;
            }
            else
            {
              *(float *)&v116 = (float)(1.0 / v115) * v112;
              *(float *)&v117 = (float)(1.0 / v115) * v114;
              *(float *)&v118 = (float)(1.0 / v115) * v113;
            }
            v119 = dword_1402B3638;
            v120 = dword_140404A6C[3 * v96 + 358297508 + 3 * (int)*v100];
            v121 = dword_140404A6C[3 * v96 + 358297509 + 3 * (int)*v100];
            v122 = (int)(v4 * dword_140404A6C[349908877]);
            dword_140404A6C[v122 + 349908879] = v107;
            dword_140404A6C[v122 + 349908880] = v105;
            dword_140404A6C[v122 + 349908881] = v106;
            v123 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v123 + 349908882] = v119;
            dword_140404A6C[v123 + 349908883] = dword_1402B363C;
            v124 = dword_140404A6C[v103 + 358297507];
            v125 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v125 + 349908884] = v116;
            dword_140404A6C[v125 + 349908885] = v117;
            dword_140404A6C[v125 + 349908886] = v118;
            v126 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v126 + 349908879] = v124;
            dword_140404A6C[v126 + 349908880] = v120;
            dword_140404A6C[v126 + 349908881] = v121;
            v127 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            if ( (v93 & 1) != 0 )
            {
              dword_140404A6C[v127 + 349908882] = dword_1402B3650;
              dword_140404A6C[v127 + 349908883] = dword_1402B3654;
            }
            else
            {
              dword_140404A6C[v127 + 349908882] = v97;
              dword_140404A6C[v127 + 349908883] = v95;
            }
            v128 = dword_140404A6C[v92 + 358297509];
            v129 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v129 + 349908884] = v116;
            dword_140404A6C[v129 + 349908885] = v117;
            dword_140404A6C[v129 + 349908886] = v118;
            v130 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v130 + 349908879] = v102;
            dword_140404A6C[v130 + 349908880] = v101;
            dword_140404A6C[v130 + 349908881] = v128;
            v131 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            if ( (v93 & 1) != 0 )
            {
              dword_140404A6C[v131 + 349908882] = v97;
              dword_140404A6C[v131 + 349908883] = v95;
            }
            else
            {
              dword_140404A6C[v131 + 349908882] = dword_1402B3640;
              dword_140404A6C[v131 + 349908883] = dword_1402B3644;
            }
            v100 += 3;
            v132 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v132 + 349908884] = v116;
            dword_140404A6C[v132 + 349908885] = v117;
            dword_140404A6C[v132 + 349908886] = v118;
            v4 = ++dword_140404A6C[349908878];
            --v99;
          }
          while ( v99 );
        }
      }
      ++v93;
      v3 += 15432;
      v96 += 5144;
    }
    while ( v93 < v94 );
  }
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790160] + 283793813], v92);
  unk_140404190(34962, 4 * dword_140404A6C[349908878] * dword_140404A6C[349908877], &dword_140404A6C[349908879], 35044);
  qword_140404170(34962, 0, v133);
  *(_QWORD *)&dword_140404A6C[358297497] = *(_QWORD *)&dword_140404A6C[349908877];
  return dword_140404A6C[349908877];
}

// 140189022: variable 'v47' is possibly undefined
// 1401894E6: variable 'v48' is possibly undefined
// 14018951D: variable 'v91' is possibly undefined
// 14018994C: variable 'v92' is possibly undefined
// 140189983: variable 'v133' is possibly undefined
// 1402B3638: using guessed type int dword_1402B3638;
// 1402B363C: using guessed type int dword_1402B363C;
// 1402B3640: using guessed type int dword_1402B3640;
// 1402B3644: using guessed type int dword_1402B3644;
// 1402B3648: using guessed type int dword_1402B3648;
// 1402B364C: using guessed type int dword_1402B364C;
// 1402B3650: using guessed type int dword_1402B3650;
// 1402B3654: using guessed type int dword_1402B3654;
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 193AD08A0: using guessed type unsigned int;
// 193AD08A4: using guessed type unsigned int;
// 195AD08C0: using guessed type unsigned int;
// 195AD08C8: using guessed type unsigned int;
// 195AD08D0: using guessed type unsigned int;
// 1A4BF08E0: using guessed type unsigned int;

//----- (00000001401899F0) ----------------------------------------------------
__int64            sub_1401899F0(int a1)
{
  __int64 v1; // r15
  __int64 v2; // rbp
  __int64 v3; // rax
  signed int v4; // r14d
  signed int v5; // edx
  __int64 v6; // rcx
  float *v7; // rax
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm2_4
  unsigned int v14; // xmm0_4
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm0_4
  __int64 v17; // rsi
  float *v18; // rdi
  unsigned int *v19; // r12
  unsigned int *v20; // r13
  int *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int64 result; // rax
  int v38; // ebp
  int v39; // ebx
  int v40; // esi
  int v41; // edi
  __int64 v42; // r11
  unsigned int v43; // edx
  __int64 v44; // r9
  __int64 v45; // r10

  v1 = a1;
  v2 = 15432LL * a1;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  dword_140404A6C[v2 + 358312926] = 1266679808;
  dword_140404A6C[v2 + 358312927] = 1266679808;
  dword_140404A6C[v2 + 358312928] = 1266679808;
  dword_140404A6C[v2 + 358312929] = -880803840;
  dword_140404A6C[v2 + 358312930] = -880803840;
  dword_140404A6C[v2 + 358312931] = -880803840;
  if ( (int)dword_140404A6C[v2 + 358297506] > 0 )
  {
    v6 = 15432LL * a1;
    v7 = (float *)&dword_140404A6C[v2 + 358297508];
    v8 = *(float *)&dword_140404A6C[15432 * v1 + 358312926];
    v9 = *(float *)&dword_140404A6C[15432 * v1 + 358312929];
    v10 = *(float *)&dword_140404A6C[15432 * v1 + 358312927];
    v11 = *(float *)&dword_140404A6C[15432 * v1 + 358312930];
    v12 = *(float *)&dword_140404A6C[15432 * v1 + 358312928];
    v13 = *(float *)&dword_140404A6C[15432 * v1 + 358312931];
    do
    {
      v14 = *((unsigned int *)v7 - 1);
      if ( v8 > *(float *)&v14 )
      {
        dword_140404A6C[v6 + 358312926] = v14;
        v8 = *(float *)&v14;
        v14 = *((unsigned int *)v7 - 1);
      }
      if ( v9 < *(float *)&v14 )
      {
        dword_140404A6C[v6 + 358312929] = v14;
        v9 = *(float *)&v14;
      }
      v15 = *(unsigned int *)v7;
      if ( v10 > *v7 )
      {
        dword_140404A6C[v6 + 358312927] = v15;
        v10 = *(float *)&v15;
        v15 = *(unsigned int *)v7;
      }
      if ( v11 < *(float *)&v15 )
      {
        dword_140404A6C[v6 + 358312930] = v15;
        v11 = *(float *)&v15;
      }
      v16 = *((unsigned int *)v7 + 1);
      if ( v12 > *(float *)&v16 )
      {
        dword_140404A6C[v6 + 358312928] = v16;
        v12 = *(float *)&v16;
        v16 = *((unsigned int *)v7 + 1);
      }
      if ( v13 < *(float *)&v16 )
      {
        dword_140404A6C[v6 + 358312931] = v16;
        v13 = *(float *)&v16;
      }
      ++v5;
      v7 += 3;
    }
    while ( v5 < (int)dword_140404A6C[v2 + 358297506] );
    v3 = v1;
  }
  if ( (int)dword_140404A6C[v2 + 358300579] > 0 )
  {
    v17 = 5144 * v3;
    v18 = (float *)&dword_140404A6C[v2 + 358306735];
    v19 = &dword_140404A6C[v2 + 358306734];
    v20 = &dword_140404A6C[15432 * v3 + 358300588];
    do
    {
      v21 = (int *)(v20 + 1);
      sub_14006EC40(
        (float *)&dword_140404A6C[358303660 + 3 * (v17 + v4)],
        (float *)&dword_140404A6C[358297507 + 3 * (v17 + (int)*v20)],
        (float *)&dword_140404A6C[358297507 + 3 * (v17 + (int)v20[1])],
        (float *)&dword_140404A6C[358297507 + 3 * (v17 + (int)v20[2])]);
      v22 = 2;
      v23 = 3 * (v17 + (int)*v20);
      *(v19 - 2) = dword_140404A6C[3 * v17 + 358297507 + 3 * (int)*v20];
      *(v19 - 1) = dword_140404A6C[v23 + 358297508];
      *v19 = dword_140404A6C[v23 + 358297509];
      v24 = (int)*v20;
      v19[1] = dword_140404A6C[3 * v17 + 358297507 + 3 * v24];
      v19[2] = dword_140404A6C[3 * v17 + 358297508 + 3 * v24];
      v19[3] = dword_140404A6C[3 * v17 + 358297509 + 3 * v24];
      v25 = *(v18 - 3);
      v26 = *v18;
      v27 = *(v18 - 2);
      v28 = v18[1];
      v29 = *(v18 - 1);
      v30 = v18[2];
      do
      {
        v31 = *(float *)&dword_140404A6C[3 * v17 + 358297507 + 3 * *v21];
        if ( v25 > v31 )
        {
          *(v18 - 3) = v31;
          v25 = v31;
        }
        v32 = *(float *)&dword_140404A6C[3 * v17 + 358297507 + 3 * *v21];
        if ( v26 < v32 )
        {
          *v18 = v32;
          v26 = v32;
        }
        v33 = *(float *)&dword_140404A6C[3 * v17 + 358297508 + 3 * *v21];
        if ( v27 > v33 )
        {
          *(v18 - 2) = v33;
          v27 = v33;
        }
        v34 = *(float *)&dword_140404A6C[3 * v17 + 358297508 + 3 * *v21];
        if ( v28 < v34 )
        {
          v18[1] = v34;
          v28 = v34;
        }
        v35 = *(float *)&dword_140404A6C[3 * v17 + 358297509 + 3 * *v21];
        if ( v29 > v35 )
        {
          *(v18 - 1) = v35;
          v29 = v35;
        }
        v36 = *(float *)&dword_140404A6C[3 * v17 + 358297509 + 3 * *v21];
        if ( v30 < v36 )
        {
          v18[2] = v36;
          v30 = v36;
        }
        ++v21;
        --v22;
      }
      while ( v22 );
      ++v4;
      v19 += 6;
      v18 += 6;
      v20 += 3;
    }
    while ( v4 < (int)dword_140404A6C[v2 + 358300579] );
  }
  result = 61728 * v1;
  v38 = (int)(float)(*(float *)&dword_140404A6C[15432 * v1 + 358312926] * 0.015625);
  v39 = (int)(float)(*(float *)&dword_140404A6C[15432 * v1 + 358312929] * 0.015625);
  v40 = (int)(float)(*(float *)&dword_140404A6C[15432 * v1 + 358312931] * 0.015625);
  v41 = (int)(float)(*(float *)&dword_140404A6C[15432 * v1 + 358312928] * 0.015625);
  if ( v41 <= v40 )
  {
    v42 = (__int64)v41 << 6;
    do
    {
      if ( (unsigned int)v41 <= 0x3F )
      {
        v43 = v38;
        if ( v38 <= v39 )
        {
          v44 = v38;
          do
          {
            if ( v43 <= 0x3F )
            {
              result = v42 + v44;
              v45 = (int)dword_140404A6C[9 * v42 + 254352099 + 9 * v44];
              if ( (int)v45 < 8 )
              {
                dword_140404A6C[9 * result + 254352100 + v45] = v1;
                ++dword_140404A6C[9 * v42 + 254352099 + 9 * v44];
              }
            }
            ++v43;
            ++v44;
          }
          while ( (int)v43 <= v39 );
        }
      }
      ++v41;
      v42 += 64;
    }
    while ( v41 <= v40 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140189E80) ----------------------------------------------------
double            sub_140189E80(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140404378(dword_140404A6C[71737990], 1, 0, &dword_140404A6C[431564565]);
      qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790158] + 283793813], v5);
      qword_140404238(0);
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[358297493]),(const void *)(intptr_t)(0));
    }
    else
    {
      qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790158] + 283793813], a3);
    }
  }
  else
  {
    qword_1404042E0(dword_140404A6C[71737685]);
    qword_140404338(dword_140404A6C[71737691], 1, &dword_140404A6C[284024502]);
    qword_140404338(dword_140404A6C[71737695], 1, &dword_140404A6C[284550403]);
    qword_140404338(dword_140404A6C[71737700], 1, &dword_140404A6C[284545205]);
    qword_140404338(dword_140404A6C[71737701], 1, &dword_140404A6C[284545209]);
    qword_140404378(dword_140404A6C[71737699], 1, 0, &dword_140404A6C[431564565]);
    unk_140404098(33984);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283827814] + 284024944]);
    unk_140404098(33985);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829863] + 284024944]);
    unk_140404098(33986);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283827815] + 284024944]);
    unk_140404098(33987);
    qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
    unk_140404098(33988);
    qword_140404050(35866, dword_140404A6C[44 * dword_140404A6C[283827820] + 284024944]);
    unk_140404098(33989);
    qword_140404050(35866, dword_140404A6C[44 * dword_140404A6C[283827821] + 284024944]);
    unk_140404098(33984);
    qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790158] + 283793813], v4);
    qword_140404238(0);
    qword_140404238(1);
    qword_140404238(2);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[358297493]),(const void *)(intptr_t)(12));
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[358297493]),(const void *)(intptr_t)(20));
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[358297493]),(const void *)(intptr_t)(0));
  }
  qword_140302FF8(4, 0, dword_140404A6C[358297494]);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790159] + 283793813], v6);
  if ( a1 )
  {
    if ( a1 != 1 )
      goto LABEL_11;
    v7 = 0;
  }
  else
  {
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[358297493]),(const void *)(intptr_t)(0));
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[358297493]),(const void *)(intptr_t)(12));
    v7 = 2;
  }
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(v7, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[358297493]),(const void *)(intptr_t)(v7==0?0:20));
LABEL_11:
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283827822] + 284024944]);
  qword_140302FF8(4, 0, dword_140404A6C[358297496]);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790160] + 283793813], v8);
  if ( a1 )
  {
    if ( a1 != 1 )
      goto LABEL_16;
    v9 = 0;
  }
  else
  {
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[358297493]),(const void *)(intptr_t)(0));
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[358297493]),(const void *)(intptr_t)(12));
    v9 = 2;
  }
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(v9, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[358297493]),(const void *)(intptr_t)(v9==0?0:20));
LABEL_16:
  unk_140404098(33984);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283827818] + 284024944]);
  unk_140404098(33986);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283827819] + 284024944]);
  unk_140404098(33984);
  qword_140302FF8(4, 0, dword_140404A6C[358297498]);
  if ( !a1 )
  {
    qword_140404230(0);
    qword_140404230(1);
    v11 = 2;
LABEL_20:
    qword_140404230(v11);
    return qword_140404170(34962, 0, v10);
  }
  if ( a1 == 1 )
  {
    v11 = 0;
    goto LABEL_20;
  }
  return qword_140404170(34962, 0, v10);
}

// 14018A03F: variable 'v4' is possibly undefined
// 14018A123: variable 'v5' is possibly undefined
// 14018A1A2: variable 'v6' is possibly undefined
// 14018A288: variable 'v8' is possibly undefined
// 14018A3D9: variable 'v10' is possibly undefined
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014018A3E0) ----------------------------------------------------
__int64            sub_14018A3E0(__int64 a1, __int64 a2, double a3)
{
  int v3; // r11d
  __int64 v4; // r10
  unsigned int *v5; // r8
  unsigned int *v6; // r9
  bool v7; // cc
  unsigned int v8; // ecx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int *v13; // rdx
  int v14; // esi
  int v15; // ebx
  unsigned int *v16; // rdi
  int v17; // r10d
  unsigned int *v18; // r8
  unsigned int *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // r9
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int *v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // r11
  int v32; // r9d
  int v33; // r10d
  __int64 v34; // rcx
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  __int64 v40; // rcx
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  __int64 v46; // rax
  float v47; // xmm3_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  __int64 v52; // rcx
  float v53; // xmm3_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  int v58; // r14d
  unsigned int *v59; // rdi
  int v60; // eax
  float v61; // xmm3_4
  int v62; // r10d
  float v63; // xmm9_4
  unsigned int v64; // eax
  float v65; // xmm4_4
  float v66; // xmm12_4
  float v67; // xmm2_4
  float v68; // xmm11_4
  float v69; // xmm10_4
  float v70; // xmm14_4
  float v71; // xmm13_4
  __int64 v72; // rcx
  float v73; // xmm6_4
  float v74; // xmm7_4
  float v75; // xmm8_4
  float v76; // xmm2_4
  float v77; // xmm1_4
  unsigned int v78; // eax
  int v79; // eax
  unsigned int v80; // eax
  int v81; // ebx
  char v82; // al
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // r14d
  unsigned int *v86; // rdi
  __int64 v87; // rax
  float v88; // xmm7_4
  float v89; // xmm8_4
  double v90; // xmm2_8
  float v91; // xmm9_4
  double v92; // xmm0_8
  float v93; // xmm11_4
  double v94; // xmm6_8
  float v95; // xmm1_4
  double v96; // xmm0_8
  double v97; // xmm0_8
  __m128 v98; // xmm0
  float v99; // xmm2_4
  float v100; // xmm3_4
  float v101; // xmm4_4
  float v102; // xmm5_4
  float v103; // xmm1_4
  float v104; // xmm5_4
  float v105; // xmm6_4
  float v106; // xmm5_4
  float v107; // xmm5_4
  float v108; // xmm0_4
  float v109; // xmm7_4
  float v110; // xmm6_4
  float v111; // xmm4_4
  float v112; // xmm3_4
  float v113; // xmm2_4
  float v114; // xmm1_4
  float v115; // xmm0_4
  float v116; // xmm7_4
  float v117; // xmm5_4
  __int64 v118; // rcx
  float v119; // xmm8_4
  float v120; // xmm8_4
  __int64 v121; // rcx
  float *v122; // rbx
  float *v123; // rsi
  float v124; // xmm3_4
  float v125; // xmm1_4
  float v126; // xmm2_4
  float v127; // xmm3_4
  __int64 v128; // xmm0_8
  float v129; // xmm1_4
  __int64 v130; // rbx
  float v131; // xmm12_4
  float v132; // xmm11_4
  float v133; // xmm1_4
  float v134; // xmm3_4
  float v135; // xmm2_4
  float v136; // xmm5_4
  float v137; // xmm13_4
  float v138; // xmm9_4
  float v139; // xmm8_4
  float v140; // xmm10_4
  __int64 v141; // rcx
  float v142; // xmm2_4
  float v143; // xmm1_4
  float v144; // xmm6_4
  float v145; // xmm4_4
  float v146; // xmm7_4
  float v147; // xmm3_4
  float v148; // xmm2_4
  float v149; // xmm0_4
  bool v150; // zf
  float v151; // xmm3_4
  float v152; // xmm4_4
  float v153; // xmm2_4
  int v154; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018A3E0[128];
#define v156 (*(_DWORD (*)[12])(void *)(sr_frame_14018A3E0 + 0)) /* [rsp+0h] */
#define v157 (*(unsigned int (*)[10])(void *)(sr_frame_14018A3E0 + 48)) /* [rsp+30h] */
#define v158 (*(float (*))(void *)(sr_frame_14018A3E0 + 88)) /* [rsp+58h] */
#define v159 (*(float (*))(void *)(sr_frame_14018A3E0 + 92)) /* [rsp+5Ch] */
#define v160 (*(float (*))(void *)(sr_frame_14018A3E0 + 96)) /* [rsp+60h] */
#define v161 (*(float (*))(void *)(sr_frame_14018A3E0 + 104)) /* [rsp+68h] */
#define v162 (*(float (*))(void *)(sr_frame_14018A3E0 + 108)) /* [rsp+6Ch] */
#define v163 (*(float (*))(void *)(sr_frame_14018A3E0 + 112)) /* [rsp+70h] */
#define v164 (*(__int64 (*))(void *)(sr_frame_14018A3E0 + 120)) /* [rsp+78h] */

  v3 = 0;
  if ( (int)dword_140404A6C[225391228] > 0 )
  {
    v4 = 0;
    v5 = &dword_140404A6C[225391247];
    v6 = &dword_140404A6C[225391251];
    do
    {
      v7 = (int)++v5[1] < 800;
      v5[2] = 800;
      if ( !v7 )
      {
        v8 = ((unsigned __int8)*v5 + 1) & 3;
        v9 = v4 + (((unsigned __int8)*v5 + 1) & 3);
        *v5 = v8;
        if ( dword_140404A6C[v9 + 225391236] == -1 )
        {
          v10 = ((_BYTE)v8 + 1) & 3;
          v8 = v10;
          *v5 = v10;
        }
        if ( dword_140404A6C[v4 + 225391236 + v8] == -1 )
          *v5 = ((_BYTE)v8 + 1) & 3;
        v5[1] = 0;
      }
      *(_QWORD *)(v6 - 1) = 0;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      *(_QWORD *)(v6 + 5) = 0;
      dword_140404A6C[v4 + 225391250 + (int)*v5] = 2;
      v11 = (int)*v5;
      if ( dword_140404A6C[v4 + 225391236 + (((_BYTE)v11 + 1) & 3)] == -1 )
      {
        dword_140404A6C[v4 + 225391250 + (((_BYTE)v11 - 2) & 3)] = 2;
        if ( (int)v5[1] >= (int)(v5[2] - 128) )
        {
          dword_140404A6C[v4 + 225391250 + (int)*v5] = 1;
          dword_140404A6C[v4 + 225391250 + (((unsigned __int8)*v5 - 2) & 3)] = 1;
        }
      }
      else
      {
        dword_140404A6C[v11 + 225391250 + v4] = 2;
        dword_140404A6C[v4 + 225391254 + (int)*v5] = 2;
        if ( (int)v5[1] >= (int)(v5[2] - 128) )
        {
          dword_140404A6C[v4 + 225391250 + (int)*v5] = 1;
          dword_140404A6C[v4 + 225391254 + (int)*v5] = 1;
        }
      }
      a1 = (unsigned int)(*(v5 - 11) == -1) + 1;
      if ( *(v5 - 10) != -1 )
        a1 = *(v5 - 11) == -1;
      a2 = (unsigned int)(a1 + 1);
      if ( *(v5 - 9) != -1 )
        a2 = (unsigned int)a1;
      v12 = a2 + 1;
      if ( *(v5 - 8) != -1 )
        v12 = a2;
      if ( v12 >= 2 )
      {
        *(v6 - 1) = 2;
        *v6 = 2;
        v6[1] = 2;
        v6[2] = 2;
        v6[3] = 2;
        v6[4] = 2;
        v6[5] = 2;
        v6[6] = 2;
      }
      ++v3;
      v5 += 34;
      v4 += 34;
      v6 += 34;
    }
    while ( v3 < (int)dword_140404A6C[225391228] );
  }
  sub_14018B680(a1, a2, a3);
  v14 = dword_140404A6C[132792829];
  v15 = 0;
  if ( (int)dword_140404A6C[132792829] > 0 )
  {
    v16 = &dword_140404A6C[132400668];
    do
    {
      if ( *v16 == 1 )
      {
        sub_140009E30(v15);
        v14 = dword_140404A6C[132792829];
      }
      ++v15;
      v16 += 383;
    }
    while ( v15 < v14 );
  }
  v17 = 0;
  v18 = &dword_140404A6C[132400643];
  if ( v14 < 4 )
  {
    if ( v14 <= 0 )
      goto LABEL_102;
    v22 = 0;
  }
  else
  {
    v19 = &dword_140404A6C[132400643];
    v20 = ((unsigned int)(v14 - 4) >> 2) + 1;
    v21 = v20;
    v17 = 4 * v20;
    v22 = 4LL * v20;
    do
    {
      v23 = (int)*(v19 - 4);
      if ( (_DWORD)v23 != -1 )
      {
        *(v19 - 2) = dword_140404A6C[5210 * v23 + 129716720];
        *(v19 - 1) = dword_140404A6C[5210 * v23 + 129716721];
        *v19 = dword_140404A6C[5210 * v23 + 129716722];
      }
      v24 = (int)v19[379];
      if ( (_DWORD)v24 != -1 )
      {
        v19[381] = dword_140404A6C[5210 * v24 + 129716720];
        v19[382] = dword_140404A6C[5210 * v24 + 129716721];
        v19[383] = dword_140404A6C[5210 * v24 + 129716722];
      }
      v25 = (int)v19[762];
      if ( (_DWORD)v25 != -1 )
      {
        v19[764] = dword_140404A6C[5210 * v25 + 129716720];
        v19[765] = dword_140404A6C[5210 * v25 + 129716721];
        v19[766] = dword_140404A6C[5210 * v25 + 129716722];
      }
      v26 = (int)v19[1145];
      if ( (_DWORD)v26 != -1 )
      {
        v19[1147] = dword_140404A6C[5210 * v26 + 129716720];
        v19[1148] = dword_140404A6C[5210 * v26 + 129716721];
        v19[1149] = dword_140404A6C[5210 * v26 + 129716722];
      }
      v19 += 1532;
      --v21;
    }
    while ( v21 );
    if ( v17 >= v14 )
      goto LABEL_47;
  }
  v27 = &dword_140404A6C[383 * v22 + 132400643];
  v28 = (unsigned int)(v14 - v17);
  do
  {
    v29 = (int)*(v27 - 4);
    if ( (_DWORD)v29 != -1 )
    {
      *(v27 - 2) = dword_140404A6C[5210 * v29 + 129716720];
      *(v27 - 1) = dword_140404A6C[5210 * v29 + 129716721];
      *v27 = dword_140404A6C[5210 * v29 + 129716722];
    }
    v27 += 383;
    --v28;
  }
  while ( v28 );
LABEL_47:
  v30 = dword_140404A6C[284024893];
  v31 = (unsigned int)v14;
  do
  {
    v32 = 0;
    *(v18 - 3) = 0;
    v33 = 2;
    v13 = &dword_140404A6C[280651442];
    do
    {
      if ( *(v13 - 139) )
      {
        v34 = (int)*(v13 - 137);
        if ( (_DWORD)v34 != -1 && (int)*(v13 - 124) > 0 && v32 < 2 && *(v18 - 5) != v33 - 2 )
        {
          v35 = 96.0;
          v36 = *((float *)v18 - 2) - *((float *)v13 - 2);
          v37 = *((float *)v18 - 1) - *((float *)v13 - 1);
          v38 = *(float *)v18 - *(float *)v13;
          v158 = v36;
          v159 = v37;
          v160 = v38;
          if ( dword_140404A6C[3597 * v34 + 71859139] )
            v35 = 16.0;
          v39 = fsqrt((float)((float)(v36 * v36) + (float)(v37 * v37)) + (float)(v38 * v38));
          if ( v39 < v35 )
          {
            v32 = 2;
LABEL_60:
            *(v18 - 3) = v32;
            goto LABEL_61;
          }
          if ( v39 < (float)(v35 + 4.0) )
          {
            v32 = 1;
            goto LABEL_60;
          }
        }
      }
LABEL_61:
      if ( v13[7027] )
      {
        v40 = (int)v13[7029];
        if ( (_DWORD)v40 != -1 && (int)v13[7042] > 0 && v32 < 2 && *(v18 - 5) != v33 - 1 )
        {
          v41 = 96.0;
          v42 = *((float *)v18 - 2) - *((float *)v13 + 7164);
          v43 = *((float *)v18 - 1) - *((float *)v13 + 7165);
          v44 = *(float *)v18 - *((float *)v13 + 7166);
          v158 = v42;
          v159 = v43;
          v160 = v44;
          if ( dword_140404A6C[3597 * v40 + 71859139] )
            v41 = 16.0;
          v45 = fsqrt((float)((float)(v42 * v42) + (float)(v43 * v43)) + (float)(v44 * v44));
          if ( v45 < v41 )
          {
            v32 = 2;
LABEL_72:
            *(v18 - 3) = v32;
            goto LABEL_73;
          }
          if ( v45 < (float)(v41 + 4.0) )
          {
            v32 = 1;
            goto LABEL_72;
          }
        }
      }
LABEL_73:
      if ( v13[14193] )
      {
        v46 = (int)v13[14195];
        if ( (_DWORD)v46 != -1 && (int)v13[14208] > 0 && v32 < 2 && *(v18 - 5) != v33 )
        {
          v47 = 96.0;
          v48 = *((float *)v18 - 2) - *((float *)v13 + 14330);
          v49 = *((float *)v18 - 1) - *((float *)v13 + 14331);
          v50 = *(float *)v18 - *((float *)v13 + 14332);
          v158 = v48;
          v159 = v49;
          v160 = v50;
          if ( dword_140404A6C[3597 * v46 + 71859139] )
            v47 = 16.0;
          v51 = fsqrt((float)((float)(v48 * v48) + (float)(v49 * v49)) + (float)(v50 * v50));
          if ( v51 < v47 )
          {
            v32 = 2;
LABEL_84:
            *(v18 - 3) = v32;
            goto LABEL_85;
          }
          if ( v51 < (float)(v47 + 4.0) )
          {
            v32 = 1;
            goto LABEL_84;
          }
        }
      }
LABEL_85:
      if ( v13[21359] )
      {
        v52 = (int)v13[21361];
        if ( (_DWORD)v52 != -1 && (int)v13[21374] > 0 && v32 < 2 && *(v18 - 5) != v33 + 1 )
        {
          v53 = 96.0;
          v54 = *((float *)v18 - 2) - *((float *)v13 + 21496);
          v55 = *((float *)v18 - 1) - *((float *)v13 + 21497);
          v56 = *(float *)v18 - *((float *)v13 + 21498);
          v158 = v54;
          v159 = v55;
          v160 = v56;
          if ( dword_140404A6C[3597 * v52 + 71859139] )
            v53 = 16.0;
          v57 = fsqrt((float)((float)(v54 * v54) + (float)(v55 * v55)) + (float)(v56 * v56));
          if ( v57 >= v53 )
          {
            if ( v57 >= (float)(v53 + 4.0) )
              goto LABEL_97;
            v32 = 1;
          }
          else
          {
            v32 = 2;
          }
          *(v18 - 3) = v32;
        }
      }
LABEL_97:
      v33 += 4;
      v13 += 28664;
    }
    while ( v33 - 2 < 256 );
    if ( v30 && v18[359] - 67 <= 1 )
      *(v18 - 3) = 0;
    v18 += 383;
    --v31;
  }
  while ( v31 );
LABEL_102:
  v58 = 0;
  if ( v14 > 0 )
  {
    v59 = &dword_140404A6C[132400650];
    do
    {
      v60 = *(v59 - 10);
      if ( v60 == 2 )
      {
        if ( *(v59 - 11) == -1 )
        {
          v61 = *((float *)v59 + 4);
          v62 = *(v59 - 13);
          v63 = *((float *)v59 + 5);
          v64 = v59[361];
          v65 = *((float *)v59 + 1);
          v66 = *((float *)v59 + 6);
          v67 = *((float *)v59 - 9) - (float)(v61 * 1.5);
          v68 = *((float *)v59 - 1);
          v69 = *((float *)v59 + 2);
          v70 = *(float *)v59;
          v71 = *((float *)v59 + 3);
          v72 = 24944LL * v62;
          v157[0] = *(v59 - 2);
          *(float *)&v157[1] = v68;
          *(float *)&v157[2] = v70;
          *(float *)&v157[3] = v65;
          *(float *)&v157[4] = v69;
          *(float *)&v157[5] = v71;
          *(float *)&v157[6] = v61;
          *(float *)&v157[7] = v63;
          v73 = *(float *)&dword_140404A6C[v72 + 346708247];
          v74 = *(float *)&dword_140404A6C[v72 + 346708248];
          v75 = -*(float *)&dword_140404A6C[v72 + 346708249];
          v156[8] = v64;
          *(float *)&v157[8] = v66;
          v158 = (float)((float)(v67 - (float)(v73 * *(float *)v157)) - (float)(v74 * v65)) + (float)(v75 * v61);
          v76 = (float)((float)((float)(*((float *)v59 - 8) - (float)(v63 * 1.5)) - (float)(v73 * v68))
                      - (float)(v74 * v69))
              + (float)(v75 * v63);
          v77 = *((float *)v59 - 7) - (float)(v66 * 1.5);
          v161 = *((float *)v59 - 6);
          v163 = *((float *)v59 - 4);
          v159 = v76;
          v160 = (float)((float)(v77 - (float)(v73 * v70)) - (float)(v74 * v71)) + (float)(v75 * v66);
          v162 = *((float *)v59 - 5);
          v78 = sr_CreateVehicle(v62, &v158, (unsigned int *)&v161, v157, v64);
          v14 = dword_140404A6C[132792829];
          *(v59 - 11) = v78;
          if ( v78 != -1 )
            dword_140404A6C[5210 * v78 + 129720183] = v58;
        }
      }
      else if ( !v60 )
      {
        v79 = v59[18];
        if ( v79 > 0 )
        {
          if ( v79 == 2 )
          {
            v80 = v59[352];
            if ( v80 != -1 )
            {
              v59[343] = v80;
              v59[345] = -1;
              v81 = rand() % (signed int)dword_140404A6C[225426046];
              v82 = rand();
              sub_140008E40(v58, v59[352], 0, v81, v82 & 1);
              v14 = dword_140404A6C[132792829];
              *((_QWORD *)v59 + 9) = 1;
            }
          }
          if ( !v59[19] )
          {
            v83 = (int)*(v59 - 11);
            if ( (_DWORD)v83 != -1 )
              dword_140404A6C[5210 * v83 + 129716716] = 0;
            v84 = (int)*(v59 - 12);
            if ( (_DWORD)v84 != -1 )
              dword_140404A6C[7166 * v84 + 280651317] = 0;
          }
        }
      }
      ++v58;
      v59 += 383;
    }
    while ( v58 < v14 );
  }
  v85 = 0;
  if ( v14 > 0 )
  {
    v86 = &dword_140404A6C[132400645];
    do
    {
      v87 = (int)*(v86 - 6);
      if ( (_DWORD)v87 != -1 )
      {
        v130 = 5210 * v87;
        v131 = *(float *)&dword_140404A6C[5210 * v87 + 129716732];
        v132 = *(float *)&dword_140404A6C[5210 * v87 + 129716734];
        v133 = *(float *)&dword_140404A6C[5210 * v87 + 129716726];
        v134 = *(float *)&dword_140404A6C[5210 * v87 + 129716729];
        v135 = (float)(v131 * 1.5) + *(float *)&dword_140404A6C[5210 * v87 + 129716720];
        v136 = *(float *)&dword_140404A6C[5210 * v87 + 129716733];
        v137 = *(float *)&dword_140404A6C[5210 * v87 + 129716728];
        v138 = *(float *)&dword_140404A6C[5210 * v87 + 129716727];
        v139 = *(float *)&dword_140404A6C[5210 * v87 + 129716730];
        v140 = *(float *)&dword_140404A6C[5210 * v87 + 129716731];
        *(v86 - 1) = dword_140404A6C[5210 * v87 + 129716744];
        *v86 = dword_140404A6C[5210 * v87 + 129716745];
        v86[1] = dword_140404A6C[5210 * v87 + 129716746];
        *((float *)v86 + 3) = v133;
        *((float *)v86 + 5) = v137;
        *((float *)v86 + 4) = v138;
        *((float *)v86 + 6) = v134;
        *((float *)v86 + 7) = v139;
        *((float *)v86 + 8) = v140;
        *((float *)v86 + 9) = v131;
        *((float *)v86 + 10) = v136;
        *((float *)v86 + 11) = v132;
        v141 = (int)*(v86 - 8);
        v142 = (float)(v135 + (float)(*(float *)&dword_140404A6C[24944 * v141 + 346708247] * v133))
             + (float)(*(float *)&dword_140404A6C[24944 * v141 + 346708248] * v134);
        v143 = *(float *)&dword_140404A6C[24944 * v141 + 346708248] * v139;
        v144 = *(float *)&dword_140404A6C[24944 * v141 + 346708248] * v140;
        v145 = *(float *)&dword_140404A6C[24944 * v141 + 346708249];
        v146 = *(float *)&dword_140404A6C[24944 * v141 + 346708247] * v137;
        v147 = (float)((float)(v136 * 1.5) + *(float *)&dword_140404A6C[5210 * v87 + 129716721])
             + (float)(*(float *)&dword_140404A6C[24944 * v141 + 346708247] * v138);
        *((float *)v86 - 4) = v142 + (float)(v145 * v131);
        v148 = (float)((float)(v132 * 1.5) + *(float *)&dword_140404A6C[5210 * v87 + 129716722]) + v146;
        *((float *)v86 - 3) = (float)(v147 + v143) + (float)(v145 * v136);
        *((float *)v86 - 2) = (float)(v148 + v144) + (float)(v145 * v132);
        v149 = sub_14023F704(-v132, -v131);
        v150 = v86[23] == 1;
        *((float *)v86 + 2) = v149;
        if ( v150 )
        {
          v151 = *((float *)v86 + 12);
          v152 = *((float *)v86 + 13);
          *(float *)&dword_140404A6C[v130 + 129720166] = v151;
          dword_140404A6C[v130 + 129720165] = 0x40000000;
          dword_140404A6C[v130 + 129720167] = -1082130432;
          v153 = (float)((float)((float)(*(float *)&dword_140404A6C[v130 + 129716745]
                                       * *(float *)&dword_140404A6C[v130 + 129716733])
                               + (float)(*(float *)&dword_140404A6C[v130 + 129716744]
                                       * *(float *)&dword_140404A6C[v130 + 129716732]))
                       + (float)((float)(*(float *)&dword_140404A6C[v130 + 129716746]
                                       * *(float *)&dword_140404A6C[v130 + 129716734])
                               + v152))
               * 8.0;
          if ( v153 < 0.0 )
            v153 = v153 + v153;
          if ( v153 >= -1.0 )
          {
            if ( v153 > 1.0 )
              v153 = 1.0;
          }
          else
          {
            v153 = -1.0;
          }
          *(float *)&dword_140404A6C[v130 + 129720168] = v153 / (float)(fabs(v151) + 1.0);
          if ( v152 < 0.050000001 )
            dword_140404A6C[v130 + 129720168] = -1082130432;
          v154 = v86[356];
          dword_140404A6C[v130 + 129720173] = 0;
          if ( v154 >= 180 )
          {
            *(_QWORD *)&dword_140404A6C[v130 + 129720165] = 0x40000000;
            dword_140404A6C[v130 + 129720167] = 1065353216;
            if ( v154 >= 280 )
              dword_140404A6C[v130 + 129720168] = -1082130432;
            else
              dword_140404A6C[v130 + 129720168] = 1065353216;
          }
        }
        goto LABEL_157;
      }
      if ( v86[23] != 1 )
        v86[13] = 0;
      v88 = *((float *)v86 - 1);
      v89 = *((float *)v86 + 1);
      v90 = 0.0;
      v91 = *((float *)v86 + 12);
      v92 = fabs(v91);
      v93 = fsqrt((float)((float)(v88 * v88) + (float)(*(float *)v86 * *(float *)v86)) + (float)(v89 * v89));
      if ( v92 > 0.0 )
      {
        v94 = *((float *)v86 + 16);
        v95 = v94 / tan(v92);
        if ( v91 < 0.0 )
          v95 = -v95;
        HIDWORD(v90) = 0;
        *(float *)&v90 = v93 / v95;
      }
      *(float *)&v90 = *(float *)&v90 + *((float *)v86 + 2);
      v96 = *(float *)&v90;
      v86[2] = LODWORD(v90);
      if ( *(float *)&v90 >= -3.14159265359 )
      {
        if ( v96 <= 3.14159265359 )
          goto LABEL_133;
        v97 = v96 - 6.28318530718;
      }
      else
      {
        v97 = v96 + 6.28318530718;
      }
      v86[2] = LODWORD(v97);
      v90 = v97;
LABEL_133:
      v98 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(v90)), (__int64)v13, v90);
      *v86 = 0;
      v99 = *((float *)v86 + 13);
      v100 = SR_VEC_LANES(128, v98, f32)[0];
      v101 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v98, v98, 1), f32)[0];
      v102 = (float)(v101 * v88) + (float)(SR_VEC_LANES(128, v98, f32)[0] * v89);
      v103 = (float)((float)(SR_VEC_LANES(128, v98, f32)[0] * v102) * SR_VEC_LANES(128, v98, f32)[0]) + (float)((float)(v101 * v102) * v101);
      if ( v103 >= v99 )
      {
        v107 = v102 + (float)(fminf((float)(v103 - v99) * 32.0, 2.0) * -0.0027777778);
        v108 = v107 * v101;
        v106 = v107 * v100;
        *((float *)v86 - 1) = v108;
        v105 = v108;
        v109 = *(float *)v86;
        *((float *)v86 + 1) = v106;
        if ( v99 >= 0.033333335 || fsqrt((float)(v106 * v106) + (float)(v108 * v108)) >= 0.016666668 )
          goto LABEL_139;
        *(v86 - 1) = 0;
        v105 = 0.0;
        v86[1] = 0;
        v106 = 0.0;
      }
      else
      {
        v104 = v102 + (float)(fminf((float)(v99 - v103) * 16.0, 1.0) * 0.0013888889);
        v105 = v104 * v101;
        v106 = v104 * SR_VEC_LANES(128, v98, f32)[0];
        *((float *)v86 - 1) = v105;
        *((float *)v86 + 1) = v106;
      }
      v109 = 0.0;
LABEL_139:
      v110 = v105 + *((float *)v86 - 4);
      v111 = *(float *)&dword_1402F6188;
      v112 = *(float *)&dword_1402F618C;
      v113 = *(float *)&dword_1402F6190;
      v114 = *(float *)&dword_1402F618C;
      v115 = *(float *)&dword_1402F6188 * 2.0;
      *((float *)v86 - 4) = v110;
      v116 = v109 + *((float *)v86 - 3);
      *((float *)v86 - 3) = v116;
      v117 = v106 + *((float *)v86 - 2);
      v158 = v115 + v110;
      *((float *)v86 - 2) = v117;
      v118 = 24944LL * (int)*(v86 - 8);
      v159 = (float)(v114 * 2.0) + v116;
      v161 = v110 - (float)(v111 * 32.0);
      v162 = v116 - (float)(v112 * 32.0);
      v160 = (float)(v113 * 2.0) + v117;
      v119 = *(float *)&dword_140404A6C[v118 + 346731818];
      v163 = v117 - (float)(v113 * 32.0);
      v120 = (float)(v119 * 0.875) - *(float *)&dword_140404A6C[v118 + 346731821];
      if ( (unsigned int)sub_1400DC050(&v158, &v161, 0) )
        *((float *)v86 - 3) = *(float *)&dword_140404A6C[73006982] + v120;
      v121 = 383LL * v85;
      *(_QWORD *)(v86 + 3) = 1065353216;
      v122 = (float *)&dword_140404A6C[v121 + 132400651];
      *(_QWORD *)(v86 + 5) = 0;
      v123 = (float *)&dword_140404A6C[v121 + 132400648];
      *(_QWORD *)(v86 + 7) = 1065353216;
      *(_QWORD *)(v86 + 9) = 0;
      v86[11] = 1065353216;
      sub_14007B2A0(
        (__int64)&dword_140404A6C[v121 + 132400648],
        (float *)&dword_140404A6C[v121 + 132400651],
        sr_export_float_lane_container(1070141403));
      sub_14007B2A0((__int64)v123, v122, sr_export_float_lane_container((unsigned __int64)v86[2]));
      v124 = -*((float *)v86 + 16);
      v125 = (float)(v124 * *((float *)v86 + 9)) + *((float *)v86 - 4);
      v126 = (float)(v124 * *((float *)v86 + 10)) + *((float *)v86 - 3);
      v127 = (float)(v124 * *((float *)v86 + 11)) + *((float *)v86 - 2);
      v158 = v125;
      v159 = v126;
      v161 = v125 - (float)(*(float *)&dword_1402F6188 * 32.0);
      v160 = v127;
      v163 = v127 - (float)(*(float *)&dword_1402F6190 * 32.0);
      v162 = v126 - (float)(*(float *)&dword_1402F618C * 32.0);
      if ( (unsigned int)sub_1400DC050(&v158, &v161, 0) )
      {
        v128 = dword_140404A6C[73006982];
        v129 = *((float *)v86 + 16);
        v159 = *(float *)&dword_140404A6C[73006982] + v120;
        *(float *)&v128 = sub_14023F704(
                            (float)(*(float *)&dword_140404A6C[73006982] + v120) - *((float *)v86 - 3),
                            v129);
        sub_14007B2A0((__int64)v123, v123, sr_export_float_lane_container(v128 ^ 0x80000000LL));
      }
      v14 = dword_140404A6C[132792829];
LABEL_157:
      ++v85;
      v86 += 383;
    }
    while ( v85 < v14 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v156
#undef v157
#undef v158
#undef v159
#undef v160
#undef v161
#undef v162
#undef v163
#undef v164

// 14018A7B8: conditional instruction was optimized away because esi.4>=1
// 14018AF92: variable 'v13' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FE95260: using guessed type unsigned int;
// 183F7CB60: using guessed type unsigned int;

//----- (000000014018B680) ----------------------------------------------------
void            sub_14018B680(__int64 a1, __int64 a2, double a3)
{
  int v3; // edi
  int v4; // ecx
  unsigned int *v5; // rax
  signed int v6; // ebp
  signed int v7; // r15d
  int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rbx
  __m128 v11; // xmm0
  float v12; // xmm1_4
  unsigned __int64 v13; // xmm6_8
  unsigned int v14; // xmm5_4
  __int64 v15; // rax
  float v16; // xmm8_4
  float v17; // xmm3_4
  unsigned int v18; // xmm3_4
  float v19; // xmm10_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm4_4
  double v23; // xmm1_8
  float v24; // xmm9_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm11_4
  float v28; // xmm1_4
  double v29; // xmm4_8
  float v30; // xmm0_4
  unsigned int v31; // xmm11_4
  unsigned int v32; // xmm4_4
  unsigned int v33; // xmm1_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  float v36; // xmm0_4
  float v37; // xmm0_4
  unsigned int v38; // ecx
  float *v39; // rax
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  signed int v43; // ecx
  float *v44; // rax
  float v45; // xmm0_4
  float v46; // xmm0_4
  __int64 v47; // rdx
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm7_4
  float *v51; // rcx
  float v52; // xmm6_4
  float v53; // xmm8_4
  float v54; // xmm9_4
  bool v55; // cc
  float v56; // xmm6_4
  float v57; // xmm2_4
  float v58; // xmm3_4
  float v59; // xmm2_4
  float v60; // xmm3_4
  float v61; // xmm2_4
  float v62; // xmm1_4
  float v63; // xmm11_4
  float v64; // xmm7_4
  float v65; // xmm10_4
  float v66; // xmm0_4
  float v67; // xmm6_4
  float v68; // xmm8_4
  float v69; // xmm9_4
  __int64 v70; // rcx
  __int64 v71; // rcx
  float v72; // xmm2_4
  float v73; // xmm1_4
  float v74; // xmm10_4
  float v75; // xmm0_4
  float v76; // xmm6_4
  float v77; // xmm8_4
  float v78; // xmm9_4
  float v79; // xmm11_4
  float v80; // xmm7_4
  int v81; // r8d
  __int64 v82; // rcx
  __int64 v83; // r11
  __int64 v84; // r10
  int v85; // r9d
  __int64 v86; // rcx
  float *v87; // rax
  float v88; // xmm6_4
  float v89; // xmm7_4
  float v90; // xmm8_4
  float v91; // xmm3_4
  float v92; // xmm4_4
  float v93; // xmm5_4
  __int64 v94; // rax

  v3 = dword_140404A6C[225426046];
  v4 = 0;
  if ( (int)dword_140404A6C[225426046] > 0 )
  {
    v5 = &dword_140404A6C[225426186];
    do
    {
      *v5 = 0;
      v5 += 396;
      v3 = dword_140404A6C[225426046];
      ++v4;
    }
    while ( v4 < (int)dword_140404A6C[225426046] );
  }
  if ( !dword_140404A6C[179992046] )
  {
    v6 = 0;
    v7 = dword_140404A6C[132792829];
    if ( (int)dword_140404A6C[132792829] > 0 )
    {
      v8 = dword_140404A6C[225391228];
      v9 = 0;
      do
      {
        v10 = 383 * v9;
        v11 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)dword_140404A6C[383 * v9 + 132400647]), a2, a3);
        v12 = *(float *)&dword_140404A6C[383 * v9 + 132400659];
        v13 = SR_VEC_LANES(128, v11, u64)[0];
        v14 = dword_140404A6C[383 * v9 + 132400642];
        v15 = 383 * v9;
        v16 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v11, v11, 1), f32)[0];
        a3 = *(double *)SR_VEC_LANES(128, v11, u64);
        SR_VEC_LANES(128, v11, i32)[0] = dword_140404A6C[383 * v9 + 132400643];
        HIDWORD(v23) = HIDWORD(v13);
        v17 = (float)(v16 * v12) + *(float *)&dword_140404A6C[383 * v9 + 132400641];
        dword_140404A6C[v15 + 132400663] = v14;
        dword_140404A6C[v15 + 132400666] = v14;
        *(float *)&v18 = v17 + *(float *)&v13;
        *(float *)&a3 = (float)((float)(*(float *)&a3 * v12) + SR_VEC_LANES(128, v11, f32)[0]) - v16;
        dword_140404A6C[v15 + 132400662] = v18;
        v19 = *(float *)&v18;
        dword_140404A6C[v15 + 132400665] = v18;
        dword_140404A6C[v15 + 132400664] = LODWORD(a3);
        dword_140404A6C[v15 + 132400667] = LODWORD(a3);
        v20 = *(float *)&dword_140404A6C[383 * v9 + 132400659];
        v21 = *(float *)&dword_140404A6C[383 * v9 + 132400642];
        v22 = (float)((float)(v16 * v20) + *(float *)&dword_140404A6C[383 * v9 + 132400641]) - *(float *)&v13;
        *(float *)&v23 = (float)((float)(*(float *)&v13 * v20) + *(float *)&dword_140404A6C[383 * v9 + 132400643]) + v16;
        if ( *(float *)&v18 > v22 )
          v19 = (float)((float)(v16 * v20) + *(float *)&dword_140404A6C[383 * v9 + 132400641]) - *(float *)&v13;
        *(float *)&dword_140404A6C[v15 + 132400662] = v19;
        if ( *(float *)&v18 < v22 )
          *(float *)&v18 = v22;
        dword_140404A6C[v15 + 132400665] = v18;
        v24 = *(float *)&v14;
        if ( *(float *)&v14 > v21 )
          v24 = v21;
        *(float *)&dword_140404A6C[v15 + 132400663] = v24;
        if ( *(float *)&v14 < v21 )
          *(float *)&v14 = v21;
        dword_140404A6C[v15 + 132400666] = v14;
        v25 = *(float *)&a3;
        if ( *(float *)&a3 > *(float *)&v23 )
          v25 = *(float *)&v23;
        *(float *)&dword_140404A6C[v15 + 132400664] = v25;
        if ( *(float *)&a3 < *(float *)&v23 )
          a3 = v23;
        dword_140404A6C[v15 + 132400667] = LODWORD(a3);
        v26 = *(float *)&dword_140404A6C[v10 + 132400660];
        HIDWORD(v29) = HIDWORD(v13);
        v27 = *(float *)&dword_140404A6C[v10 + 132400642];
        v28 = (float)((float)(v16 * v26) + *(float *)&dword_140404A6C[v10 + 132400641]) - *(float *)&v13;
        *(float *)&v29 = (float)((float)(*(float *)&v13 * v26) + *(float *)&dword_140404A6C[v10 + 132400643]) + v16;
        if ( v19 > v28 )
          v19 = (float)((float)(v16 * v26) + *(float *)&dword_140404A6C[v10 + 132400641]) - *(float *)&v13;
        *(float *)&dword_140404A6C[v15 + 132400662] = v19;
        if ( *(float *)&v18 < v28 )
          *(float *)&v18 = v28;
        dword_140404A6C[v15 + 132400665] = v18;
        if ( v24 > v27 )
          v24 = v27;
        *(float *)&dword_140404A6C[v15 + 132400663] = v24;
        if ( *(float *)&v14 < v27 )
          *(float *)&v14 = v27;
        dword_140404A6C[v15 + 132400666] = v14;
        if ( v25 > *(float *)&v29 )
          v25 = *(float *)&v29;
        *(float *)&dword_140404A6C[v15 + 132400664] = v25;
        if ( *(float *)&a3 < *(float *)&v29 )
          a3 = v29;
        dword_140404A6C[v15 + 132400667] = LODWORD(a3);
        v30 = *(float *)&dword_140404A6C[v10 + 132400660];
        v31 = dword_140404A6C[v10 + 132400642];
        *(float *)&v32 = (float)((float)(v16 * v30) + *(float *)&dword_140404A6C[v10 + 132400641]) + *(float *)&v13;
        *(float *)&v33 = (float)((float)(*(float *)&v13 * v30) + *(float *)&dword_140404A6C[v10 + 132400643]) - v16;
        if ( v19 > *(float *)&v32 )
          dword_140404A6C[v15 + 132400662] = v32;
        if ( *(float *)&v18 < *(float *)&v32 )
          dword_140404A6C[v15 + 132400665] = v32;
        if ( v24 > *(float *)&v31 )
          dword_140404A6C[v15 + 132400663] = v31;
        if ( *(float *)&v14 < *(float *)&v31 )
          dword_140404A6C[v15 + 132400666] = v31;
        if ( v25 > *(float *)&v33 )
          dword_140404A6C[v15 + 132400664] = v33;
        if ( *(float *)&a3 < *(float *)&v33 )
          dword_140404A6C[v15 + 132400667] = v33;
        a2 = (int)dword_140404A6C[v10 + 132401002];
        if ( (_DWORD)a2 == -1
          || (v34 = *(float *)&dword_140404A6C[v10 + 132400641],
              v35 = 396 * a2,
              v34 < *(float *)&dword_140404A6C[396 * a2 + 225426180])
          || v34 > *(float *)&dword_140404A6C[v35 + 225426183]
          || (v36 = *(float *)&dword_140404A6C[v10 + 132400643], v36 < *(float *)&dword_140404A6C[v35 + 225426182])
          || v36 > *(float *)&dword_140404A6C[v35 + 225426185]
          || (v37 = *(float *)&dword_140404A6C[v10 + 132400642], v37 < *(float *)&dword_140404A6C[v35 + 225426181])
          || v37 > *(float *)&dword_140404A6C[v35 + 225426184] )
        {
          a2 = 0xFFFFFFFFLL;
          v38 = 0;
          dword_140404A6C[v10 + 132401002] = -1;
          if ( v3 > 0 )
          {
            v39 = (float *)&dword_140404A6C[225426183];
            do
            {
              v40 = *(float *)&dword_140404A6C[v10 + 132400641];
              if ( v40 >= *(v39 - 3) && v40 <= *v39 )
              {
                v41 = *(float *)&dword_140404A6C[v10 + 132400643];
                if ( v41 >= *(v39 - 1) && v41 <= v39[2] )
                {
                  v42 = *(float *)&dword_140404A6C[v10 + 132400642];
                  if ( v42 >= *(v39 - 2) && v42 <= v39[1] )
                  {
                    a2 = v38;
                    dword_140404A6C[v10 + 132401002] = v38;
                  }
                }
              }
              ++v38;
              v39 += 396;
            }
            while ( (int)v38 < v3 );
          }
        }
        dword_140404A6C[v10 + 132401003] = -1;
        v43 = 0;
        if ( v8 > 0 )
        {
          v44 = (float *)&dword_140404A6C[225391261];
          do
          {
            v45 = *(float *)&dword_140404A6C[v10 + 132400641];
            if ( v45 >= *(v44 - 3) && v45 <= *v44 )
            {
              v46 = *(float *)&dword_140404A6C[v10 + 132400643];
              if ( v46 >= *(v44 - 1) && v46 <= v44[2] )
                dword_140404A6C[v10 + 132401003] = v43;
            }
            ++v43;
            v44 += 34;
          }
          while ( v43 < v8 );
        }
        if ( (_DWORD)a2 == -1 )
          goto LABEL_87;
        v47 = 396LL * (int)a2;
        v48 = *(float *)&dword_140404A6C[v47 + 225426174];
        v49 = *(float *)&dword_140404A6C[v47 + 225426176];
        v50 = *(float *)&dword_140404A6C[v47 + 225426175];
        v51 = (float *)&dword_140404A6C[34 * dword_140404A6C[v47 + 225426056] + 225391233];
        v52 = (float)(*(float *)&v13 * v49) + (float)(v16 * v48);
        v53 = v51[1];
        v54 = v51[2];
        v55 = v52 <= 0.0;
        v56 = *v51;
        v57 = (float)((float)((float)(*(float *)&dword_140404A6C[v10 + 132400663] - v53) * v50)
                    + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400662] - *v51) * v48))
            + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400664] - v54) * v49);
        v58 = (float)((float)((float)(*(float *)&dword_140404A6C[v10 + 132400666] - v53) * v50)
                    + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400665] - *v51) * v48))
            + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400667] - v54) * v49);
        if ( v55 )
        {
          if ( v57 >= v58 )
            v57 = (float)((float)((float)(*(float *)&dword_140404A6C[v10 + 132400666] - v53) * v50)
                        + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400665] - *v51) * v48))
                + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400667] - v54) * v49);
          *(float *)&dword_140404A6C[v10 + 132401004] = v57;
          v59 = (float)((float)((float)(*(float *)&dword_140404A6C[v10 + 132400663] - v53) * v50)
                      + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400662] - v56) * v48))
              + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400664] - v54) * v49);
          v60 = (float)((float)((float)(*(float *)&dword_140404A6C[v10 + 132400666] - v53) * v50)
                      + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400665] - v56) * v48))
              + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400667] - v54) * v49);
          if ( v59 > v60 )
            goto LABEL_78;
        }
        else
        {
          if ( v57 <= v58 )
            v57 = (float)((float)((float)(*(float *)&dword_140404A6C[v10 + 132400666] - v53) * v50)
                        + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400665] - *v51) * v48))
                + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400667] - v54) * v49);
          *(float *)&dword_140404A6C[v10 + 132401004] = v57;
          v59 = (float)((float)((float)(*(float *)&dword_140404A6C[v10 + 132400663] - v53) * v50)
                      + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400662] - v56) * v48))
              + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400664] - v54) * v49);
          v60 = (float)((float)((float)(*(float *)&dword_140404A6C[v10 + 132400666] - v53) * v50)
                      + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400665] - v56) * v48))
              + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400667] - v54) * v49);
          if ( v59 < v60 )
            goto LABEL_78;
        }
        v59 = v60;
LABEL_78:
        *(float *)&dword_140404A6C[v10 + 132401005] = v59;
        v61 = *(float *)&dword_140404A6C[v47 + 225426063];
        v62 = *(float *)&dword_140404A6C[v47 + 225426064];
        v63 = *(float *)&dword_140404A6C[v10 + 132400662] - v61;
        v64 = *(float *)&dword_140404A6C[v10 + 132400663] - v62;
        v65 = *(float *)&dword_140404A6C[v10 + 132400665] - v61;
        v66 = *(float *)&dword_140404A6C[v47 + 225426065];
        v67 = *(float *)&dword_140404A6C[v10 + 132400666] - v62;
        v68 = *(float *)&dword_140404A6C[v10 + 132400664] - v66;
        v69 = *(float *)&dword_140404A6C[v10 + 132400667] - v66;
        *(float *)&dword_140404A6C[v10 + 132401006] = fmaxf(
                                                        (float)((float)(*(float *)&dword_140404A6C[v47 + 225426175] * v67)
                                                              + (float)(*(float *)&dword_140404A6C[v47 + 225426174] * v65))
                                                      + (float)(*(float *)&dword_140404A6C[v47 + 225426176] * v69),
                                                        (float)((float)(*(float *)&dword_140404A6C[v47 + 225426175] * v64)
                                                              + (float)(*(float *)&dword_140404A6C[v47 + 225426174] * v63))
                                                      + (float)(*(float *)&dword_140404A6C[v47 + 225426176] * v68));
        v70 = 396LL * (int)dword_140404A6C[v10 + 132401002];
        *(float *)&dword_140404A6C[v10 + 132401008] = fminf(
                                                        (float)((float)(*(float *)&dword_140404A6C[v70 + 225426175] * v64)
                                                              + (float)(*(float *)&dword_140404A6C[v70 + 225426174] * v63))
                                                      + (float)(*(float *)&dword_140404A6C[v70 + 225426176] * v68),
                                                        (float)((float)(*(float *)&dword_140404A6C[v70 + 225426175] * v67)
                                                              + (float)(*(float *)&dword_140404A6C[v70 + 225426174] * v65))
                                                      + (float)(*(float *)&dword_140404A6C[v70 + 225426176] * v69));
        v71 = 396LL * (int)dword_140404A6C[v10 + 132401002];
        v72 = *(float *)&dword_140404A6C[v71 + 225426066];
        v73 = *(float *)&dword_140404A6C[v71 + 225426067];
        v74 = *(float *)&dword_140404A6C[v10 + 132400665] - v72;
        v75 = *(float *)&dword_140404A6C[v71 + 225426068];
        v76 = *(float *)&dword_140404A6C[v10 + 132400666] - v73;
        v77 = *(float *)&dword_140404A6C[v10 + 132400664] - v75;
        v78 = *(float *)&dword_140404A6C[v10 + 132400667] - v75;
        v79 = *(float *)&dword_140404A6C[v10 + 132400662] - v72;
        v80 = *(float *)&dword_140404A6C[v10 + 132400663] - v73;
        v81 = 0;
        *(float *)&dword_140404A6C[v10 + 132401007] = -fminf(
                                                         (float)((float)(*(float *)&dword_140404A6C[v71 + 225426175]
                                                                       * v76)
                                                               + (float)(*(float *)&dword_140404A6C[v71 + 225426174]
                                                                       * v74))
                                                       + (float)(*(float *)&dword_140404A6C[v71 + 225426176] * v78),
                                                         (float)((float)(*(float *)&dword_140404A6C[v71 + 225426175]
                                                                       * v80)
                                                               + (float)(*(float *)&dword_140404A6C[v71 + 225426174]
                                                                       * v79))
                                                       + (float)(*(float *)&dword_140404A6C[v71 + 225426176] * v77));
        v82 = 396LL * (int)dword_140404A6C[v10 + 132401002];
        *(_QWORD *)&a3 = dword_140404A6C[v82 + 225426174];
        a2 = 0;
        *(float *)&a3 = *(float *)&a3 * v74;
        *(float *)&dword_140404A6C[v10 + 132401009] = -fmaxf(
                                                         (float)((float)(*(float *)&dword_140404A6C[v82 + 225426175]
                                                                       * v80)
                                                               + (float)(*(float *)&dword_140404A6C[v82 + 225426174]
                                                                       * v79))
                                                       + (float)(*(float *)&dword_140404A6C[v82 + 225426176] * v77),
                                                         (float)((float)(*(float *)&dword_140404A6C[v82 + 225426175]
                                                                       * v76)
                                                               + *(float *)&a3)
                                                       + (float)(*(float *)&dword_140404A6C[v82 + 225426176] * v78));
        v83 = (int)dword_140404A6C[v10 + 132401002];
        v84 = 396 * v83;
        dword_140404A6C[v10 + 132401010] = 0;
        v85 = dword_140404A6C[396 * v83 + 225426061];
        if ( v85 > 0 )
        {
          v86 = 396LL * (int)dword_140404A6C[v10 + 132401002];
          v87 = (float *)&dword_140404A6C[v86 + 225426065];
          v88 = *(float *)&dword_140404A6C[v86 + 225426178];
          v89 = *(float *)&dword_140404A6C[v86 + 225426177];
          v90 = *(float *)&dword_140404A6C[v86 + 225426179];
          do
          {
            v91 = *(v87 - 2);
            v92 = *(v87 - 1);
            v93 = *v87;
            if ( fabs(
                   (float)((float)((float)(*(float *)&dword_140404A6C[v10 + 132400663] - v92) * v88)
                         + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400662] - v91) * v89))
                 + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400664] - *v87) * v90)) < 2.0 )
            {
              LODWORD(a2) = a2 | (1 << v81);
              dword_140404A6C[v10 + 132401010] = a2;
            }
            *(_QWORD *)&a3 = COERCE_UNSIGNED_INT(
                               fabs(
                                 (float)((float)((float)(*(float *)&dword_140404A6C[v10 + 132400665] - v91) * v89)
                                       + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400666] - v92) * v88))
                               + (float)((float)(*(float *)&dword_140404A6C[v10 + 132400667] - v93) * v90)));
            if ( *(float *)&a3 < 2.0 )
            {
              LODWORD(a2) = a2 | (1 << v81);
              dword_140404A6C[v10 + 132401010] = a2;
            }
            ++v81;
            v87 += 7;
          }
          while ( v81 < v85 );
        }
        v94 = (int)dword_140404A6C[v84 + 225426186];
        if ( (int)v94 < 256 )
        {
          dword_140404A6C[396 * v83 + 225426187 + v94] = v6;
          ++dword_140404A6C[v84 + 225426186];
          v3 = dword_140404A6C[225426046];
          v8 = dword_140404A6C[225391228];
        }
LABEL_87:
        ++v6;
        ++v9;
      }
      while ( v6 < v7 );
    }
  }
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FE95260: using guessed type unsigned int;
// 175FD145C: using guessed type unsigned int;
// 175FF3464: using guessed type unsigned int;

//----- (000000014018C250) ----------------------------------------------------
void            sub_14018C250(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  signed int v3; // eax
  unsigned int *v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax

  if ( a1 != -1 )
  {
    v1 = 396LL * a1;
    v2 = (int)dword_140404A6C[v1 + 225426186];
    if ( v2 > 0 )
    {
      v3 = dword_140404A6C[132384229];
      v4 = &dword_140404A6C[v1 + 225426187];
      do
      {
        v5 = v3;
        v6 = *v4++;
        dword_140404A6C[v5 + 132384230] = v6;
        v3 = ++dword_140404A6C[132384229];
        --v2;
      }
      while ( v2 );
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FD06200: using guessed type unsigned int;

//----- (000000014018C2B0) ----------------------------------------------------
void            sub_14018C2B0(_DWORD *a1, int *a2)
{
  int v2; // xmm5_4
  int v3; // xmm2_4
  int v4; // xmm4_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm3_4
  int v8; // xmm6_4
  int v9; // xmm7_4

  v2 = *a2;
  v3 = a2[3];
  v4 = a2[4];
  v5 = a2[6];
  v6 = a2[7];
  v7 = a2[8];
  v8 = a2[5];
  v9 = a2[1];
  a1[6] = a2[2];
  a1[3] = v9;
  a1[7] = v8;
  *a1 = v2;
  a1[1] = v3;
  a1[2] = v5;
  a1[4] = v4;
  a1[5] = v6;
  a1[8] = v7;
}


//----- (000000014018C340) ----------------------------------------------------
void            sub_14018C340(int a1)
{
  __m128 v2; // xmm10
  __m128 v3; // xmm11
  float v4; // xmm12_4
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  _DWORD sr_branch_position[3];
  float sr_branch_axis[3];
  _DWORD sr_branch_position2[3];
  _DWORD sr_branch_matrix[9];
  _DWORD sr_branch_matrix2[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018C340[192];
#define v8 (*(__int64 (*))(void *)(sr_frame_14018C340 + 0)) /* [rsp+8h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_14018C340 + 176)) /* [rsp+B8h] */

  (*(__int128 *)sr_branch_matrix) = xmmword_140278D30;
  dword_140404A6C[177167565] = 0;
  (*(__int128 *)(sr_branch_matrix + 4)) = xmmword_140278D30;
  dword_140404A6C[177495247] = 0;
  sr_branch_matrix[8] = 1065353216;
  dword_140404A6C[178519250] = 0;
  (*(unsigned __int64 *)sr_branch_position) = 0;
  (*(float *)&sr_branch_position[2]) = 0.0;
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1056964608), 0.375, 4.0);
  v2 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD((*(__int128 *)sr_branch_matrix)))));
  v3 = ((__m128)_mm_cvtsi32_si128((int)((*(__int128 *)(sr_branch_matrix + 4)))));
  (*(__int128 *)(sr_branch_matrix2 + 4)) = (*(__int128 *)(sr_branch_matrix + 4));
  SR_VEC_LANES(128, v2, f32)[0] = *((float *)&(*(__int128 *)sr_branch_matrix) + 3) * 4.0;
  sr_branch_axis[1] = 0.0;
  SR_VEC_LANES(128, v3, f32)[0] = *(float *)&(*(__int128 *)(sr_branch_matrix + 4)) * 4.0;
  v4 = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  (*(unsigned __int64 *)sr_branch_position) = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v2, v3), u64)[0];
  (*(unsigned __int64 *)sr_branch_position2) = (*(unsigned __int64 *)sr_branch_position);
  (*(__int128 *)sr_branch_matrix2) = (*(__int128 *)sr_branch_matrix);
  sr_branch_matrix2[8] = sr_branch_matrix[8];
  (*(float *)&sr_branch_position[2]) = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  (*(_DWORD *)&sr_branch_axis[2]) = 1064852291;
  sr_branch_axis[0] = 0.24253564;
  (*(float *)&sr_branch_position2[2]) = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix), sr_branch_axis, sr_export_float_lane_container(1040187392));
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix2), sr_branch_axis, sr_export_float_lane_container(3210739712LL));
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1052770304), 0.25, 3.0);
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position2), (float *)&(*(__int128 *)sr_branch_matrix2), sr_export_float_lane_container(1044381696), 0.125, 3.0);
  v5 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD((*(__int128 *)sr_branch_matrix)))));
  SR_VEC_LANES(128, v5, f32)[0] = (float)(*((float *)&(*(__int128 *)sr_branch_matrix) + 3) * 3.0) + SR_VEC_LANES(128, v2, f32)[0];
  v6 = ((__m128)_mm_cvtsi32_si128((int)((*(__int128 *)(sr_branch_matrix + 4)))));
  (*(__int128 *)(sr_branch_matrix2 + 4)) = (*(__int128 *)(sr_branch_matrix + 4));
  SR_VEC_LANES(128, v6, f32)[0] = (float)(*(float *)&(*(__int128 *)(sr_branch_matrix + 4)) * 3.0) + SR_VEC_LANES(128, v3, f32)[0];
  (*(float *)&sr_branch_position[2]) = (float)(*((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 3.0) + v4;
  (*(__int128 *)sr_branch_matrix2) = (*(__int128 *)sr_branch_matrix);
  (*(unsigned __int64 *)sr_branch_position) = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v5, v6), u64)[0];
  (*(unsigned __int64 *)sr_branch_position2) = (*(unsigned __int64 *)sr_branch_position);
  sr_branch_matrix2[8] = sr_branch_matrix[8];
  (*(_DWORD *)&sr_branch_axis[2]) = -1087044365;
  sr_branch_axis[0] = 0.70710677;
  (*(float *)&sr_branch_position2[2]) = (*(float *)&sr_branch_position[2]);
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix), sr_branch_axis, sr_export_float_lane_container(1040187392));
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix2), sr_branch_axis, sr_export_float_lane_container(3210739712LL));
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1048576000), 0.1875, 2.0);
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position2), (float *)&(*(__int128 *)sr_branch_matrix2), sr_export_float_lane_container(1040187392), 0.09375, 2.0);
  sub_1401449C0(a1, 1);
  return;
}
#undef v8
#undef v21

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014018C6A0) ----------------------------------------------------
__int64            sub_14018C6A0(float *a1, float *a2, double a3, float a4, float a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // r14d
  __m128 v9; // xmm0
  __int64 v10; // rbp
  float v11; // xmm12_4
  __m128d v13; // xmm8
  __m128 v14; // xmm0
  double v15; // xmm7_8
  __int64 v16; // rcx
  double v17; // xmm6_8
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  double v21; // xmm2_8
  float v22; // xmm1_4
  float v23; // xmm5_4
  unsigned int v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  unsigned int v27; // eax
  float v28; // xmm3_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  unsigned int v32; // xmm5_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  unsigned int v35; // ebx
  __m128d v36; // xmm7
  __int64 v37; // rdx
  __m128 v38; // xmm0
  double v39; // xmm6_8
  __int64 v40; // rcx
  double v41; // xmm5_8
  float v42; // xmm4_4
  float v43; // xmm3_4
  float v44; // xmm1_4
  float v45; // xmm4_4
  unsigned int v46; // xmm3_4
  float v47; // xmm4_4
  __int64 v48; // rcx
  float v49; // xmm3_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm12_4
  float v54; // xmm13_4
  int v55; // eax
  unsigned int v56; // ebx
  int v57; // r11d
  __int64 v58; // rbp
  unsigned int v59; // xmm1_4
  unsigned int v60; // xmm0_4
  unsigned int v61; // xmm12_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  __int64 v64; // rcx
  float v65; // xmm13_4
  unsigned int v66; // edi
  unsigned int v67; // xmm1_4
  unsigned int v68; // xmm0_4
  unsigned int v69; // xmm13_4
  unsigned int v70; // esi
  __int64 result; // rax
  unsigned int v72; // edx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned int v77; // edx
  __int64 v78; // rax
  unsigned int v79; // r10d
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax

  v5 = dword_140404A6C[177167565];
  v8 = dword_140404A6C[177167565];
  v9 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  v10 = 3;
  v11 = *(float *)&a3;
  do
  {
    v13 = _mm_cvtps_pd(v9);
    v14 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v13, f64)[0], (__int64)a2, a3));
    v15 = *(double *)SR_VEC_LANES(128, v14, u64);
    v16 = (int)(3 * v5);
    v17 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v14, (__m128d)v14, 1), f64)[0];
    v18 = v11 * v17;
    v19 = -(v11 * *(double *)SR_VEC_LANES(128, v14, u64));
    v20 = v18;
    HIDWORD(v21) = 0;
    v22 = (float)(v18 * a2[1]) + a1[1];
    v23 = (float)(v18 * a2[2]) + a1[2];
    *(float *)&v24 = (float)((float)(v20 * *a2) + *a1) + (float)(v19 * a2[6]);
    SR_VEC_LANES(128, v14, f32)[0] = v19 * a2[7];
    v25 = v19 * a2[8];
    dword_140404A6C[v16 + 177167567] = v24;
    *(float *)&dword_140404A6C[v16 + 177167568] = v22 + SR_VEC_LANES(128, v14, f32)[0];
    *(float *)&dword_140404A6C[v16 + 177167569] = v23 + v25;
    v26 = a4 * v17;
    ++dword_140404A6C[177167565];
    v27 = 3 * dword_140404A6C[177167565];
    v28 = -(a4 * v15);
    v29 = (float)((float)(a5 * a2[3]) + *a1) + (float)(v26 * *a2);
    SR_VEC_LANES(128, v14, f32)[0] = v26 * a2[1];
    v30 = v26 * a2[2];
    v31 = (float)((float)(a5 * a2[4]) + a1[1]) + SR_VEC_LANES(128, v14, f32)[0];
    *(float *)&v32 = v29 + (float)(v28 * a2[6]);
    v33 = v28 * a2[7];
    SR_VEC_LANES(128, v14, f32)[0] = (float)(a5 * a2[5]) + a1[2];
    v34 = v28 * a2[8];
    *(float *)&v21 = v31 + v33;
    dword_140404A6C[v27 + 177167567] = v32;
    dword_140404A6C[v27 + 177167568] = LODWORD(v21);
    *(float *)&dword_140404A6C[v27 + 177167569] = (float)(SR_VEC_LANES(128, v14, f32)[0] + v30) + v34;
    SR_VEC_LANES(128, v13, f64)[0] = SR_VEC_LANES(128, v13, f64)[0] + 1.047197551196598;
    v35 = ++dword_140404A6C[177167565];
    v36 = _mm_cvtps_pd(_mm_cvtpd_ps(v13));
    v38 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v36, f64)[0], v37, v21));
    v39 = *(double *)SR_VEC_LANES(128, v38, u64);
    v40 = (int)(3 * v35);
    v41 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v38, (__m128d)v38, 1), f64)[0];
    *(float *)&v21 = -(v11 * *(double *)SR_VEC_LANES(128, v38, u64));
    v42 = v11 * v41;
    v43 = (float)(v42 * *a2) + *a1;
    v44 = (float)(v42 * a2[1]) + a1[1];
    v45 = (float)(v42 * a2[2]) + a1[2];
    *(float *)&v46 = v43 + (float)(*(float *)&v21 * a2[6]);
    SR_VEC_LANES(128, v38, f32)[0] = *(float *)&v21 * a2[7];
    *(float *)&v21 = *(float *)&v21 * a2[8];
    dword_140404A6C[v40 + 177167567] = v46;
    *(float *)&dword_140404A6C[v40 + 177167568] = v44 + SR_VEC_LANES(128, v38, f32)[0];
    HIDWORD(a3) = 0;
    *(float *)&dword_140404A6C[v40 + 177167569] = v45 + *(float *)&v21;
    v47 = a4 * v41;
    ++dword_140404A6C[177167565];
    v48 = 3 * dword_140404A6C[177167565];
    v49 = -(a4 * v39);
    *(float *)&v41 = (float)((float)(a5 * a2[3]) + *a1) + (float)(v47 * *a2);
    SR_VEC_LANES(128, v38, f32)[0] = v47 * a2[1];
    v50 = v47 * a2[2];
    *(float *)&a3 = (float)((float)(a5 * a2[4]) + a1[1]) + SR_VEC_LANES(128, v38, f32)[0];
    *(float *)&v41 = *(float *)&v41 + (float)(v49 * a2[6]);
    v51 = v49 * a2[7];
    SR_VEC_LANES(128, v38, f32)[0] = (float)(a5 * a2[5]) + a1[2];
    v52 = v49 * a2[8];
    dword_140404A6C[v48 + 177167567] = LODWORD(v41);
    *(float *)&a3 = *(float *)&a3 + v51;
    dword_140404A6C[v48 + 177167568] = LODWORD(a3);
    *(float *)&dword_140404A6C[v48 + 177167569] = (float)(SR_VEC_LANES(128, v38, f32)[0] + v50) + v52;
    v5 = dword_140404A6C[177167565] + 1;
    SR_VEC_LANES(128, v36, f64)[0] = SR_VEC_LANES(128, v36, f64)[0] + 1.047197551196598;
    ++dword_140404A6C[177167565];
    v9 = _mm_cvtpd_ps(v36);
    --v10;
  }
  while ( v10 );
  v53 = -v11;
  v54 = a4 + a5;
  v55 = 3 * v5;
  v56 = v8 + 12;
  v57 = 2;
  v58 = 2;
  *(float *)&v59 = (float)(v53 * a2[3]) + *a1;
  *(float *)&v60 = (float)(v53 * a2[4]) + a1[1];
  *(float *)&v61 = (float)(v53 * a2[5]) + a1[2];
  dword_140404A6C[v55 + 177167567] = v59;
  dword_140404A6C[v55 + 177167568] = v60;
  dword_140404A6C[v55 + 177167569] = v61;
  ++dword_140404A6C[177167565];
  v62 = v54 * a2[3];
  v63 = v54 * a2[4];
  v64 = 3 * dword_140404A6C[177167565];
  v65 = v54 * a2[5];
  v66 = v8 + 2;
  *(float *)&v67 = v62 + *a1;
  *(float *)&v68 = v63 + a1[1];
  *(float *)&v69 = v65 + a1[2];
  v70 = v8 + 13;
  dword_140404A6C[v64 + 177167567] = v67;
  dword_140404A6C[v64 + 177167568] = v68;
  dword_140404A6C[v64 + 177167569] = v69;
  ++dword_140404A6C[177167565];
  LODWORD(result) = dword_140404A6C[177495247];
  do
  {
    dword_140404A6C[3 * (_DWORD)result + 177495248] = v66 - 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 - 1;
    v72 = v8 + 2 * ((v57 - 1) % 6);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v72 + 1;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v73 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v73 + 178011345] = 1052770304;
    dword_140404A6C[v73 + 178011346] = 1052770304;
    dword_140404A6C[v73 + 178011347] = 1052770304;
    dword_140404A6C[v73 + 178011348] = 1052770304;
    dword_140404A6C[v73 + 178011349] = 1052770304;
    dword_140404A6C[v73 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 - 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v72 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v72;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v74 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v74 + 178011345] = 1052770304;
    dword_140404A6C[v74 + 178011346] = 1052770304;
    dword_140404A6C[v74 + 178011347] = 1052770304;
    dword_140404A6C[v74 + 178011348] = 1052770304;
    dword_140404A6C[v74 + 178011349] = 1052770304;
    dword_140404A6C[v74 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 - 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v72;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v75 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v75 + 178011345] = 1052770304;
    dword_140404A6C[v75 + 178011346] = 1052770304;
    dword_140404A6C[v75 + 178011347] = 1052770304;
    dword_140404A6C[v75 + 178011348] = 1052770304;
    dword_140404A6C[v75 + 178011349] = 1052770304;
    dword_140404A6C[v75 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v72 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v76 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v76 + 178011345] = 1052770304;
    dword_140404A6C[v76 + 178011346] = 1052770304;
    dword_140404A6C[v76 + 178011347] = 1052770304;
    dword_140404A6C[v76 + 178011348] = 1052770304;
    dword_140404A6C[v76 + 178011349] = 1052770304;
    dword_140404A6C[v76 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 + 1;
    v77 = v8 + 2 * (v57 % 6);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77 + 1;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v78 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v78 + 178011345] = 1052770304;
    dword_140404A6C[v78 + 178011346] = 1052770304;
    dword_140404A6C[v78 + 178011347] = 1052770304;
    dword_140404A6C[v78 + 178011348] = 1052770304;
    dword_140404A6C[v78 + 178011349] = 1052770304;
    dword_140404A6C[v78 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v77 + 1;
    v79 = v66 + 3;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v80 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v80 + 178011345] = 1052770304;
    dword_140404A6C[v80 + 178011346] = 1052770304;
    dword_140404A6C[v80 + 178011347] = 1052770304;
    dword_140404A6C[v80 + 178011348] = 1052770304;
    dword_140404A6C[v80 + 178011349] = 1052770304;
    dword_140404A6C[v80 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v77;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v81 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v81 + 178011345] = 1052770304;
    dword_140404A6C[v81 + 178011346] = 1052770304;
    dword_140404A6C[v81 + 178011347] = 1052770304;
    dword_140404A6C[v81 + 178011348] = 1052770304;
    dword_140404A6C[v81 + 178011349] = 1052770304;
    dword_140404A6C[v81 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v77 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v82 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v82 + 178011345] = 1052770304;
    dword_140404A6C[v82 + 178011346] = 1052770304;
    dword_140404A6C[v82 + 178011347] = 1052770304;
    dword_140404A6C[v82 + 178011348] = 1052770304;
    dword_140404A6C[v82 + 178011349] = 1052770304;
    dword_140404A6C[v82 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 + 3;
    v83 = v8 + 2 * ((v57 + 1) % 6);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v83 + 1;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v84 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v84 + 178011345] = 1052770304;
    dword_140404A6C[v84 + 178011346] = 1052770304;
    dword_140404A6C[v84 + 178011347] = 1052770304;
    dword_140404A6C[v84 + 178011348] = 1052770304;
    dword_140404A6C[v84 + 178011349] = 1052770304;
    dword_140404A6C[v84 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v83 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v83;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v85 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v85 + 178011345] = 1052770304;
    dword_140404A6C[v85 + 178011346] = 1052770304;
    dword_140404A6C[v85 + 178011347] = 1052770304;
    dword_140404A6C[v85 + 178011348] = 1052770304;
    dword_140404A6C[v85 + 178011349] = 1052770304;
    dword_140404A6C[v85 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v83;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v86 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v86 + 178011345] = 1052770304;
    dword_140404A6C[v86 + 178011346] = 1052770304;
    dword_140404A6C[v86 + 178011347] = 1052770304;
    dword_140404A6C[v86 + 178011348] = 1052770304;
    dword_140404A6C[v86 + 178011349] = 1052770304;
    dword_140404A6C[v86 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    v57 += 3;
    v66 += 6;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v83 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v79;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v87 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v87 + 178011345] = 1052770304;
    dword_140404A6C[v87 + 178011346] = 1052770304;
    dword_140404A6C[v87 + 178011347] = 1052770304;
    dword_140404A6C[v87 + 178011348] = 1052770304;
    dword_140404A6C[v87 + 178011349] = 1052770304;
    dword_140404A6C[v87 + 178011350] = 1052770304;
    result = ++dword_140404A6C[177495247];
    --v58;
  }
  while ( v58 );
  return result;
}

// 14018C74B: variable 'a2' is possibly undefined
// 14018C8BD: variable 'v37' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (000000014018D440) ----------------------------------------------------
__int64            sub_14018D440(float *a1, int a2)
{
  char v3; // bl
  signed int v4; // r8d
  __int64 result; // rax
  float v6; // xmm1_4
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  sub_140115AE0(&v7, a2);
  v4 = (unsigned int)(1 << v3) >> 1;
  result = v7 & (unsigned int)v4;
  v6 = (float)(v7 & (v4 - 1)) * (6.28318530718 / (float)v4);
  *a1 = v6;
  if ( (_DWORD)result == v4 )
    *a1 = -v6;
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014018D510) ----------------------------------------------------
__int64            sub_14018D510(_DWORD *a1, int a2, int a3)
{
  unsigned int v6; // r8d
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  sub_140115AE0(&v9, 1);
  if ( v9 )
  {
    sub_140115AE0(&v9, 1);
    if ( v9 )
    {
      return sub_140115AE0(a1, a3);
    }
    else
    {
      sub_140115AE0(&v9, 9);
      v8 = v9;
      if ( (v9 & 0x100) != 0 )
        v8 = v9 | 0xFFFFFE00;
      result = v8 + a2;
      *a1 = result;
    }
  }
  else
  {
    sub_140115AE0(&v9, 4);
    v6 = v9;
    if ( (v9 & 8) != 0 )
      v6 = v9 | 0xFFFFFFF0;
    result = v6 + a2;
    *a1 = result;
  }
  return result;
}


//----- (000000014018D5E0) ----------------------------------------------------
__int64            sub_14018D5E0(int *a1, int a2, int a3)
{
  __int64 result; // rax
  int v7; // ebp
  int v8; // edx
  int v9; // [rsp+48h] [rbp+20h] BYREF

  if ( dword_140404A6C[179992056] )
  {
    result = sub_140115AE0(&v9, 1);
    if ( !v9 )
    {
      *a1 = a2;
      return result;
    }
  }
  sub_140115AE0(&v9, 1);
  if ( v9 )
  {
    sub_140115AE0(&v9, 1);
    if ( v9 )
      return sub_140115D20(a1, a3);
    v7 = dword_140404A6C[157679550];
  }
  else
  {
    v7 = dword_140404A6C[157679549];
  }
  sub_140115AE0(&v9, v7);
  if ( (v9 & (1 << (v7 - 1))) == 1 << (v7 - 1) )
    v8 = v9 | (-1 << v7);
  else
    v8 = v9;
  *a1 = v8 + a2;
  result = (unsigned int)(v8 + 128);
  if ( (unsigned int)result <= 0xFF )
  {
    ++dword_140404A6C[(unsigned __int8)v8 + 179992058];
    return (__int64)&dword_140404A6C[179668285];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 165D84960: using guessed type unsigned int;
// 165D84964: using guessed type unsigned int;

//----- (000000014018D6D0) ----------------------------------------------------
__int64            sub_14018D6D0(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned int v7; // xmm4_4
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  __int64 result; // rax
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 1760LL * a2;
  v4 = a1;
  dword_140404A6C[v3 + 278846107] = dword_140404A6C[v3 + 278846102];
  dword_140404A6C[v3 + 278846108] = dword_140404A6C[v3 + 278846103];
  dword_140404A6C[v3 + 278846109] = dword_140404A6C[v3 + 278846104];
  dword_140404A6C[v3 + 278846110] = dword_140404A6C[v3 + 278846105];
  dword_140404A6C[v3 + 278846102] = dword_140404A6C[283831474];
  sub_140115AE0(&v11, 8);
  v5 = 318464LL * (int)v11 + 36 * v2;
  v6 = 318464 * v4 + 36 * v2;
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358015] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358015] + v5),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358016] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358016] + v5),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358017] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358017] + v5),
    28);
  *(float *)&v7 = (float)((float)*(int *)((char *)&dword_140404A6C[137358015] + v6) * 0.00024414062) - 4096.0;
  *(float *)&v8 = (float)*(int *)((char *)&dword_140404A6C[137358016] + v6) * 0.00024414062;
  *(float *)&v9 = (float)((float)*(int *)((char *)&dword_140404A6C[137358017] + v6) * 0.00024414062) - 4096.0;
  dword_140404A6C[v3 + 278845916] = v7;
  dword_140404A6C[v3 + 278845917] = v8;
  dword_140404A6C[v3 + 278845918] = v9;
  dword_140404A6C[v3 + 278846103] = v7;
  dword_140404A6C[v3 + 278846104] = dword_140404A6C[v3 + 278845917];
  dword_140404A6C[v3 + 278846105] = dword_140404A6C[v3 + 278845918];
  if ( !dword_140404A6C[v3 + 278846106] )
  {
    dword_140404A6C[v3 + 278846108] = dword_140404A6C[v3 + 278845916];
    dword_140404A6C[v3 + 278846109] = dword_140404A6C[v3 + 278845917];
    dword_140404A6C[v3 + 278846110] = dword_140404A6C[v3 + 278845918];
    dword_140404A6C[v3 + 278846107] = dword_140404A6C[283831474];
  }
  dword_140404A6C[v3 + 278846106] = 1;
  sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[137358018] + v6), 2);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358019] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358019] + v5),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358020] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358020] + v5),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358021] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358021] + v5),
    14);
  sub_140191F90((float *)&dword_140404A6C[v3 + 278845934], (int *)((char *)&dword_140404A6C[137358018] + v6));
  result = dword_140404A6C[v3 + 278845898];
  if ( (_DWORD)result == 18 )
  {
    sub_140115AE0(&dword_140404A6C[v3 + 278846062], 4);
    sub_140115AE0(&dword_140404A6C[v3 + 278846061], 4);
    sub_140115AE0(&dword_140404A6C[v3 + 278846063], 30);
    result = dword_140404A6C[v3 + 278845898];
  }
  if ( (_DWORD)result == 26 )
  {
    sub_140115AE0(&dword_140404A6C[v3 + 278846112], 1);
    result = dword_140404A6C[v3 + 278845898];
  }
  if ( (_DWORD)result == 39 )
  {
    sub_140115AE0(&v11, 12);
    result = v11;
    if ( v11 == 4095 )
      result = 0xFFFFFFFFLL;
    dword_140404A6C[v3 + 278846113] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (000000014018D9F0) ----------------------------------------------------
__int64            sub_14018D9F0(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 7166LL * a1;
  sub_140115AE0(&v4, 8);
  v2 = v4;
  if ( v4 == 255 )
    v2 = -1;
  dword_140404A6C[v1 + 280651305] = v2;
  sub_140115AE0(&dword_140404A6C[v1 + 280658439], 1);
  sub_140115AE0(&dword_140404A6C[v1 + 280658440], 5);
  sub_140115AE0(&dword_140404A6C[v1 + 280658441], 3);
  sub_140115AE0(&dword_140404A6C[v1 + 280658443], 4);
  sub_140115AE0(&dword_140404A6C[v1 + 280658444], 3);
  sub_140115AE0(&dword_140404A6C[v1 + 280658442], 4);
  sub_140115AE0(&dword_140404A6C[v1 + 280658445], 5);
  sub_140115AE0(&dword_140404A6C[v1 + 280658446], 4);
  sub_140115AE0(&dword_140404A6C[v1 + 280658447], 4);
  sub_140115AE0(&dword_140404A6C[v1 + 280658449], 4);
  return sub_140115AE0(&dword_140404A6C[v1 + 280658450], 2);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014018DB20) ----------------------------------------------------
__int64            sub_14018DB20(int a1)
{
  __int64 v1; // rdi
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1760LL * a1;
  sub_140115AE0(&dword_140404A6C[v1 + 278845898], 8);
  sub_140115AE0(&v5, 10);
  v2 = v5;
  if ( v5 == 1023 )
    v2 = -1;
  dword_140404A6C[v1 + 278845903] = v2;
  sub_140115AE0(&v5, 10);
  v3 = v5;
  if ( v5 == 1023 )
    v3 = -1;
  dword_140404A6C[v1 + 278845902] = v3;
  result = sub_140115AE0(&dword_140404A6C[v1 + 278845904], 4);
  if ( dword_140404A6C[v1 + 278845898] == 39 )
  {
    sub_140115AE0(&dword_140404A6C[v1 + 278846111], 5);
    return sub_140115AE0(&dword_140404A6C[v1 + 278846112], 5);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014018DBF0) ----------------------------------------------------
__int64            sub_14018DBF0(int a1)
{
  __int64 v1; // rsi
  int *v2; // r15
  __int64 result; // rax
  int v4; // eax
  _DWORD *v5; // r12
  int v6; // r13d
  _DWORD *v7; // rbx
  int *v8; // r15
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edi
  char *v12; // rbx
  int v13; // r14d
  unsigned int v14; // eax
  signed int v15; // ebx
  int v16; // ebp
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // xmm0_8
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  _DWORD *v25; // r15
  unsigned int v26; // eax
  int v27; // edx
  __int64 v28; // r10
  int v29; // r8d
  char v30; // r9
  int v31; // eax
  unsigned int *v32; // r15
  int v33; // r8d
  unsigned int v34; // r10d
  char v35; // r9
  int v36; // eax
  _DWORD *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // xmm0_8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // xmm0_8
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // r9d
  char v68; // r8
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // xmm0_8
  __int64 v72; // rax
  __int64 v73; // xmm0_8
  __int64 v74; // rax
  __int64 v75; // rax
  signed int v76; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018DBF0[32];
#define v77 (*(unsigned int (*))(void *)(sr_frame_14018DBF0 + 0)) /* [rsp+70h] */
#define v78 (*(_DWORD * (*))(void *)(sr_frame_14018DBF0 + 8)) /* [rsp+78h] */
#define v79 (*(char * (*))(void *)(sr_frame_14018DBF0 + 16)) /* [rsp+80h] */
#define v80 (*(_DWORD * (*))(void *)(sr_frame_14018DBF0 + 24)) /* [rsp+88h] */

  v1 = (__int64)a1 << 7;
  v2 = (int *)((char *)&dword_140404A6C[297756285] + v1);
  v79 = (char *)&dword_140404A6C[297756285] + v1;
  result = sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756285] + v1), 6);
  if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1) != 23 )
  {
    sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756286] + v1), 28);
    v4 = *v2;
    v5 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v1);
    v6 = 10;
    if ( !*v2 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 4);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756294] + v1), 10);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756287] + v1), 4, 3);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756290] + v1), 4, 3);
      v4 = *v2;
    }
    if ( v4 == 1 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 4);
      v7 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      v78 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756294] + v1), 6);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756287] + v1), 4, 3);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756290] + v1), 4, 3);
      v4 = *v2;
    }
    else
    {
      v7 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      v78 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
    }
    if ( v4 == 2 )
    {
      v8 = (int *)((char *)&dword_140404A6C[297756293] + v1);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 6);
      sub_140115AE0(v7, 4);
      sub_140115AE0(&v77, 10);
      v9 = v77;
      if ( v77 == 1023 )
        v9 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v9;
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756296] + v1), 4);
      v10 = *v8;
      v11 = 0;
      if ( *v8 <= 0 )
      {
        LOBYTE(v13) = v77;
      }
      else
      {
        v12 = (char *)&dword_140404A6C[297756301] + v1;
        do
        {
          sub_140115AE0(&v77, 7);
          LOBYTE(v13) = v77;
          ++v11;
          *v12++ = v77;
          v10 = *v8;
        }
        while ( v11 < *v8 );
        v7 = v78;
      }
      v2 = (int *)v79;
      *((_BYTE *)&dword_140404A6C[297756301] + v1 + v10) = 0;
      v4 = *v2;
    }
    else
    {
      LOBYTE(v13) = v77;
    }
    if ( v4 == 3 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 10);
      sub_140115AE0(v7, 8);
      sub_140115AE0(&v77, 4);
      v14 = v77;
      if ( v77 == 15 )
        v14 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v14;
    }
    if ( *v2 == 4 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 10);
      sub_140115AE0(v7, 4);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756295] + v1), 10);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v18 = v15;
          v15 += 12;
          v19 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v18);
          LODWORD(v18) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v18);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v19;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v18;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 12 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v20 = v15;
          v15 += 12;
          v21 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v20);
          LODWORD(v20) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v20);
          *(_QWORD *)((char *)&dword_140404A6C[297756290] + v1) = v21;
          *(unsigned int *)((char *)&dword_140404A6C[297756292] + v1) = v20;
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    else
    {
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    v22 = *v2;
    if ( *v2 == 5 )
    {
      sub_140115AE0(v5, 20);
      sub_140115AE0(&v77, 10);
      v23 = v77;
      if ( v77 == 1023 )
        v23 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = v23;
      sub_140115AE0(&v77, 10);
      v24 = v77;
      if ( v77 == 1023 )
        v24 = -1;
      v25 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v1);
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v24;
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756296] + v1), 4);
      v22 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1);
      v15 = dword_140404A6C[289317484];
      v17 = dword_140404A6C[289317485];
      v16 = dword_140404A6C[289317483];
    }
    else
    {
      v25 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v1);
    }
    if ( v22 == 6 )
    {
      sub_140115AE0(v5, 10);
      sub_140115AE0(v78, 3);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756295] + v1), 16);
      sub_140115AE0(v25, 2);
      v22 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1);
      v15 = dword_140404A6C[289317484];
      v17 = dword_140404A6C[289317485];
      v16 = dword_140404A6C[289317483];
    }
    v80 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v1);
    if ( v22 == 7 )
    {
      sub_140115AE0(v5, 16);
      sub_140115AE0(&v77, 10);
      v26 = v77;
      v27 = dword_140404A6C[289317484];
      if ( v77 == 1023 )
        v26 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = v26;
      if ( v27 < 0x10000 && v27 + 4 <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          ++v27;
          dword_140404A6C[289317485] = 0;
          dword_140404A6C[289317484] = v27;
        }
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v27);
        dword_140404A6C[289317484] = v27 + 4;
      }
      sub_140115AE0(v25, 24);
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      v28 = 0;
      v15 = dword_140404A6C[289317484];
      do
      {
        v29 = 7;
        if ( v15 < 0x10000 && v15 <= v16 )
        {
          v13 = 0;
          v30 = 0;
          while ( 1 )
          {
            v31 = 8 - v17;
            v13 |= (~(-1 << v29)
                  & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v30;
            if ( v29 < (unsigned int)(8 - v17) )
              break;
            if ( v29 == v31 )
            {
              dword_140404A6C[289317484] = ++v15;
              v17 = 0;
              goto LABEL_60;
            }
            ++v15;
            v17 = 0;
            v29 -= v31;
            dword_140404A6C[289317484] = v15;
            v30 += v31;
            dword_140404A6C[289317485] = 0;
            if ( v29 <= 0 )
              goto LABEL_61;
          }
          v17 += v29;
LABEL_60:
          dword_140404A6C[289317485] = v17;
        }
LABEL_61:
        *((_BYTE *)&dword_140404A6C[297756301] + v1 + v28++) = v13;
      }
      while ( v28 < 31 );
      v32 = (unsigned int *)v79;
      *((_BYTE *)&dword_140404A6C[297756308] + v1 + 3) = 0;
      v22 = *v32;
    }
    else
    {
      v32 = (unsigned int *)v79;
    }
    if ( v22 == 17 )
    {
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 10);
      sub_140115AE0(v78, 1);
      v15 = dword_140404A6C[289317484];
      v33 = 8;
      v16 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
      {
        v34 = v77;
        v17 = dword_140404A6C[289317485];
      }
      else
      {
        v17 = dword_140404A6C[289317485];
        v34 = 0;
        v35 = 0;
        while ( 1 )
        {
          v36 = 8 - v17;
          v34 |= (~(-1 << v33)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v35;
          if ( v33 < (unsigned int)(8 - v17) )
            break;
          if ( v33 == v36 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
            goto LABEL_75;
          }
          ++v15;
          v17 = 0;
          v33 -= v36;
          dword_140404A6C[289317484] = v15;
          v35 += v36;
          dword_140404A6C[289317485] = 0;
          if ( v33 <= 0 )
            goto LABEL_75;
        }
        v17 += v33;
        dword_140404A6C[289317485] = v17;
      }
LABEL_75:
      if ( v34 == 255 )
        v34 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v34;
    }
    v37 = v80;
    if ( *v32 == 8 )
    {
      sub_140115AE0(v80, 8);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v38 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v38);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v39 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v39);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v40 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v40);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 9 )
    {
      sub_140115AE0(v37, 8);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v41 = v15;
          v15 += 12;
          v42 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v41);
          LODWORD(v41) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v41);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v42;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v41;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v43 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756297] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v43);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v44 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756298] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v44);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 19 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 16);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v45 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v45);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v46 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v46);
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    v47 = *v32;
    if ( *v32 == 10 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 1);
      v47 = *v32;
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    else
    {
      v37 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528);
    }
    if ( v47 == 11 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v48 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v48);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v49 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v49);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v50 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v50);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v51 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v51);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 12 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v52 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v52);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v53 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v53);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v54 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v54);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v55 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v55);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 22 )
    {
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 16);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 6);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 7);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000 )
      {
        v17 = dword_140404A6C[289317485];
      }
      else
      {
        v56 = *(int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536);
        v17 = dword_140404A6C[289317485];
        if ( (signed int)(dword_140404A6C[289317484] + v56) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          sub_1401FC920(
            (__m128i *)((char *)&dword_140404A6C[297756301] + v1),
            (     __m128i *)((char *)&dword_140404A6C[289317486] + v15),
            v56);
          v15 += v56;
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    if ( *v32 == 21 )
    {
      sub_140115AE0(v37, 10);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 4);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 4);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 30);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000
        && (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v15 = dword_140404A6C[289317484] + 1;
          v17 = 0;
          ++dword_140404A6C[289317484];
          dword_140404A6C[289317485] = 0;
        }
        v57 = v15;
        v15 += 12;
        v58 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v57);
        LODWORD(v57) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v57);
        *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v58;
        *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v57;
        dword_140404A6C[289317484] = v15;
      }
    }
    if ( *v32 == 13 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v59 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v59);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v60 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v60);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v61 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v61);
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    result = *v32;
    if ( (_DWORD)result == 14 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 20);
      result = *v32;
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    if ( (_DWORD)result == 15 )
    {
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v62 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v62);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v63 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v63);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v15;
            }
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v15);
            dword_140404A6C[289317484] = v15 + 4;
          }
        }
      }
      result = sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 2);
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    if ( *v32 == 16 )
    {
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v64 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v64);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v65 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v65);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v66 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v66);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 || v15 + 1 > v16 )
      {
LABEL_240:
        v67 = v77;
      }
      else
      {
        v67 = 0;
        v68 = 0;
        while ( 1 )
        {
          v69 = 8 - v17;
          v67 |= (~(-1 << v6)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v68;
          if ( v6 < (unsigned int)(8 - v17) )
            break;
          if ( v6 == v69 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
            goto LABEL_241;
          }
          ++v15;
          v17 = 0;
          v6 -= v69;
          dword_140404A6C[289317484] = v15;
          v68 += v69;
          dword_140404A6C[289317485] = 0;
          if ( v6 <= 0 )
            goto LABEL_241;
        }
        v17 += v6;
        dword_140404A6C[289317485] = v17;
      }
LABEL_241:
      result = 0xFFFFFFFFLL;
      if ( v67 == 1023 )
        v67 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = v67;
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 12);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v70 = v15;
          v15 += 12;
          v71 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v70);
          result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v70);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v71;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = result;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 12);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v72 = v15;
            v15 += 12;
            v73 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v72);
            result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v72);
            *(_QWORD *)((char *)&dword_140404A6C[297756290] + v1) = v73;
            *(unsigned int *)((char *)&dword_140404A6C[297756292] + v1) = result;
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 18 && v15 < 0x10000 )
    {
      result = (unsigned int)(v15 + 4);
      if ( (int)result <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v74 = v15;
        v15 += 4;
        result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v74);
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = result;
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 4);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v75 = v15;
          v15 += 4;
          result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v75);
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = result;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 4);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v15;
            }
            result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v15);
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = result;
            dword_140404A6C[289317484] = v15 + 4;
          }
        }
      }
    }
    if ( *v32 == 20 )
    {
      result = sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 8);
      v76 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        result = dword_140404A6C[289317484] + 12;
        if ( (int)result <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v76 = dword_140404A6C[289317484] + 1;
            dword_140404A6C[289317485] = 0;
            ++dword_140404A6C[289317484];
          }
          result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v76);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v76);
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = result;
          dword_140404A6C[289317484] = v76 + 12;
        }
      }
    }
  }
  return result;
}
#undef v77
#undef v78
#undef v79
#undef v80

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;

//----- (000000014018EF40) ----------------------------------------------------
__int64            sub_14018EF40(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdi
  _DWORD *v10; // rbx
  __int64 v11; // rbp
  int *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned int v15; // r15d
  __int64 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018EF40[16];
#define v17 (*(unsigned int (*))(void *)(sr_frame_14018EF40 + 0)) /* [rsp+50h] */
#define v18 (*(int (*))(void *)(sr_frame_14018EF40 + 8)) /* [rsp+58h] */

  v2 = a2;
  v3 = a1;
  sub_140115AE0(&v18, 8);
  v4 = v2;
  v5 = 7166 * v2;
  sub_140115AE0(&v17, 8);
  v6 = v17;
  if ( v17 == 255 )
    v6 = -1;
  dword_140404A6C[v5 + 280651313] = v6;
  sub_140115AE0(&dword_140404A6C[v5 + 280651314], 4);
  sub_140115AE0(&dword_140404A6C[v5 + 280651318], 1);
  sub_140115AE0(&dword_140404A6C[v5 + 280658301], 1);
  v7 = v18;
  v8 = 484 * v4 + 318464LL * v18;
  v9 = 484 * v4 + 318464 * v3;
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137297855] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297855] + v8),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137297856] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297856] + v8),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137297857] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297857] + v8),
    28);
  sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[137297858] + v9), 2);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137297859] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297859] + v8),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137297860] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297860] + v8),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137297861] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297861] + v8),
    14);
  v10 = (unsigned int *)((char *)&dword_140404A6C[137297914] + v9);
  v11 = v7 - v3;
  v12 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v9 + 553405016);
  v13 = 15;
  v14 = 79616 * v11;
  v15 = dword_140404A6C[289317485] + 8 * dword_140404A6C[289317484];
  do
  {
    sub_140115AE0(&v17, 1);
    if ( v17 )
    {
      sub_140115AE0(v12 - 1, 2);
      sub_14018D5E0(v12, v10[v14 + 1], 12);
      sub_14018D5E0(v12 + 1, v10[v14 + 2], 12);
      sub_14018D5E0(v12 + 2, v10[v14 + 3], 12);
    }
    else
    {
      *v10 = v10[v14];
      v10[1] = v10[v14 + 1];
      v10[2] = v10[v14 + 2];
      v10[3] = v10[v14 + 3];
    }
    v12 += 4;
    v10 += 4;
    --v13;
  }
  while ( v13 );
  result = dword_140404A6C[289317485] + 8 * dword_140404A6C[289317484] - v15;
  dword_140404A6C[179992571] += result;
  return result;
}
#undef v17
#undef v18

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014018F1B0) ----------------------------------------------------
__int64 sub_14018F1B0()
{
  signed int v0; // ecx
  int v1; // esi
  int v2; // ebp
  __int64 v3; // rdi
  int v4; // r8d
  int i; // edx
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  signed int v15; // ebx
  int v16; // r8d
  signed int v17; // r14d
  int v18; // edi
  char v19; // r9
  int v20; // eax
  int v21; // r8d
  char v22; // r9
  int v23; // eax
  signed int v24; // r15d
  unsigned int v25; // r12d
  __int64 v26; // r11
  unsigned int v27; // esi
  int v28; // r8d
  char v29; // r9
  int v30; // eax
  int v31; // r10d
  int v32; // r8d
  char v33; // r9
  int v34; // eax
  int v35; // r8d
  char v36; // r9
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r13
  unsigned __int64 v40; // rcx
       __m128i *v41; // rdx
  unsigned __int64 v42; // r8
  unsigned int *v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned int v46; // r10d
  unsigned int *v47; // r13
  unsigned int v48; // esi
  unsigned int v49; // r11d
  unsigned int v50; // r12d
  unsigned int v51; // r15d
  int v52; // r8d
  char v53; // r9
  int v54; // eax
  __int64 v55; // r15
  int v56; // r8d
  char v57; // r9
  int v58; // eax
  __int64 v59; // rbp
  int v60; // r8d
  char v61; // r9
  int v62; // eax
  unsigned int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // r15
  __int64 v66; // rax
  __int64 v67; // rbx
  float v68; // xmm1_4
  float v69; // xmm0_4
  unsigned int v70; // xmm1_4
  float *v71; // r12
  float *v72; // r14
  __int64 v73; // rbp
  char *v74; // rdi
  float v75; // xmm5_4
  float v76; // xmm4_4
  float v77; // xmm1_4
  float v78; // xmm3_4
  __int64 v79; // rax
  float v80; // xmm2_4
  float v81; // xmm0_4
  float v82; // xmm5_4
  float v83; // xmm1_4
  float v84; // xmm2_4
  float v85; // xmm3_4
  float v86; // xmm4_4
  float v87; // xmm3_4
  float v88; // xmm5_4
  float v89; // xmm4_4
  float v90; // xmm2_4
  float v91; // xmm0_4
  float v92; // xmm3_4
  float v93; // xmm1_4
  float v94; // xmm2_4
  float v95; // xmm5_4
  signed int v96; // eax
  int v97; // r8d
  char v98; // r9
  int v99; // eax
  __int64 v100; // rbx
  int v101; // r8d
  int v102; // r10d
  signed int v103; // edi
  unsigned int v104; // r9d
  char v105; // r11
  unsigned int v106; // eax
  unsigned int v107; // eax
  int v108; // r10d
  char v109; // r11
  unsigned int v110; // eax
  unsigned int v111; // eax
  signed int v112; // r13d
  signed int v113; // esi
  unsigned int v114; // ebp
  __int64 v115; // r12
  int v116; // r8d
  int v117; // r10d
  signed int v118; // ebx
  unsigned int v119; // r9d
  char v120; // r11
  unsigned int v121; // eax
  int v122; // ecx
  unsigned int v123; // eax
  int v124; // r10d
  __int64 v125; // rdi
  char v126; // r11
  unsigned int v127; // eax
  unsigned int v128; // eax
  int v129; // r10d
  char v130; // r11
  unsigned int v131; // eax
  __int64 v132; // rbx
  __int64 v133; // rbp
  __int64 v134; // r14
  __int64 v135; // rax
  __int64 v136; // rcx
  int v137; // edx
  unsigned int *v138; // rsi
  unsigned int *v139; // rbx
  float v140; // xmm0_4
  int *v141; // r15
  int *v142; // r14
  __int64 v143; // r12
  __m128i v144; // xmm1
  float v145; // xmm0_4
  __m128i v146; // xmm0
  signed int v147; // r12d
  int v148; // r14d
  signed int v149; // edi
  signed int v150; // esi
  unsigned int v151; // r9d
  int v152; // r15d
  int v153; // r8d
  signed int v154; // ebx
  __int64 v155; // r12
  unsigned int *v156; // r14
  int v157; // r10d
  char v158; // r11
  unsigned int v159; // eax
  int v160; // r10d
  char v161; // r11
  unsigned int v162; // eax
  int v163; // r10d
  char v164; // r11
  unsigned int v165; // eax
  int v166; // r10d
  char v167; // r11
  unsigned int v168; // eax
  int v169; // r10d
  char v170; // r11
  unsigned int v171; // eax
  __int64 v172; // rbx
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rsi
  __int64 v176; // rdi
  int v177; // edx
  __int64 v178; // rbx
  float v179; // xmm0_4
  float v180; // xmm1_4
  float v181; // xmm2_4
  float v182; // xmm0_4
  __m128i v183; // xmm0
  char v184; // r10
  unsigned int v185; // eax
  __int64 v186; // rbx
  __int64 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018F1B0[224];
#define v188 (*(int (*))(void *)(sr_frame_14018F1B0 + 0)) /* [rsp+20h] */
#define v189 (*(unsigned int (*))(void *)(sr_frame_14018F1B0 + 4)) /* [rsp+24h] */
#define v190 (*(unsigned int (*))(void *)(sr_frame_14018F1B0 + 8)) /* [rsp+28h] */
#define v191 (*(__int64 (*))(void *)(sr_frame_14018F1B0 + 16)) /* [rsp+30h] */
#define v192 (*(unsigned int * (*))(void *)(sr_frame_14018F1B0 + 24)) /* [rsp+38h] */
#define v193 (*(__int64 (*))(void *)(sr_frame_14018F1B0 + 40)) /* [rsp+48h] */
#define v194 (*(unsigned int (*))(void *)(sr_frame_14018F1B0 + 192)) /* [rsp+E0h] */
#define v195 (*(int (*))(void *)(sr_frame_14018F1B0 + 200)) /* [rsp+E8h] */
#define v196 (*(__int64 (*))(void *)(sr_frame_14018F1B0 + 208)) /* [rsp+F0h] */
#define v197 (*(unsigned int (*))(void *)(sr_frame_14018F1B0 + 216)) /* [rsp+F8h] */

  sub_140115AE0(&dword_140404A6C[157679549], 4);
  sub_140115AE0(&dword_140404A6C[157679550], 4);
  sub_140115AE0(&dword_140404A6C[179992055], 1);
  sub_140115AE0(&dword_140404A6C[179992056], 1);
  v0 = dword_140404A6C[289317484];
  if ( (int)dword_140404A6C[289317484] < 0x10000
    && (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
  {
    if ( (int)dword_140404A6C[289317485] > 0 )
    {
      v0 = dword_140404A6C[289317484] + 1;
      dword_140404A6C[289317485] = 0;
      ++dword_140404A6C[289317484];
    }
    dword_140404A6C[456202728] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v0);
    dword_140404A6C[289317484] = v0 + 4;
  }
  v194 = LOBYTE(dword_140404A6C[456202728]);
  sub_140115AE0(&v196, 11);
  sub_140115AE0(&v195, 11);
  v1 = v196;
  v2 = v195;
  if ( (int)v196 <= 0 )
  {
    v4 = dword_140404A6C[421835946];
  }
  else
  {
    v3 = (unsigned int)v196;
    do
    {
      sub_140115AE0(&dword_140404A6C[5 * v2 + 421835949], 10);
      sub_140115AE0(&dword_140404A6C[5 * v2 + 421835948], 2);
      sub_140115AE0(&dword_140404A6C[5 * v2 + 421835950], 3);
      sub_140115AE0(&dword_140404A6C[5 * v2 + 421835951], 10);
      sub_140115AE0(&dword_140404A6C[5 * v2 + 421835952], 16);
      v4 = dword_140404A6C[421835946];
      if ( v2 == dword_140404A6C[421835946] )
      {
        v4 = (LOWORD(dword_140404A6C[421835946]) + 1) & 0x7FF;
        dword_140404A6C[421835946] = v4;
      }
      v2 = ((_WORD)v2 + 1) & 0x7FF;
      --v3;
    }
    while ( v3 );
  }
  for ( i = dword_140404A6C[421835947]; i != v4; dword_140404A6C[421835947] = i )
  {
    v6 = 5LL * i;
    v7 = (int)dword_140404A6C[5 * i + 421835949];
    if ( !dword_140404A6C[5 * i + 421835948] )
    {
      v8 = dword_140404A6C[5 * i + 421835950];
      if ( !v8 )
        dword_140404A6C[7166 * dword_140404A6C[v6 + 421835952] + 280651303] = 1;
      if ( v8 == 1 )
      {
        v9 = 1760LL * (int)dword_140404A6C[v6 + 421835952];
        v10 = dword_140404A6C[v6 + 421835951];
        dword_140404A6C[v9 + 278845893] = 1;
        dword_140404A6C[v9 + 278845898] = v10;
        dword_140404A6C[v9 + 278846106] = 0;
        *(_QWORD *)&dword_140404A6C[v9 + 278845902] = -1;
        dword_140404A6C[v9 + 278846100] = -1;
      }
      v11 = 2 * v7;
      dword_140404A6C[2 * v11 + 421831850] = 1;
      dword_140404A6C[2 * v11 + 421831851] = dword_140404A6C[5 * dword_140404A6C[421835947] + 421835950];
      dword_140404A6C[2 * v11 + 421831852] = dword_140404A6C[5 * dword_140404A6C[421835947] + 421835952];
      i = dword_140404A6C[421835947];
      v4 = dword_140404A6C[421835946];
    }
    if ( dword_140404A6C[5 * i + 421835948] == 1 )
    {
      v12 = dword_140404A6C[4 * v7 + 421831851];
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v13 = 1760LL * (int)dword_140404A6C[4 * v7 + 421831852];
          v14 = (int)dword_140404A6C[v13 + 278846100];
          if ( (_DWORD)v14 != -1 )
            dword_140404A6C[3 * v14 + 278520517] = 0;
          dword_140404A6C[v13 + 278845893] = 0;
        }
      }
      else
      {
        dword_140404A6C[7166 * dword_140404A6C[4 * v7 + 421831852] + 280651303] = 0;
      }
      dword_140404A6C[4 * v7 + 421831850] = 0;
      LOWORD(i) = dword_140404A6C[421835947];
      v4 = dword_140404A6C[421835946];
    }
    i = ((_WORD)i + 1) & 0x7FF;
  }
  v15 = dword_140404A6C[289317484];
  v16 = 8;
  v17 = dword_140404A6C[289317483];
  if ( (int)dword_140404A6C[289317484] >= 0x10000
    || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
  {
    v18 = dword_140404A6C[289317485];
  }
  else
  {
    v18 = dword_140404A6C[289317485];
    v1 = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = 8 - v18;
      v1 |= (~(-1 << v16)
           & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v19;
      if ( v16 < (unsigned int)(8 - v18) )
        break;
      if ( v16 == v20 )
      {
        ++v15;
        v18 = 0;
        dword_140404A6C[289317484] = v15;
        dword_140404A6C[289317485] = 0;
        goto LABEL_39;
      }
      ++v15;
      v18 = 0;
      v16 -= v20;
      dword_140404A6C[289317484] = v15;
      v19 += v20;
      dword_140404A6C[289317485] = 0;
      if ( v16 <= 0 )
        goto LABEL_39;
    }
    v18 += v16;
    dword_140404A6C[289317485] = v18;
  }
LABEL_39:
  v21 = 8;
  if ( v15 < 0x10000 && v15 + 1 <= (int)dword_140404A6C[289317483] )
  {
    v2 = 0;
    v22 = 0;
    while ( 1 )
    {
      v23 = 8 - v18;
      v2 |= (~(-1 << v21)
           & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v22;
      if ( v21 < (unsigned int)(8 - v18) )
        break;
      if ( v21 == v23 )
      {
        dword_140404A6C[289317484] = ++v15;
        v18 = 0;
        goto LABEL_48;
      }
      ++v15;
      v18 = 0;
      v21 -= v23;
      dword_140404A6C[289317484] = v15;
      v22 += v23;
      dword_140404A6C[289317485] = 0;
      if ( v21 <= 0 )
        goto LABEL_49;
    }
    v18 += v21;
LABEL_48:
    dword_140404A6C[289317485] = v18;
  }
LABEL_49:
  if ( v1 > 0 )
  {
    v24 = v194;
    v25 = v194;
    v26 = (unsigned int)v1;
    v27 = v194;
    v196 = v26;
    while ( 1 )
    {
      v28 = 16;
      if ( v15 < 0x10000 && v15 + 2 <= v17 )
      {
        v24 = 0;
        v29 = 0;
        while ( 1 )
        {
          v30 = 8 - v18;
          v24 |= (~(-1 << v28)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v29;
          if ( v28 < (unsigned int)(8 - v18) )
            break;
          if ( v28 == v30 )
          {
            dword_140404A6C[289317484] = ++v15;
            v18 = 0;
            goto LABEL_60;
          }
          ++v15;
          v18 = 0;
          v28 -= v30;
          dword_140404A6C[289317484] = v15;
          v29 += v30;
          dword_140404A6C[289317485] = 0;
          if ( v28 <= 0 )
            goto LABEL_61;
        }
        v18 += v28;
LABEL_60:
        dword_140404A6C[289317485] = v18;
      }
LABEL_61:
      v31 = v24;
      v32 = 6;
      if ( v15 < 0x10000 && v15 <= v17 )
      {
        v27 = 0;
        v33 = 0;
        while ( 1 )
        {
          v34 = 8 - v18;
          v27 |= (~(-1 << v32)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v33;
          if ( v32 < (unsigned int)(8 - v18) )
            break;
          if ( v32 == v34 )
          {
            dword_140404A6C[289317484] = ++v15;
            v18 = 0;
            goto LABEL_70;
          }
          ++v15;
          v18 = 0;
          v32 -= v34;
          dword_140404A6C[289317484] = v15;
          v33 += v34;
          dword_140404A6C[289317485] = 0;
          if ( v32 <= 0 )
            goto LABEL_71;
        }
        v18 += v32;
LABEL_70:
        dword_140404A6C[289317485] = v18;
      }
LABEL_71:
      v35 = 28;
      if ( v15 < 0x10000 && v15 + 3 <= v17 )
      {
        v25 = 0;
        v36 = 0;
        while ( 1 )
        {
          v37 = 8 - v18;
          v25 |= (~(-1 << v35)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v36;
          if ( v35 < (unsigned int)(8 - v18) )
            break;
          if ( v35 == v37 )
          {
            dword_140404A6C[289317484] = ++v15;
            v18 = 0;
            goto LABEL_80;
          }
          ++v15;
          v18 = 0;
          v35 -= v37;
          dword_140404A6C[289317484] = v15;
          v36 += v37;
          dword_140404A6C[289317485] = 0;
          if ( v35 <= 0 )
            goto LABEL_81;
        }
        v18 += v35;
LABEL_80:
        dword_140404A6C[289317485] = v18;
      }
LABEL_81:
      v38 = 39LL * v24;
      if ( dword_140404A6C[v38 + 290382645] && v25 <= dword_140404A6C[v38 + 290382648] )
      {
        v31 = 0x4000;
      }
      else
      {
        dword_140404A6C[v38 + 290382647] = v27;
        dword_140404A6C[v38 + 290382648] = v25;
        *(_QWORD *)&dword_140404A6C[v38 + 290382645] = 1;
      }
      if ( !v27 )
        break;
      if ( v27 == 1 )
      {
        v39 = 39LL * v31;
        sub_140115AE0(&dword_140404A6C[v39 + 290382649], 12);
        sub_140115AE0(&dword_140404A6C[v39 + 290382650], 5);
        sub_140115AE0(&dword_140404A6C[v39 + 290382651], 7);
        v15 = dword_140404A6C[289317484];
        v17 = dword_140404A6C[289317483];
        if ( (int)dword_140404A6C[289317484] >= 0x10000
          || (v44 = (int)dword_140404A6C[v39 + 290382651],
              v195 = v44,
              (signed int)(v44 + dword_140404A6C[289317484]) > (int)dword_140404A6C[289317483]) )
        {
          v18 = dword_140404A6C[289317485];
        }
        else
        {
          v18 = dword_140404A6C[289317485];
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v18 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          sub_1401FC920(
            (__m128i *)&dword_140404A6C[v39 + 290382652],
            (     __m128i *)((char *)&dword_140404A6C[289317486] + v15),
            v44);
          v15 += v195;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          v45 = (int)dword_140404A6C[v39 + 290382651];
          v195 = v45;
          if ( (int)v45 + v15 <= v17 )
          {
            if ( v18 > 0 )
            {
              ++v15;
              v18 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v42 = v45;
            v41 = (     __m128i *)((char *)&dword_140404A6C[289317486] + v15);
            v43 = &dword_140404A6C[290382668];
LABEL_104:
            sub_1401FC920((__m128i *)&v43[v39], v41, v42);
            v15 += v195;
            dword_140404A6C[289317484] = v15;
          }
        }
LABEL_105:
        v26 = v196;
      }
      if ( v2 == dword_140404A6C[421846188] )
        dword_140404A6C[421846188] = (unsigned __int8)(LOBYTE(dword_140404A6C[421846188]) + 1);
      --v26;
      v2 = (unsigned __int8)(v2 + 1);
      v196 = v26;
      if ( !v26 )
        goto LABEL_109;
    }
    v39 = 39LL * v31;
    sub_140115AE0(&dword_140404A6C[v39 + 290382649], 12);
    sub_140115AE0(&dword_140404A6C[v39 + 290382650], 6);
    sub_140115AE0(&dword_140404A6C[v39 + 290382651], 7);
    v15 = dword_140404A6C[289317484];
    v17 = dword_140404A6C[289317483];
    if ( (int)dword_140404A6C[289317484] >= 0x10000 )
    {
      v18 = dword_140404A6C[289317485];
    }
    else
    {
      v40 = (int)dword_140404A6C[v39 + 290382651];
      v18 = dword_140404A6C[289317485];
      v195 = v40;
      if ( (signed int)(v40 + dword_140404A6C[289317484]) <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v15 = dword_140404A6C[289317484] + 1;
          v18 = 0;
          ++dword_140404A6C[289317484];
          dword_140404A6C[289317485] = 0;
        }
        v41 = (     __m128i *)((char *)&dword_140404A6C[289317486] + v15);
        v42 = v40;
        v43 = &dword_140404A6C[290382652];
        goto LABEL_104;
      }
    }
    goto LABEL_105;
  }
LABEL_109:
  v46 = v194;
  v47 = &dword_140404A6C[421831851];
  v48 = v194;
  v49 = v194;
  v50 = v194;
  v51 = v194;
  v192 = &dword_140404A6C[421831851];
  dword_140404A6C[179992571] = 0;
  dword_140404A6C[421831849] = 0;
  v189 = v194;
  v195 = v194;
  v190 = v194;
  LODWORD(v196) = v194;
  v197 = v194;
  do
  {
    if ( *(v47 - 1) )
    {
      ++dword_140404A6C[421831849];
      v52 = 1;
      if ( v15 < 0x10000 && v15 <= v17 )
      {
        v46 = 0;
        v53 = 0;
        while ( 1 )
        {
          v54 = 8 - v18;
          v46 |= (~(-1 << v52)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v53;
          v189 = v46;
          if ( v52 < (unsigned int)(8 - v18) )
            break;
          if ( v52 == v54 )
          {
            dword_140404A6C[289317484] = ++v15;
            v18 = 0;
            goto LABEL_120;
          }
          ++v15;
          v18 = 0;
          v52 -= v54;
          dword_140404A6C[289317484] = v15;
          v53 += v54;
          dword_140404A6C[289317485] = 0;
          if ( v52 <= 0 )
            goto LABEL_121;
        }
        v18 += v52;
LABEL_120:
        dword_140404A6C[289317485] = v18;
      }
LABEL_121:
      if ( v46 )
      {
        if ( !*v47 )
        {
          v55 = (int)v47[1];
          v56 = 1;
          if ( v15 < 0x10000 && v15 <= v17 )
          {
            v48 = 0;
            v57 = 0;
            while ( 1 )
            {
              v58 = 8 - v18;
              v48 |= (~(-1 << v56)
                    & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v57;
              v195 = v48;
              if ( v56 < (unsigned int)(8 - v18) )
                break;
              if ( v56 == v58 )
              {
                dword_140404A6C[289317484] = ++v15;
                v18 = 0;
                goto LABEL_132;
              }
              ++v15;
              v18 = 0;
              v56 -= v58;
              dword_140404A6C[289317484] = v15;
              v57 += v58;
              dword_140404A6C[289317485] = 0;
              if ( v56 <= 0 )
                goto LABEL_133;
            }
            v18 += v56;
LABEL_132:
            dword_140404A6C[289317485] = v18;
          }
LABEL_133:
          if ( v48 )
          {
            v59 = 28664 * v55;
            v60 = 8;
            if ( v15 < 0x10000 && v15 + 1 <= v17 )
            {
              v49 = 0;
              v61 = 0;
              while ( 1 )
              {
                v62 = 8 - v18;
                v49 |= (~(-1 << v60)
                      & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v61;
                v190 = v49;
                if ( v60 < (unsigned int)(8 - v18) )
                  break;
                if ( v60 == v62 )
                {
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v15 + 1;
                  goto LABEL_143;
                }
                ++v15;
                v18 = 0;
                v60 -= v62;
                dword_140404A6C[289317484] = v15;
                v61 += v62;
                dword_140404A6C[289317485] = 0;
                if ( v60 <= 0 )
                  goto LABEL_143;
              }
              dword_140404A6C[289317485] = v60 + v18;
            }
LABEL_143:
            v63 = v49;
            if ( v49 == 255 )
              v63 = -1;
            dword_140404A6C[7166 * v55 + 280651305] = v63;
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847112), 1);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847116), 5);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847120), 3);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847128), 4);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847132), 3);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847124), 4);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847136), 5);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847140), 4);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847144), 4);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847152), 4);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v59 + 1126847156), 2);
          }
          v64 = v55;
          sub_14018EF40(v194, v55);
          v65 = 7166 * v55;
          dword_140404A6C[v65 + 280651318] *= 100;
          dword_140404A6C[v65 + 280658455] = dword_140404A6C[v65 + 280658451];
          dword_140404A6C[v65 + 280658456] = dword_140404A6C[v65 + 280658452];
          dword_140404A6C[v65 + 280658457] = dword_140404A6C[v65 + 280658453];
          dword_140404A6C[v65 + 280658458] = dword_140404A6C[v65 + 280658454];
          dword_140404A6C[v65 + 280658451] = dword_140404A6C[283831474];
          v66 = 121 * v64;
          v67 = 79616LL * v194;
          v193 = v66 * 4;
          v68 = (float)(int)dword_140404A6C[v67 + 137297855 + v66];
          *(float *)&dword_140404A6C[v65 + 280651441] = (float)(int)dword_140404A6C[v67 + 137297856 + v66]
                                                      * 0.00024414062;
          v69 = (float)(int)dword_140404A6C[v67 + 137297857 + v66];
          *(float *)&v70 = (float)(v68 * 0.00024414062) - 4096.0;
          dword_140404A6C[v65 + 280651440] = v70;
          *(float *)&dword_140404A6C[v65 + 280651442] = (float)(v69 * 0.00024414062) - 4096.0;
          dword_140404A6C[v65 + 280658452] = v70;
          dword_140404A6C[v65 + 280658453] = dword_140404A6C[v65 + 280651441];
          dword_140404A6C[v65 + 280658454] = dword_140404A6C[v65 + 280651442];
          sub_140191F90(
            (float *)&dword_140404A6C[v65 + 280651452],
            (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 * 4 + v66 * 4 + 553404788));
          v191 = 15;
          v71 = (float *)&dword_140404A6C[282486075];
          v72 = (float *)&dword_140404A6C[v65 + 280651519];
          v73 = v67 * 4 + 16;
          do
          {
            v74 = (char *)v72 + 312LL - (_QWORD)&dword_140404A6C[280651519];
            sub_140192160(
              (float *)((char *)&dword_140404A6C[280651493] + (_QWORD)v74),
              (int *)((char *)&dword_140404A6C[137297910] + v193 + v73),
              12);
            v75 = *(v71 - 1);
            v76 = *v71;
            v77 = *v71;
            v78 = *v71;
            v79 = v65 * 4 + 312LL * *((int *)v71 - 5);
            v80 = (float)(v75 * *(float *)((char *)&dword_140404A6C[280651452] + v79))
                + *(float *)((char *)&dword_140404A6C[280651440] + v79);
            *(v72 - 1) = v80;
            v81 = (float)(v75 * *(float *)((char *)&dword_140404A6C[280651453] + v79))
                + *(float *)((char *)&dword_140404A6C[280651441] + v79);
            *v72 = v81;
            v82 = (float)(v75 * *(float *)((char *)&dword_140404A6C[280651454] + v79))
                + *(float *)((char *)&dword_140404A6C[280651442] + v79);
            v72[1] = v82;
            v83 = (float)(v77 * *(float *)((char *)&dword_140404A6C[280651455] + v79)) + v80;
            v84 = v71[1];
            *(v72 - 1) = v83;
            v85 = (float)(v78 * *(float *)((char *)&dword_140404A6C[280651456] + v79)) + v81;
            *v72 = v85;
            v86 = (float)(v76 * *(float *)((char *)&dword_140404A6C[280651457] + v79)) + v82;
            v72[1] = v86;
            *(v72 - 1) = (float)(v84 * *(float *)((char *)&dword_140404A6C[280651458] + v79)) + v83;
            *v72 = (float)(v84 * *(float *)((char *)&dword_140404A6C[280651459] + v79)) + v85;
            v72[1] = (float)(v84 * *(float *)((char *)&dword_140404A6C[280651460] + v79)) + v86;
            sub_14007A010(
              (__int64)&dword_140404A6C[280651452] + (_QWORD)v74,
              (__int64)&dword_140404A6C[280651493] + (_QWORD)v74,
              (__int64)&dword_140404A6C[280651452] + v79);
            v87 = *(v71 - 4) - *(v71 - 1);
            v88 = *(v71 - 3) - *v71;
            v89 = *(v71 - 2) - v71[1];
            v90 = (float)(v87 * v72[11]) + *(v72 - 1);
            *(v72 - 1) = v90;
            v91 = (float)(v87 * v72[12]) + *v72;
            *v72 = v91;
            v92 = (float)(v87 * v72[13]) + v72[1];
            v72[1] = v92;
            v93 = (float)(v88 * v72[14]) + v90;
            *(v72 - 1) = v93;
            v94 = (float)(v88 * v72[15]) + v91;
            *v72 = v94;
            v73 += 16;
            v71 += 25;
            v95 = (float)(v88 * v72[16]) + v92;
            v72[1] = v95;
            *(v72 - 1) = (float)(v89 * v72[17]) + v93;
            *v72 = (float)(v89 * v72[18]) + v94;
            v72[1] = (float)(v89 * v72[19]) + v95;
            v72 += 78;
            --v191;
          }
          while ( v191 );
          v18 = dword_140404A6C[289317485];
          v15 = dword_140404A6C[289317484];
          v17 = dword_140404A6C[289317483];
          v2 = 16;
          v48 = v195;
          v51 = v197;
          v50 = v196;
          v47 = v192;
        }
        if ( *v47 == 1 )
        {
          v96 = v47[1];
          v97 = 1;
          v188 = v96;
          if ( v15 < 0x10000 && v15 <= v17 )
          {
            v48 = 0;
            v98 = 0;
            while ( 1 )
            {
              v99 = 8 - v18;
              v48 |= (~(-1 << v97)
                    & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v98;
              v195 = v48;
              if ( v97 < (unsigned int)(8 - v18) )
                break;
              if ( v97 == v99 )
              {
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v15 + 1;
                goto LABEL_159;
              }
              ++v15;
              v18 = 0;
              v97 -= v99;
              dword_140404A6C[289317484] = v15;
              v98 += v99;
              dword_140404A6C[289317485] = 0;
              if ( v97 <= 0 )
                goto LABEL_159;
            }
            dword_140404A6C[289317485] = v97 + v18;
LABEL_159:
            v96 = v188;
          }
          if ( v48 )
          {
            v100 = 1760LL * v96;
            sub_140115AE0(&dword_140404A6C[v100 + 278845898], 8);
            v101 = dword_140404A6C[289317484];
            v102 = 10;
            v103 = dword_140404A6C[289317483];
            if ( (int)dword_140404A6C[289317484] >= 0x10000
              || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
            {
              v104 = dword_140404A6C[289317485];
            }
            else
            {
              v104 = dword_140404A6C[289317485];
              v50 = 0;
              v105 = 0;
              while ( 1 )
              {
                v106 = 8 - v104;
                v50 |= (~(-1 << v102)
                      & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v101) >> SLOBYTE(dword_140404A6C[289317485]))) << v105;
                LODWORD(v196) = v50;
                if ( v102 < 8 - v104 )
                  break;
                if ( v102 == v106 )
                {
                  ++v101;
                  v104 = 0;
                  dword_140404A6C[289317484] = v101;
                  dword_140404A6C[289317485] = 0;
                  goto LABEL_171;
                }
                ++v101;
                v104 = 0;
                v102 -= v106;
                dword_140404A6C[289317484] = v101;
                v105 += v106;
                dword_140404A6C[289317485] = 0;
                if ( v102 <= 0 )
                  goto LABEL_171;
              }
              v104 += v102;
              dword_140404A6C[289317485] = v104;
            }
LABEL_171:
            v107 = v50;
            v108 = 10;
            if ( v50 == 1023 )
              v107 = -1;
            dword_140404A6C[v100 + 278845903] = v107;
            if ( v101 < 0x10000 && v101 + 1 <= v103 )
            {
              v51 = 0;
              v109 = 0;
              while ( 1 )
              {
                v110 = 8 - v104;
                v51 |= (~(-1 << v108)
                      & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v101) >> SLOBYTE(dword_140404A6C[289317485]))) << v109;
                v197 = v51;
                if ( v108 < 8 - v104 )
                  break;
                if ( v108 == v110 )
                {
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v101 + 1;
                  goto LABEL_182;
                }
                ++v101;
                v104 = 0;
                v108 -= v110;
                dword_140404A6C[289317484] = v101;
                v109 += v110;
                dword_140404A6C[289317485] = 0;
                if ( v108 <= 0 )
                  goto LABEL_182;
              }
              dword_140404A6C[289317485] = v108 + v104;
            }
LABEL_182:
            v111 = v51;
            if ( v51 == 1023 )
              v111 = -1;
            dword_140404A6C[v100 + 278845902] = v111;
            sub_140115AE0(&dword_140404A6C[v100 + 278845904], 4);
            if ( dword_140404A6C[v100 + 278845898] == 39 )
            {
              sub_140115AE0(&dword_140404A6C[v100 + 278846111], 5);
              sub_140115AE0(&dword_140404A6C[v100 + 278846112], 5);
            }
          }
          sub_14018D6D0(v194, v188);
          v18 = dword_140404A6C[289317485];
          v15 = dword_140404A6C[289317484];
          v17 = dword_140404A6C[289317483];
        }
      }
    }
    v46 = v189;
    v47 += 4;
    v49 = v190;
    v192 = v47;
  }
  while ( (__int64)v47 < (__int64)&dword_140404A6C[421835947] );
  dword_140404A6C[dword_140404A6C[179992314] + 179992315] = (signed int)dword_140404A6C[179992571] / 8;
  dword_140404A6C[179992314] = (unsigned __int8)(LOBYTE(dword_140404A6C[179992314]) + 1);
  sub_140115AE0(&dword_140404A6C[137282766], 8);
  v112 = v194;
  v197 = 0;
  if ( (int)dword_140404A6C[137282766] <= 0 )
  {
    v147 = v194;
    v195 = v194;
  }
  else
  {
    v113 = v194;
    v114 = v194;
    v115 = 79616LL * v194;
    v195 = v194;
    LODWORD(v196) = v194;
    while ( 1 )
    {
      v116 = dword_140404A6C[289317484];
      v117 = 10;
      v118 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
      {
        v119 = dword_140404A6C[289317485];
      }
      else
      {
        v119 = dword_140404A6C[289317485];
        v113 = 0;
        v120 = 0;
        while ( 1 )
        {
          v121 = 8 - v119;
          v113 |= (~(-1 << v117)
                 & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v116) >> SLOBYTE(dword_140404A6C[289317485]))) << v120;
          v195 = v113;
          if ( v117 < 8 - v119 )
            break;
          if ( v117 == v121 )
          {
            ++v116;
            v119 = 0;
            dword_140404A6C[289317484] = v116;
            dword_140404A6C[289317485] = 0;
            goto LABEL_201;
          }
          ++v116;
          v119 = 0;
          v117 -= v121;
          dword_140404A6C[289317484] = v116;
          v120 += v121;
          dword_140404A6C[289317485] = 0;
          if ( v117 <= 0 )
            goto LABEL_201;
        }
        v119 += v117;
        dword_140404A6C[289317485] = v119;
      }
LABEL_201:
      v122 = 2;
      if ( v116 < 0x10000 && v116 <= (int)dword_140404A6C[289317483] )
      {
        while ( 1 )
        {
          v123 = 8 - v119;
          if ( v122 < 8 - v119 )
            break;
          if ( v122 == v123 )
          {
            dword_140404A6C[289317484] = ++v116;
            v119 = 0;
            goto LABEL_209;
          }
          ++v116;
          v119 = 0;
          v122 -= v123;
          dword_140404A6C[289317484] = v116;
          dword_140404A6C[289317485] = 0;
          if ( v122 <= 0 )
            goto LABEL_210;
        }
        v119 += v122;
LABEL_209:
        dword_140404A6C[289317485] = v119;
      }
LABEL_210:
      v124 = 10;
      v125 = 5210LL * v113;
      if ( v116 < 0x10000 && v116 + 1 <= (int)dword_140404A6C[289317483] )
      {
        v114 = 0;
        v126 = 0;
        while ( 1 )
        {
          v127 = 8 - v119;
          v114 |= (~(-1 << v124)
                 & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v116) >> SLOBYTE(dword_140404A6C[289317485]))) << v126;
          LODWORD(v196) = v114;
          if ( v124 < 8 - v119 )
            break;
          if ( v124 == v127 )
          {
            dword_140404A6C[289317484] = ++v116;
            v119 = 0;
            goto LABEL_219;
          }
          ++v116;
          v119 = 0;
          v124 -= v127;
          dword_140404A6C[289317484] = v116;
          v126 += v127;
          dword_140404A6C[289317485] = 0;
          if ( v124 <= 0 )
            goto LABEL_220;
        }
        v119 += v124;
LABEL_219:
        dword_140404A6C[289317485] = v119;
      }
LABEL_220:
      v128 = v114;
      if ( v114 == 1023 )
        v128 = -1;
      dword_140404A6C[v125 + 129720183] = v128;
      v129 = 8;
      dword_140404A6C[v125 + 129721914] = dword_140404A6C[v125 + 129721910];
      dword_140404A6C[v125 + 129721915] = dword_140404A6C[v125 + 129721911];
      dword_140404A6C[v125 + 129721916] = dword_140404A6C[v125 + 129721912];
      dword_140404A6C[v125 + 129721917] = dword_140404A6C[v125 + 129721913];
      dword_140404A6C[v125 + 129721910] = dword_140404A6C[283831474];
      if ( v116 < 0x10000 && v116 + 1 <= v118 )
      {
        v112 = 0;
        v130 = 0;
        while ( 1 )
        {
          v131 = 8 - v119;
          v112 |= (~(-1 << v129)
                 & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v116) >> SLOBYTE(dword_140404A6C[289317485]))) << v130;
          if ( v129 < 8 - v119 )
            break;
          if ( v129 == v131 )
          {
            dword_140404A6C[289317485] = 0;
            dword_140404A6C[289317484] = v116 + 1;
            goto LABEL_231;
          }
          ++v116;
          v119 = 0;
          v129 -= v131;
          dword_140404A6C[289317484] = v116;
          v130 += v131;
          dword_140404A6C[289317485] = 0;
          if ( v129 <= 0 )
            goto LABEL_231;
        }
        dword_140404A6C[289317485] = v129 + v119;
      }
LABEL_231:
      v132 = 57LL * v113;
      v133 = v132 * 4 + 318464LL * v112;
      sub_14018D510(
        &dword_140404A6C[v132 + 137328830 + v115],
        *(unsigned int *)((char *)&dword_140404A6C[137328830] + v133),
        28);
      sub_14018D510(
        &dword_140404A6C[v132 + 137328831 + v115],
        *(unsigned int *)((char *)&dword_140404A6C[137328831] + v133),
        28);
      sub_14018D510(
        &dword_140404A6C[v132 + 137328832 + v115],
        *(unsigned int *)((char *)&dword_140404A6C[137328832] + v133),
        28);
      v134 = v115 * 4 + v132 * 4;
      *(float *)&dword_140404A6C[v125 + 129716720] = (float)((float)(int)dword_140404A6C[v115 + 137328830 + v132]
                                                           * 0.00024414062)
                                                   - 4096.0;
      *(float *)&dword_140404A6C[v125 + 129716721] = (float)(int)dword_140404A6C[v115 + 137328831 + v132]
                                                   * 0.00024414062;
      *(float *)&dword_140404A6C[v125 + 129716722] = (float)((float)(int)dword_140404A6C[v115 + 137328832 + v132]
                                                           * 0.00024414062)
                                                   - 4096.0;
      sub_140115AE0(&dword_140404A6C[v132 + 137328833 + v115], 2);
      sub_14018D5E0(
        (int *)&dword_140404A6C[v132 + 137328834 + v115],
        *(unsigned int *)((char *)&dword_140404A6C[137328834] + v133),
        14);
      sub_14018D5E0(
        (int *)&dword_140404A6C[v132 + 137328835 + v115],
        *(unsigned int *)((char *)&dword_140404A6C[137328835] + v133),
        14);
      sub_14018D5E0(
        (int *)&dword_140404A6C[v132 + 137328836 + v115],
        *(unsigned int *)((char *)&dword_140404A6C[137328836] + v133),
        14);
      sub_140191F90((float *)&dword_140404A6C[v125 + 129716726], (int *)&dword_140404A6C[v132 + 137328833 + v115]);
      if ( dword_140404A6C[v125 + 129716709] )
      {
        v135 = (int)dword_140404A6C[v125 + 129720183];
        if ( (_DWORD)v135 != -1 )
        {
          v136 = 383 * v135;
          if ( dword_140404A6C[383 * v135 + 132400639] != v113 )
          {
            dword_140404A6C[v125 + 129716710] = dword_140404A6C[v136 + 132400637];
            dword_140404A6C[v125 + 129716715] = dword_140404A6C[v136 + 132401011];
            dword_140404A6C[v125 + 129721915] = dword_140404A6C[v125 + 129716720];
            dword_140404A6C[v125 + 129721916] = dword_140404A6C[v125 + 129716721];
            dword_140404A6C[v125 + 129721917] = dword_140404A6C[v125 + 129716722];
            dword_140404A6C[v136 + 132400639] = v113;
          }
        }
      }
      v137 = *(unsigned int *)((char *)&dword_140404A6C[137328837] + v133);
      dword_140404A6C[v125 + 129721911] = dword_140404A6C[v125 + 129716720];
      dword_140404A6C[v125 + 129721912] = dword_140404A6C[v125 + 129716721];
      dword_140404A6C[v125 + 129721913] = dword_140404A6C[v125 + 129716722];
      sub_14018D5E0((int *)&dword_140404A6C[v132 + 137328837 + v115], v137, 9);
      v138 = &dword_140404A6C[v125 + 129720390];
      v139 = (unsigned int *)((char *)&dword_140404A6C[137328839] + v134);
      v140 = (float)*(int *)((char *)&dword_140404A6C[137328837] + v134);
      v141 = (int *)((char *)&dword_140404A6C[137328839] + v133);
      v142 = (int *)((char *)&dword_140404A6C[137328839] + v134);
      v2 = 4;
      *(float *)&dword_140404A6C[v125 + 129720372] = v140 * 0.01231997119054902;
      v143 = 4;
      do
      {
        sub_14018D510(v142 - 1, *(v141 - 1), 8);
        sub_14018D5E0(v142, *v141, 9);
        sub_14018D510(v142 + 1, v141[1], 8);
        v138 += 43;
        v144 = _mm_cvtsi32_si128(*v139);
        v141 += 3;
        v145 = (float)(int)*(v139 - 1);
        v142 += 3;
        v139 += 3;
        *((float *)v138 - 31) = v145 * 0.0039215689;
        v146 = _mm_cvtsi32_si128(*(v139 - 2));
        *((float *)v138 - 43) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v144), f32)[0] * 0.0039215689;
        *((float *)v138 - 26) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v146), f32)[0] * 0.0039215689;
        --v143;
      }
      while ( v143 );
      sub_140115AE0(&dword_140404A6C[v125 + 129720369], 13);
      v113 = v195;
      v115 = 79616LL * v194;
      if ( (int)++v197 >= (int)dword_140404A6C[137282766] )
        break;
      v114 = v196;
    }
    v147 = v195;
  }
  sub_140115AE0(&dword_140404A6C[137283023], 8);
  v148 = 10;
  sub_140115AE0(&dword_140404A6C[132792829], 10);
  sub_140115AE0(&dword_140404A6C[137296722], 8);
  v149 = dword_140404A6C[132792829];
  v150 = 0;
  v151 = dword_140404A6C[289317485];
  v152 = 0;
  v153 = dword_140404A6C[289317484];
  v154 = dword_140404A6C[289317483];
  LODWORD(v196) = 0;
  if ( (int)dword_140404A6C[132792829] > 0 )
  {
    v155 = 0;
    v156 = &dword_140404A6C[132401014];
    do
    {
      if ( v152 <= 0 )
      {
        v157 = 1;
        if ( v153 < 0x10000 && v153 <= v154 )
        {
          v2 = 0;
          v158 = 0;
          while ( 1 )
          {
            v159 = 8 - v151;
            v2 |= (~(-1 << v157)
                 & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v153) >> SLOBYTE(dword_140404A6C[289317485]))) << v158;
            if ( v157 < 8 - v151 )
              break;
            if ( v157 == v159 )
            {
              dword_140404A6C[289317484] = ++v153;
              v151 = 0;
              goto LABEL_253;
            }
            ++v153;
            v151 = 0;
            v157 -= v159;
            dword_140404A6C[289317484] = v153;
            v158 += v159;
            dword_140404A6C[289317485] = 0;
            if ( v157 <= 0 )
              goto LABEL_254;
          }
          v151 += v157;
LABEL_253:
          dword_140404A6C[289317485] = v151;
        }
LABEL_254:
        if ( v2 )
        {
          v163 = 8;
          v156[2] = *(v156 - 2);
          v156[3] = *(v156 - 1);
          v156[4] = *v156;
          v156[5] = v156[1];
          *(v156 - 2) = dword_140404A6C[283831474];
          if ( v153 < 0x10000 && v153 + 1 <= v154 )
          {
            v112 = 0;
            v164 = 0;
            while ( 1 )
            {
              v165 = 8 - v151;
              v112 |= (~(-1 << v163)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v153) >> SLOBYTE(dword_140404A6C[289317485]))) << v164;
              if ( v163 < 8 - v151 )
                break;
              if ( v163 == v165 )
              {
                dword_140404A6C[289317484] = ++v153;
                v151 = 0;
                goto LABEL_274;
              }
              ++v153;
              v151 = 0;
              v163 -= v165;
              dword_140404A6C[289317484] = v153;
              v164 += v165;
              dword_140404A6C[289317485] = 0;
              if ( v163 <= 0 )
                goto LABEL_275;
            }
            v151 += v163;
LABEL_274:
            dword_140404A6C[289317485] = v151;
          }
LABEL_275:
          v166 = 1;
          if ( v153 < 0x10000 && v153 <= v154 )
          {
            v2 = 0;
            v167 = 0;
            while ( 1 )
            {
              v168 = 8 - v151;
              v2 |= (~(-1 << v166)
                   & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v153) >> SLOBYTE(dword_140404A6C[289317485]))) << v167;
              if ( v166 < 8 - v151 )
                break;
              if ( v166 == v168 )
              {
                dword_140404A6C[289317484] = ++v153;
                v151 = 0;
                goto LABEL_284;
              }
              ++v153;
              v151 = 0;
              v166 -= v168;
              dword_140404A6C[289317484] = v153;
              v167 += v168;
              dword_140404A6C[289317485] = 0;
              if ( v166 <= 0 )
                goto LABEL_285;
            }
            v151 += v166;
LABEL_284:
            dword_140404A6C[289317485] = v151;
          }
LABEL_285:
          if ( !v2 )
            *(v156 - 375) = -1;
          v169 = 1;
          if ( v153 < 0x10000 && v153 <= v154 )
          {
            v2 = 0;
            v170 = 0;
            while ( 1 )
            {
              v171 = 8 - v151;
              v2 |= (~(-1 << v169)
                   & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v153) >> SLOBYTE(dword_140404A6C[289317485]))) << v170;
              if ( v169 < 8 - v151 )
                break;
              if ( v169 == v171 )
              {
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v153 + 1;
                goto LABEL_296;
              }
              ++v153;
              v151 = 0;
              v169 -= v171;
              dword_140404A6C[289317484] = v153;
              v170 += v171;
              dword_140404A6C[289317485] = 0;
              if ( v169 <= 0 )
                goto LABEL_296;
            }
            dword_140404A6C[289317485] = v169 + v151;
          }
LABEL_296:
          if ( v2 )
          {
            v172 = 383LL * v150;
            sub_140115AE0(&dword_140404A6C[v172 + 132400637], 6);
            sub_140115AE0(&dword_140404A6C[v172 + 132401011], 4);
          }
          v173 = (int)*(v156 - 375);
          if ( (_DWORD)v173 != -1 )
          {
            v174 = 5210 * v173;
            dword_140404A6C[v174 + 129716710] = *(v156 - 377);
            dword_140404A6C[v174 + 129716715] = *(v156 - 3);
          }
          v175 = v155 + 318464LL * v112;
          v176 = 318464LL * v194 + 40LL * (int)v196;
          sub_14018D510(
            (unsigned int *)((char *)&dword_140404A6C[137367231] + v176),
            *(unsigned int *)((char *)&dword_140404A6C[137367231] + v175),
            28);
          sub_14018D510(
            (unsigned int *)((char *)&dword_140404A6C[137367232] + v176),
            *(unsigned int *)((char *)&dword_140404A6C[137367232] + v175),
            28);
          sub_14018D510(
            (unsigned int *)((char *)&dword_140404A6C[137367233] + v176),
            *(unsigned int *)((char *)&dword_140404A6C[137367233] + v175),
            28);
          v177 = *(unsigned int *)((char *)&dword_140404A6C[137367238] + v175);
          v178 = v155 + 318464LL * v194;
          v179 = (float)*(int *)((char *)&dword_140404A6C[137367233] + v178);
          v180 = (float)*(int *)((char *)&dword_140404A6C[137367232] + v178) * 0.00024414062;
          v181 = (float)((float)*(int *)((char *)&dword_140404A6C[137367231] + v178) * 0.00024414062) - 4096.0;
          *((float *)v156 - 372) = v180;
          v182 = (float)(v179 * 0.00024414062) - 4096.0;
          *((float *)v156 - 373) = v181;
          *((float *)v156 - 371) = v182;
          *((float *)v156 - 1) = v181;
          *(float *)v156 = v180;
          *((float *)v156 + 1) = v182;
          sub_14018D5E0((int *)((char *)&dword_140404A6C[137367238] + v176), v177, 9);
          v151 = dword_140404A6C[289317485];
          v183 = _mm_cvtsi32_si128(*(unsigned int *)((char *)&dword_140404A6C[137367238] + v178));
          v153 = dword_140404A6C[289317484];
          v154 = dword_140404A6C[289317483];
          v149 = dword_140404A6C[132792829];
          v150 = v196;
          *((float *)v156 - 367) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v183), f32)[0] * 0.01231997119054902;
        }
        else
        {
          v160 = 10;
          if ( v153 < 0x10000 && v153 + 1 <= v154 )
          {
            v152 = 0;
            v161 = 0;
            while ( 1 )
            {
              v162 = 8 - v151;
              v152 |= (~(-1 << v160)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v153) >> SLOBYTE(dword_140404A6C[289317485]))) << v161;
              if ( v160 < 8 - v151 )
                break;
              if ( v160 == v162 )
              {
                ++v153;
                v151 = 0;
                dword_140404A6C[289317484] = v153;
                --v152;
                dword_140404A6C[289317485] = 0;
                goto LABEL_301;
              }
              ++v153;
              v151 = 0;
              v160 -= v162;
              dword_140404A6C[289317484] = v153;
              v161 += v162;
              dword_140404A6C[289317485] = 0;
              if ( v160 <= 0 )
              {
                --v152;
                goto LABEL_301;
              }
            }
            v151 += v160;
            dword_140404A6C[289317485] = v151;
          }
          --v152;
        }
      }
      else
      {
        --v152;
      }
LABEL_301:
      ++v150;
      v155 += 40;
      v156 += 383;
      LODWORD(v196) = v150;
    }
    while ( v150 < v149 );
    v147 = v195;
    v148 = 10;
  }
  if ( v153 < 0x10000 && v153 + 1 <= v154 )
  {
    v147 = 0;
    v184 = 0;
    while ( 1 )
    {
      v185 = 8 - v151;
      v147 |= (~(-1 << v148)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v153) >> SLOBYTE(dword_140404A6C[289317485]))) << v184;
      if ( v148 < 8 - v151 )
        break;
      if ( v148 == v185 )
      {
        dword_140404A6C[289317485] = 0;
        dword_140404A6C[289317484] = v153 + 1;
        goto LABEL_312;
      }
      ++v153;
      v151 = 0;
      v148 -= v185;
      dword_140404A6C[289317484] = v153;
      v184 += v185;
      dword_140404A6C[289317485] = 0;
      if ( v148 <= 0 )
        goto LABEL_312;
    }
    dword_140404A6C[289317485] = v148 + v151;
  }
LABEL_312:
  v186 = 34LL * v147;
  sub_140115AE0(&dword_140404A6C[v186 + 225391250], 2);
  sub_140115AE0(&dword_140404A6C[v186 + 225391251], 2);
  sub_140115AE0(&dword_140404A6C[v186 + 225391252], 2);
  sub_140115AE0(&dword_140404A6C[v186 + 225391253], 2);
  if ( !dword_140404A6C[19065870] )
    return sub_140041B80();
  result = dword_140404A6C[19065877];
  if ( (int)dword_140404A6C[283831474] >= (int)dword_140404A6C[19065877] )
    return sub_140041B80();
  return result;
}
#undef v188
#undef v189
#undef v190
#undef v191
#undef v192
#undef v193
#undef v194
#undef v195
#undef v196
#undef v197

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FE95260: using guessed type unsigned int;
// 16B2A2654: using guessed type unsigned int;
// 16B2A2A58: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;
// 1A4D2DD10: using guessed type unsigned int;
// 1A4D31D14: using guessed type unsigned int;
// 1A4D31D18: using guessed type unsigned int;
// 1A4D3BD1C: using guessed type unsigned int;
// 1AD04B20C: using guessed type unsigned int;

//----- (0000000140191360) ----------------------------------------------------
__int64            sub_140191360(float *a1, int a2)
{
  float v4; // edx
  int v5; // xmm5_4
  int v6; // xmm9_4
  float v7; // xmm10_4
  __int64 v8; // rcx
  int v9; // xmm0_4
  float v10; // xmm2_4
  int v11; // xmm4_4
  __int64 v12; // rax
  int v13; // xmm14_4
  int v14; // xmm15_4
  float v15; // xmm1_4
  int v16; // ecx
  float v17; // xmm7_4
  float v18; // xmm13_4
  float v19; // xmm12_4
  float v20; // xmm6_4
  float v21; // xmm8_4
  float v22; // xmm11_4
  float v23; // xmm14_4
  float v24; // xmm15_4
  float v25; // xmm1_4
  unsigned int v26; // xmm6_4
  unsigned int v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm1_4
  float v30; // xmm11_4
  float v31; // xmm12_4
  float v32; // xmm13_4
  float v33; // xmm1_4
  int v34; // eax
  float v35; // xmm4_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140191360[256];
#define v39 (*(float (*))(void *)(sr_frame_140191360 + 0)) /* [rsp+20h] */
#define v40 (*(unsigned __int64 (*))(void *)(sr_frame_140191360 + 4)) /* [rsp+24h] */
#define v41 (*(unsigned int (*))(void *)(sr_frame_140191360 + 12)) /* [rsp+2Ch] */
#define v42 (*(unsigned int (*))(void *)(sr_frame_140191360 + 16)) /* [rsp+30h] */
#define v43 (*(unsigned int (*))(void *)(sr_frame_140191360 + 20)) /* [rsp+34h] */
#define v44 (*(unsigned int (*))(void *)(sr_frame_140191360 + 24)) /* [rsp+38h] */
#define v45 (*(float (*))(void *)(sr_frame_140191360 + 28)) /* [rsp+3Ch] */
#define v46 (*(float (*))(void *)(sr_frame_140191360 + 224)) /* [rsp+100h] */
#define v47 (*(float (*))(void *)(sr_frame_140191360 + 232)) /* [rsp+108h] */
#define v48 (*(int (*))(void *)(sr_frame_140191360 + 240)) /* [rsp+110h] */
#define v49 (*(int (*))(void *)(sr_frame_140191360 + 248)) /* [rsp+118h] */

  sub_140115AE0(&v47, a2);
  v4 = v47;
  v5 = dword_1402B2610[3 * dword_1402B2660[3 * (LOBYTE(v47) & 7)]];
  v6 = dword_1402B2614[3 * dword_1402B2660[3 * (LOBYTE(v47) & 7)]];
  v7 = dword_1402B2618[3 * dword_1402B2660[3 * (LOBYTE(v47) & 7)]];
  v8 = 3LL * dword_1402B2664[3 * (LOBYTE(v47) & 7)];
  dword_140404A6C[349900629] = v5;
  v9 = dword_1402B2614[v8];
  v10 = dword_1402B2618[v8];
  v11 = dword_1402B2610[v8];
  v12 = dword_1402B2668[3 * (LOBYTE(v47) & 7)];
  dword_140404A6C[349900630] = v6;
  *(float *)&dword_140404A6C[349900631] = v7;
  dword_140404A6C[349900632] = v11;
  v47 = *(float *)&v9;
  v13 = dword_1402B2610[3 * v12];
  v14 = dword_1402B2614[3 * v12];
  v15 = dword_1402B2618[3 * v12];
  v16 = 3;
  dword_140404A6C[349900633] = v9;
  v46 = v10;
  *(float *)&dword_140404A6C[349900634] = v10;
  v48 = v13;
  dword_140404A6C[349900635] = v13;
  v49 = v14;
  dword_140404A6C[349900636] = v14;
  v39 = v15;
  *(float *)&dword_140404A6C[349900637] = v15;
  if ( a2 > 3 )
  {
    while ( 1 )
    {
      v17 = *(float *)&v9 + *(float *)&v6;
      v18 = v15 + v10;
      v19 = *(float *)&v14 + *(float *)&v9;
      v20 = *(float *)&v11 + *(float *)&v5;
      v21 = v10 + v7;
      v22 = *(float *)&v13 + *(float *)&v11;
      v23 = *(float *)&v13 + *(float *)&v5;
      v45 = v15 + v7;
      v24 = *(float *)&v14 + *(float *)&v6;
      v25 = fsqrt((float)((float)(v17 * v17) + (float)(v20 * v20)) + (float)(v21 * v21));
      if ( v25 == 0.0 )
      {
        dword_140404A6C[349900638] = 0;
        v26 = 0;
        dword_140404A6C[349900639] = 0;
        v27 = 0;
        dword_140404A6C[349900640] = 0;
        v28 = 0.0;
        v40 = 0;
        *(float *)&v41 = 0.0;
      }
      else
      {
        *(float *)&v26 = v20 * (float)(1.0 / v25);
        *(float *)&v27 = v17 * (float)(1.0 / v25);
        v28 = v21 * (float)(1.0 / v25);
        dword_140404A6C[349900638] = v26;
        dword_140404A6C[349900639] = v27;
        *(float *)&dword_140404A6C[349900640] = v28;
        v40 = __PAIR64__(v27, v26);
        *(float *)&v41 = v28;
      }
      v29 = fsqrt((float)((float)(v19 * v19) + (float)(v22 * v22)) + (float)(v18 * v18));
      if ( v29 == 0.0 )
      {
        dword_140404A6C[349900641] = 0;
        v30 = 0.0;
        dword_140404A6C[349900642] = 0;
        v31 = 0.0;
        dword_140404A6C[349900643] = 0;
        v32 = 0.0;
        *(float *)&v42 = 0.0;
        *(float *)&v43 = 0.0;
        *(float *)&v44 = 0.0;
      }
      else
      {
        v30 = v22 * (float)(1.0 / v29);
        v31 = v19 * (float)(1.0 / v29);
        v32 = v18 * (float)(1.0 / v29);
        *(float *)&dword_140404A6C[349900641] = v30;
        *(float *)&dword_140404A6C[349900642] = v31;
        *(float *)&dword_140404A6C[349900643] = v32;
        *(float *)&v42 = v30;
        *(float *)&v43 = v31;
        *(float *)&v44 = v32;
      }
      v33 = fsqrt((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v45 * v45));
      if ( v33 == 0.0 )
      {
        *(_QWORD *)&dword_140404A6C[349900644] = 0;
        *(float *)&v13 = 0.0;
        dword_140404A6C[349900646] = 0;
        *(float *)&v14 = 0.0;
        v15 = 0.0;
      }
      else
      {
        *(float *)&v13 = v23 * (float)(1.0 / v33);
        *(float *)&v14 = v24 * (float)(1.0 / v33);
        v15 = v45 * (float)(1.0 / v33);
        dword_140404A6C[349900644] = v13;
        dword_140404A6C[349900645] = v14;
        *(float *)&dword_140404A6C[349900646] = v15;
      }
      v34 = (LODWORD(v4) >> v16) & 3;
      if ( !v34 )
      {
        v11 = v40;
        v47 = *((float *)&v40 + 1);
        v46 = *(float *)&v41;
        dword_140404A6C[349900634] = v41;
        v48 = v13;
        dword_140404A6C[349900635] = v13;
        v49 = v14;
        dword_140404A6C[349900636] = v14;
        *(_QWORD *)&dword_140404A6C[349900632] = v40;
        v39 = v15;
        *(float *)&dword_140404A6C[349900637] = v15;
      }
      if ( v34 == 1 )
        break;
      if ( v34 == 2 )
      {
        v9 = v43;
        v5 = v13;
        v10 = *(float *)&v44;
        v6 = v14;
        v11 = v42;
        v7 = v15;
        v13 = v48;
        dword_140404A6C[349900630] = v14;
        v14 = v49;
        *(float *)&dword_140404A6C[349900631] = v15;
        v15 = v39;
        dword_140404A6C[349900629] = v5;
        dword_140404A6C[349900632] = v42;
        v47 = *(float *)&v43;
        dword_140404A6C[349900633] = v43;
        v46 = *(float *)&v44;
        dword_140404A6C[349900634] = v44;
      }
      else
      {
        if ( v34 != 3 )
        {
          v13 = v48;
          v14 = v49;
          v15 = v39;
          goto LABEL_20;
        }
        *(float *)&v9 = v31;
        dword_140404A6C[349900629] = v26;
        v10 = v32;
        v47 = v31;
        *(float *)&v11 = v30;
        *(float *)&dword_140404A6C[349900633] = v31;
        *(float *)&dword_140404A6C[349900632] = v30;
        v5 = v26;
        v46 = v32;
        v6 = v27;
        *(float *)&dword_140404A6C[349900634] = v32;
        v7 = v28;
        dword_140404A6C[349900630] = v27;
        *(float *)&dword_140404A6C[349900631] = v28;
        v48 = v13;
        dword_140404A6C[349900635] = v13;
        v49 = v14;
        dword_140404A6C[349900636] = v14;
        v39 = v15;
        *(float *)&dword_140404A6C[349900637] = v15;
      }
LABEL_21:
      v16 += 2;
      if ( v16 >= a2 )
        goto LABEL_22;
    }
    v13 = v42;
    v14 = v43;
    v15 = *(float *)&v44;
    v5 = v40;
    v6 = SHIDWORD(v40);
    v7 = *(float *)&v41;
    *(_QWORD *)&dword_140404A6C[349900629] = v40;
    dword_140404A6C[349900631] = v41;
    v48 = v42;
    dword_140404A6C[349900635] = v42;
    v49 = v43;
    dword_140404A6C[349900636] = v43;
    v39 = *(float *)&v44;
    dword_140404A6C[349900637] = v44;
LABEL_20:
    v10 = v46;
    *(float *)&v9 = v47;
    goto LABEL_21;
  }
LABEL_22:
  v35 = *(float *)&v11 + *(float *)&v5;
  *a1 = v35;
  v36 = *(float *)&dword_140404A6C[349900633] + *(float *)&dword_140404A6C[349900630];
  a1[1] = *(float *)&dword_140404A6C[349900633] + *(float *)&dword_140404A6C[349900630];
  v37 = *(float *)&dword_140404A6C[349900634] + *(float *)&dword_140404A6C[349900631];
  a1[2] = *(float *)&dword_140404A6C[349900634] + *(float *)&dword_140404A6C[349900631];
  *a1 = v35 + *(float *)&dword_140404A6C[349900635];
  a1[1] = v36 + *(float *)&dword_140404A6C[349900636];
  a1[2] = v37 + *(float *)&dword_140404A6C[349900637];
  return sub_14007A240((__int64)a1, a1);
}
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49

// 1402B2610: using guessed type int dword_1402B2610[];
// 1402B2614: using guessed type int dword_1402B2614[];
// 1402B2618: using guessed type float dword_1402B2618[16];
// 1402B2660: using guessed type int dword_1402B2660[];
// 1402B2664: using guessed type int dword_1402B2664[];
// 1402B2668: using guessed type int dword_1402B2668[22];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 193AC87C0: using guessed type unsigned int;
// 193AC87C4: using guessed type unsigned int;
// 193AC87C8: using guessed type unsigned int;
// 193AC87CC: using guessed type unsigned int;
// 193AC87D0: using guessed type unsigned int;
// 193AC87D4: using guessed type unsigned int;
// 193AC87D8: using guessed type unsigned int;
// 193AC87DC: using guessed type unsigned int;
// 193AC87E0: using guessed type unsigned int;
// 193AC87E4: using guessed type unsigned int;
// 193AC87E8: using guessed type unsigned int;
// 193AC87EC: using guessed type unsigned int;
// 193AC87F0: using guessed type unsigned int;
// 193AC87F4: using guessed type unsigned int;
// 193AC87F8: using guessed type unsigned int;
// 193AC87FC: using guessed type unsigned int;
// 193AC8800: using guessed type unsigned int;
// 193AC8804: using guessed type unsigned int;

//----- (0000000140191A20) ----------------------------------------------------
__int64            sub_140191A20(float *a1)
{
  __int64 v2; // r10
  int v3; // r8d
  int v4; // edi
  int v5; // ebx
  unsigned int v6; // r9d
  int v7; // r11d
  char v8; // si
  unsigned int v9; // eax
  signed int v10; // r15d
  int v11; // ebx
  char v12; // si
  unsigned int v13; // eax
  signed int v14; // ebp
  int v15; // ebx
  char v16; // si
  unsigned int v17; // eax
  signed int v18; // esi
  char v19; // bl
  unsigned int v20; // eax
  __m128d v21; // xmm3
  __m128d v22; // xmm2
  __m128 v23; // xmm2
  double v24; // xmm5_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140191A20[80];
#define v26 (*(__int64 (*))(void *)(sr_frame_140191A20 + 8)) /* [rsp+0h] */
#define v27 (*(int (*))(void *)(sr_frame_140191A20 + 40)) /* [rsp+20h] */
#define v28 (*(__int128 (*))(void *)(sr_frame_140191A20 + 48)) /* [rsp+28h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_140191A20 + 64)) /* [rsp+38h] */

  sub_140115AE0(&v27, 2);
  v2 = 0;
  v3 = dword_140404A6C[289317484];
  v4 = 14;
  if ( v27 )
  {
    v5 = 14;
    if ( (int)dword_140404A6C[289317484] >= 0x10000
      || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
    {
      v7 = v27;
      v6 = dword_140404A6C[289317485];
    }
    else
    {
      v6 = dword_140404A6C[289317485];
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = 8 - v6;
        v7 |= (~(-1 << v5)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v3) >> SLOBYTE(dword_140404A6C[289317485]))) << v8;
        if ( v5 < 8 - v6 )
          break;
        v6 = 0;
        dword_140404A6C[289317485] = 0;
        if ( v5 == v9 )
        {
          dword_140404A6C[289317484] = ++v3;
          goto LABEL_13;
        }
        ++v3;
        v5 -= v9;
        v8 += v9;
        dword_140404A6C[289317484] = v3;
        if ( v5 <= 0 )
          goto LABEL_13;
      }
      v6 += v5;
      dword_140404A6C[289317485] = v6;
    }
LABEL_13:
    v10 = v7;
    if ( (v7 & 0x2000) != 0 )
    {
      v10 = v7 | 0xFFFFC000;
      dword_140404A6C[349900622] = v7 | 0xFFFFC000;
    }
    else
    {
      dword_140404A6C[349900622] = v7;
    }
  }
  else
  {
    v7 = 0;
    v10 = dword_140404A6C[349900622];
    v6 = dword_140404A6C[289317485];
  }
  if ( v27 == 1 )
  {
    v14 = dword_140404A6C[349900623];
  }
  else
  {
    v11 = 14;
    if ( v3 < 0x10000 && v3 + 1 <= (int)dword_140404A6C[289317483] )
    {
      v7 = 0;
      v12 = 0;
      while ( 1 )
      {
        v13 = 8 - v6;
        v7 |= (~(-1 << v11)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v3) >> SLOBYTE(dword_140404A6C[289317485]))) << v12;
        if ( v11 < 8 - v6 )
          break;
        v6 = 0;
        dword_140404A6C[289317485] = 0;
        if ( v11 == v13 )
        {
          dword_140404A6C[289317484] = ++v3;
          goto LABEL_27;
        }
        ++v3;
        v11 -= v13;
        v12 += v13;
        dword_140404A6C[289317484] = v3;
        if ( v11 <= 0 )
          goto LABEL_27;
      }
      v6 += v11;
      dword_140404A6C[289317485] = v6;
    }
LABEL_27:
    v14 = v7;
    if ( (v7 & 0x2000) != 0 )
    {
      v14 = v7 | 0xFFFFC000;
      dword_140404A6C[349900623] = v7 | 0xFFFFC000;
    }
    else
    {
      dword_140404A6C[349900623] = v7;
    }
  }
  if ( v27 == 2 )
  {
    v18 = dword_140404A6C[349900624];
  }
  else
  {
    v15 = 14;
    if ( v3 < 0x10000 && v3 + 1 <= (int)dword_140404A6C[289317483] )
    {
      v7 = 0;
      v16 = 0;
      while ( 1 )
      {
        v17 = 8 - v6;
        v7 |= (~(-1 << v15)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v3) >> SLOBYTE(dword_140404A6C[289317485]))) << v16;
        if ( v15 < 8 - v6 )
          break;
        v6 = 0;
        dword_140404A6C[289317485] = 0;
        if ( v15 == v17 )
        {
          dword_140404A6C[289317484] = ++v3;
          goto LABEL_41;
        }
        ++v3;
        v15 -= v17;
        v16 += v17;
        dword_140404A6C[289317484] = v3;
        if ( v15 <= 0 )
          goto LABEL_41;
      }
      v6 += v15;
      dword_140404A6C[289317485] = v6;
    }
LABEL_41:
    v18 = v7;
    if ( (v7 & 0x2000) != 0 )
    {
      v18 = v7 | 0xFFFFC000;
      dword_140404A6C[349900624] = v7 | 0xFFFFC000;
    }
    else
    {
      dword_140404A6C[349900624] = v7;
    }
  }
  if ( v27 == 3 )
  {
    v7 = dword_140404A6C[349900625];
  }
  else
  {
    if ( v3 < 0x10000 && v3 + 1 <= (int)dword_140404A6C[289317483] )
    {
      v7 = 0;
      v19 = 0;
      while ( 1 )
      {
        v20 = 8 - v6;
        v7 |= (~(-1 << v4)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v3) >> SLOBYTE(dword_140404A6C[289317485]))) << v19;
        if ( v4 < 8 - v6 )
          break;
        dword_140404A6C[289317485] = 0;
        if ( v4 == v20 )
        {
          dword_140404A6C[289317484] = v3 + 1;
          goto LABEL_55;
        }
        ++v3;
        v4 -= v20;
        v19 += v20;
        dword_140404A6C[289317484] = v3;
        v6 = 0;
        if ( v4 <= 0 )
          goto LABEL_55;
      }
      dword_140404A6C[289317485] = v4 + v6;
    }
LABEL_55:
    if ( (v7 & 0x2000) != 0 )
      v7 |= 0xFFFFC000;
    dword_140404A6C[349900625] = v7;
  }
  v21 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v22 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  if ( v27 )
  {
    SR_VEC_LANES(128, v22, f64)[0] = 1.0 - (double)v10 * (double)v10 * 0.00000002980959967779399;
    *(float *)&v28 = (double)v10 * 0.0001726545674976309;
  }
  if ( v27 != 1 )
  {
    SR_VEC_LANES(128, v22, f64)[0] = SR_VEC_LANES(128, v22, f64)[0] + (double)v14 * (double)v14 * -0.00000002980959967779399;
    *((float *)&v28 + 1) = (double)v14 * 0.0001726545674976309;
  }
  if ( v27 != 2 )
  {
    SR_VEC_LANES(128, v22, f64)[0] = SR_VEC_LANES(128, v22, f64)[0] + (double)v18 * (double)v18 * -0.00000002980959967779399;
    *((float *)&v28 + 2) = (double)v18 * 0.0001726545674976309;
  }
  if ( v27 != 3 )
  {
    SR_VEC_LANES(128, v22, f64)[0] = SR_VEC_LANES(128, v22, f64)[0] + (double)v7 * (double)v7 * -0.00000002980959967779399;
    *((float *)&v28 + 3) = (double)v7 * 0.0001726545674976309;
  }
  if ( SR_VEC_LANES(128, v22, f64)[0] <= 0.0 )
    *((_DWORD *)&v28 + v27) = 0;
  else
    *((float *)&v28 + v27) = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v22), f64)[0];
  v23 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(v28))));
  SR_VEC_LANES(128, v23, f32)[0] = (float)((float)(SR_VEC_LANES(128, v23, f32)[0] * SR_VEC_LANES(128, v23, f32)[0])
                          + (float)(*((float *)&v28 + 2) * *((float *)&v28 + 2)))
                  + (float)((float)(*(float *)&v28 * *(float *)&v28)
                          + (float)(*((float *)&v28 + 1) * *((float *)&v28 + 1)));
  v24 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v23)), f64)[0];
  if ( v24 == 0.0 )
  {
    v28 = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, v21, f64)[0] = 1.0 / v24;
    SR_VEC_LANES(128, v21, f64)[0] = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(v21, v21), f64)[0];
    do
    {
      *(double *)((char *)&v28 + 4 * v2) = COERCE_FLOAT(*(_QWORD *)((char *)&v28 + 4 * v2)) * SR_VEC_LANES(128, v21, f64)[0];
      v2 += 2;
    }
    while ( v2 < 4 );
  }
  return sub_14011C340(a1, (float *)&v28); /* 0x140191F69: the result of this call is still in rax at the exit */
}
#undef v26
#undef v27
#undef v28
#undef v29

// 140279490: using guessed type __int128 xmmword_140279490;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;
// 193AC87A4: using guessed type unsigned int;
// 193AC87A8: using guessed type unsigned int;
// 193AC87AC: using guessed type unsigned int;
// 193AC87B0: using guessed type unsigned int;

//----- (0000000140191F90) ----------------------------------------------------
__int64            sub_140191F90(float *a1, int *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __m128d v5; // xmm4
  __m128d v6; // xmm3
  double v7; // xmm2_8
  __m128i v8; // xmm2
  __m128i v9; // xmm2
  double v10; // xmm2_8
  float v11; // xmm1_4
  __m128 v12; // xmm2
  double v13; // xmm3_8
  __int64 v14; // rax
  double v15; // xmm3_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140191F90[64];
#define v17 (*(__int64 (*))(void *)(sr_frame_140191F90 + 0)) /* [rsp+0h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140191F90 + 32)) /* [rsp+20h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140191F90 + 48)) /* [rsp+30h] */

  v2 = *a2;
  v4 = 1;
  v5 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v6 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  if ( dword_140301DD8 != (_DWORD)v2 )
  {
    v4 = 2;
    v7 = (double)a2[1];
    SR_VEC_LANES(128, v6, f64)[0] = 1.0 - v7 * v7 * 0.00000002980959967779399;
    *((float *)&v18 + dword_140301DD8) = v7 * 0.0001726545674976309;
  }
  if ( dword_140301DDC != (_DWORD)v2 )
  {
    v8 = _mm_cvtsi32_si128(a2[v4++]);
    *(double *)SR_VEC_LANES(128, v8, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v8), f64)[0];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + *(double *)SR_VEC_LANES(128, v8, i64) * *(double *)SR_VEC_LANES(128, v8, i64) * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DDC) = *(double *)SR_VEC_LANES(128, v8, i64) * 0.0001726545674976309;
  }
  if ( dword_140301DE0 != (_DWORD)v2 )
  {
    v9 = _mm_cvtsi32_si128(a2[v4++]);
    *(double *)SR_VEC_LANES(128, v9, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v9), f64)[0];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + *(double *)SR_VEC_LANES(128, v9, i64) * *(double *)SR_VEC_LANES(128, v9, i64) * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DE0) = *(double *)SR_VEC_LANES(128, v9, i64) * 0.0001726545674976309;
  }
  if ( dword_140301DE4 != (_DWORD)v2 )
  {
    v10 = (double)a2[v4];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + v10 * v10 * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DE4) = v10 * 0.0001726545674976309;
  }
  if ( SR_VEC_LANES(128, v6, f64)[0] <= 0.0 )
    v11 = 0.0;
  else
    v11 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v6), f64)[0];
  *((float *)&v18 + v2) = v11;
  v12 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(v18))));
  SR_VEC_LANES(128, v12, f32)[0] = (float)((float)(SR_VEC_LANES(128, v12, f32)[0] * SR_VEC_LANES(128, v12, f32)[0])
                          + (float)(*((float *)&v18 + 2) * *((float *)&v18 + 2)))
                  + (float)((float)(*(float *)&v18 * *(float *)&v18)
                          + (float)(*((float *)&v18 + 1) * *((float *)&v18 + 1)));
  v13 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v12)), f64)[0];
  if ( v13 == 0.0 )
  {
    v18 = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, v5, f64)[0] = 1.0 / v13;
    v14 = 0;
    v15 = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(v5, v5), f64)[0];
    do
    {
      *(double *)((char *)&v18 + 4 * v14) = COERCE_FLOAT(*(_QWORD *)((char *)&v18 + 4 * v14)) * v15;
      v14 += 2;
    }
    while ( v14 < 4 );
  }
  sub_14011C340(a1, (float *)&v18);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v17
#undef v18
#undef v19

// 140279490: using guessed type __int128 xmmword_140279490;
// 140301DD8: using guessed type int dword_140301DD8;
// 140301DDC: using guessed type int dword_140301DDC;
// 140301DE0: using guessed type int dword_140301DE0;
// 140301DE4: using guessed type int dword_140301DE4;

//----- (0000000140192160) ----------------------------------------------------
__int64            sub_140192160(float *a1, int *a2, char a3)
{
  __m128d v3; // xmm4
  char v5; // cl
  __int64 v6; // r8
  __m128d v7; // xmm3
  int v8; // eax
  __int64 v9; // rcx
  double v10; // xmm5_8
  double v11; // xmm2_8
  __m128i v12; // xmm2
  __m128i v13; // xmm2
  double v14; // xmm2_8
  float v15; // xmm1_4
  __m128 v16; // xmm2
  double v17; // xmm3_8
  __int64 v18; // rax
  double v19; // xmm3_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140192160[64];
#define v21 (*(__int64 (*))(void *)(sr_frame_140192160 + 0)) /* [rsp+0h] */
#define v22 (*(__int128 (*))(void *)(sr_frame_140192160 + 32)) /* [rsp+20h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_140192160 + 48)) /* [rsp+30h] */

  v3 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v5 = a3 - 1;
  v6 = 1;
  v7 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v8 = 1 << v5;
  v9 = *a2;
  v10 = (double)v8 - 1.0;
  if ( dword_140301DF8 != (_DWORD)v9 )
  {
    v6 = 2;
    v11 = (double)a2[1] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = 1.0 - v11 * v11 * 2.0;
    *((float *)&v22 + dword_140301DF8) = v11 * 1.414213562373095;
  }
  if ( dword_140301DFC != (_DWORD)v9 )
  {
    v12 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)SR_VEC_LANES(128, v12, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v12), f64)[0] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + *(double *)SR_VEC_LANES(128, v12, i64) * *(double *)SR_VEC_LANES(128, v12, i64) * -2.0;
    *((float *)&v22 + dword_140301DFC) = *(double *)SR_VEC_LANES(128, v12, i64) * 1.414213562373095;
  }
  if ( dword_140301E00 != (_DWORD)v9 )
  {
    v13 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)SR_VEC_LANES(128, v13, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v13), f64)[0] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + *(double *)SR_VEC_LANES(128, v13, i64) * *(double *)SR_VEC_LANES(128, v13, i64) * -2.0;
    *((float *)&v22 + dword_140301E00) = *(double *)SR_VEC_LANES(128, v13, i64) * 1.414213562373095;
  }
  if ( dword_140301E04 != (_DWORD)v9 )
  {
    v14 = (double)a2[v6] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + v14 * v14 * -2.0;
    *((float *)&v22 + dword_140301E04) = v14 * 1.414213562373095;
  }
  if ( SR_VEC_LANES(128, v7, f64)[0] <= 0.0 )
    v15 = 0.0;
  else
    v15 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v7), f64)[0];
  *((float *)&v22 + v9) = v15;
  v16 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(v22))));
  SR_VEC_LANES(128, v16, f32)[0] = (float)((float)(SR_VEC_LANES(128, v16, f32)[0] * SR_VEC_LANES(128, v16, f32)[0])
                          + (float)(*((float *)&v22 + 2) * *((float *)&v22 + 2)))
                  + (float)((float)(*(float *)&v22 * *(float *)&v22)
                          + (float)(*((float *)&v22 + 1) * *((float *)&v22 + 1)));
  v17 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v16)), f64)[0];
  if ( v17 == 0.0 )
  {
    v22 = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, v3, f64)[0] = 1.0 / v17;
    v18 = 0;
    v19 = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(v3, v3), f64)[0];
    do
    {
      *(double *)((char *)&v22 + 4 * v18) = COERCE_FLOAT(*(_QWORD *)((char *)&v22 + 4 * v18)) * v19;
      v18 += 2;
    }
    while ( v18 < 4 );
  }
  sub_14011C340(a1, (float *)&v22);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v21
#undef v22
#undef v23

// 140279490: using guessed type __int128 xmmword_140279490;
// 140301DF8: using guessed type int dword_140301DF8;
// 140301DFC: using guessed type int dword_140301DFC;
// 140301E00: using guessed type int dword_140301E00;
// 140301E04: using guessed type int dword_140301E04;

//----- (0000000140192470) ----------------------------------------------------
__int64            sub_140192470(float *a1, __int64 a2, float a3, int a4)
{
  float *v4; // rbx
  signed int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rbp
  float v9; // xmm6_4
  float v10; // xmm1_4
  __int64 result; // rax
  float v12; // xmm0_4
  _DWORD v13[4]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1;
  v6 = (unsigned int)(1 << a4) >> 1;
  v7 = 3;
  v8 = a2 - (_QWORD)a1;
  v9 = (float)v6 / a3;
  do
  {
    sub_140115AE0(v13, a4);
    v10 = (float)(v13[0] & (v6 - 1));
    result = v13[0] & (unsigned int)v6;
    v12 = (float)(1.0 / v9) * v10;
    if ( (_DWORD)result == v6 )
      v12 = (float)(-1.0 / v9) * v10;
    *v4 = v12 + *(float *)((char *)v4 + v8);
    ++v4;
    --v7;
  }
  while ( v7 );
  return result;
}


//----- (0000000140192560) ----------------------------------------------------
__int64            sub_140192560(float *a1, float a2, int a3)
{
  char v4; // bl
  signed int v5; // r8d
  __int64 result; // rax
  float v7; // xmm1_4
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  sub_140115AE0(&v8, a3);
  v5 = (unsigned int)(1 << v4) >> 1;
  result = v8 & (unsigned int)v5;
  v7 = (float)(v8 & (v5 - 1)) / (float)((float)v5 / a2);
  *a1 = v7;
  if ( (_DWORD)result == v5 )
    *a1 = -v7;
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401925F0) ----------------------------------------------------
__int64            sub_1401925F0(_DWORD *a1, float *a2, char a3)
{
  __int64 v4; // r11
  float v6; // xmm0_4
  __int64 v8; // r8
  __int64 result; // rax
  int v10; // edx
  double v11; // xmm1_8
  double v12; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4

  v4 = *a1 & 3;
  if ( (*a1 & 4) != 0 )
    v6 = -1.0;
  else
    v6 = 1.0;
  a2[*a1 & 3] = v6;
  v8 = 1;
  result = (unsigned int)((1 << a3) - 1);
  v10 = (1 << a3) - 1;
  v11 = (double)v10;
  if ( v4 )
  {
    result = (unsigned int)v10 & (a1[1] >> 1);
    v12 = 1.0 / v11;
    if ( (a1[1] & 1) != 0 )
      v12 = -1.0 / v11;
    v8 = 2;
    *a2 = (double)(int)result * v12;
  }
  if ( (_DWORD)v4 != 1 )
  {
    result = (unsigned int)v10 & (a1[v8] >> 1);
    v13 = (double)(int)result / v11;
    if ( (a1[v8] & 1) != 0 )
      v13 = -1.0 / v11 * (double)(int)result;
    ++v8;
    a2[1] = v13;
  }
  if ( (_DWORD)v4 == 2 )
  {
    v15 = a2[2];
  }
  else
  {
    result = (unsigned int)v10 & (a1[v8] >> 1);
    v14 = (double)(int)result / v11;
    if ( (a1[v8] & 1) != 0 )
      v14 = -1.0 / v11 * (double)(int)result;
    v15 = v14;
  }
  v16 = a2[1];
  v17 = *a2;
  v18 = fsqrt((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v15 * v15));
  if ( v18 == 0.0 )
  {
    v19 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
  }
  else
  {
    v19 = v15 * (float)(1.0 / v18);
    v20 = v16 * (float)(1.0 / v18);
    v21 = v17 * (float)(1.0 / v18);
  }
  *a2 = v21;
  a2[1] = v20;
  a2[2] = v19;
  return result;
}


//----- (0000000140192790) ----------------------------------------------------
__int64            sub_140192790(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r11
  __int64 v5; // r14
  int v6; // edi
  char *v7; // rdx
  int *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // r12d
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  signed int v20; // r13d
  int v21; // esi
  signed int v22; // r15d
  __int64 v23; // rbx
  int v24; // ecx
  __int64 v25; // r14
  signed int v26; // esi
  float v27; // xmm13_4
  float v28; // xmm14_4
  float v29; // xmm15_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm6_4
  float v35; // xmm9_4
  float v36; // xmm6_4
  float v37; // xmm9_4
  float v38; // xmm10_4
  float v39; // xmm5_4
  float v40; // xmm11_4
  float v41; // xmm12_4
  float v42; // xmm6_4
  float v43; // xmm9_4
  float v44; // xmm3_4
  float v45; // xmm12_4
  float v46; // xmm6_4
  float v47; // xmm9_4
  __int64 v48; // rdi
  float v49; // xmm6_4
  float *v50; // rbx
  unsigned int v51; // xmm1_4
  unsigned int v52; // xmm1_4
  unsigned int v53; // xmm1_4
  unsigned int v54; // xmm1_4
  unsigned int v55; // xmm0_4
  __int64 v56; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140192790[304];
#define v58 (*(__int64 (*))(void *)(sr_frame_140192790 + 8)) /* [rsp+0h] */
#define v59 (*(int (*))(void *)(sr_frame_140192790 + 40)) /* [rsp+20h] */
#define v60 (*(unsigned int (*))(void *)(sr_frame_140192790 + 44)) /* [rsp+24h] */
#define v61 (*(float (*))(void *)(sr_frame_140192790 + 48)) /* [rsp+28h] */
#define v62 (*(unsigned int (*))(void *)(sr_frame_140192790 + 52)) /* [rsp+2Ch] */
#define v63 (*(unsigned int (*))(void *)(sr_frame_140192790 + 56)) /* [rsp+30h] */
#define v64 (*(unsigned int (*))(void *)(sr_frame_140192790 + 60)) /* [rsp+34h] */
#define v65 (*(unsigned int (*))(void *)(sr_frame_140192790 + 64)) /* [rsp+38h] */
#define v66 (*(int (*))(void *)(sr_frame_140192790 + 68)) /* [rsp+3Ch] */
#define v67 (*(int (*))(void *)(sr_frame_140192790 + 72)) /* [rsp+40h] */
#define v68 (*(__int128 (*))(void *)(sr_frame_140192790 + 80)) /* [rsp+48h] */
#define v69 (*(int (*))(void *)(sr_frame_140192790 + 96)) /* [rsp+58h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_140192790 + 104)) /* [rsp+60h] */
#define v71 (*(__int64 (*))(void *)(sr_frame_140192790 + 112)) /* [rsp+68h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_140192790 + 120)) /* [rsp+70h] */
#define v73 (*(__int64 (*))(void *)(sr_frame_140192790 + 128)) /* [rsp+78h] */
#define v74 (*(__int64 (*))(void *)(sr_frame_140192790 + 136)) /* [rsp+80h] */
#define v75 (*(__int64 (*))(void *)(sr_frame_140192790 + 144)) /* [rsp+88h] */
#define v76 (*(__int64 (*))(void *)(sr_frame_140192790 + 152)) /* [rsp+90h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_140192790 + 160)) /* [rsp+98h] */
#define v78 (*(__int64 (*))(void *)(sr_frame_140192790 + 168)) /* [rsp+A0h] */
#define v79 (*(__int64 (*))(void *)(sr_frame_140192790 + 176)) /* [rsp+A8h] */
#define v80 (*(unsigned int (*))(void *)(sr_frame_140192790 + 184)) /* [rsp+B0h] */
#define v81 (*(float (*))(void *)(sr_frame_140192790 + 188)) /* [rsp+B4h] */
#define v82 (*(unsigned int (*))(void *)(sr_frame_140192790 + 192)) /* [rsp+B8h] */
#define v83 (*(unsigned int (*))(void *)(sr_frame_140192790 + 196)) /* [rsp+BCh] */
#define v84 (*(float (*))(void *)(sr_frame_140192790 + 200)) /* [rsp+C0h] */
#define v85 (*(unsigned int (*))(void *)(sr_frame_140192790 + 204)) /* [rsp+C4h] */
#define v86 (*(unsigned int (*))(void *)(sr_frame_140192790 + 208)) /* [rsp+C8h] */
#define v87 (*(float (*))(void *)(sr_frame_140192790 + 212)) /* [rsp+CCh] */
#define v88 (*(unsigned int (*))(void *)(sr_frame_140192790 + 216)) /* [rsp+D0h] */
#define v89 (*(unsigned int (*))(void *)(sr_frame_140192790 + 220)) /* [rsp+D4h] */
#define v90 (*(float (*))(void *)(sr_frame_140192790 + 224)) /* [rsp+D8h] */
#define v91 (*(float (*))(void *)(sr_frame_140192790 + 228)) /* [rsp+DCh] */
#define v92 (*(float (*))(void *)(sr_frame_140192790 + 232)) /* [rsp+E0h] */
#define v93 (*(float (*))(void *)(sr_frame_140192790 + 236)) /* [rsp+E4h] */
#define v94 (*(float (*))(void *)(sr_frame_140192790 + 240)) /* [rsp+E8h] */
#define v95 (*(float (*))(void *)(sr_frame_140192790 + 244)) /* [rsp+ECh] */
#define v96 (*(_DWORD (*)[2])(void *)(sr_frame_140192790 + 248)) /* [rsp+F0h] */
#define v97 (*(char (*))(void *)(sr_frame_140192790 + 256)) /* [rsp+F8h] */
#define v98 (*(__int64 (*))(void *)(sr_frame_140192790 + 296)) /* [rsp+120h] */

  v2 = a1;
  v3 = 104LL * a2;
  v4 = 180288LL * a1;
  v73 = a1;
  v79 = a2;
  v78 = v3;
  v5 = v3 + v4;
  v6 = *(unsigned int *)((char *)&dword_140404A6C[335173759] + v3 + v4);
  v77 = v3 + v4;
  v60 = v6;
  if ( v6 >= 3 )
  {
    v7 = &v97;
    v8 = (int *)((char *)&dword_140404A6C[335173760] + v5);
    v9 = (unsigned int)v6;
    do
    {
      v7 += 12;
      v10 = 15024LL * a1 + *v8++;
      *((_DWORD *)v7 - 5) = dword_140404A6C[3 * v10 + 335170685];
      *((_DWORD *)v7 - 4) = dword_140404A6C[3 * v10 + 335170686];
      *((_DWORD *)v7 - 3) = dword_140404A6C[3 * v10 + 335170687];
      --v9;
    }
    while ( v9 );
    v11 = *(unsigned int *)((char *)&dword_140404A6C[335157368] + v4);
    LODWORD(v4) = 0;
    v61 = 65536.0;
    v74 = 0;
    v68 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( v11 > 0 )
    {
      v16 = 0;
      v17 = 1;
      v72 = 0;
      v59 = 1;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      do
      {
        v18 = v16 + 1;
        v69 = v17;
        *(_QWORD *)&v68 = v18;
        v19 = v17;
        v71 = v18;
        v20 = v17;
        if ( v17 < v11 )
        {
          v21 = v17 + 1;
          v67 = v17 + 1;
          do
          {
            ++v18;
            v22 = v21;
            v76 = v18;
            v23 = v18;
            v70 = v18;
            if ( v21 < v11 )
            {
              v24 = v21 + 1;
              v66 = v21 + 1;
              do
              {
                v25 = v23 + 1;
                v26 = v24;
                v75 = v23 + 1;
                if ( v24 < v11 )
                {
                  do
                  {
                    v27 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v72];
                    v28 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v72];
                    v29 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v72];
                    v80 = LODWORD(v27);
                    v81 = v28;
                    v82 = LODWORD(v29);
                    v30 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v71];
                    v31 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v71];
                    v85 = dword_140404A6C[45072 * v73 + 335157371 + 4 * v71];
                    v84 = v30;
                    v32 = v30 - v28;
                    v83 = LODWORD(v31);
                    v33 = v31 - v27;
                    v34 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v23];
                    v35 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v23];
                    v87 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v23];
                    v88 = LODWORD(v34);
                    v36 = v34 - v29;
                    v86 = LODWORD(v35);
                    v37 = v35 - v27;
                    v38 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v25];
                    v39 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v25];
                    v40 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v25];
                    v41 = (float)((float)(v87 - v28) * (float)(*(float *)&v85 - v29)) - (float)(v36 * v32);
                    v89 = LODWORD(v38);
                    v90 = v39;
                    v42 = (float)(v36 * v33) - (float)(v37 * (float)(*(float *)&v85 - v29));
                    v91 = v40;
                    v43 = (float)(v37 * v32) - (float)((float)(v87 - v28) * v33);
                    v44 = fsqrt((float)((float)(v42 * v42) + (float)(v41 * v41)) + (float)(v43 * v43));
                    if ( v44 == 0.0 )
                    {
                      v45 = 0.0;
                      v46 = 0.0;
                      v47 = 0.0;
                    }
                    else
                    {
                      v45 = v41 * (float)(1.0 / v44);
                      v46 = v42 * (float)(1.0 / v44);
                      v47 = v43 * (float)(1.0 / v44);
                    }
                    v48 = v60;
                    if ( (double)((float)((float)((float)((float)(v39 - v28) * v46) + (float)((float)(v38 - v27) * v45))
                                        + (float)((float)(v40 - v29) * v47)) < 0.25) == 0.0 )
                    {
                      v49 = 0.0;
                      v50 = (float *)v96;
                      do
                      {
                        sub_14002E730((__int64)&v92, 4, (__int64)&v80, v50);
                        if ( v49 < fabs(v92) )
                          v49 = fabs(v92);
                        if ( v49 < fabs(v93) )
                          v49 = fabs(v93);
                        if ( v49 < fabs(v94) )
                          v49 = fabs(v94);
                        if ( v49 < fabs(v95) )
                          v49 = fabs(v95);
                        v50 += 3;
                        --v48;
                      }
                      while ( v48 );
                      LODWORD(v4) = 0;
                      v17 = v59;
                      v23 = v70;
                      if ( v61 <= v49 )
                      {
                        v12 = v62;
                        v13 = v63;
                        v14 = v64;
                        v15 = v65;
                      }
                      else
                      {
                        v15 = v59 - 1;
                        v61 = v49;
                        v12 = v26;
                        v65 = v59 - 1;
                        v62 = v26;
                        v14 = v20;
                        v64 = v20;
                        v13 = v22;
                        v63 = v22;
                      }
                    }
                    else
                    {
                      v17 = v59;
                    }
                    ++v26;
                    ++v25;
                  }
                  while ( v26 < v11 );
                  v24 = v66;
                }
                v23 = v75;
                ++v24;
                ++v22;
                v66 = v24;
                v70 = v75;
              }
              while ( v22 < v11 );
              v21 = v67;
              v18 = v76;
            }
            ++v21;
            v71 = v18;
            ++v20;
            v67 = v21;
          }
          while ( v20 < v11 );
          v19 = v69;
        }
        v16 = v68;
        v59 = ++v17;
        v72 = v68;
      }
      while ( v19 < v11 );
      v2 = v73;
      v5 = v77;
      v3 = v78;
    }
    v51 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v15];
    v80 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v15];
    v82 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v15];
    v81 = *(float *)&v51;
    v52 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v14];
    v83 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v14];
    v85 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v14];
    v84 = *(float *)&v52;
    v53 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v13];
    v86 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v13];
    v88 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v13];
    v87 = *(float *)&v53;
    v54 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v12];
    v89 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v12];
    v55 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v12];
    v90 = *(float *)&v54;
    v91 = *(float *)&v55;
    v56 = 104 * v79 + 180288 * v2;
    *(unsigned int *)((char *)&dword_140404A6C[335173764] + v56) = v15;
    *(unsigned int *)((char *)&dword_140404A6C[335173765] + v56) = v14;
    *(unsigned int *)((char *)&dword_140404A6C[335173766] + v56) = v13;
    *(unsigned int *)((char *)&dword_140404A6C[335173767] + v56) = v12;
    if ( *(int *)((char *)&dword_140404A6C[335173759] + v5) > 0 )
    {
      do
      {
        sub_14002E730(
          (__int64)&dword_140404A6C[45072 * v2 + 335173768 + 4 * (int)v4] + v3,
          4,
          (__int64)&v80,
          (float *)&v96[3 * (int)v4]);
        v4 = (unsigned int)(v74 + 1);
        v74 = v4;
      }
      while ( (int)v4 < *(int *)((char *)&dword_140404A6C[335173759] + v5) );
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
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
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83
#undef v84
#undef v85
#undef v86
#undef v87
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95
#undef v96
#undef v97
#undef v98

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 19028A428: using guessed type unsigned int;

//----- (0000000140193FE0) ----------------------------------------------------
__int64            sub_140193FE0(int a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v8; // r12
  __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // r8
  _DWORD *v13; // rax
  __int64 v14; // r8
  unsigned int *v15; // r10
  int *v16; // r9

  v4 = a4;
  v6 = 3246088LL * a1;
  v8 = a1;
  if ( dword_140404A6C[v6 + 312324428] )
    return 0;
  v10 = v6 * 4 + 24LL * a2;
  if ( *(unsigned int *)((char *)&dword_140404A6C[312226123] + v10) != -1 )
    sub_1401941F0(a1, a2);
  if ( !(_DWORD)v4 || (int)v4 >= (int)dword_140404A6C[v6 + 309078344] )
    goto LABEL_16;
  v11 = 0;
  v12 = dword_140404A6C[v6 + 309078343] - 1;
  if ( (int)(dword_140404A6C[v6 + 309078343] - 1) > 0 )
  {
    v13 = &dword_140404A6C[309076805 + v6];
    do
    {
      if ( (int)v4 + *(v13 - 1) < (int)dword_140404A6C[v6 + 309078344]
        && *v13 < (signed int)dword_140404A6C[v6 + 309078345] )
      {
        break;
      }
      ++v11;
      v13 += 3074;
    }
    while ( v11 < (int)v12 );
  }
  if ( v11 < (int)v12 )
  {
    if ( !dword_140404A6C[v6 + 312324428] )
    {
      qword_140404170(
        dword_140404A6C[v6 + 309078341],
        dword_140404A6C[2 * dword_140404A6C[v8 + 283791462] + 283793813],
        v12);
      qword_140404198(
        dword_140404A6C[v6 + 309078341],
        (int)(v11 * dword_140404A6C[v6 + 309078344] + dword_140404A6C[3074 * v11 + 309078346 + v6]),
        v4,
        a3);
    }
    v14 = 3074LL * v11;
    v15 = &dword_140404A6C[v6 + 309078346 + v14];
    v16 = (int *)&dword_140404A6C[309076805 + v6 + v14];
    dword_140404A6C[3 * *v16 + 309078348 + v14 + v6] = *v15;
    dword_140404A6C[3 * *v16 + 309078349 + v14 + v6] = v4;
    dword_140404A6C[3 * *v16 + 309078350 + v14 + v6] = a2;
    *(unsigned int *)((char *)&dword_140404A6C[312226123] + v10) = v11;
    *(unsigned int *)((char *)&dword_140404A6C[312226124] + v10) = (*v16)++;
    *v15 += v4;
    dword_140404A6C[v6 + 312324427] += v4;
    return 1;
  }
  else
  {
LABEL_16:
    *(_QWORD *)((char *)&dword_140404A6C[312226123] + v10) = -1;
    return 0;
  }
}

// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401941F0) ----------------------------------------------------
void            sub_1401941F0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // sf
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v14; // ebp
  __int64 v15; // r8
  int v16; // eax
  unsigned int *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // r15d
  unsigned int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401941F0[32];
#define v28 (*(unsigned int (*))(void *)(sr_frame_1401941F0 + 0)) /* [rsp+70h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_1401941F0 + 16)) /* [rsp+80h] */

  v2 = a1;
  v3 = 3246088LL * a1;
  if ( !dword_140404A6C[v3 + 312324428] )
  {
    v4 = v3 * 4 + 24LL * a2;
    v5 = *(int *)((char *)&dword_140404A6C[312226124] + v4);
    v6 = *(int *)((char *)&dword_140404A6C[312226123] + v4);
    if ( (int)v6 >= 0
      && (int)v6 < (int)(dword_140404A6C[v3 + 309078343] - 1)
      && (int)v5 >= 0
      && (int)v5 < (int)dword_140404A6C[v3 + 309078345] )
    {
      v7 = 3074 * v6;
      v8 = 12296 * v6 + v3 * 4;
      if ( *(int *)((char *)&dword_140404A6C[309078347] + v8) > 0 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[312226123] + v4) = -1;
        *(unsigned int *)((char *)&dword_140404A6C[312226124] + v4) = -1;
        --*(unsigned int *)((char *)&dword_140404A6C[309078347] + v8);
        v9 = 12 * v5 + v8;
        v29 = 3 * v5;
        v10 = *(unsigned int *)((char *)&dword_140404A6C[309078349] + v9);
        v11 = (int)(*(unsigned int *)((char *)&dword_140404A6C[309078346] + v8) - v10) < 0;
        *(unsigned int *)((char *)&dword_140404A6C[309078346] + v8) -= v10;
        v12 = *(unsigned int *)((char *)&dword_140404A6C[309078346] + v8);
        v13 = 0;
        if ( v11 )
          v12 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[309078346] + v8) = v12;
        dword_140404A6C[v3 + 312324427] -= *(unsigned int *)((char *)&dword_140404A6C[309078349] + v9);
        v14 = *(unsigned int *)((char *)&dword_140404A6C[309078348] + v9);
        qword_140404170(
          dword_140404A6C[v3 + 309078341],
          dword_140404A6C[2 * dword_140404A6C[v2 + 283791462] + 283793813],
          v2);
        v16 = *(unsigned int *)((char *)&dword_140404A6C[309078347] + v8);
        if ( dword_140404A6C[284024930] )
        {
          if ( (int)v5 < v16 )
          {
            v17 = &dword_140404A6C[v3 + 309078349 + v7 + v29];
            do
            {
              v18 = (int)v17[4];
              v17 += 3;
              v19 = (int)*v17;
              v20 = v5;
              LODWORD(v5) = v5 + 1;
              dword_140404A6C[6 * v18 + 312226124 + v3] = v20;
              qword_140404170(36663, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], v15);
              unk_1404047B0(
                dword_140404A6C[v3 + 309078341],
                36663,
                (int)(*(v17 - 1) + dword_140404A6C[v3 + 309078344] * v6),
                0,
                v19);
              qword_140404170(36662, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], v21);
              unk_1404047B0(
                36662,
                dword_140404A6C[v3 + 309078341],
                0,
                (int)(v14 + dword_140404A6C[v3 + 309078344] * v6),
                v19);
              *(v17 - 3) = *v17;
              v22 = v17[1];
              *(v17 - 4) = v14;
              v14 += v19;
              *(v17 - 2) = v22;
            }
            while ( (int)v5 < *(int *)((char *)&dword_140404A6C[309078347] + v8) );
          }
        }
        else if ( (int)v5 < v16 )
        {
          v28 = v14;
          v23 = dword_140404A6C[3 * v5 + 309078351 + v3 + v7];
          v24 = &dword_140404A6C[v3 + 309078349 + v7 + v29];
          do
          {
            v25 = (int)v24[4];
            v24 += 3;
            v13 += *v24;
            v26 = (unsigned int)v5;
            LODWORD(v5) = v5 + 1;
            dword_140404A6C[6 * v25 + 312226124 + v3] = v26;
            v27 = *v24;
            LODWORD(v25) = v24[1];
            *(v24 - 4) = v14;
            v14 += v27;
            *(v24 - 3) = v27;
            *(v24 - 2) = v25;
          }
          while ( (int)v5 < *(int *)((char *)&dword_140404A6C[309078347] + v8) );
          qword_140404170(36663, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], v26);
          unk_1404047B0(
            dword_140404A6C[v3 + 309078341],
            36663,
            (int)(v23 + dword_140404A6C[v3 + 309078344] * v6),
            0,
            v13);
          unk_1404047B0(
            36663,
            dword_140404A6C[v3 + 309078341],
            0,
            (int)(v28 + dword_140404A6C[v3 + 309078344] * v6),
            v13);
        }
      }
    }
  }
}
#undef v28
#undef v29

// 1401943A3: variable 'v15' is possibly undefined
// 1401943FB: variable 'v21' is possibly undefined
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 1404047B0: using guessed type __int64 (__fastcall *unk_1404047B0)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140194590) ----------------------------------------------------
__int64            sub_140194590(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v6; // rax

  v6 = sub_140001BC0();
  return sub_140236BF4(*(_QWORD *)v6 | 1LL, a1, -1, a2, nullptr, a3);
}


//----- (00000001401945F0)



__int64 sub_1401945F0()
{
  float *v0; // rax
  float *v1; // r8
  signed __int64 v2; // rcx
  __int64 v3; // r10
  float v4; // xmm3_4
  __int64 v5; // rdx
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD v12[10]; // [rsp-20h] [rbp-11E0h] BYREF
  __int64 v13; // [rsp+8h] [rbp-11B8h]
  _Alignas(16) unsigned sr_screen_sample_matrix[16];
  _DWORD v17[1048]; // [rsp+50h] [rbp-1170h] BYREF
  _Alignas(16) unsigned sr_screen_sample_result[16];
  _DWORD v21[1024]; // [rsp+1180h] [rbp-40h] BYREF
  __int64 v22; // [rsp+2180h] [rbp+FC0h]

  qword_1404042E0(dword_140404A6C[71738405]);
  v17[0] = dword_140404A6C[284205197];
  v17[1] = dword_140404A6C[284205197];
  v17[2] = dword_140404A6C[284205197];
  qword_140404378(dword_140404A6C[71738442], 1, 0, &dword_140404A6C[431564565]);
  qword_140404338(dword_140404A6C[71738464], 1, v17);
  qword_140404308(dword_140404A6C[71738446], BYTE2(dword_140404A6C[284024767]) != 0);
  HIDWORD((*(__int128 *)(void *)(sr_screen_sample_matrix+12))) = 1065353216;
  v0 = (float *)&(*(__m256i *)(void *)sr_screen_sample_result);
  (*(__int128 *)(void *)(sr_screen_sample_matrix+8)) = xmmword_140278E20;
  v1 = (float *)&dword_140404A6C[431564566];
  v2 = (char *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), u64)[2] - (char *)&(*(__m256i *)(void *)sr_screen_sample_result);
  *(__int64 *)((char *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i64) + 4) = 0;
  *(__int64 *)((char *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i64)[1] + 4) = 0;
  v3 = 4;
  SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i64)[3] = 0;
  *(_QWORD *)((char *)&(*(__int128 *)(void *)(sr_screen_sample_matrix+12)) + 4) = 1056964608;
  SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i32)[0] = 1056964608;
  SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i32)[5] = 1056964608;
  LODWORD((*(__int128 *)(void *)(sr_screen_sample_matrix+12))) = 1056964608;
  do
  {
    v4 = *(v1 - 1);
    v5 = 4;
    v6 = *v1;
    v7 = v1[1];
    v8 = v1[2];
    do
    {
      *v0 = (float)((float)((float)(v4 * *(float *)((char *)v0 + v2 - 16)) + (float)(v6 * *(float *)((char *)v0 + v2)))
                  + (float)(v7 * *(float *)((char *)v0 + v2 + 16)))
          + (float)(v8 * *(float *)((char *)v0 + v2 + 32));
      ++v0;
      --v5;
    }
    while ( v5 );
    v1 += 4;
    v2 -= 16LL;
    --v3;
  }
  while ( v3 );
  (*(__m256i *)(void *)sr_screen_sample_matrix) = (*(__m256i *)(void *)sr_screen_sample_result);
  (*(__int128 *)(void *)(sr_screen_sample_matrix+8)) = (*(__int128 *)(void *)(sr_screen_sample_result+8));
  (*(__int128 *)(void *)(sr_screen_sample_matrix+12)) = (*(__int128 *)(void *)(sr_screen_sample_result+12));
  qword_140404378(dword_140404A6C[71738463], 1, 0, &(*(__m256i *)(void *)sr_screen_sample_matrix));
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829871] + 284024944]);
  v21[0] = dword_140404A6C[188872557];
  v21[2] = dword_140404A6C[188872559];
  v21[5] = dword_140404A6C[188872559];
  v9 = dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813];
  v21[9] = dword_140404A6C[188872557];
  v21[1] = 1102577664;
  v21[3] = 1157627904;
  v21[4] = 1102577664;
  v21[6] = 1157627904;
  v21[7] = 1102577664;
  v21[8] = 1157627904;
  v21[10] = 1102577664;
  v21[11] = 1157627904;
  qword_140404170(34962, v9, v10);
  qword_140404198(34962, 0, 48, v21);
  qword_140404238(0);
  v13 = 0;
  v12[8] = 12;
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(12),(const void *)(intptr_t)(0));
  qword_140302FF8(6, 0, 4);
  qword_140404230(0);
  return 0; /* compatibility result discarded by all reviewed callers */
}
//----- (00000001401948E0) ----------------------------------------------------
__int64            sub_1401948E0(int a1, char *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v7; // r10
  unsigned int *v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  unsigned int *v11; // rax
  char v12; // cl

  result = a1;
  v4 = 5873LL * a1;
  v7 = (int)dword_140404A6C[v4 + 283831511];
  if ( v7 > 0 )
  {
    v8 = &dword_140404A6C[v4 + 283831512];
    do
    {
      v9 = 2570LL * (int)*v8;
      result = (int)dword_140404A6C[v9 + 275754072];
      if ( (int)result < 256 )
      {
        v10 = a2;
        dword_140404A6C[6 * result + 275754073 + v9] = a3;
        v11 = &dword_140404A6C[6 * (int)dword_140404A6C[v9 + 275754072] + 275754074 + v9];
        do
        {
          v12 = *v10++;
          *(_BYTE *)v11 = v12;
          v11 = (unsigned int *)((char *)v11 + 1);
        }
        while ( v12 );
        result = v9 * 4 + 24LL * (int)dword_140404A6C[v9 + 275754072];
        *(unsigned int *)((char *)&dword_140404A6C[275754078] + result) = 0;
        ++dword_140404A6C[v9 + 275754072];
      }
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401949C0) ----------------------------------------------------
__int64            sub_1401949C0(int a1)
{
  __int64 v1; // r10
  int v2; // r8d
  __int64 v3; // rax
  int v4; // eax
  __int64 result; // rax
  int v6; // r10d
  _DWORD *v7; // r11
  unsigned int *v8; // r11
  unsigned int *v9; // r11
  unsigned int *v10; // r11
  unsigned int *v11; // r11
  unsigned int *v12; // r11
  signed int v13; // r10d

  v1 = 5873LL * a1;
  v2 = 0;
  v3 = (int)dword_140404A6C[v1 + 283831510];
  if ( (_DWORD)v3 != -1 )
  {
    if ( (int)(dword_140404A6C[3597 * v3 + 71856275] - 1000) / 100 >= 0 )
      v2 = (int)(dword_140404A6C[3597 * v3 + 71856275] - 1000) / 100;
    if ( v2 > 1000 )
      v2 = 1000;
  }
  v4 = dword_140404A6C[v1 + 283831506];
  if ( v4 >= 10 )
    result = 100;
  else
    result = (unsigned int)(10 * v4);
  v6 = result + v2;
  if ( !dword_140404A6C[180001071] )
  {
    result = 2156LL * a1;
    v7 = (unsigned int *)((char *)&dword_140404A6C[180001074] + result);
    if ( *(int *)((char *)&dword_140404A6C[180001074] + result) > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180001072] * v6) >> 32) >> 31;
      *v7 = dword_140404A6C[180001072] + (signed int)(dword_140404A6C[180001072] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180035724] )
  {
    result = (__int64)&dword_140404A6C[180035727];
    v8 = &dword_140404A6C[539 * a1 + 180035727];
    if ( (int)*v8 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180035725] * v6) >> 32) >> 31;
      *v8 = dword_140404A6C[180035725] + (signed int)(dword_140404A6C[180035725] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180070377] )
  {
    result = (__int64)&dword_140404A6C[180070380];
    v9 = &dword_140404A6C[539 * a1 + 180070380];
    if ( (int)*v9 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180070378] * v6) >> 32) >> 31;
      *v9 = dword_140404A6C[180070378] + (signed int)(dword_140404A6C[180070378] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180105030] )
  {
    result = (__int64)&dword_140404A6C[180105033];
    v10 = &dword_140404A6C[539 * a1 + 180105033];
    if ( (int)*v10 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180105031] * v6) >> 32) >> 31;
      *v10 = dword_140404A6C[180105031] + (signed int)(dword_140404A6C[180105031] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180139683] )
  {
    result = (__int64)&dword_140404A6C[180139686];
    v11 = &dword_140404A6C[539 * a1 + 180139686];
    if ( (int)*v11 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180139684] * v6) >> 32) >> 31;
      *v11 = dword_140404A6C[180139684] + (signed int)(dword_140404A6C[180139684] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180174336] )
  {
    result = (__int64)&dword_140404A6C[180174339];
    v12 = &dword_140404A6C[539 * a1 + 180174339];
    if ( (int)*v12 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180174337] * v6) >> 32) >> 31;
      *v12 = dword_140404A6C[180174337] + (signed int)(dword_140404A6C[180174337] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180208989] && (int)dword_140404A6C[539 * a1 + 180208992] > 0 )
  {
    v13 = dword_140404A6C[180208990] * v6;
    dword_140404A6C[539 * a1 + 180208992] = dword_140404A6C[180208990] + v13 / 100;
    return (unsigned int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 31;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140194C10) ----------------------------------------------------
__int64            sub_140194C10(int a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  int v3; // ecx
  unsigned int *v4; // rbx
  int v5; // r9d
  int v6; // r10d
  int v7; // edx
  unsigned int *v8; // rcx
  unsigned int v9; // eax

  v1 = a1;
  result = (__int64)&dword_140404A6C[71856286];
  v3 = 0;
  do
  {
    if ( *(_DWORD *)(result - 132) && *(_DWORD *)result == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 14256) && *(_DWORD *)(result + 14388) == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 28644) && *(_DWORD *)(result + 28776) == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 43032) && *(_DWORD *)(result + 43164) == (_DWORD)v1 )
      ++v3;
    result += 57552;
  }
  while ( result < (__int64)&dword_140404A6C[72777118] );
  if ( v3 )
  {
    v4 = &dword_140404A6C[5 * v1 + 188872237];
    v5 = 2 * ((int)*v4 / 10);
    if ( (int)*v4 / 10 >= 0 )
      v5 = (int)*v4 / 10;
    if ( v3 <= 1 )
    {
      v6 = v5;
    }
    else
    {
      v5 /= 2;
      v6 = v5 / (v3 - 1);
    }
    result = 23492 * v1;
    v7 = 0;
    v8 = &dword_140404A6C[71856275];
    do
    {
      if ( *(v8 - 22) && v8[11] == (_DWORD)v1 )
      {
        v9 = *v8;
        if ( dword_140404A6C[5873 * v1 + 283831510] == v7 )
          result = v5 + v9;
        else
          result = v6 + v9;
        *v8 = result;
      }
      ++v7;
      v8 += 3597;
    }
    while ( (__int64)v8 < (__int64)&dword_140404A6C[72777107] );
    *v4 = 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140194D40) ----------------------------------------------------
__int64 sub_140194D40()
{
  int v0; // edi
  unsigned int *v1; // rax
  __int64 v2; // rbp
  int v3; // edx
  int v4; // r8d
  signed int v5; // ebx
  __m128i si128; // xmm4
  __m128i v7; // xmm5
  __int64 v8; // rcx
  unsigned int *v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __m128i v15; // xmm4
  unsigned int *v16; // rcx
  __int64 v17; // r8
  signed int v18; // eax
  int v19; // esi
  int v20; // edx
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  signed int v25; // esi
  unsigned int *v26; // rax
  __int64 v27; // r12
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // r14
  __int64 v31; // rax
  int i; // ebx
       char *v33; // r8
       char **v34; // rbx
       char *v35; // rcx
  char v36; // al
  __int64 v37; // r9
  __int64 v38; // rax
  char *v39; // r8
  unsigned int *v40; // rdx
  char v41; // al
  int v42; // eax
  BOOL v43; // r14d
  int v44; // eax
  __int64 v45; // rsi
  int v46; // ebx
  __int64 v47; // r9
  __int64 v48; // rcx
  int v49; // ebx
  unsigned int *v50; // rdi
  unsigned int *v51; // rsi
  char *v52; // rcx
  char v53; // al
  char *v54; // rcx
  char v55; // al
  char *v56; // rcx
  char v57; // al
  char *v58; // rcx
  char v59; // al
  unsigned int *v60; // rbx
  __int64 v61; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140194D40[848];
#define v63 (*(__int64 (*))(void *)(sr_frame_140194D40 + 0)) /* [rsp+0h] */
#define v64 (*(unsigned int (*))(void *)(sr_frame_140194D40 + 48)) /* [rsp+30h] */
#define v65 (*(__int64 (*))(void *)(sr_frame_140194D40 + 56)) /* [rsp+38h] */
#define v66 (*(char (*)[256])(void *)(sr_frame_140194D40 + 64)) /* [rsp+40h] */
#define v67 (*(_BYTE (*)[512])(void *)(sr_frame_140194D40 + 320)) /* [rsp+140h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_140194D40 + 832)) /* [rsp+340h] */

  v0 = 0;
  v1 = &dword_140404A6C[180035722];
  while ( *(v1 - 34653) )
  {
    if ( !*v1 )
    {
      ++v0;
      break;
    }
    if ( !v1[34653] )
    {
      v0 += 2;
      break;
    }
    if ( !v1[69306] )
    {
      v0 += 3;
      break;
    }
    v1 += 138612;
    v0 += 4;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[188906890] )
      break;
  }
  if ( v0 != -1 )
  {
    v2 = 34653LL * v0;
    v65 = v0;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 180001070]), 0, 0x21D70u);
    v3 = dword_140404A6C[487149972];
    dword_140404A6C[v2 + 180001069] = 1;
    if ( v3 )
    {
      v4 = 0;
      v5 = 0x10000;
      if ( v3 >= 8 && dword_140302080 >= 2 )
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_1402791B0);
        v7 = si128;
        v8 = 0;
        v9 = &dword_140404A6C[487150492];
        do
        {
          v10 = _mm_cvtsi32_si128(v9[259]);
          v4 += 8;
          v11 = _mm_cvtsi32_si128(*(v9 - 259));
          v8 += 8;
          v12 = _mm_cvtsi32_si128(*v9);
          v13 = _mm_cvtsi32_si128(*(v9 - 518));
          v9 += 2072;
          si128 = _mm_min_epi32(si128, _mm_unpacklo_epi64(_mm_unpacklo_epi32(v13, v11), _mm_unpacklo_epi32(v12, v10)));
          v7 = _mm_min_epi32(
                 v7,
                 _mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v9 - 1554)), _mm_cvtsi32_si128(*(v9 - 1295))),
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v9 - 1036)), _mm_cvtsi32_si128(*(v9 - 777)))));
        }
        while ( v8 < (int)(v3 - (v3 & 0x80000007)) );
        v14 = _mm_min_epi32(si128, v7);
        v15 = _mm_min_epi32(v14, _mm_srli_si128(v14, 8));
        v5 = _mm_cvtsi128_si32(_mm_min_epi32(v15, _mm_srli_si128(v15, 4)));
      }
      if ( v4 < v3 )
      {
        v16 = &dword_140404A6C[259 * v4 + 487149974];
        v17 = (unsigned int)(v3 - v4);
        do
        {
          v18 = *v16;
          v16 += 259;
          if ( v5 <= v18 )
            v18 = v5;
          v5 = v18;
          --v17;
        }
        while ( v17 );
      }
      v19 = 0;
      v20 = rand() % (signed int)dword_140404A6C[487149972];
      do
      {
        if ( (int)dword_140404A6C[259 * v20 + 487149974] <= v5 )
          break;
        ++v19;
        v20 = rand() % (signed int)dword_140404A6C[487149972];
      }
      while ( v19 < 1024 );
      v21 = v20;
      v22 = 259LL * v20;
      v23 = (int)dword_140404A6C[v22 + 487149973];
      ++dword_140404A6C[v22 + 487149974];
      v24 = 14019 * v23;
      v25 = 0;
      v26 = &dword_140404A6C[273377349];
      v27 = (int)dword_140404A6C[v24 + 225641322];
      v64 = dword_140404A6C[v24 + 225641321];
      while ( *v26 )
      {
        ++v25;
        v26 += 290;
        if ( (__int64)v26 >= (__int64)&dword_140404A6C[275753029] )
          return 0; /* compatibility result discarded by all reviewed callers */
      }
      if ( v25 != -1 )
      {
        v28 = 290LL * v25;
        dword_140404A6C[34653 * v0 + 180035569] = v25;
        dword_140404A6C[v28 + 273377349] = 1;
        dword_140404A6C[v28 + 273377606] = 0;
        v29 = 0;
        if ( &dword_140404A6C[v22 + 487149976] )
          v29 = rand() % (int)dword_140404A6C[v22 + 487149975];
        v30 = (int)dword_140404A6C[259 * v21 + 487149976 + v29];
        v31 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_140404A6C[v31 + 485542517] )
            break;
          v31 = rand() & 0x1F;
        }
        dword_140404A6C[v31 + 485542517] = 1;
        v33 = (     char *)*(&off_1402B2000 + v31);
        v34 = (     char **)(&off_1402B2000 + v31);
        v35 = v33;
        do
        {
          v36 = *v35;
          v35[(intptr_t)((uintptr_t)(v67) - (uintptr_t)(v33))] = *v35;
          ++v35;
        }
        while ( v36 );
        sub_140158AB0(v66, "%s.DOC", v33);
        v37 = 2570 * v30;
        v38 = (int)dword_140404A6C[2570 * v30 + 275754072];
        if ( (int)v38 < 256 )
        {
          dword_140404A6C[6 * v38 + 275754073 + v37] = v25;
          v39 = v66;
          v40 = &dword_140404A6C[6 * (int)dword_140404A6C[v37 + 275754072] + 275754074 + v37];
          do
          {
            v41 = *v39++;
            *(_BYTE *)v40 = v41;
            v40 = (unsigned int *)((char *)v40 + 1);
          }
          while ( v41 );
          dword_140404A6C[6 * (int)dword_140404A6C[v37 + 275754072]++ + 275754078 + v37] = 0;
        }
        sub_140158AB0(v66, "%s", *v34);
        v42 = rand();
        v43 = v42 == 5 * (v42 / 5);
        v44 = 2500 * (rand() % 5 + 2);
        dword_140404A6C[34653 * v0 + 180001072] = v44;
        if ( v0 == dword_140404A6C[180001067] )
          dword_140404A6C[34653 * v0 + 180001072] = 5 * v44;
        v45 = 3;
        do
        {
          v46 = 0;
          v47 = rand() % 6;
          v48 = (int)dword_140404A6C[5873 * v47 + 283831510];
          if ( (_DWORD)v48 != -1 )
          {
            if ( (int)(dword_140404A6C[3597 * v48 + 71856275] - 1000) / 100 >= 0 )
              v46 = (int)(dword_140404A6C[3597 * v48 + 71856275] - 1000) / 100;
            if ( v46 > 1000 )
              v46 = 1000;
          }
          dword_140404A6C[34653 * v0 + 180001074 + 539 * v47] = dword_140404A6C[34653 * v0 + 180001072]
                                                              + (int)(v46 * dword_140404A6C[34653 * v0 + 180001072])
                                                              / 100;
          --v45;
        }
        while ( v45 );
        v49 = v0 + 200;
        dword_140404A6C[34653 * v0 + 180035589] = v0 + 200;
        sub_140158AB0(&dword_140404A6C[v2 + 180035590], "INTEL%02d.CDE", v0);
        v50 = &dword_140404A6C[396 * v27 + 225426047];
        v51 = &dword_140404A6C[396 * v64 + 225426047];
        sub_14012F890(
          &dword_140404A6C[290 * v49 + 273377350],
          v66,
          (__int64)v51,
          (__int64)v50,
          (__int64)off_1402B2100[v65],
          v43);
        sub_140115FF0(v49);
        v52 = v66;
        do
        {
          v53 = *v52;
          *((_BYTE *)&dword_140404A6C[180035657] + v2 * 4 - (_QWORD)v66 + (_QWORD)v52) = *v52;
          ++v52;
        }
        while ( v53 );
        v54 = (char *)&dword_140404A6C[180035673] + v2 * 4 - (_QWORD)v51;
        do
        {
          v55 = *(_BYTE *)v51;
          v54[(_QWORD)v51] = *(_BYTE *)v51;
          v51 = (unsigned int *)((char *)v51 + 1);
        }
        while ( v55 );
        v56 = (char *)&dword_140404A6C[180035689] + v2 * 4 - (_QWORD)v50;
        do
        {
          v57 = *(_BYTE *)v50;
          v56[(_QWORD)v50] = *(_BYTE *)v50;
          v50 = (unsigned int *)((char *)v50 + 1);
        }
        while ( v57 );
        v58 = v67;
        do
        {
          v59 = *v58;
          *((_BYTE *)&dword_140404A6C[180035705] + v2 * 4 - (_QWORD)v67 + (_QWORD)v58) = *v58;
          ++v58;
        }
        while ( v59 );
        dword_140404A6C[v2 + 180035721] = v43;
        v60 = &dword_140404A6C[v2 + 180001596];
        v61 = 6;
        do
        {
          sub_140158AB0(v60, (     char *)&dword_140273614);
          v60 += 539;
          --v61;
        }
        while ( v61 );
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68

// 140194E6F: conditional instruction was optimized away because edx.4>=8
// 140273614: using guessed type int dword_140273614;
// 1402791B0: using guessed type __int128 xmmword_1402791B0;
// 1402B2000: using guessed type _UNKNOWN *off_1402B2000;
// 1402B2100: using guessed type char *off_1402B2100[8];
// 140302080: using guessed type int dword_140302080;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B46590BC: using guessed type unsigned int;

//----- (0000000140195480) ----------------------------------------------------
__int64            sub_140195480(int a1, unsigned int a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rdi
  int v4; // ebx
  int v5; // ebx
  __int64 v6; // rbp
  int v7; // ecx
  __int64 v8; // r15
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int i; // ebx
  unsigned int v13; // xmm6_4
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // eax
  unsigned int v17; // xmm7_4
  int v18; // ecx
  unsigned int v19; // xmm8_4
  __int64 v20; // rbx
  unsigned int v21; // xmm9_4
  unsigned int *v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rcx
  _DWORD *v28; // rdx
  char *v29; // rbp
  char *v30; // r10
  char *v31; // r11
  char *v32; // rsi
  char *v33; // r14
  char *v34; // r15
  char *v35; // r12
  char *v36; // r13
  char *v37; // rdi
  char *v38; // r9
  char *v39; // rax
  unsigned __int64 v40; // rcx
  char *v41; // rbx
  unsigned int *v42; // rcx
  __int64 v43; // r9
  __int64 v44; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195480[416];
#define v46 (*(__int64 (*))(void *)(sr_frame_140195480 + 0)) /* [rsp+0h] */
#define v47 (*(int (*))(void *)(sr_frame_140195480 + 32)) /* [rsp+20h] */
#define v48 (*(int (*))(void *)(sr_frame_140195480 + 36)) /* [rsp+24h] */
#define v49 (*(int (*))(void *)(sr_frame_140195480 + 40)) /* [rsp+28h] */
#define v50 (*(unsigned int (*))(void *)(sr_frame_140195480 + 44)) /* [rsp+2Ch] */
#define v51 (*(__int64 (*))(void *)(sr_frame_140195480 + 48)) /* [rsp+30h] */
#define v52 (*(char * (*))(void *)(sr_frame_140195480 + 56)) /* [rsp+38h] */
#define v53 (*(char * (*))(void *)(sr_frame_140195480 + 64)) /* [rsp+40h] */
#define v54 (*(char * (*))(void *)(sr_frame_140195480 + 72)) /* [rsp+48h] */
#define v55 (*(char * (*))(void *)(sr_frame_140195480 + 80)) /* [rsp+50h] */
#define v56 (*(__int64 (*))(void *)(sr_frame_140195480 + 96)) /* [rsp+60h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_140195480 + 104)) /* [rsp+68h] */
#define v58 (*(__int64 (*))(void *)(sr_frame_140195480 + 112)) /* [rsp+70h] */
#define v59 (*(__int64 (*))(void *)(sr_frame_140195480 + 120)) /* [rsp+78h] */
#define v60 (*(__int64 (*))(void *)(sr_frame_140195480 + 128)) /* [rsp+80h] */
#define v61 (*(_DWORD (*)[64])(void *)(sr_frame_140195480 + 144)) /* [rsp+90h] */
#define v62 (*(__int64 (*))(void *)(sr_frame_140195480 + 400)) /* [rsp+190h] */

  v2 = a2;
  v50 = a2;
  v3 = a1;
  sub_1401FCD30((void *)(uintptr_t)(v61), 0, 0x100u);
  v4 = rand() & 3;
  v5 = (rand() & 1) + v4;
  v51 = v3;
  v6 = 56076 * v3;
  v48 = 0;
  v59 = 56076 * v3;
  v7 = v5 + (rand() & 1) + 3;
  v8 = v3;
  v9 = dword_140404A6C[14019 * v3 + 225641327];
  v10 = v9;
  v47 = v9;
  if ( v7 <= v9 )
    v10 = v7;
  v49 = v10;
  if ( v10 > 0 )
  {
    while ( 1 )
    {
      v11 = 0;
      if ( v9 > 0 )
      {
        v9 = *(unsigned int *)((char *)&dword_140404A6C[225641327] + v6);
        v11 = rand() % v9;
        for ( i = 0; i < 512; ++i )
        {
          if ( !v61[v11] )
            break;
          v9 = *(unsigned int *)((char *)&dword_140404A6C[225641327] + v6);
          v11 = rand() % v9;
        }
        v47 = v9;
      }
      v13 = 0;
      v14 = 788LL * v11;
      v61[v11] = 1;
      v60 = v14;
      v15 = v14 + v6;
      v16 = *(unsigned int *)((char *)&dword_140404A6C[225641331] + v14 + v6);
      switch ( v16 )
      {
        case 1:
          v13 = 1070141403;
          break;
        case 2:
          v13 = 1078530011;
          break;
        case 3:
          v13 = -1077342245;
          break;
      }
      v17 = *(unsigned int *)((char *)&dword_140404A6C[225641328] + v15);
      v18 = 0;
      v19 = *(unsigned int *)((char *)&dword_140404A6C[225641329] + v15);
      v20 = 0;
      v21 = *(unsigned int *)((char *)&dword_140404A6C[225641330] + v15);
      v22 = &dword_140404A6C[133450253];
      while ( *v22 )
      {
        ++v18;
        ++v20;
        v22 += 202;
        if ( (__int64)v22 >= (__int64)&dword_140404A6C[133657101] )
          goto LABEL_28;
      }
      if ( v18 == -1 )
        goto LABEL_28;
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[202 * v18 + 133450253]), 0, 0x328u);
      v23 = 808 * v20;
      v58 = v23;
      *(unsigned int *)((char *)&dword_140404A6C[133450253] + v23) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[133450254] + v23) = v2;
      *(unsigned int *)((char *)&dword_140404A6C[133450258] + v23) = v17;
      *(unsigned int *)((char *)&dword_140404A6C[133450259] + v23) = v19;
      *(unsigned int *)((char *)&dword_140404A6C[133450260] + v23) = v21;
      *(unsigned int *)((char *)&dword_140404A6C[133450261] + v23) = v13;
      *(_QWORD *)((char *)&dword_140404A6C[133450255] + v23) = -1;
      if ( v20 == -1 )
        goto LABEL_28;
      v24 = *(int *)((char *)&dword_140404A6C[225641332] + v15);
      v25 = 0;
      *(unsigned int *)((char *)&dword_140404A6C[133450262] + v23) = v24;
      v26 = v24;
      v56 = v24;
      if ( v24 >= 4 )
        break;
      if ( (int)v24 > 0 )
        goto LABEL_26;
LABEL_28:
      v2 = v50;
      if ( ++v48 >= v49 )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    v27 = v23 - 56076 * v8 - v14 - (_QWORD)&dword_140404A6C[225641335];
    v28 = (unsigned int *)((char *)&dword_140404A6C[225641335] + v15);
    v52 = (char *)&dword_140404A6C[133450274] + v27;
    v29 = v52;
    v30 = (char *)&dword_140404A6C[133450253] + v27;
    v31 = (char *)&dword_140404A6C[133450253] + v27;
    v53 = (char *)&dword_140404A6C[133450263] + v27;
    v32 = (char *)&dword_140404A6C[133450253] + v27;
    v33 = (char *)&dword_140404A6C[133450253] + v27;
    v34 = (char *)&dword_140404A6C[133450253] + v27;
    v35 = (char *)&dword_140404A6C[133450253] + v27;
    v36 = (char *)&dword_140404A6C[133450253] + v27;
    v54 = (char *)&dword_140404A6C[133450266] + v27;
    v37 = v54;
    v55 = (char *)&dword_140404A6C[133450269] + v27;
    v38 = v55;
    v39 = (char *)&dword_140404A6C[133450272] + v27;
    v40 = ((unsigned __int64)(v26 - 4) >> 2) + 1;
    v57 = 4 * v40;
    v41 = v53;
    do
    {
      *(_DWORD *)((char *)v28 + (_QWORD)v41) = *(v28 - 2);
      *(_DWORD *)((char *)v28 + (_QWORD)v30 + 44) = *(v28 - 1);
      *(_DWORD *)((char *)v28 + (_QWORD)v31 + 48) = *v28;
      *(_DWORD *)((char *)v28 + (_QWORD)v37) = v28[1];
      *(_DWORD *)((char *)v28 + (_QWORD)v32 + 56) = v28[2];
      *(_DWORD *)((char *)v28 + (_QWORD)v33 + 60) = v28[3];
      *(_DWORD *)((char *)v28 + (_QWORD)v38) = v28[4];
      *(_DWORD *)((char *)v28 + (_QWORD)v34 + 68) = v28[5];
      *(_DWORD *)((char *)v28 + (_QWORD)v35 + 72) = v28[6];
      *(_DWORD *)((char *)v28 + (_QWORD)v39) = v28[7];
      *(_DWORD *)&v36[(_QWORD)v28 + 80] = v28[8];
      *(_DWORD *)&v29[(_QWORD)v28] = v28[9];
      v28 += 12;
      --v40;
    }
    while ( v40 );
    v26 = v56;
    v25 = v57;
    v23 = v58;
    v9 = v47;
    v6 = v59;
    v8 = v51;
    if ( v57 >= v56 )
      goto LABEL_28;
    v14 = v60;
LABEL_26:
    v42 = (unsigned int *)((char *)&dword_140404A6C[14019 * v8 + 225641335 + 3 * v25] + v14);
    v43 = v23 - 56076 * v8 - v14 - (_QWORD)&dword_140404A6C[225641335];
    v44 = v26 - v25;
    do
    {
      *(unsigned int *)((char *)v42 + (_QWORD)&dword_140404A6C[133450253] + v43 + 40) = *(v42 - 2);
      *(unsigned int *)((char *)v42 + (_QWORD)&dword_140404A6C[133450253] + v43 + 44) = *(v42 - 1);
      *(unsigned int *)((char *)v42 + (_QWORD)&dword_140404A6C[133450253] + v43 + 48) = *v42;
      v42 += 3;
      --v44;
    }
    while ( v44 );
    goto LABEL_28;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140195970) ----------------------------------------------------
__int64 sub_140195970()
{
  signed int v0; // eax
  unsigned int *v1; // r13
  int v2; // r12d
  unsigned int *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rsi
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rax
  int i; // ebx
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r11
  unsigned int *v13; // r10
  unsigned int *v14; // rax
  _BYTE *v15; // r8
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int *v20; // rax
  __int64 v21; // rax
  char *v22; // r8
  unsigned int *v23; // rdx
  char v24; // al
  signed int v25; // r15d
  signed int v26; // ebp
  int *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdi
  int v31; // edx
  unsigned int *v32; // r8
  __int64 v33; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195970[576];
#define v35 (*(__int64 (*))(void *)(sr_frame_140195970 + 0)) /* [rsp+0h] */
#define j (*(int (*))(void *)(sr_frame_140195970 + 32)) /* [rsp+20h] */
#define v37 (*(_BYTE (*)[512])(void *)(sr_frame_140195970 + 48)) /* [rsp+30h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_140195970 + 560)) /* [rsp+230h] */

  v0 = dword_140404A6C[487149972];
  v1 = &dword_140404A6C[487149975];
  v2 = 0;
  j = 0;
  if ( (int)dword_140404A6C[487149972] > 0 )
  {
    v3 = &dword_140404A6C[487149975];
    v4 = 0;
    do
    {
      v5 = 64;
      do
      {
        v6 = 0;
        if ( &dword_140404A6C[259 * v2 + 487149976] )
          v6 = rand() % (int)*v3;
        v7 = (int)dword_140404A6C[v4 + 487149976 + v6];
        v8 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_140404A6C[v8 + 485542517] )
            break;
          v8 = rand() & 0x1F;
        }
        sub_140158AB0(v37, "%s.DOC", (     char *)*(&off_1402B2000 + v8));
        v10 = 2570 * v7;
        v11 = 0;
        v12 = (int)dword_140404A6C[2570 * v7 + 275754072];
        if ( (int)v12 <= 0 )
        {
LABEL_17:
          v18 = 0;
          v19 = 0;
          v20 = &dword_140404A6C[273377349];
          while ( *v20 )
          {
            ++v18;
            ++v19;
            v20 += 290;
            if ( (__int64)v20 >= (__int64)&dword_140404A6C[275753029] )
              goto LABEL_26;
          }
          if ( v18 != -1 )
          {
            v21 = 290 * v19;
            dword_140404A6C[v21 + 273377349] = 1;
            dword_140404A6C[v21 + 273377606] = 0;
            if ( (int)v12 < 256 )
            {
              dword_140404A6C[6 * v12 + 275754073 + v10] = v18;
              v22 = v37;
              v23 = &dword_140404A6C[6 * (int)dword_140404A6C[v10 + 275754072] + 275754074 + v10];
              do
              {
                v24 = *v22++;
                *(_BYTE *)v23 = v24;
                v23 = (unsigned int *)((char *)v23 + 1);
              }
              while ( v24 );
              dword_140404A6C[6 * (int)dword_140404A6C[v10 + 275754072]++ + 275754078 + v10] = 0;
            }
          }
        }
        else
        {
          v13 = &dword_140404A6C[v10 + 275754078];
          while ( 1 )
          {
            if ( !*v13 )
            {
              v14 = &dword_140404A6C[6 * v11 + 275754074 + v10];
              v15 = (_BYTE *)(v37 - (_BYTE *)v14);
              do
              {
                v16 = (unsigned __int8)v15[(_QWORD)v14];
                v17 = *(unsigned __int8 *)v14 - v16;
                if ( v17 )
                  break;
                v14 = (unsigned int *)((char *)v14 + 1);
              }
              while ( v16 );
              if ( !v17 )
                break;
            }
            v11 = (unsigned int)(v11 + 1);
            v13 += 6;
            if ( (int)v11 >= (int)v12 )
              goto LABEL_17;
          }
        }
LABEL_26:
        --v5;
      }
      while ( v5 );
      v4 += 259;
      v0 = dword_140404A6C[487149972];
      v2 = j + 1;
      v3 += 259;
      j = v2;
    }
    while ( v2 < (int)dword_140404A6C[487149972] );
    v1 = &dword_140404A6C[487149975];
  }
  v25 = 0;
  for ( j = 0; v25 < v0; j = v25 )
  {
    v26 = 0;
    if ( (int)*v1 > 0 )
    {
      v27 = (int *)(v1 + 1);
      do
      {
        v28 = 2570LL * *v27;
        if ( (int)dword_140404A6C[v28 + 275754072] > 1 )
        {
          v29 = 64;
          do
          {
            v30 = rand() % (int)dword_140404A6C[v28 + 275754072];
            v31 = rand() % (int)dword_140404A6C[v28 + 275754072];
            if ( (_DWORD)v30 != v31 )
            {
              v32 = &dword_140404A6C[6 * v30 + 275754073 + v28];
              v33 = v28 * 4 + 24LL * v31;
              *(_OWORD *)&dword_140404A6C[v28 + 275755609] = *(_OWORD *)v32;
              *(_QWORD *)&dword_140404A6C[v28 + 275755613] = *((_QWORD *)v32 + 2);
              *(_OWORD *)v32 = *(_OWORD *)((char *)&dword_140404A6C[275754073] + v33);
              *((_QWORD *)v32 + 2) = *(_QWORD *)((char *)&dword_140404A6C[275754077] + v33);
              *(_OWORD *)((char *)&dword_140404A6C[275754073] + v33) = *(_OWORD *)&dword_140404A6C[v28 + 275755609];
              *(_QWORD *)((char *)&dword_140404A6C[275754077] + v33) = *(_QWORD *)&dword_140404A6C[v28 + 275755613];
            }
            --v29;
          }
          while ( v29 );
        }
        ++v26;
        ++v27;
      }
      while ( v26 < (int)*v1 );
      v0 = dword_140404A6C[487149972];
      v25 = j;
    }
    ++v25;
    v1 += 259;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v35
#undef j
#undef v37
#undef v38

// 1402B2000: using guessed type _UNKNOWN *off_1402B2000;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B46590BC: using guessed type unsigned int;

//----- (0000000140195D20) ----------------------------------------------------
__int64            sub_140195D20(int a1,      char *a2)
{
  __int64 v3; // rdi
  char *v4; // r8
  __int64 v5; // r9
       char *v6; // rdx
  char *v7; // rdx
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  int v12; // eax
  __int64 v13; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195D20[2176];
#define v15 (*(_BYTE (*)[32])(void *)(sr_frame_140195D20 + 0)) /* [rsp+0h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140195D20 + 32)) /* [rsp+20h] */
#define v17 (*(float (*)[4])(void *)(sr_frame_140195D20 + 48)) /* [rsp+30h] */
#define v18 (*(_OWORD (*)[2])(void *)(sr_frame_140195D20 + 64)) /* [rsp+40h] */
#define v19 (*(int (*))(void *)(sr_frame_140195D20 + 96)) /* [rsp+60h] */
#define v20 (*(__m128i (*)[128])(void *)(sr_frame_140195D20 + 112)) /* [rsp+70h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_140195D20 + 2160)) /* [rsp+870h] */

  v3 = a1;
  v4 = off_1402B2890[a1];
  v5 = (unsigned int)((signed int)dword_140404A6C[179992853] / 3600 / 60 % -12);
  v6 = "\n%s Internal Memo\n%d:%02d AM\n\n";
  if ( !(_DWORD)v5 )
    v5 = 12;
  LODWORD(v16) = (signed int)dword_140404A6C[179992853] / 3600 % 60;
  if ( (int)dword_140404A6C[179992853] >= 2592000 )
    v6 = "\n%s Internal Memo\n%d:%02d PM\n\n";
  sub_140158AB0(v20, v6, v4, v5, v16);
  v7 = &v15[111];
  while ( *++v7 != 0 )
    ;
  strcpy(v7, a2);
  v18[0] = xmmword_140278D30;
  v18[1] = xmmword_140278D30;
  v19 = 1065353216;
  v9 = *(float *)&dword_140404A6C[5873 * v3 + 283831498];
  v10 = *(float *)&dword_140404A6C[5873 * v3 + 283831499];
  v11 = *(float *)&dword_140404A6C[5873 * v3 + 283831500];
  sub_14007B2A0((__int64)v18, (float *)v18 + 3, *(float *)&dword_140404A6C[5873 * v3 + 283831497] - 1.570796326795);
  v17[0] = v9 - (float)(*(float *)v18 * 0.5);
  v17[2] = v11 - (float)(*((float *)v18 + 2) * 0.5);
  v17[1] = v10 - (float)(*((float *)v18 + 1) * 0.5);
  v12 = sr_CreateItem(34, v17, nullptr, (float *)v18);
  v13 = v12;
  if ( v12 != -1 )
  {
    sub_1400584B0(v12, v20);
    dword_140404A6C[1760 * v13 + 278845900] = 0x10000;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140195FB0) ----------------------------------------------------
__int64            sub_140195FB0(int a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  _BYTE *v7; // rcx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned int *v10; // rbx
  unsigned int *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // eax
  int v15; // edi
  unsigned int *v16; // rbx
       char **v17; // r14
  __int64 v18; // rsi
  int v19; // r9d
  signed int v20; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195FB0[1088];
#define v22 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 0)) /* [rsp+0h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 32)) /* [rsp+20h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 40)) /* [rsp+28h] */
#define v25 (*(char (*)[1024])(void *)(sr_frame_140195FB0 + 48)) /* [rsp+30h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 1072)) /* [rsp+430h] */

  v2 = 34653LL * a1;
  v3 = a2;
  v4 = 539LL * a2;
  LODWORD(v23) = a2;
  v24 = v4 * 4;
  v5 = v4 * 4 + v2 * 4;
  if ( !dword_140404A6C[v4 + 180001073 + v2] )
  {
    *(unsigned int *)((char *)&dword_140404A6C[180001073] + v5) = 1;
    if ( (int)dword_140404A6C[v2 + 180001071] < 2 )
    {
      v6 = *(unsigned int *)((char *)&dword_140404A6C[180001074] + v5);
      v7 = (char *)&dword_140404A6C[180001084] + v5;
      v8 = (int *)((char *)&dword_140404A6C[180001083] + v5);
      if ( v6 <= 0 )
      {
        *v8 = 0;
        sub_140158AB0(v7, "TRADE");
        ++*v8;
        sub_140158AB0((_BYTE *)&dword_140404A6C[180001596] + v5, "Trade");
        v14 = v23;
        v15 = 0;
        v16 = &dword_140404A6C[v2 + 180001083];
        v17 = (     char **)off_1402B2890;
        v18 = 0;
        do
        {
          if ( v15 != v14 )
          {
            v19 = *(v16 - 9);
            if ( v19 > 0 )
            {
              if ( dword_140404A6C[v2 + 180001071] )
              {
                v20 = *v16;
              }
              else
              {
                *v16 = 0;
                v20 = 0;
              }
              sub_140158AB0(
                &dword_140404A6C[64 * (__int64)v20 + 180001084 + v18 + v2],
                "%s HAS THE FILE  VALUE: $%d",
                off_1402B2890[v3],
                v19);
              ++*v16;
              sub_140158AB0(&dword_140404A6C[v2 + 180001596 + v18], "Trade");
              sub_140158AB0(
                v25,
                "%s has obtained the file for the\n%s project",
                off_1402B2890[v3],
                (     char *)&dword_140404A6C[v2 + 180035705]);
              sub_140195D20(v15, v25);
              sub_140158AB0(
                (_BYTE *)&dword_140404A6C[64 * (__int64)*v8 + 180001084 + v2] + v24,
                "%s WANTS THE FILE",
                *v17);
              ++*v8;
              v14 = v23;
            }
          }
          ++v15;
          v18 += 539;
          v16 += 539;
          ++v17;
        }
        while ( v15 < 6 );
        dword_140404A6C[v2 + 180001071] = 1;
      }
      else
      {
        dword_140404A6C[5 * v3 + 188872237] += v6;
        v23 = 20 * v3;
        *v8 = 0;
        sub_140158AB0(v7, "MISSION SUCCESS");
        sub_140158AB0(
          &dword_140404A6C[64 * (__int64)++*v8 + 180001084 + v2 + v4],
          "VALUE: $%d",
          *(unsigned int *)((char *)&dword_140404A6C[180001074] + v5));
        ++*v8;
        sub_140158AB0((_BYTE *)&dword_140404A6C[180001596] + v5, "Success");
        v9 = 0;
        v10 = &dword_140404A6C[v2 + 180001083];
        v11 = &dword_140404A6C[v2 + 180001596];
        v12 = 6;
        do
        {
          if ( v9 != v3 )
          {
            *v10 = 0;
            sub_140158AB0((_BYTE *)v11 - 2048, "MISSION CLOSED");
            ++*v10;
            sub_140158AB0(v11, "Closed");
          }
          v11 += 539;
          ++v9;
          v10 += 539;
          --v12;
        }
        while ( v12 );
        v13 = v23;
        dword_140404A6C[v2 + 180001071] = 2;
        if ( *(int *)((char *)&dword_140404A6C[188872240] + v13) > 0 )
          *(unsigned int *)((char *)&dword_140404A6C[188872240] + v13) = 1;
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140196320) ----------------------------------------------------
__int64            sub_140196320(int a1, char *a2, unsigned int a3, char *a4)
{
  __int64 result; // rax
  __int64 v5; // r13
  unsigned int *v8; // rcx
  char v9; // al
  __int64 v10; // rsi
  int v11; // r12d
  int i; // r15d
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned int *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // [rsp+60h] [rbp+8h] BYREF

  result = a1;
  v5 = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[v5 + 293512629] && dword_140404A6C[265228 * a1 + 293512631] )
  {
    dword_140404A6C[265228 * a1 + 293512635 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]] = a3;
    v8 = &dword_140404A6C[265228 * a1 + 293512638 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]];
    do
    {
      v9 = *a2++;
      *(_BYTE *)v8 = v9;
      v8 = (unsigned int *)((char *)v8 + 1);
    }
    while ( v9 );
    dword_140404A6C[16 * (unsigned __int64)dword_140404A6C[v5 + 293512634] + 293512636 + v5] = ftell_sr(*(FILE **)&dword_140404A6C[v5 + 293512629]);
    switch ( a3 )
    {
      case 0x585A0001u:
        v10 = *(_QWORD *)&dword_140404A6C[v5 + 293512629];
        if ( v10 )
        {
          v26 = 1;
          sub_14020CE0C((__int64)&v26, 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852365], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852366], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852367], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852368], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852369], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852370], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852371], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852372], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852373], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852374], 4, 1, v10);
          v11 = 0;
          for ( i = 0; i < (int)dword_140404A6C[19852374]; ++i )
          {
            v13 = 87LL * i;
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852378], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852376], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852379], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852377], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852460], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852461], 4, 1, v10);
            v14 = 4;
            v15 = &dword_140404A6C[v13 + 19852428];
            v16 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v13 * 4 + 83622876;
            do
            {
              v17 = 4;
              do
              {
                sub_14020CE0C(v16, 4, 3, v10);
                sub_14020CE0C((__int64)v15, 4, 2, v10);
                v16 += 12;
                v15 += 2;
                --v17;
              }
              while ( v17 );
              --v14;
            }
            while ( v14 );
          }
          sub_14020CE0C((__int64)&dword_140404A6C[19896919], 4, 1, v10);
          if ( (int)dword_140404A6C[19896919] > 0 )
          {
            do
            {
              v18 = 8;
              v19 = 124LL * v11;
              v20 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801036;
              do
              {
                sub_14020CE0C(v20, 4, 3, v10);
                v20 += 12;
                --v18;
              }
              while ( v18 );
              v21 = 6;
              v22 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801132;
              do
              {
                sub_14020CE0C(v22, 4, 1, v10);
                v22 += 4;
                --v21;
              }
              while ( v21 );
              sub_14020CE0C(((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801156, 4, 1, v10);
              ++v11;
            }
            while ( v11 < (int)dword_140404A6C[19896919] );
          }
        }
        break;
      case 0x585A0002u:
        sub_140196D60(a4, *(FILE **)&dword_140404A6C[v5 + 293512629], 1);
        break;
      case 0x585A0004u:
        sub_140197630(*(_DWORD *)a4, *(_QWORD *)&dword_140404A6C[v5 + 293512629], 1);
        break;
    }
    v23 = ftell_sr(*(FILE **)&dword_140404A6C[v5 + 293512629]);
    v24 = v5 * 4 + ((unsigned __int64)dword_140404A6C[v5 + 293512634] << 6);
    *(unsigned int *)((char *)&dword_140404A6C[293512637] + v24) = v23
                                                                 - *(unsigned int *)((char *)&dword_140404A6C[293512636]
                                                                                   + v24);
    v25 = dword_140404A6C[v5 + 293512634];
    dword_140404A6C[v5 + 293512633] += dword_140404A6C[16 * (unsigned __int64)v25 + 293512637 + v5];
    result = v25 + 1;
    dword_140404A6C[v5 + 293512634] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401967E0) ----------------------------------------------------
__int64            sub_1401967E0(__int64 a1, int a2)
{
  int v4; // r13d
  int v5; // r12d
  __int64 v6; // rsi
  unsigned int *v7; // rcx
  unsigned int *v8; // rdi
  __int64 v9; // r15
  unsigned int *v10; // rdi
  unsigned int *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned int *v15; // rdi
  __int64 v16; // rsi
  unsigned int *v17; // rdi
  unsigned int *v18; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 0;
  Buffer = 1;
  if ( !a2 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852365]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852366]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852367]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852368]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852369]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852370]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852371]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852372]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852373]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852374]), 4, 1, (FILE *)(uintptr_t)(a1));
      goto LABEL_6;
    }
    return 0;
  }
  sub_14020CE0C((__int64)&Buffer, 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852365], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852366], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852367], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852368], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852369], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852370], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852371], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852372], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852373], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852374], 4, 1, a1);
LABEL_6:
  v4 = 0;
  v5 = 0;
  if ( (int)dword_140404A6C[19852374] > 0 )
  {
    do
    {
      v6 = 87LL * v5;
      v7 = &dword_140404A6C[v6 + 19852378];
      v8 = &dword_140404A6C[v6 + 19852349];
      if ( a2 )
      {
        sub_14020CE0C((__int64)v7, 4, 1, a1);
        sub_14020CE0C((__int64)(v8 + 27), 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852379], 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852377], 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852460], 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852461], 4, 1, a1);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v7), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(v8 + 27), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852379]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852377]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852460]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852461]), 4, 1, (FILE *)(uintptr_t)(a1));
      }
      v9 = 4;
      v10 = &dword_140404A6C[v6 + 19852428];
      v11 = &dword_140404A6C[v6 + 19852380];
      do
      {
        v12 = 4;
        do
        {
          if ( a2 )
          {
            sub_14020CE0C((__int64)v11, 4, 3, a1);
            sub_14020CE0C((__int64)v10, 4, 2, a1);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(v11), 4, 3, (FILE *)(uintptr_t)(a1));
            fread_sr((void *)(uintptr_t)(v10), 4, 2, (FILE *)(uintptr_t)(a1));
          }
          v11 += 3;
          v10 += 2;
          --v12;
        }
        while ( v12 );
        --v9;
      }
      while ( v9 );
      ++v5;
    }
    while ( v5 < (int)dword_140404A6C[19852374] );
    v4 = 0;
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[19896919], 4, 1, a1);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[19896919]), 4, 1, (FILE *)(uintptr_t)(a1));
  if ( (int)dword_140404A6C[19896919] > 0 )
  {
    do
    {
      v13 = 31LL * v4;
      v14 = 8;
      v15 = &dword_140404A6C[v13 + 19896920];
      do
      {
        if ( a2 )
          sub_14020CE0C((__int64)v15, 4, 3, a1);
        else
          fread_sr((void *)(uintptr_t)(v15), 4, 3, (FILE *)(uintptr_t)(a1));
        v15 += 3;
        --v14;
      }
      while ( v14 );
      v16 = 6;
      v17 = &dword_140404A6C[v13 + 19896944];
      do
      {
        if ( a2 )
          sub_14020CE0C((__int64)v17, 4, 1, a1);
        else
          fread_sr((void *)(uintptr_t)(v17), 4, 1, (FILE *)(uintptr_t)(a1));
        ++v17;
        --v16;
      }
      while ( v16 );
      v18 = &dword_140404A6C[31 * v4 + 19896950];
      if ( a2 )
        sub_14020CE0C((__int64)v18, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v18), 4, 1, (FILE *)(uintptr_t)(a1));
      ++v4;
    }
    while ( v4 < (int)dword_140404A6C[19896919] );
  }
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140196D60) ----------------------------------------------------
__int64            sub_140196D60(char *Buffer, FILE *Stream, int a3)
{
  int v3; // ebx
  char *v6; // rsi
  char *v7; // rbp
  char *v8; // r14
  char *v9; // r12
  int i; // edi
  char *v11; // rcx
  char *v12; // rcx
  int j; // edi
  char *v14; // rcx
  char *v15; // rcx
  int k; // edi
  char *v17; // rcx
  char *v18; // rcx
  int m; // edi
  char *v20; // rcx
  int v21; // ecx
  int v22; // eax
  int v23; // edi
  __int64 v24; // r12
  __int64 v25; // rbx
  char *v26; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140196D60[128];
#define v28 (*(int (*))(void *)(sr_frame_140196D60 + 0)) /* [rsp+20h] */
#define v29 (*(int (*))(void *)(sr_frame_140196D60 + 104)) /* [rsp+88h] */
#define v30 (*(int (*))(void *)(sr_frame_140196D60 + 112)) /* [rsp+90h] */
#define n (*(int (*))(void *)(sr_frame_140196D60 + 120)) /* [rsp+98h] */

  v30 = a3;
  v3 = a3;
  if ( !Stream )
    return 0;
  v29 = 1;
  if ( a3 )
  {
    sub_14020CE0C((__int64)&v29, 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)Buffer, 1, 64, (__int64)Stream);
    v6 = Buffer + 64;
    sub_14020CE0C((__int64)(Buffer + 64), 4, 1, (__int64)Stream);
    v7 = Buffer + 68;
    sub_14020CE0C((__int64)(Buffer + 68), 4, 1, (__int64)Stream);
    v8 = Buffer + 72;
    sub_14020CE0C((__int64)(Buffer + 72), 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)(Buffer + 76), 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)(Buffer + 80), 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)(Buffer + 84), 4, 1, (__int64)Stream);
    v9 = Buffer + 47187628;
    sub_14020CE0C((__int64)(Buffer + 47187628), 4, 1, (__int64)Stream);
    goto LABEL_6;
  }
  *((_DWORD *)Buffer + 16) = 24;
  *((_DWORD *)Buffer + 17) = 24;
  *((_DWORD *)Buffer + 18) = 4;
  *(_QWORD *)(Buffer + 76) = 4;
  *((_DWORD *)Buffer + 21) = 4;
  fread_sr((void *)(uintptr_t)(&v29), 4, 1, (FILE *)(uintptr_t)(Stream));
  if ( v29 != 1 )
    return 0;
  fread_sr((void *)(uintptr_t)(Buffer), 1, 64, (FILE *)(uintptr_t)(Stream));
  v6 = Buffer + 64;
  fread_sr((void *)(uintptr_t)(Buffer + 64), 4, 1, (FILE *)(uintptr_t)(Stream));
  v7 = Buffer + 68;
  fread_sr((void *)(uintptr_t)(Buffer + 68), 4, 1, (FILE *)(uintptr_t)(Stream));
  v8 = Buffer + 72;
  fread_sr((void *)(uintptr_t)(Buffer + 72), 4, 1, (FILE *)(uintptr_t)(Stream));
  fread_sr((void *)(uintptr_t)(Buffer + 76), 4, 1, (FILE *)(uintptr_t)(Stream));
  fread_sr((void *)(uintptr_t)(Buffer + 80), 4, 1, (FILE *)(uintptr_t)(Stream));
  fread_sr((void *)(uintptr_t)(Buffer + 84), 4, 1, (FILE *)(uintptr_t)(Stream));
  v9 = Buffer + 47187628;
  fread_sr((void *)(uintptr_t)(Buffer + 47187628), 4, 1, (FILE *)(uintptr_t)(Stream));
LABEL_6:
  for ( i = 0; i < *(_DWORD *)v9; ++i )
  {
    v11 = &Buffer[64 * (__int64)i + 47187632];
    if ( v3 )
      sub_14020CE0C((__int64)v11, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(v11), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  v12 = Buffer + 47208112;
  if ( v3 )
    sub_14020CE0C((__int64)v12, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(v12), 4, 1, (FILE *)(uintptr_t)(Stream));
  for ( j = 0; j < *((_DWORD *)Buffer + 11802028); ++j )
  {
    v14 = &Buffer[64 * (__int64)j + 47208116];
    if ( v3 )
      sub_14020CE0C((__int64)v14, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(v14), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  v15 = Buffer + 47277748;
  if ( v3 )
    sub_14020CE0C((__int64)v15, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(v15), 4, 1, (FILE *)(uintptr_t)(Stream));
  for ( k = 0; k < *((_DWORD *)Buffer + 11819437); ++k )
  {
    v17 = &Buffer[64 * (__int64)k + 47277752];
    if ( v3 )
      sub_14020CE0C((__int64)v17, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(v17), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  v18 = Buffer + 47282872;
  if ( v3 )
    sub_14020CE0C((__int64)v18, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(v18), 4, 1, (FILE *)(uintptr_t)(Stream));
  for ( m = 0; m < *((_DWORD *)Buffer + 11820718); ++m )
  {
    v20 = &Buffer[64 * (__int64)m + 47282876];
    if ( v3 )
      sub_14020CE0C((__int64)v20, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(v20), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  v21 = 0;
  v28 = 0;
  if ( *(int *)v8 > 0 )
  {
    do
    {
      v22 = 0;
      for ( n = 0; v22 <= *(_DWORD *)v7; n = v22 )
      {
        v23 = 0;
        if ( *(int *)v6 >= 0 )
        {
          v24 = (v22 + ((__int64)v21 << 6)) << 6;
          do
          {
            v25 = 60 * (v24 + v23);
            v26 = &Buffer[v25 + 92];
            if ( v30 )
            {
              sub_14020CE0C((__int64)v26, 4, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 96], 4, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 88], 4, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 100], 4, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 104], 4, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 108], 4, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 112], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 114], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 116], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 118], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 120], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 122], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 124], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 126], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 128], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 130], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 132], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 134], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 136], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 138], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 140], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 142], 2, 1, (__int64)Stream);
              sub_14020CE0C((__int64)&Buffer[v25 + 144], 4, 1, (__int64)Stream);
            }
            else
            {
              fread_sr((void *)(uintptr_t)(v26), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 96]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 88]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 100]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 104]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 108]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 112]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 114]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 116]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 118]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 120]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 122]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 124]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 126]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 128]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 130]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 132]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 134]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 136]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 138]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 140]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 142]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[v25 + 144]), 4, 1, (FILE *)(uintptr_t)(Stream));
            }
            ++v23;
          }
          while ( v23 <= *(_DWORD *)v6 );
          v22 = n;
          v21 = v28;
        }
        ++v22;
      }
      v28 = ++v21;
    }
    while ( v21 < *(_DWORD *)v8 );
    v3 = v30;
  }
  sub_140029800((__int64)Buffer, (__int64)Stream, v3);
  return 1;
}
#undef v28
#undef v29
#undef v30
#undef n

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (0000000140197630) ----------------------------------------------------
__int64            sub_140197630(int a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int *v5; // rdi
  __int64 v7; // rbx
  unsigned int *v8; // rdi
  unsigned int *v9; // rsi
  int Buffer; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  if ( !a2 )
    return 0;
  Buffer = 1;
  if ( a3 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, a2);
    sub_14020CE0C((__int64)&dword_140404A6C[46 * v3 + 421784763], 1, 64, a2);
    v5 = &dword_140404A6C[46 * v3 + 421784733];
    sub_14020CE0C((__int64)(v5 + 22), 4, 1, a2);
    sub_14020CE0C((__int64)(v5 + 26), 4, 1, a2);
    sub_14020CE0C(*((_QWORD *)v5 + 12), 1, (int)v5[22], a2);
    sub_14020CE0C(*((_QWORD *)v5 + 14), 1, (int)v5[26], a2);
    return 1;
  }
  fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a2));
  if ( Buffer != 1 )
    return 0;
  v7 = 46 * v3;
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784763]), 1, 64, (FILE *)(uintptr_t)(a2));
  v8 = &dword_140404A6C[v7 + 421784733];
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784755]), 4, 1, (FILE *)(uintptr_t)(a2));
  v9 = &dword_140404A6C[v7 + 421784733];
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784759]), 4, 1, (FILE *)(uintptr_t)(a2));
  if ( (int)dword_140404A6C[v7 + 421784755] > 0 )
    *(_QWORD *)&dword_140404A6C[v7 + 421784757] = sr_path_malloc((int)v8[22]);
  if ( (int)v9[26] > 0 )
    *(_QWORD *)&dword_140404A6C[v7 + 421784761] = sr_path_malloc((int)v9[26]);
  fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v7 + 421784757]), 1, (int)v8[22], (FILE *)(uintptr_t)(a2));
  fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v7 + 421784761]), 1, (int)v9[26], (FILE *)(uintptr_t)(a2));
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401977E0) ----------------------------------------------------
void            sub_1401977E0(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  unsigned int i; // ebx

  v1 = 265228LL * a1;
  v2 = *(_QWORD *)&dword_140404A6C[v1 + 293512629];
  if ( v2 )
  {
    if ( dword_140404A6C[v1 + 293512631] )
    {
      sub_14020C4A8(v2, 4, 0);
      sub_14020CE0C((__int64)&dword_140404A6C[v1 + 293512633], 4, 1, *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
      sub_14020CE0C((__int64)&dword_140404A6C[v1 + 293512634], 4, 1, *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
      sub_14020C4A8(*(_QWORD *)&dword_140404A6C[v1 + 293512629], dword_140404A6C[v1 + 293512633], 0);
      for ( i = 0; i < dword_140404A6C[v1 + 293512634]; ++i )
        sub_14020CE0C(
          (__int64)&dword_140404A6C[16 * (__int64)(int)i + 293512635 + v1],
          64,
          1,
          *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
    }
    sub_14020B9E8(*(_QWORD *)&dword_140404A6C[v1 + 293512629]);
    *(_QWORD *)&dword_140404A6C[v1 + 293512629] = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401978F0) ----------------------------------------------------
unsigned int *           sub_1401978F0(int a1, __int64 a2, int a3)
{
  unsigned int *result; // rax
  __int64 v4; // rbx
  int v7; // r9d
  unsigned int v8; // edi
  unsigned int *i; // r10
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  result = (unsigned int *)a1;
  v4 = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[v4 + 293512629] )
  {
    if ( !dword_140404A6C[v4 + 293512631] )
    {
      v7 = 0;
      v8 = dword_140404A6C[v4 + 293512634];
      if ( v8 )
      {
        for ( i = &dword_140404A6C[v4 + 293512635]; ; i += 16 )
        {
          if ( *i == a3 )
          {
            result = &dword_140404A6C[16 * (__int64)v7 + 293512638 + v4];
            v10 = a2 - (_QWORD)result;
            do
            {
              v11 = *((unsigned __int8 *)result + v10);
              v12 = *(unsigned __int8 *)result - v11;
              if ( v12 )
                break;
              result = (unsigned int *)((char *)result + 1);
            }
            while ( v11 );
            if ( !v12 )
              break;
          }
          if ( ++v7 >= v8 )
            return result;
        }
        return (unsigned int *)sub_14020C4A8(
                                 *(_QWORD *)&dword_140404A6C[v4 + 293512629],
                                 dword_140404A6C[16 * (__int64)v7 + 293512636 + v4],
                                 0);
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401979D0) ----------------------------------------------------
void            sub_1401979D0(int a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // eax
  unsigned int *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int *v10; // r14
  unsigned int *v11; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401979D0[560];
#define v13 (*(__int64 (*))(void *)(sr_frame_1401979D0 + 0)) /* [rsp+0h] */
#define v14 (*(char (*)[512])(void *)(sr_frame_1401979D0 + 32)) /* [rsp+20h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1401979D0 + 544)) /* [rsp+220h] */

  v2 = a1;
  v3 = 265228LL * a1;
  strcpy(v14, "test.csx");
  if ( a2 )
  {
    v4 = sub_14020B8D8(v14, "wb");
    *(_QWORD *)&dword_140404A6C[v3 + 293512629] = v4;
    v5 = v4;
    if ( v4 )
    {
      v6 = dword_1402B2314;
      dword_140404A6C[v3 + 293512631] = 1;
      v7 = &dword_140404A6C[v3 + 293512632];
      *(_QWORD *)&dword_140404A6C[v3 + 293512633] = 12;
      *v7 = v6;
      sub_14020CE0C((__int64)v7, 12, 1, v5);
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v3 + 293774779]), 0, 0x3014u);
    }
  }
  else
  {
    v8 = sub_14020B8D8(v14, "rb");
    *(_QWORD *)&dword_140404A6C[v3 + 293512629] = v8;
    if ( v8 )
    {
      v9 = 0;
      dword_140404A6C[v3 + 293512631] = 0;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v3 + 293512632]), 12, 1, (FILE *)(uintptr_t)(v8));
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v3 + 293774779]), 0, 0x3014u);
      v10 = &dword_140404A6C[v3 + 293512629];
      if ( dword_140404A6C[v3 + 293512632] == dword_1402B2314 )
      {
        sub_14020C4A8(*(_QWORD *)&dword_140404A6C[v3 + 293512629], dword_140404A6C[v3 + 293512633], 0);
        if ( v10[5] )
        {
          v11 = &dword_140404A6C[v3 + 293512635];
          do
          {
            fread_sr(
              (void *)(uintptr_t)(&dword_140404A6C[16 * (__int64)(int)v9 + 293512635 + v3]),
              64,
              1,
              (FILE *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v3 + 293512629]));
            if ( *v11 == 1482293250 )
              dword_140404A6C[265228 * v2 + 293775805 + (int)dword_140404A6C[v3 + 293775804]++] = v9;
            ++v9;
            v11 += 16;
          }
          while ( v9 < v10[5] );
        }
      }
      else
      {
        v10[5] = 0;
        sub_1401977E0(v2);
      }
    }
  }
  return;
}
#undef v13
#undef v14
#undef v15

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 1402B2314: using guessed type int dword_1402B2314;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140197C00) ----------------------------------------------------
__int64            sub_140197C00(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279AF0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 337);
  }
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279AF0: using guessed type void (*off_140279AF0)(CHtmlStream *__hidden this);

//----- (0000000140197C50) ----------------------------------------------------
__int64            sub_140197C50(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279AA0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 513);
  }
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279AA0: using guessed type void (*off_140279AA0)(CHtmlStream *__hidden this);

//----- (0000000140197CA0) ----------------------------------------------------
__int64            sub_140197CA0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279B40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 1202);
  }
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279B40: using guessed type void (*off_140279B40)(CHtmlStream *__hidden this);

//----- (0000000140197DF0) ----------------------------------------------------
__int64            sub_140197DF0(__int64 a1)
{
  __int64 v2; // rcx

  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279A58);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 12) = 154;
  v2 = a1 + 40;
  *(_QWORD *)v2 = (uint64)(uintptr_t)(&off_140279AA0);
  *(_QWORD *)(v2 + 24) = (uintptr_t)sub_1401982A0;
  *(_BYTE *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = a1;
  SteamAPI_RegisterCallback(v2, 513);
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(&off_140279AF0);
  *(_QWORD *)(a1 + 96) = (uintptr_t)sub_1401982B0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 88) = a1;
  SteamAPI_RegisterCallback(a1 + 72, 337);
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = (uint64)(uintptr_t)(&off_140279B40);
  *(_QWORD *)(a1 + 128) = (uintptr_t)sub_1401982C0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 120) = a1;
  SteamAPI_RegisterCallback(a1 + 104, 1202);
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279A58: using guessed type __int64 (__fastcall *off_140279A58)();
// 140279AA0: using guessed type void (*off_140279AA0)(CHtmlStream *__hidden this);
// 140279AF0: using guessed type void (*off_140279AF0)(CHtmlStream *__hidden this);
// 140279B40: using guessed type void (*off_140279B40)(CHtmlStream *__hidden this);

//----- (0000000140197EC0) ----------------------------------------------------
__int64 (           **           sub_140197EC0(_QWORD *a1))()
{
  __int64 v1; // rdx
  __int64 (           **result)(); // rax

  v1 = a1[2];
  result = &off_140279A58;
  *a1 = (uint64)(uintptr_t)(&off_140279A58);
  if ( v1 )
  {
    result = (__int64 (           **)())SteamAPI_UnregisterCallResult(a1);
    a1[2] = 0;
  }
  return result;
}

// 14026E668: using guessed type __int64 __fastcall SteamAPI_UnregisterCallResult(_QWORD);
// 140279A58: using guessed type __int64 (__fastcall *off_140279A58)();

//----- (0000000140197FB0) ----------------------------------------------------
__int64 (           **           sub_140197FB0(__int64 a1))()
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rdx
  __int64 (           **result)(); // rax

  v2 = a1 + 104;
  *(_QWORD *)v2 = (uint64)(uintptr_t)(&off_140279B18);
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
    SteamAPI_UnregisterCallback(v2);
  v3 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(&off_140279AC8);
  if ( !v3 )
    SteamAPI_UnregisterCallback(a1 + 72);
  v3 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(&off_140279A78);
  if ( !v3 )
    SteamAPI_UnregisterCallback(a1 + 40);
  v4 = *(_QWORD *)(a1 + 16);
  result = &off_140279A58;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279A58);
  if ( v4 )
  {
    result = (__int64 (           **)())SteamAPI_UnregisterCallResult(a1);
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}
