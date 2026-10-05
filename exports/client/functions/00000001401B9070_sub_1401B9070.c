/* Address: 0x1401b9070 | Name: sub_1401B9070 | Size: 4258 bytes */
__int64 __fastcall sub_1401B9070(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int *a10,
        int a11,
        int *a12,
        int a13,
        int *a14,
        int a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        int a19,
        int a20,
        unsigned int *a21,
        int a22,
        int a23,
        int a24)
{
  int v25; // [rsp+20h] [rbp-D8h]
  int v26; // [rsp+20h] [rbp-D8h]
  int v27; // [rsp+20h] [rbp-D8h]
  int k; // [rsp+20h] [rbp-D8h]
  int m; // [rsp+20h] [rbp-D8h]
  int n; // [rsp+20h] [rbp-D8h]
  int j; // [rsp+24h] [rbp-D4h]
  int v32; // [rsp+28h] [rbp-D0h]
  int v33; // [rsp+28h] [rbp-D0h]
  int v34; // [rsp+28h] [rbp-D0h]
  int v35; // [rsp+2Ch] [rbp-CCh]
  int v36; // [rsp+2Ch] [rbp-CCh]
  int v37; // [rsp+30h] [rbp-C8h]
  int v38; // [rsp+34h] [rbp-C4h]
  int v39; // [rsp+38h] [rbp-C0h]
  int v40; // [rsp+3Ch] [rbp-BCh]
  unsigned int v41; // [rsp+40h] [rbp-B8h]
  int v42; // [rsp+44h] [rbp-B4h]
  int v43; // [rsp+48h] [rbp-B0h]
  int v44; // [rsp+48h] [rbp-B0h]
  int v45; // [rsp+4Ch] [rbp-ACh]
  int v46; // [rsp+50h] [rbp-A8h]
  int v47; // [rsp+50h] [rbp-A8h]
  int v48; // [rsp+54h] [rbp-A4h]
  int v49; // [rsp+58h] [rbp-A0h]
  int v50; // [rsp+5Ch] [rbp-9Ch]
  char v51; // [rsp+60h] [rbp-98h]
  int i; // [rsp+64h] [rbp-94h]
  int v53; // [rsp+68h] [rbp-90h]
  int v54; // [rsp+6Ch] [rbp-8Ch]
  int v55; // [rsp+70h] [rbp-88h]
  int v56; // [rsp+78h] [rbp-80h]
  int v57; // [rsp+7Ch] [rbp-7Ch]
  int v58; // [rsp+80h] [rbp-78h]
  int v59; // [rsp+84h] [rbp-74h]
  int v60; // [rsp+88h] [rbp-70h]
  int v61; // [rsp+8Ch] [rbp-6Ch]
  int v62; // [rsp+90h] [rbp-68h]
  int v63; // [rsp+94h] [rbp-64h]
  int v64; // [rsp+98h] [rbp-60h]
  int v65; // [rsp+9Ch] [rbp-5Ch]
  int v66; // [rsp+A4h] [rbp-54h]
  BOOL v67; // [rsp+A8h] [rbp-50h]
  int v68; // [rsp+ACh] [rbp-4Ch]
  int v69; // [rsp+B0h] [rbp-48h]
  int v70; // [rsp+B8h] [rbp-40h]
  int v71; // [rsp+BCh] [rbp-3Ch]
  int v72; // [rsp+C8h] [rbp-30h]
  int v73; // [rsp+D4h] [rbp-24h]
  int v74; // [rsp+DCh] [rbp-1Ch]

  v40 = 8 * a19;
  v51 = a19 > 1;
  v54 = 0;
  v57 = 64;
  for ( i = 0; i < 6; ++i )
  {
    v53 = (v57 + v54) >> 1;
    v32 = 0;
    v43 = 0;
    v25 = a3;
    while ( 1 )
    {
      v73 = v25--;
      if ( v73 <= a2 )
        break;
      v48 = *(_DWORD *)(a5 + 4LL * v25) + ((*(_DWORD *)(a6 + 4LL * v25) * v53) >> 6);
      if ( v48 >= *(_DWORD *)(a7 + 4LL * v25) || v43 )
      {
        v43 = 1;
        if ( v48 >= *(_DWORD *)(a8 + 4LL * v25) )
          v56 = *(_DWORD *)(a8 + 4LL * v25);
        else
          v56 = *(_DWORD *)(a5 + 4LL * v25) + ((*(_DWORD *)(a6 + 4LL * v25) * v53) >> 6);
        v32 += v56;
      }
      else if ( v48 >= v40 )
      {
        v32 += v40;
      }
    }
    if ( v32 <= a9 )
      v54 = (v57 + v54) >> 1;
    else
      v57 = (v57 + v54) >> 1;
  }
  v33 = 0;
  v44 = 0;
  v26 = a3;
  while ( 1 )
  {
    v74 = v26--;
    if ( v74 <= a2 )
      break;
    v39 = *(_DWORD *)(a5 + 4LL * v26) + ((*(_DWORD *)(a6 + 4LL * v26) * v54) >> 6);
    if ( v39 >= *(_DWORD *)(a7 + 4LL * v26) || v44 )
    {
      v44 = 1;
    }
    else if ( v39 < v40 )
    {
      v39 = 0;
    }
    else
    {
      v39 = 8 * a19;
    }
    if ( v39 >= *(_DWORD *)(a8 + 4LL * v26) )
      v58 = *(_DWORD *)(a8 + 4LL * v26);
    else
      v58 = v39;
    *(_DWORD *)(a16 + 4LL * v26) = v58;
    v33 += v58;
  }
  for ( j = a3; ; --j )
  {
    v27 = j - 1;
    if ( j - 1 <= a4 )
    {
      a9 += a11;
      goto LABEL_60;
    }
    v46 = sub_14019A1A0(
            (unsigned int)(a9 - v33),
            (unsigned int)(*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2)));
    v35 = a9
        - v33
        - v46 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
    v59 = v35 - (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * v27) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2)) <= 0
        ? 0
        : v35 - (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * v27) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
    v63 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * v27);
    v45 = v59 + v63 * v46 + *(_DWORD *)(a16 + 4LL * v27);
    v60 = *(_DWORD *)(a7 + 4LL * v27) <= v40 + 8 ? v40 + 8 : *(_DWORD *)(a7 + 4LL * v27);
    if ( v45 >= v60 )
      break;
