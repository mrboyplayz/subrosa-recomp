/* Address: 0x1400e9a60 | Name: sub_1400E9A60 | Size: 1378 bytes */
_UNKNOWN **__fastcall sub_1400E9A60(float *a1)
{
  __int64 v2; // r10
  int v3; // r8d
  int v4; // edi
  int v5; // ebx
  int v6; // r9d
  int v7; // r11d
  char v8; // si
  int v9; // eax
  signed int v10; // r15d
  int v11; // ebx
  char v12; // si
  int v13; // eax
  signed int v14; // ebp
  int v15; // ebx
  char v16; // si
  int v17; // eax
  signed int v18; // esi
  char v19; // bl
  int v20; // eax
  __m128d v21; // xmm3
  __m128d v22; // xmm2
  __m128 v23; // xmm2
  double v24; // xmm5_8
  int v26; // [rsp+20h] [rbp-48h] BYREF
  __int128 v27; // [rsp+28h] [rbp-40h] BYREF

  sub_1400AFB00(&v26, 2);
  v2 = 0;
  v3 = qword_197BD727C;
  v4 = 14;
  if ( v26 )
  {
    v5 = 14;
    if ( (int)qword_197BD727C >= 0x10000 || (int)qword_197BD727C + 1 > dword_197BD7278 )
    {
      v7 = v26;
      v6 = HIDWORD(qword_197BD727C);
    }
    else
    {
      v6 = HIDWORD(qword_197BD727C);
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = 8 - v6;
        v7 |= (~(-1 << v5) & (*((unsigned __int8 *)&dword_197BC7200[16417] + v3) >> SBYTE4(qword_197BD727C))) << v8;
        if ( v5 < (unsigned int)(8 - v6) )
          break;
        v6 = 0;
        HIDWORD(qword_197BD727C) = 0;
        if ( v5 == v9 )
        {
          LODWORD(qword_197BD727C) = ++v3;
          goto LABEL_13;
        }
        ++v3;
        v5 -= v9;
        v8 += v9;
        LODWORD(qword_197BD727C) = v3;
        if ( v5 <= 0 )
          goto LABEL_13;
      }
      v6 += v5;
      HIDWORD(qword_197BD727C) = v6;
    }
LABEL_13:
    v10 = v7;
    if ( (v7 & 0x2000) != 0 )
    {
      v10 = v7 | 0xFFFFC000;
      dword_196ABD2E4 = v7 | 0xFFFFC000;
    }
    else
    {
      dword_196ABD2E4 = v7;
    }
  }
  else
  {
    v7 = 0;
    v10 = dword_196ABD2E4;
    v6 = HIDWORD(qword_197BD727C);
  }
  if ( v26 == 1 )
  {
    v14 = dword_196ABD2E8;
  }
  else
  {
    v11 = 14;
    if ( v3 < 0x10000 && v3 + 1 <= dword_197BD7278 )
    {
      v7 = 0;
      v12 = 0;
      while ( 1 )
      {
        v13 = 8 - v6;
        v7 |= (~(-1 << v11) & (*((unsigned __int8 *)&dword_197BC7200[16417] + v3) >> SBYTE4(qword_197BD727C))) << v12;
        if ( v11 < (unsigned int)(8 - v6) )
          break;
        v6 = 0;
        HIDWORD(qword_197BD727C) = 0;
        if ( v11 == v13 )
        {
          LODWORD(qword_197BD727C) = ++v3;
          goto LABEL_27;
        }
        ++v3;
        v11 -= v13;
        v12 += v13;
        LODWORD(qword_197BD727C) = v3;
        if ( v11 <= 0 )
          goto LABEL_27;
      }
      v6 += v11;
      HIDWORD(qword_197BD727C) = v6;
    }
LABEL_27:
    v14 = v7;
    if ( (v7 & 0x2000) != 0 )
    {
      v14 = v7 | 0xFFFFC000;
      dword_196ABD2E8 = v7 | 0xFFFFC000;
    }
    else
    {
      dword_196ABD2E8 = v7;
    }
  }
  if ( v26 == 2 )
  {
    v18 = dword_196ABD2EC;
  }
  else
  {
    v15 = 14;
    if ( v3 < 0x10000 && v3 + 1 <= dword_197BD7278 )
    {
      v7 = 0;
      v16 = 0;
      while ( 1 )
      {
        v17 = 8 - v6;
        v7 |= (~(-1 << v15) & (*((unsigned __int8 *)&dword_197BC7200[16417] + v3) >> SBYTE4(qword_197BD727C))) << v16;
        if ( v15 < (unsigned int)(8 - v6) )
          break;
        v6 = 0;
        HIDWORD(qword_197BD727C) = 0;
        if ( v15 == v17 )
        {
          LODWORD(qword_197BD727C) = ++v3;
          goto LABEL_41;
        }
        ++v3;
        v15 -= v17;
        v16 += v17;
        LODWORD(qword_197BD727C) = v3;
        if ( v15 <= 0 )
          goto LABEL_41;
      }
      v6 += v15;
      HIDWORD(qword_197BD727C) = v6;
    }
LABEL_41:
    v18 = v7;
    if ( (v7 & 0x2000) != 0 )
    {
      v18 = v7 | 0xFFFFC000;
      dword_196ABD2EC = v7 | 0xFFFFC000;
    }
    else
    {
      dword_196ABD2EC = v7;
    }
  }
  if ( v26 == 3 )
  {
    v7 = dword_196ABD2F0;
  }
  else
  {
    if ( v3 < 0x10000 && v3 + 1 <= dword_197BD7278 )
    {
      v7 = 0;
      v19 = 0;
      while ( 1 )
      {
        v20 = 8 - v6;
        v7 |= (~(-1 << v4) & (*((unsigned __int8 *)&dword_197BC7200[16417] + v3) >> SBYTE4(qword_197BD727C))) << v19;
        if ( v4 < (unsigned int)(8 - v6) )
          break;
        HIDWORD(qword_197BD727C) = 0;
        if ( v4 == v20 )
        {
          LODWORD(qword_197BD727C) = v3 + 1;
          goto LABEL_55;
        }
        ++v3;
        v4 -= v20;
        v19 += v20;
        LODWORD(qword_197BD727C) = v3;
        v6 = 0;
        if ( v4 <= 0 )
          goto LABEL_55;
      }
      HIDWORD(qword_197BD727C) = v4 + v6;
    }
LABEL_55:
    if ( (v7 & 0x2000) != 0 )
      v7 |= 0xFFFFC000;
    dword_196ABD2F0 = v7;
  }
  v21 = (__m128d)0x3FF0000000000000uLL;
  v22 = (__m128d)0x3FF0000000000000uLL;
  if ( v26 )
  {
    v22.m128d_f64[0] = 1.0 - (double)v10 * (double)v10 * 0.00000002980959967779399;
    *(float *)&v27 = (double)v10 * 0.0001726545674976309;
  }
  if ( v26 != 1 )
  {
    v22.m128d_f64[0] = v22.m128d_f64[0] + (double)v14 * (double)v14 * -0.00000002980959967779399;
    *((float *)&v27 + 1) = (double)v14 * 0.0001726545674976309;
  }
  if ( v26 != 2 )
  {
    v22.m128d_f64[0] = v22.m128d_f64[0] + (double)v18 * (double)v18 * -0.00000002980959967779399;
    *((float *)&v27 + 2) = (double)v18 * 0.0001726545674976309;
  }
  if ( v26 != 3 )
  {
    v22.m128d_f64[0] = v22.m128d_f64[0] + (double)v7 * (double)v7 * -0.00000002980959967779399;
    *((float *)&v27 + 3) = (double)v7 * 0.0001726545674976309;
  }
  if ( v22.m128d_f64[0] <= 0.0 )
    *((_DWORD *)&v27 + v26) = 0;
  else
    *((float *)&v27 + v26) = _mm_sqrt_pd(v22).m128d_f64[0];
  v23 = (__m128)HIDWORD(v27);
  v23.m128_f32[0] = (float)((float)(v23.m128_f32[0] * v23.m128_f32[0])
                          + (float)(*((float *)&v27 + 2) * *((float *)&v27 + 2)))
                  + (float)((float)(*(float *)&v27 * *(float *)&v27)
                          + (float)(*((float *)&v27 + 1) * *((float *)&v27 + 1)));
  v24 = _mm_sqrt_pd(_mm_cvtps_pd(v23)).m128d_f64[0];
  if ( v24 == 0.0 )
  {
    v27 = xmmword_1400F7D40;
  }
  else
  {
    v21.m128d_f64[0] = 1.0 / v24;
    v21.m128d_f64[0] = _mm_unpacklo_pd(v21, v21).m128d_f64[0];
    do
    {
      *(double *)((char *)&v27 + 4 * v2) = COERCE_FLOAT(*(_QWORD *)((char *)&v27 + 4 * v2)) * v21.m128d_f64[0];
      v2 += 2;
    }
    while ( v2 < 4 );
  }
  return sub_1400B3D20(a1, (float *)&v27);
}

