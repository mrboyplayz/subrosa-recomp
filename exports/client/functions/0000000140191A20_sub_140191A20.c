/* Address: 0x140191a20 | Name: sub_140191A20 | Size: 1378 bytes */
__int64 __fastcall sub_140191A20(float *a1)
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
  __int64 v26; // [rsp+0h] [rbp-68h] BYREF
  int v27; // [rsp+20h] [rbp-48h] BYREF
  __int128 v28; // [rsp+28h] [rbp-40h] BYREF
  __int64 v29; // [rsp+38h] [rbp-30h]

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
  v21 = (__m128d)0x3FF0000000000000uLL;
  v22 = (__m128d)0x3FF0000000000000uLL;
  if ( v27 )
  {
    v22.m128d_f64[0] = 1.0 - (double)v10 * (double)v10 * 0.00000002980959967779399;
    *(float *)&v28 = (double)v10 * 0.0001726545674976309;
  }
  if ( v27 != 1 )
  {
    v22.m128d_f64[0] = v22.m128d_f64[0] + (double)v14 * (double)v14 * -0.00000002980959967779399;
    *((float *)&v28 + 1) = (double)v14 * 0.0001726545674976309;
  }
  if ( v27 != 2 )
  {
    v22.m128d_f64[0] = v22.m128d_f64[0] + (double)v18 * (double)v18 * -0.00000002980959967779399;
    *((float *)&v28 + 2) = (double)v18 * 0.0001726545674976309;
  }
  if ( v27 != 3 )
  {
    v22.m128d_f64[0] = v22.m128d_f64[0] + (double)v7 * (double)v7 * -0.00000002980959967779399;
    *((float *)&v28 + 3) = (double)v7 * 0.0001726545674976309;
  }
  if ( v22.m128d_f64[0] <= 0.0 )
    *((_DWORD *)&v28 + v27) = 0;
  else
    *((float *)&v28 + v27) = _mm_sqrt_pd(v22).m128d_f64[0];
  v23 = (__m128)HIDWORD(v28);
  v23.m128_f32[0] = (float)((float)(v23.m128_f32[0] * v23.m128_f32[0])
                          + (float)(*((float *)&v28 + 2) * *((float *)&v28 + 2)))
                  + (float)((float)(*(float *)&v28 * *(float *)&v28)
                          + (float)(*((float *)&v28 + 1) * *((float *)&v28 + 1)));
  v24 = _mm_sqrt_pd(_mm_cvtps_pd(v23)).m128d_f64[0];
  if ( v24 == 0.0 )
  {
    v28 = xmmword_140279490;
  }
  else
  {
    v21.m128d_f64[0] = 1.0 / v24;
    v21.m128d_f64[0] = _mm_unpacklo_pd(v21, v21).m128d_f64[0];
    do
    {
      *(double *)((char *)&v28 + 4 * v2) = COERCE_FLOAT(*(_QWORD *)((char *)&v28 + 4 * v2)) * v21.m128d_f64[0];
      v2 += 2;
    }
    while ( v2 < 4 );
  }
  sub_14011C340(a1, (float *)&v28);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v29);
}