LABEL_55:
    v34 = v33 - (a13 + *(_DWORD *)(a16 + 4LL * v27));
    if ( a13 > 0 )
      a13 = byte_14027E388[v27 - a2];
    v33 = a13 + v34;
    if ( v45 < v40 )
    {
      *(_DWORD *)(a16 + 4LL * v27) = 0;
    }
    else
    {
      v33 += v40;
      *(_DWORD *)(a16 + 4LL * v27) = v40;
    }
  }
  if ( !a22 )
  {
    if ( sub_14019AF20((__int64)a21, 1) )
      goto LABEL_60;
    goto LABEL_54;
  }
  if ( j <= 17 )
  {
    v62 = 0;
  }
  else
  {
    if ( v27 >= a23 )
      v61 = 9;
    else
      v61 = 7;
    v62 = v61;
  }
  if ( j > a2 + 2 && (v45 <= (8 * ((v63 * v62) << a20)) >> 4 || v27 > a24) )
  {
    sub_14019A450((__int64)a21, 0, 1);
LABEL_54:
    v33 += 8;
    v45 -= 8;
    goto LABEL_55;
  }
  sub_14019A450((__int64)a21, 1, 1);
LABEL_60:
  if ( a13 <= 0 )
  {
    *a12 = 0;
  }
  else if ( a22 )
  {
    if ( *a12 >= j )
      v64 = j;
    else
      v64 = *a12;
    *a12 = v64;
    sub_14019A5E0((__int64)a21, *a12 - a2, j + 1 - a2);
  }
  else
  {
    *a12 = sub_14019B0A0(a21, j + 1 - a2) + a2;
  }
  if ( *a12 <= a2 )
  {
    a9 += a15;
    a15 = 0;
  }
  if ( a15 <= 0 )
  {
    *a14 = 0;
  }
  else if ( a22 )
  {
    sub_14019A450((__int64)a21, *a14, 1);
  }
  else
  {
    *a14 = sub_14019AF20((__int64)a21, 1);
  }
  v47 = sub_14019A1A0(
          (unsigned int)(a9 - v33),
          (unsigned int)(*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2)));
  v36 = a9 - v33 - v47 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
  for ( k = a2; k < j; ++k )
    *(_DWORD *)(a16 + 4LL * k) += (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (k + 1))
                                 - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * k))
                                * v47;
  for ( m = a2; m < j; ++m )
  {
    if ( v36 >= *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (m + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * m) )
      v65 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (m + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * m);
    else
      v65 = v36;
    *(_DWORD *)(a16 + 4LL * m) += v65;
    v36 -= v65;
  }
  v50 = 0;
  for ( n = a2; n < j; ++n )
  {
    v49 = (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (n + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * n)) << a20;
    v42 = v50 + *(_DWORD *)(a16 + 4LL * n);
    if ( v49 <= 1 )
    {
      if ( v42 - 8 * a19 >= 0 )
        v70 = v42 - 8 * a19;
      else
        v70 = 0;
      v38 = v70;
      *(_DWORD *)(a16 + 4LL * n) = v42 - v70;
      *(_DWORD *)(a17 + 4LL * n) = 0;
      *(_DWORD *)(a18 + 4LL * n) = 1;
    }
    else
    {
      if ( v42 - *(_DWORD *)(a8 + 4LL * n) <= 0 )
        v66 = 0;
      else
        v66 = v42 - *(_DWORD *)(a8 + 4LL * n);
      v38 = v66;
      *(_DWORD *)(a16 + 4LL * n) = v42 - v66;
      v67 = a19 == 2 && v49 > 2 && !*a14 && n < *a12;
      v41 = v67 + v49 * a19;
      v55 = (8 * a20 + *(__int16 *)(*(_QWORD *)(a1 + 64) + 2LL * n)) * v41;
      v37 = (v55 >> 1) - 21 * v41;
      if ( v49 == 2 )
        v37 += (int)(8 * v41) >> 2;
      if ( v37 + *(_DWORD *)(a16 + 4LL * n) >= (int)(16 * v41) )
      {
        if ( v37 + *(_DWORD *)(a16 + 4LL * n) < (int)(24 * v41) )
          v37 += v55 >> 3;
      }
      else
      {
        v37 += v55 >> 2;
      }
      if ( (int)(v37 + *(_DWORD *)(a16 + 4LL * n) + 4 * v41) >= 0 )
        v68 = v37 + *(_DWORD *)(a16 + 4LL * n) + 4 * v41;
      else
        v68 = 0;
      *(_DWORD *)(a17 + 4LL * n) = v68;
      *(_DWORD *)(a17 + 4LL * n) = (unsigned int)sub_14019A1A0(*(unsigned int *)(a17 + 4LL * n), v41) >> 3;
      if ( *(_DWORD *)(a17 + 4LL * n) * a19 > *(int *)(a16 + 4LL * n) >> 3 )
        *(_DWORD *)(a17 + 4LL * n) = *(int *)(a16 + 4LL * n) >> v51 >> 3;
      if ( *(int *)(a17 + 4LL * n) >= 8 )
        v69 = 8;
      else
        v69 = *(_DWORD *)(a17 + 4LL * n);
      *(_DWORD *)(a17 + 4LL * n) = v69;
      *(_DWORD *)(a18 + 4LL * n) = (int)(8 * v41 * *(_DWORD *)(a17 + 4LL * n)) >= v37 + *(_DWORD *)(a16 + 4LL * n);
      *(_DWORD *)(a16 + 4LL * n) -= 8 * *(_DWORD *)(a17 + 4LL * n) * a19;
    }
    if ( v38 > 0 )
    {
      if ( v38 >> (v51 + 3) >= 8 - *(_DWORD *)(a17 + 4LL * n) )
        v71 = 8 - *(_DWORD *)(a17 + 4LL * n);
      else
        v71 = v38 >> (v51 + 3);
      *(_DWORD *)(a17 + 4LL * n) += v71;
      v72 = 8 * a19 * v71;
      *(_DWORD *)(a18 + 4LL * n) = v72 >= v38 - v50;
      v38 -= v72;
    }
    v50 = v38;
  }
  *a10 = v50;
  while ( n < a3 )
  {
    *(_DWORD *)(a17 + 4LL * n) = *(int *)(a16 + 4LL * n) >> v51 >> 3;
    *(_DWORD *)(a16 + 4LL * n) = 0;
    *(_DWORD *)(a18 + 4LL * n) = *(_DWORD *)(a17 + 4LL * n) < 1;
    ++n;
  }
  return (unsigned int)j;
}

