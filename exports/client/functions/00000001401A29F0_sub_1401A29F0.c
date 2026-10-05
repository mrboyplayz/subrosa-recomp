/* Address: 0x1401a29f0 | Name: sub_1401A29F0 | Size: 2249 bytes */
__int64 __fastcall sub_1401A29F0(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        __int64 a16,
        int a17,
        int a18,
        int a19)
{
  void *v19; // rsp
  void *v20; // rsp
  void *v21; // rsp
  void *v22; // rsp
  int i; // [rsp+C0h] [rbp+0h] BYREF
  int v25; // [rsp+C4h] [rbp+4h]
  int v26; // [rsp+C8h] [rbp+8h]
  int v27; // [rsp+CCh] [rbp+Ch]
  int v28; // [rsp+D0h] [rbp+10h]
  int v29; // [rsp+D4h] [rbp+14h]
  int v30; // [rsp+D8h] [rbp+18h]
  int v31; // [rsp+DCh] [rbp+1Ch]
  int v32; // [rsp+E0h] [rbp+20h]
  int v33; // [rsp+E4h] [rbp+24h]
  int *v34; // [rsp+E8h] [rbp+28h]
  int v35; // [rsp+F0h] [rbp+30h]
  int v36; // [rsp+F4h] [rbp+34h]
  int v37; // [rsp+F8h] [rbp+38h]
  int v38; // [rsp+FCh] [rbp+3Ch]
  int v39; // [rsp+100h] [rbp+40h]
  int v40; // [rsp+104h] [rbp+44h]
  int v41; // [rsp+108h] [rbp+48h]
  int v42; // [rsp+10Ch] [rbp+4Ch]
  int v43; // [rsp+110h] [rbp+50h]
  int v44; // [rsp+114h] [rbp+54h]
  int v45; // [rsp+118h] [rbp+58h]
  int v46; // [rsp+11Ch] [rbp+5Ch]
  int v47; // [rsp+120h] [rbp+60h]
  int v48; // [rsp+124h] [rbp+64h]
  int v49; // [rsp+128h] [rbp+68h]
  int v50; // [rsp+12Ch] [rbp+6Ch]
  int v51; // [rsp+130h] [rbp+70h]
  int v52; // [rsp+134h] [rbp+74h]
  int v53; // [rsp+138h] [rbp+78h]
  int v54; // [rsp+13Ch] [rbp+7Ch]
  int *v55; // [rsp+140h] [rbp+80h]
  int *v56; // [rsp+148h] [rbp+88h]
  int *v57; // [rsp+150h] [rbp+90h]
  __int64 v58; // [rsp+158h] [rbp+98h]
  int v63; // [rsp+1B0h] [rbp+F0h]
  int v64; // [rsp+1B0h] [rbp+F0h]

  if ( a9 <= 0 )
    v49 = 0;
  else
    v49 = a9;
  v29 = *(_DWORD *)(a1 + 8);
  v48 = a2;
  if ( v49 < 8 )
    v36 = 0;
  else
    v36 = 8;
  v47 = v36;
  v63 = v49 - v36;
  v33 = 0;
  v32 = 0;
  if ( a14 == 2 )
  {
    v32 = byte_14027E388[a3 - a2];
    if ( v32 <= v63 )
    {
      v64 = v63 - v32;
      if ( v64 < 8 )
        v37 = 0;
      else
        v37 = 8;
      v33 = v37;
      v63 = v64 - v37;
    }
    else
    {
      v32 = 0;
    }
  }
  v19 = alloca(sub_1401F89D0());
  v57 = &i;
  v20 = alloca(sub_1401F89D0());
  v56 = &i;
  v21 = alloca(sub_1401F89D0());
  v55 = &i;
  v22 = alloca(sub_1401F89D0());
  v34 = &i;
  for ( i = a2; i < a3; ++i )
  {
    v54 = 3 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i));
    if ( 8 * a14 <= (8 * (v54 << a15)) >> 4 )
      v38 = (8
           * ((3 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i))) << a15)) >> 4;
    else
      v38 = 8 * a14;
    v55[i] = v38;
    v34[i] = ((1 << (a15 + 3))
            * (a3 - i - 1)
            * (a6 - 5 - a15)
            * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i))
            * a14) >> 6;
    if ( (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a15 == 1 )
      v34[i] -= 8 * a14;
  }
  v28 = 1;
  v30 = *(_DWORD *)(a1 + 52) - 1;
  do
  {
    v40 = 0;
    v31 = 0;
    v35 = (v30 + v28) >> 1;
    i = a3;
    while ( 1 )
    {
      v51 = i;
      v50 = a2;
      --i;
      if ( v51 <= a2 )
        break;
      v52 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i);
      v25 = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + i + v29 * v35) * v52 * a14) << a15 >> 2;
      if ( v25 > 0 )
      {
        if ( v34[i] + v25 >= 0 )
          v39 = v34[i] + v25;
        else
          v39 = 0;
        v25 = v39;
      }
      v25 += *(_DWORD *)(a4 + 4LL * i);
      if ( v25 >= v55[i] || v40 )
      {
        v40 = 1;
        if ( v25 >= *(_DWORD *)(a5 + 4LL * i) )
          v41 = *(_DWORD *)(a5 + 4LL * i);
        else
          v41 = v25;
        v31 += v41;
      }
      else if ( v25 >= 8 * a14 )
      {
        v31 += 8 * a14;
      }
    }
    if ( v31 <= v63 )
      v28 = v35 + 1;
    else
      v30 = v35 - 1;
  }
  while ( v28 <= v30 );
  v30 = v28--;
  for ( i = a2; i < a3; ++i )
  {
    v42 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i);
    v27 = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + i + v29 * v28) * v42 * a14) << a15 >> 2;
    if ( v30 < *(_DWORD *)(a1 + 52) )
      v43 = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + i + v29 * v30) * v42 * a14) << a15 >> 2;
    else
      v43 = *(_DWORD *)(a5 + 4LL * i);
    v26 = v43;
    if ( v27 > 0 )
    {
      if ( v34[i] + v27 >= 0 )
        v44 = v34[i] + v27;
      else
        v44 = 0;
      v27 = v44;
    }
    if ( v26 > 0 )
    {
      if ( v34[i] + v26 >= 0 )
        v45 = v34[i] + v26;
      else
        v45 = 0;
      v26 = v45;
    }
    if ( v28 > 0 )
      v27 += *(_DWORD *)(a4 + 4LL * i);
    v26 += *(_DWORD *)(a4 + 4LL * i);
    if ( *(int *)(a4 + 4LL * i) > 0 )
      v48 = i;
    if ( v26 - v27 >= 0 )
      v46 = v26 - v27;
    else
      v46 = 0;
    v26 = v46;
    v57[i] = v27;
    v56[i] = v26;
  }
  v53 = sub_1401B9070(
          a1,
          a2,
          a3,
          v48,
          (__int64)v57,
          (__int64)v56,
          (__int64)v55,
          a5,
          v63,
          a10,
          v47,
          a7,
          v32,
          a8,
          v33,
          a11,
          a12,
          a13,
          a14,
          a15,
          a16,
          a17,
          a18,
          a19);
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v58);
}

