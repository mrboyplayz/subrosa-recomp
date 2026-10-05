/* Address: 0x1401b3e40 | Name: sub_1401B3E40 | Size: 1761 bytes */
__int64 __fastcall sub_1401B3E40(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  void *v12; // rsp
  float *v13; // rax
  float *v14; // rax
  float *v15; // rax
  float *v16; // rax
  int i; // [rsp+50h] [rbp+0h] BYREF
  int j; // [rsp+54h] [rbp+4h]
  int v20; // [rsp+58h] [rbp+8h]
  int v21; // [rsp+5Ch] [rbp+Ch]
  int v22; // [rsp+60h] [rbp+10h]
  int v23; // [rsp+64h] [rbp+14h]
  int v24; // [rsp+68h] [rbp+18h]
  int v25; // [rsp+6Ch] [rbp+1Ch]
  int v26; // [rsp+70h] [rbp+20h]
  float *v27; // [rsp+78h] [rbp+28h]
  int v28; // [rsp+80h] [rbp+30h]
  int v29; // [rsp+84h] [rbp+34h]
  __int64 v30; // [rsp+88h] [rbp+38h]
  float *v31; // [rsp+90h] [rbp+40h]
  __int64 v32; // [rsp+98h] [rbp+48h]
  __int64 v33; // [rsp+A0h] [rbp+50h]
  __int64 v34; // [rsp+A8h] [rbp+58h]
  __int64 v35; // [rsp+B0h] [rbp+60h]
  __int64 v36; // [rsp+B8h] [rbp+68h]
  __int64 v37; // [rsp+C0h] [rbp+70h]
  __int64 v38; // [rsp+C8h] [rbp+78h]
  __int64 v39; // [rsp+D0h] [rbp+80h]
  __int64 v40; // [rsp+D8h] [rbp+88h]

  v22 = *(_DWORD *)(a1 + 4);
  v28 = *(_DWORD *)(a1 + 8);
  v32 = a1;
  v23 = *(_DWORD *)(a1 + 48) << a10;
  v12 = alloca(sub_1401F89D0());
  v27 = (float *)&i;
  v29 = 1;
  v24 = 1 << a10;
  if ( a9 )
  {
    v21 = v24;
    v25 = *(_DWORD *)(a1 + 48);
    v26 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v21 = 1;
    v33 = a1;
    v25 = *(_DWORD *)(a1 + 48) << a10;
    v26 = *(_DWORD *)(a1 + 40) - a10;
  }
  if ( a8 == 2 && a7 == 1 )
  {
    sub_1401A3740(a1, a2, v27, a4, a5, a6, v24, a11, a12);
    v34 = 8;
    v30 = a3[1] + 4LL * (v22 / 2);
    MEMORY[0x1401FC920](v30, v27);
    for ( i = 0; i < v21; ++i )
    {
      v13 = (float *)(*a3 + 4LL * i * v25);
      v35 = a1 + 80;
      sub_1401A1F50(a1 + 80, (float *)(v30 + 4LL * i), v13, *(float **)(a1 + 72), v22, v26, v21);
    }
    for ( i = 0; i < v21; ++i )
    {
      v14 = (float *)(a3[1] + 4LL * i * v25);
      v36 = a1 + 80;
      sub_1401A1F50(a1 + 80, &v27[i], v14, *(float **)(a1 + 72), v22, v26, v21);
    }
  }
  else if ( a8 == 1 && a7 == 2 )
  {
    v37 = 0;
    v31 = (float *)(*a3 + 4LL * (v22 / 2));
    sub_1401A3740(a1, a2, v27, a4, a5, a6, v24, a11, a12);
    sub_1401A3740(a1, a2 + 4LL * v23, v31, a4 + 4LL * v28, a5, a6, v24, a11, a12);
    for ( j = 0; j < v23; ++j )
      v27[j] = (float)(0.5 * v27[j]) + (float)(0.5 * v31[j]);
    for ( i = 0; i < v21; ++i )
    {
      v15 = (float *)(*a3 + 4LL * i * v25);
      v38 = a1 + 80;
      sub_1401A1F50(a1 + 80, &v27[i], v15, *(float **)(a1 + 72), v22, v26, v21);
    }
  }
  else
  {
    v20 = 0;
    do
    {
      sub_1401A3740(a1, a2 + 4LL * v23 * v20, v27, a4 + 4LL * v28 * v20, a5, a6, v24, a11, a12);
      for ( i = 0; i < v21; ++i )
      {
        v16 = (float *)(a3[v20] + 4LL * i * v25);
        v39 = a1 + 80;
        sub_1401A1F50(a1 + 80, &v27[i], v16, *(float **)(a1 + 72), v22, v26, v21);
      }
      ++v20;
    }
    while ( v20 < a8 );
  }
  v20 = 0;
  do
  {
    for ( j = 0; j < v23; ++j )
      *(_DWORD *)(a3[v20] + 4LL * j) = *(_DWORD *)(a3[v20] + 4LL * j);
    ++v20;
  }
  while ( v20 < a8 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v40);
}

