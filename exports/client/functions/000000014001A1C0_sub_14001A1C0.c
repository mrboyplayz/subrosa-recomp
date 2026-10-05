/* Address: 0x14001a1c0 | Name: sub_14001A1C0 | Size: 962 bytes */
__int64 __fastcall sub_14001A1C0(signed int a1, int a2, int a3)
{
  signed int v3; // r14d
  __int64 v5; // rsi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // r15
  float v9; // xmm6_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm7_4
  int v13; // ebx
  float v14; // xmm8_4
  int v15; // ebx
  float v16; // xmm7_4
  float *v17; // rbx
  float v18; // xmm1_4
  float v19; // xmm2_4
  int v20; // eax
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  __int64 v25; // [rsp+8h] [rbp-C9h] BYREF
  __m128i si128; // [rsp+58h] [rbp-79h] BYREF
  int v27; // [rsp+68h] [rbp-69h]
  int v28; // [rsp+6Ch] [rbp-65h]
  __int128 v29; // [rsp+70h] [rbp-61h]

  v3 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140279000);
  v27 = 4;
  v28 = 5;
  v5 = 768LL * a3 + 12352LL * a2;
  if ( *(unsigned int *)((char *)&dword_140404A6C[451023989] + v5) == 1 )
  {
    v6 = 1;
    v7 = 1;
    v8 = 1;
    if ( a1 >= 2 )
    {
      v9 = *(float *)((char *)&dword_140404A6C[451023990] + v5);
      goto LABEL_6;
    }
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
  }
  v9 = 1.0
     - (float)(*(float *)((char *)&dword_140404A6C[451023991] + v5)
             + *(float *)((char *)&dword_140404A6C[451023990] + v5));
LABEL_6:
  v10 = *(float *)((char *)&dword_140404A6C[451023991] + v5);
  v11 = *(float *)((char *)&dword_140404A6C[451023992] + v5);
  v12 = *(float *)((char *)&dword_140404A6C[451023993] + v5);
  if ( v9 <= 0.0 )
  {
    v13 = v6 ^ 1;
  }
  else
  {
    v27 = 6;
    v13 = v7 ^ 1;
    sub_140019940(a1, 0.0, 0.0, 0.0, v9, 1.0, 0.0625, 8 * v13 + 18, si128.m128i_i32);
  }
  v14 = v10 + v9;
  v15 = 8 * v13;
  if ( v14 < 1.0 )
  {
    si128.m128i_i32[2] = 6;
    sub_140019940(a1, v14, 0.0, 0.0, 1.0 - v14, 1.0, 0.0625, v15 + 6, si128.m128i_i32);
  }
  if ( v11 > 0.0 )
  {
    v28 = 6;
    sub_140019940(a1, 0.0, 0.0, 0.0, 1.0, v11, 0.0625, v15 + 34, si128.m128i_i32);
  }
  v16 = v12 + v11;
  if ( v16 < 1.0 )
  {
    si128.m128i_i32[0] = 6;
    sub_140019940(a1, 0.0, v16, 0.0, 1.0, 1.0 - v16, 0.0625, v15 + 3, si128.m128i_i32);
  }
  if ( *(int *)((char *)&dword_140404A6C[451024083] + v5) > 0 )
  {
    v17 = (float *)((char *)&dword_140404A6C[451024087] + v5);
    do
    {
      if ( v8 && a1 >= 2 )
      {
        v18 = *(v17 - 1);
        v19 = *v17;
      }
      else
      {
        v19 = *v17;
        v18 = 1.0 - (float)(*v17 + *(v17 - 1));
      }
      v20 = *((_DWORD *)v17 - 3);
      v21 = v17[2];
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          v22 = -0.0625;
          si128 = _mm_load_si128((const __m128i *)&xmmword_140278FA0);
          v27 = 6;
          v23 = 0.1875;
          v28 = 6;
        }
        else if ( v20 == 2 )
        {
          v22 = -0.0625;
          si128 = _mm_load_si128((const __m128i *)&xmmword_140278FA0);
          v27 = 6;
          v23 = 0.3125;
          v28 = 6;
        }
        else
        {
          v22 = 0.0078125;
          si128 = _mm_load_si128((const __m128i *)&xmmword_140278FC0);
          v27 = 7;
          v23 = 0.015625;
          v28 = 7;
        }
      }
      else
      {
        v22 = 0.0;
        v23 = 0.0625;
      }
      sub_140019940(a1, v18, v17[1], v22, v19, v21, v23, 63, si128.m128i_i32);
      ++v3;
      v17 += 6;
    }
    while ( v3 < *(int *)((char *)&dword_140404A6C[451024083] + v5) );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v25 ^ v29);
}

