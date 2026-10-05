/* Address: 0x1400103a0 | Name: sub_1400103A0 | Size: 962 bytes */
unsigned __int64 __fastcall sub_1400103A0(signed int a1, int a2, int a3)
{
  int v3; // r14d
  __int64 v5; // rsi
  unsigned __int64 result; // rax
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
  __m128i si128; // [rsp+58h] [rbp-79h] BYREF
  int v25; // [rsp+68h] [rbp-69h]
  int v26; // [rsp+6Ch] [rbp-65h]

  v3 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7A30);
  v25 = 4;
  v26 = 5;
  v5 = 768LL * a3 + 12352LL * a2;
  if ( *(_DWORD *)&byte_143C7A200[v5 + 64] == 1 )
  {
    result = 1;
    v7 = 1;
    v8 = 1;
    if ( a1 >= 2 )
    {
      v9 = *(float *)&byte_143C7A200[v5 + 68];
      goto LABEL_6;
    }
  }
  else
  {
    result = 0;
    v7 = 0;
    v8 = 0;
  }
  v9 = 1.0 - (float)(*(float *)&byte_143C7A200[v5 + 72] + *(float *)&byte_143C7A200[v5 + 68]);
LABEL_6:
  v10 = *(float *)&byte_143C7A200[v5 + 72];
  v11 = *(float *)&byte_143C7A200[v5 + 76];
  v12 = *(float *)&byte_143C7A200[v5 + 80];
  if ( v9 <= 0.0 )
  {
    v13 = result ^ 1;
  }
  else
  {
    v25 = 6;
    v13 = v7 ^ 1;
    result = sub_14000FB20(a1, 0.0, 0.0, 0.0, v9, 1.0, 0.0625, 8 * v13 + 18, si128.m128i_i32);
  }
  v14 = v10 + v9;
  v15 = 8 * v13;
  if ( v14 < 1.0 )
  {
    si128.m128i_i32[2] = 6;
    result = sub_14000FB20(a1, v14, 0.0, 0.0, 1.0 - v14, 1.0, 0.0625, v15 + 6, si128.m128i_i32);
  }
  if ( v11 > 0.0 )
  {
    v26 = 6;
    result = sub_14000FB20(a1, 0.0, 0.0, 0.0, 1.0, v11, 0.0625, v15 + 34, si128.m128i_i32);
  }
  v16 = v12 + v11;
  if ( v16 < 1.0 )
  {
    si128.m128i_i32[0] = 6;
    result = sub_14000FB20(a1, 0.0, v16, 0.0, 1.0, 1.0 - v16, 0.0625, v15 + 3, si128.m128i_i32);
  }
  if ( *(int *)&byte_143C7A200[v5 + 440] > 0 )
  {
    v17 = (float *)((char *)&unk_143C7A3C8 + v5);
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
          si128 = _mm_load_si128((const __m128i *)&xmmword_1400F79E0);
          v25 = 6;
          v23 = 0.1875;
          v26 = 6;
        }
        else if ( v20 == 2 )
        {
          v22 = -0.0625;
          si128 = _mm_load_si128((const __m128i *)&xmmword_1400F79E0);
          v25 = 6;
          v23 = 0.3125;
          v26 = 6;
        }
        else
        {
          v22 = 0.0078125;
          si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7A00);
          v25 = 7;
          v23 = 0.015625;
          v26 = 7;
        }
      }
      else
      {
        v22 = 0.0;
        v23 = 0.0625;
      }
      result = sub_14000FB20(a1, v18, v17[1], v22, v19, v21, v23, 63, si128.m128i_i32);
      ++v3;
      v17 += 6;
    }
    while ( v3 < *(_DWORD *)&byte_143C7A200[v5 + 440] );
  }
  return result;
}

