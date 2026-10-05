/* Address: 0x1401b1250 | Name: sub_1401B1250 | Size: 5358 bytes */
__int64 __fastcall sub_1401B1250(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        int *a16,
        int a17,
        __int64 a18,
        _DWORD *a19,
        __int64 a20,
        __int64 a21)
{
  void *v21; // rsp
  void *v22; // rsp
  void *v23; // rsp
  void *v24; // rsp
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  double v30; // xmm0_8
  int i; // [rsp+20h] [rbp+0h] BYREF
  int v33; // [rsp+24h] [rbp+4h]
  int *v34; // [rsp+28h] [rbp+8h]
  float *v35; // [rsp+30h] [rbp+10h]
  float v36; // [rsp+38h] [rbp+18h]
  int *p_i; // [rsp+40h] [rbp+20h]
  float v38; // [rsp+48h] [rbp+28h]
  int v39; // [rsp+4Ch] [rbp+2Ch]
  int v40; // [rsp+50h] [rbp+30h]
  int v41; // [rsp+54h] [rbp+34h]
  float v42; // [rsp+58h] [rbp+38h]
  float v43; // [rsp+5Ch] [rbp+3Ch]
  int v44; // [rsp+60h] [rbp+40h]
  int *v45; // [rsp+68h] [rbp+48h]
  float v46; // [rsp+70h] [rbp+50h]
  float v47; // [rsp+74h] [rbp+54h]
  float v48; // [rsp+78h] [rbp+58h]
  int v49; // [rsp+7Ch] [rbp+5Ch]
  int v50; // [rsp+80h] [rbp+60h]
  int v51; // [rsp+84h] [rbp+64h]
  float v52; // [rsp+88h] [rbp+68h]
  int v53; // [rsp+8Ch] [rbp+6Ch]
  float v54; // [rsp+90h] [rbp+70h]
  float v55; // [rsp+94h] [rbp+74h]
  float v56; // [rsp+98h] [rbp+78h]
  float v57; // [rsp+9Ch] [rbp+7Ch]
  float v58; // [rsp+A0h] [rbp+80h]
  float v59; // [rsp+A4h] [rbp+84h]
  float v60; // [rsp+A8h] [rbp+88h]
  float v61; // [rsp+ACh] [rbp+8Ch]
  int v62; // [rsp+B0h] [rbp+90h]
  float v63; // [rsp+B4h] [rbp+94h]
  float v64; // [rsp+B8h] [rbp+98h]
  float v65; // [rsp+BCh] [rbp+9Ch]
  float v66; // [rsp+C0h] [rbp+A0h]
  float v67; // [rsp+C4h] [rbp+A4h]
  int v68; // [rsp+C8h] [rbp+A8h]
  float v69; // [rsp+CCh] [rbp+ACh]
  int v70; // [rsp+D0h] [rbp+B0h]
  int v71; // [rsp+D4h] [rbp+B4h]
  int v72; // [rsp+D8h] [rbp+B8h]
  float v73; // [rsp+DCh] [rbp+BCh]
  float v74; // [rsp+E0h] [rbp+C0h]
  float v75; // [rsp+E4h] [rbp+C4h]
  float v76; // [rsp+E8h] [rbp+C8h]
  int v77; // [rsp+ECh] [rbp+CCh]
  int v78; // [rsp+F0h] [rbp+D0h]
  float v79; // [rsp+F4h] [rbp+D4h]
  int v80; // [rsp+F8h] [rbp+D8h]
  int *v81; // [rsp+100h] [rbp+E0h]
  __int64 v82; // [rsp+108h] [rbp+E8h]

  v40 = 0;
  v21 = alloca(sub_1401F89D0());
  v34 = &i;
  v22 = alloca(sub_1401F89D0());
  v45 = &i;
  MEMORY[0x1401FCD30](a7, 0, 4LL * a3);
  v38 = -31.9;
  for ( i = 0; i < a5; ++i )
    *(float *)&v45[i] = (float)((float)((float)((float)(0.0625 * (float)*(__int16 *)(a9 + 2LL * i)) + 0.5)
                                      + (float)(9 - a8))
                              - flt_140282A10[i])
                      + (float)(0.0062000002 * (float)((i + 5) * (i + 5)));
  v33 = 0;
  do
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( v38 <= (float)(*(float *)(a1 + 4LL * (i + a3 * v33)) - *(float *)&v45[i]) )
        v73 = *(float *)(a1 + 4LL * (i + a3 * v33)) - *(float *)&v45[i];
      else
        v73 = v38;
      v38 = v73;
    }
    ++v33;
  }
  while ( v33 < a6 );
  v23 = alloca(sub_1401F89D0());
  p_i = &i;
  v24 = alloca(sub_1401F89D0());
  v81 = &i;
  for ( i = 0; i < a5; ++i )
    *(float *)&p_i[i] = *(float *)(a1 + 4LL * i) - *(float *)&v45[i];
  if ( a6 == 2 )
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( *(float *)&p_i[i] <= (float)(*(float *)(a1 + 4LL * (i + a3)) - *(float *)&v45[i]) )
        v74 = *(float *)(a1 + 4LL * (i + a3)) - *(float *)&v45[i];
      else
        v74 = *(float *)&p_i[i];
      *(float *)&p_i[i] = v74;
    }
  }
  MEMORY[0x1401FC920](v81, p_i);
  for ( i = 1; i < a5; ++i )
  {
    if ( *(float *)&p_i[i] <= (float)(*(float *)&p_i[i - 1] - 2.0) )
      v75 = *(float *)&p_i[i - 1] - 2.0;
    else
      v75 = *(float *)&p_i[i];
    *(float *)&p_i[i] = v75;
  }
  for ( i = a5 - 2; i >= 0; --i )
  {
    if ( *(float *)&p_i[i] <= (float)(*(float *)&p_i[i + 1] - 3.0) )
      v76 = *(float *)&p_i[i + 1] - 3.0;
    else
      v76 = *(float *)&p_i[i];
    *(float *)&p_i[i] = v76;
  }
  for ( i = 0; i < a5; ++i )
  {
    if ( (float)(v38 - 12.0) >= 0.0 )
      v46 = v38 - 12.0;
    else
      v46 = 0.0;
    if ( v46 <= *(float *)&p_i[i] )
    {
      v48 = *(float *)&p_i[i];
    }
    else
    {
      if ( (float)(v38 - 12.0) >= 0.0 )
        v47 = v38 - 12.0;
      else
        v47 = 0.0;
      v48 = v47;
    }
    v42 = *(float *)&v81[i] - v48;
    if ( (int)floor((float)(v42 + 0.5)) <= 0 )
      v49 = -(int)floor((float)(v42 + 0.5));
    else
      v49 = 0;
    if ( v49 <= 5 )
    {
      if ( (int)floor((float)(v42 + 0.5)) <= 0 )
        v50 = -(int)floor((float)(v42 + 0.5));
      else
        v50 = 0;
      v51 = v50;
    }
    else
    {
      v51 = 5;
    }
    v77 = v51;
    v78 = 32;
    *(_DWORD *)(a21 + 4LL * i) = 32 >> v51;
  }
  if ( a15 <= 50 || a14 < 1 || a17 )
  {
    for ( i = a4; i < a5; ++i )
      *(_DWORD *)(a20 + 4LL * i) = 13;
  }
  else
  {
    v53 = 0;
    v33 = 0;
    do
    {
      v35 = (float *)&v34[a3 * v33];
      *v35 = *(float *)(a2 + 4LL * a3 * v33);
      for ( i = 1; i < a5; ++i )
      {
        if ( *(float *)(a2 + 4LL * (i + a3 * v33)) > (float)(*(float *)(a2 + 4LL * (a3 * v33 + i - 1)) + 0.5) )
          v53 = i;
        if ( *(float *)(a2 + 4LL * (i + a3 * v33)) <= (float)(v35[i - 1] + 1.5) )
          v52 = *(float *)(a2 + 4LL * (i + a3 * v33));
        else
          v52 = v35[i - 1] + 1.5;
        v35[i] = v52;
      }
      for ( i = v53 - 1; i >= 0; --i )
      {
        if ( *(float *)(a2 + 4LL * (i + a3 * v33)) <= (float)(v35[i + 1] + 2.0) )
          v54 = *(float *)(a2 + 4LL * (i + a3 * v33));
        else
          v54 = v35[i + 1] + 2.0;
        if ( v54 <= v35[i] )
        {
          if ( *(float *)(a2 + 4LL * (i + a3 * v33)) <= (float)(v35[i + 1] + 2.0) )
            v55 = *(float *)(a2 + 4LL * (i + a3 * v33));
          else
            v55 = v35[i + 1] + 2.0;
          v56 = v55;
        }
        else
        {
          v56 = v35[i];
        }
        v35[i] = v56;
      }
      v43 = 1.0;
      for ( i = 2; i < a5 - 2; ++i )
      {
        v79 = v35[i];
        v25 = sub_1401B0ED0((float *)(a2 + 4LL * (a3 * v33 + i - 2)));
        if ( v79 <= (float)(v25 - v43) )
        {
          v26 = sub_1401B0ED0((float *)(a2 + 4LL * (a3 * v33 + i - 2)));
          v57 = v26 - v43;
        }
        else
        {
          v57 = v35[i];
        }
        v35[i] = v57;
      }
      v27 = sub_1401B1160((float *)(a2 + 4LL * a3 * v33));
      v36 = v27 - v43;
      if ( *v35 <= (float)(v27 - v43) )
        v58 = v36;
      else
        v58 = *v35;
      *v35 = v58;
      if ( v35[1] <= v36 )
        v59 = v36;
      else
        v59 = v35[1];
      v35[1] = v59;
      v28 = sub_1401B1160((float *)(a2 + 4LL * (a3 * v33 + a5 - 3)));
      v36 = v28 - v43;
      if ( v35[a5 - 2] <= (float)(v28 - v43) )
        v60 = v36;
      else
        v60 = v35[a5 - 2];
      v35[a5 - 2] = v60;
      if ( v35[a5 - 1] <= v36 )
        v61 = v36;
      else
        v61 = v35[a5 - 1];
      v35[a5 - 1] = v61;
      for ( i = 0; i < a5; ++i )
      {
        if ( v35[i] <= *(float *)&v45[i] )
          v62 = v45[i];
        else
          v62 = LODWORD(v35[i]);
        LODWORD(v35[i]) = v62;
      }
      ++v33;
    }
    while ( v33 < a6 );
    if ( a6 == 2 )
    {
      for ( i = a4; i < a5; ++i )
      {
        if ( *(float *)&v34[i + a3] <= (float)(*(float *)&v34[i] - 4.0) )
          v63 = *(float *)&v34[i] - 4.0;
        else
          v63 = *(float *)&v34[i + a3];
        *(float *)&v34[i + a3] = v63;
        if ( *(float *)&v34[i] <= (float)(*(float *)&v34[i + a3] - 4.0) )
          v64 = *(float *)&v34[i + a3] - 4.0;
        else
          v64 = *(float *)&v34[i];
        *(float *)&v34[i] = v64;
        if ( (float)(*(float *)(a1 + 4LL * i) - *(float *)&v34[i]) >= 0.0 )
          v65 = *(float *)(a1 + 4LL * i) - *(float *)&v34[i];
        else
          v65 = 0.0;
        if ( (float)(*(float *)(a1 + 4LL * (i + a3)) - *(float *)&v34[i + a3]) >= 0.0 )
          v66 = *(float *)(a1 + 4LL * (i + a3)) - *(float *)&v34[i + a3];
        else
          v66 = 0.0;
        *(float *)&v34[i] = 0.5 * (float)(v65 + v66);
      }
    }
    else
    {
      for ( i = a4; i < a5; ++i )
      {
        if ( (float)(*(float *)(a1 + 4LL * i) - *(float *)&v34[i]) >= 0.0 )
          v67 = *(float *)(a1 + 4LL * i) - *(float *)&v34[i];
        else
          v67 = 0.0;
        *(float *)&v34[i] = v67;
      }
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( *(float *)&v34[i] <= *(float *)(a18 + 4LL * i) )
        v68 = *(_DWORD *)(a18 + 4LL * i);
      else
        v68 = v34[i];
      v34[i] = v68;
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( *(float *)&v34[i] >= 4.0 )
        v69 = 4.0;
      else
        v69 = *(float *)&v34[i];
      v29 = exp(0.6931471805599453 * v69);
      v30 = floor((float)((float)(13.0 * v29) + 0.5));
      *(_DWORD *)(a20 + 4LL * i) = (int)v30;
    }
    if ( (!a11 || a12) && !a10 )
    {
      for ( i = a4; i < a5; ++i )
        *(float *)&v34[i] = 0.5 * *(float *)&v34[i];
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( i < 8 )
        *(float *)&v34[i] = *(float *)&v34[i] * 2.0;
      if ( i >= 12 )
        *(float *)&v34[i] = 0.5 * *(float *)&v34[i];
    }
    if ( *a19 )
    {
      for ( i = a4; ; ++i )
      {
        v70 = a5 <= 19 ? a5 : 19;
        if ( i >= v70 )
          break;
        *(float *)&v34[i] = *(float *)&v34[i] + (float)(0.015625 * (float)*((unsigned __int8 *)a19 + i + 44));
      }
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( *(float *)&v34[i] >= 4.0 )
        v71 = 1082130432;
      else
        v71 = v34[i];
      v34[i] = v71;
      v41 = ((*(__int16 *)(a13 + 2LL * (i + 1)) - *(__int16 *)(a13 + 2LL * i)) * a6) << a14;
      if ( v41 >= 6 )
      {
        if ( v41 <= 48 )
        {
          v39 = (int)(float)((float)(*(float *)&v34[i] * (float)v41) / 6.0);
          v44 = 48 * v39;
        }
        else
        {
          v39 = (int)(float)(*(float *)&v34[i] * 8.0);
          v44 = 8 * v41 * v39 / 8;
        }
      }
      else
      {
        v39 = (int)*(float *)&v34[i];
        v44 = 8 * v41 * v39;
      }
      if ( !a11 || a12 && !a10 )
      {
        v80 = (v44 + v40) >> 6;
        if ( v80 > 2 * a15 / 3 )
        {
          v72 = (2 * a15 / 3) << 6;
          *(_DWORD *)(a7 + 4LL * i) = v72 - v40;
          v40 = v72;
          break;
        }
      }
      *(_DWORD *)(a7 + 4LL * i) = v39;
      v40 += v44;
    }
  }
  *a16 = v40;
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v82);
}

