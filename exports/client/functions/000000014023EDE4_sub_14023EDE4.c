/* Address: 0x14023ede4 | Name: sub_14023EDE4 | Size: 1832 bytes */
// local variable allocation has failed, the output may be wrong!
double __fastcall sub_14023EDE4(double result, double a2)
{
  __int128 v2; // xmm8
  __int64 v3; // rdi
  double v4; // xmm9_8
  __int64 v5; // r15
  __int64 v6; // rdx
  int v7; // esi
  unsigned __int64 v8; // r13
  double v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // xmm0_8
  double v12; // xmm0_8
  unsigned __int64 v13; // rcx
  __int64 v14; // xmm0_8
  double v15; // xmm0_8
  double v16; // rsi
  double v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  int v21; // r8d
  double v22; // xmm0_8
  double v23; // xmm5_8
  __int64 v24; // rcx
  double v25; // xmm7_8
  __m128 v26; // xmm10
  double v27; // xmm6_8
  int v28; // kr00_4
  double v29; // xmm3_8
  double v30; // xmm4_8
  __m128 v31; // xmm0
  __m128 v32; // xmm0

  v2 = *(_OWORD *)&result;
  v3 = *(_QWORD *)&result;
  v4 = a2;
  v5 = (*(_QWORD *)&a2 >> 52) & 0x7FFLL;
  v6 = *(_QWORD *)&a2 & 0x7FFFFFFFFFFFFFFFLL;
  v7 = ((*(_QWORD *)&result >> 52) & 0x7FF) - v5;
  v8 = *(_QWORD *)&result & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&a2 & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
  {
    v9 = a2;
LABEL_3:
    handle_nan(*(_QWORD *)&v9);
    return result;
  }
  if ( v8 > 0x7FF0000000000000LL )
  {
    v9 = result;
    goto LABEL_3;
  }
  v10 = 0;
  if ( !v8 )
  {
    if ( a2 >= 0.0 )
      return result;
    goto LABEL_48;
  }
  if ( !v6 )
  {
    set_statfp(32);
    if ( result < 0.0 )
      goto LABEL_29;
    v6 = *(_QWORD *)&a2 & 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( (unsigned int)v5 < 0x3FD && ((unsigned __int16)(*(_QWORD *)&result >> 52) & 0x7FFu) < 0x3FD )
  {
    if ( (*(_QWORD *)&a2 & 0x7FF0000000000000LL) != 0 )
    {
      v13 = *(_QWORD *)&a2 + 0x4000000000000000LL;
    }
    else
    {
      v11 = *(_QWORD *)&a2 | 0x4010000000000000LL;
      if ( a2 >= 0.0 )
        v12 = *(double *)&v11 + -4.0;
      else
        v12 = *(double *)&v11 + 4.0;
      *(double *)&v13 = v12;
    }
    if ( (v3 & 0x7FF0000000000000LL) != 0 )
    {
      *(_QWORD *)&v16 = v3 + 0x4000000000000000LL;
    }
    else
    {
      v14 = v3 | 0x4010000000000000LL;
      if ( v3 >= 0 )
        v15 = *(double *)&v14 + -4.0;
      else
        v15 = *(double *)&v14 + 4.0;
      v16 = v15;
    }
    v4 = *(double *)&v13;
    v2 = *(unsigned __int64 *)&v16;
    v7 = ((*(_QWORD *)&v16 >> 52) & 0x7FF) - ((v13 >> 52) & 0x7FF);
  }
  if ( v7 > 56 )
  {
    set_statfp(32);
    if ( v3 >= 0 )
    {
      *(_OWORD *)&result = 0x3FF921FB54442D18uLL;
      return result;
    }
LABEL_29:
    *(_OWORD *)&result = 0xBFF921FB54442D18uLL;
    return result;
  }
  if ( v7 >= -28 || a2 < 0.0 )
  {
    if ( v7 < -56 && a2 < 0.0 )
    {
LABEL_48:
      set_statfp(32);
      if ( v3 >= 0 )
        *(_OWORD *)&result = 0x400921FB54442D18uLL;
      else
        *(_OWORD *)&result = 0xC00921FB54442D18uLL;
      return result;
    }
    if ( v8 == 0x7FF0000000000000LL && v6 == 0x7FF0000000000000LL )
    {
      set_statfp(32);
      if ( a2 >= 0.0 )
      {
        if ( v3 >= 0 )
          *(_OWORD *)&result = 0x3FE921FB54442D18uLL;
        else
          *(_OWORD *)&result = 0xBFE921FB54442D18uLL;
      }
      else if ( v3 >= 0 )
      {
        *(_OWORD *)&result = 0x4002D97C7F3321D2uLL;
      }
      else
      {
        *(_OWORD *)&result = 0xC002D97C7F3321D2uLL;
      }
    }
    else
    {
      if ( a2 < 0.0 )
        v4 = -v4;
      if ( v3 < 0 )
        *(double *)&v2 = -*(double *)&v2;
      v21 = 0;
      LOBYTE(v21) = *(double *)&v2 > v4;
      if ( *(double *)&v2 > v4 )
      {
        v22 = v4;
        v4 = *(double *)&v2;
        *(double *)&v2 = v22;
      }
      v23 = *(double *)&v2 / v4;
      if ( *(double *)&v2 / v4 <= 0.0625 )
      {
        v26 = 0;
        if ( v23 >= 0.00000001 )
          v23 = (*(double *)&v2
               - COERCE_DOUBLE(*(_QWORD *)&v23 & 0xFFFFFFFF00000000uLL)
               * COERCE_DOUBLE(*(_QWORD *)&v4 & 0xFFFFFFFF00000000uLL)
               - (v4 - COERCE_DOUBLE(*(_QWORD *)&v4 & 0xFFFFFFFF00000000uLL))
               * COERCE_DOUBLE(*(_QWORD *)&v23 & 0xFFFFFFFF00000000uLL)
               - (v23 - COERCE_DOUBLE(*(_QWORD *)&v23 & 0xFFFFFFFF00000000uLL)) * v4)
              / v4
              - (0.3333333333333317
               - (0.1999999999939322
                - (0.1428571356180717 - (0.1111073628351453 - v23 * v23 * 0.09002981028544979) * (v23 * v23))
                * (v23
                 * v23))
               * (v23
                * v23))
              * (v23
               * v23
               * v23)
              + v23;
      }
      else
      {
        v24 = (unsigned int)((int)(v23 * 256.0 + 0.5) - 16);
        v25 = qword_1402866C0[v24];
        v26 = (__m128)(unsigned __int64)qword_140285F30[v24];
        v27 = (double)(int)(v23 * 256.0 + 0.5) * 0.00390625;
        v28 = 1023 - ((*(_QWORD *)&v4 >> 52) & 0x7FF);
        LODWORD(v24) = v28 - v28 / 2;
        v29 = COERCE_DOUBLE((v28 / 2 + 1023LL) << 52) * *(double *)&v2 * COERCE_DOUBLE(((int)v24 + 1023LL) << 52);
        v30 = (v29
             - COERCE_DOUBLE(
                 COERCE_UNSIGNED_INT64(COERCE_DOUBLE((v28 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v24 + 1023LL) << 52))
               & 0xFFFFFFFFF8000000uLL)
             * v27
             - (COERCE_DOUBLE((v28 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v24 + 1023LL) << 52)
              - COERCE_DOUBLE(
                  COERCE_UNSIGNED_INT64(COERCE_DOUBLE((v28 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v24 + 1023LL) << 52))
                & 0xFFFFFFFFF8000000uLL))
             * v27)
            / (v27 * v29 + COERCE_DOUBLE((v28 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v24 + 1023LL) << 52));
        v23 = v30 + v25 - (0.333333333332241 - v30 * v30 * 0.1999991803898914) * (v30 * v30) * v30;
      }
      if ( v21 )
      {
        v31 = (__m128)0x3FF921FB54442D18uLL;
        *(double *)v31.m128_u64 = 1.570796326794897 - *(double *)v26.m128_u64;
        v26 = v31;
        v23 = 6.123233995736766e-17 - v23;
      }
      if ( a2 < 0.0 )
      {
        v32 = (__m128)0x400921FB50000000uLL;
        *(double *)v32.m128_u64 = 3.141592621803284 - *(double *)v26.m128_u64;
        v26 = v32;
        v23 = 0.00000003178650954705639 - v23;
      }
      *(double *)v26.m128_u64 = *(double *)v26.m128_u64 + v23;
      if ( v3 < 0 )
        v26 = _mm_xor_ps(v26, (__m128)xmmword_140279860);
      *(__m128 *)&result = v26;
    }
  }
  else if ( v7 >= -1074 )
  {
    if ( v7 >= -1022 )
    {
      *(double *)&v2 = *(double *)&v2 / v4;
      *(_OWORD *)&result = v2;
    }
    else
    {
      v17 = fabs(1.267650600228229e30 * *(double *)&v2 / v4);
      v18 = *(_QWORD *)&v17 >> 52;
      if ( (unsigned int)(*(_QWORD *)&v17 >> 52) <= 0x64 )
      {
        v19 = *(_QWORD *)&v17 & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
        if ( 101 - (int)v18 <= 54 )
          v10 = ((v19 >> (101 - (unsigned __int8)v18 - 1)) & 1) + (v19 >> (101 - (unsigned __int8)v18 - 1) >> 1);
      }
      else
      {
        v10 = *(_QWORD *)&v17 & 0x800FFFFFFFFFFFFFuLL | ((v18 - 100) << 52);
      }
      v20 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * *(double *)&v2 / v4) & 0x8000000000000000uLL | v10;
      if ( (v20 & 0x7FF0000000000000LL) == 0 )
        set_statfp(32);
      *(_OWORD *)&result = v20;
    }
  }
  else
  {
    set_statfp(32);
    if ( v3 >= 0 )
      *(_OWORD *)&result = 0;
    else
      *(_OWORD *)&result = 0x8000000000000000uLL;
  }
  return result;
}

