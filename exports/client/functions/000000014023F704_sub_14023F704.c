/* Address: 0x14023f704 | Name: sub_14023F704 | Size: 1041 bytes */
float __fastcall sub_14023F704(float result, float a2)
{
  double v2; // xmm7_8
  double v3; // xmm6_8
  double v4; // r14
  double v5; // rdi
  int v6; // esi
  double v7; // r12
  double v8; // r15
  unsigned __int64 v9; // rbx
  double v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  float v14; // xmm6_4
  int v15; // edx
  double v16; // xmm0_8
  double v17; // xmm4_8
  int v18; // eax
  double v19; // xmm3_8
  double v20; // xmm0_8
  float v21; // [rsp+80h] [rbp+8h]

  v2 = a2;
  v3 = result;
  v4 = a2;
  v5 = result;
  v6 = ((COERCE_UNSIGNED_INT64(result) >> 52) & 0x7FF) - ((COERCE_UNSIGNED_INT64(a2) >> 52) & 0x7FF);
  v7 = fabs(a2);
  v8 = fabs(result);
  if ( *(_QWORD *)&v7 > 0x7FF0000000000000uLL )
  {
    v21 = a2;
LABEL_3:
    handle_nanf(LODWORD(v21));
    return result;
  }
  if ( *(_QWORD *)&v8 > 0x7FF0000000000000uLL )
  {
    v21 = result;
    goto LABEL_3;
  }
  v9 = 0;
  if ( v8 == 0.0 )
  {
    if ( v4 < 0.0 )
    {
LABEL_33:
      set_statfp(32);
      if ( v5 >= 0.0 )
        return 3.1415927;
      else
        return -3.1415927;
    }
    return v3;
  }
  if ( v7 == 0.0 )
  {
    set_statfp(32);
    if ( v5 < 0.0 )
      return -1.5707964;
  }
  if ( v6 > 26 )
  {
    set_statfp(32);
    if ( v5 >= 0.0 )
      return 1.5707964;
    return -1.5707964;
  }
  if ( v6 >= -13 || v4 < 0.0 )
  {
    if ( v6 < -26 && v4 < 0.0 )
      goto LABEL_33;
    if ( v8 == INFINITY && v7 == INFINITY )
    {
      set_statfp(32);
      if ( v4 >= 0.0 )
      {
        if ( v5 >= 0.0 )
          return 0.78539819;
        else
          return -0.78539819;
      }
      else if ( v5 >= 0.0 )
      {
        return 2.3561945;
      }
      else
      {
        return -2.3561945;
      }
    }
    if ( v4 < 0.0 )
      v2 = -v2;
    if ( v5 < 0.0 )
      v3 = -v3;
    v15 = 0;
    LOBYTE(v15) = v3 > v2;
    if ( v3 > v2 )
    {
      v16 = v2;
      v2 = v3;
      v3 = v16;
    }
    v17 = v3 / v2;
    if ( v3 / v2 <= 0.0625 )
    {
      if ( v17 < 0.0001 )
      {
LABEL_56:
        if ( v15 )
          v17 = 1.570796326794897 - v17;
        if ( v4 < 0.0 )
          v17 = 3.141592653589793 - v17;
        if ( v5 < 0.0 )
          return -v17;
        return v17;
      }
      v20 = (0.3333333333333317 - (0.1999999999939322 - v17 * v17 * 0.1428571356180717) * (v17 * v17))
          * (v17
           * v17
           * v17);
    }
    else
    {
      v18 = (int)(v17 * 256.0 + 0.5);
      v19 = (v3 * 256.0 - (double)v18 * v2) / ((double)v18 * v3 + v2 * 256.0);
      v17 = v19 + dbl_140286F10[v18 - 16];
      v20 = v19 * v19 * v19 * 0.333333333332241;
    }
    v17 = v17 - v20;
    goto LABEL_56;
  }
  if ( v6 >= -150 )
  {
    if ( v6 >= -126 )
      return v3 / v2;
    v10 = fabs(1.267650600228229e30 * v3 / v2);
    v11 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * v3 / v2) & 0x8000000000000000uLL;
    v12 = *(_QWORD *)&v10 >> 52;
    if ( (unsigned int)(*(_QWORD *)&v10 >> 52) <= 0x64 )
    {
      v13 = *(_QWORD *)&v10 & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
      if ( 101 - (int)v12 <= 54 )
        v9 = ((v13 >> (101 - (unsigned __int8)v12 - 1)) & 1) + (v13 >> (101 - (unsigned __int8)v12 - 1) >> 1);
    }
    else
    {
      v9 = *(_QWORD *)&v10 & 0x800FFFFFFFFFFFFFuLL | ((v12 - 100) << 52);
    }
    v14 = COERCE_DOUBLE(v11 | v9);
    if ( ((v11 | v9) & 0x7FF0000000000000LL) == 0 )
      set_statfp(48);
    return v14;
  }
  else
  {
    set_statfp(48);
    if ( v5 >= 0.0 )
      return 0.0;
    else
      return -0.0;
  }
}

