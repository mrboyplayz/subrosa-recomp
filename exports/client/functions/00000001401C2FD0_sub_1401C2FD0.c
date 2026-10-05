/* Address: 0x1401c2fd0 | Name: sub_1401C2FD0 | Size: 1058 bytes */
__int64 __fastcall sub_1401C2FD0(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int16 a8,
        int a9)
{
  __int64 result; // rax
  int i; // [rsp+60h] [rbp-78h]
  int m; // [rsp+60h] [rbp-78h]
  int j; // [rsp+64h] [rbp-74h]
  int k; // [rsp+64h] [rbp-74h]
  int v14; // [rsp+68h] [rbp-70h]
  unsigned int v15; // [rsp+68h] [rbp-70h]
  int v16; // [rsp+6Ch] [rbp-6Ch]
  int v17; // [rsp+70h] [rbp-68h]
  int v18; // [rsp+78h] [rbp-60h] BYREF
  int v19; // [rsp+7Ch] [rbp-5Ch]
  int v20; // [rsp+80h] [rbp-58h] BYREF
  int v21; // [rsp+84h] [rbp-54h]
  int v22; // [rsp+88h] [rbp-50h] BYREF
  int v23; // [rsp+8Ch] [rbp-4Ch]
  int v24; // [rsp+90h] [rbp-48h]
  int v25; // [rsp+94h] [rbp-44h]
  int v26; // [rsp+98h] [rbp-40h]
  int v27; // [rsp+9Ch] [rbp-3Ch]
  _BYTE Src[8]; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-30h]
  __int64 v30; // [rsp+B0h] [rbp-28h]
  __int64 v31; // [rsp+B8h] [rbp-20h]
  __int64 v32; // [rsp+C0h] [rbp-18h]
  __int64 v33; // [rsp+C8h] [rbp-10h]

  v24 = 0x7FFFFFFF;
  v25 = 0;
  for ( i = 0; i < 3; ++i )
  {
    v32 = (__int64)*(&off_140282688 + i);
    v31 = (__int64)*(&off_140282768 + i);
    v33 = (__int64)*(&off_140282780 + i);
    v26 = byte_1402822CC[i];
    v29 = a6;
    v30 = a7;
    v14 = 0;
    v16 = 0;
    v17 = *a4;
    for ( j = 0; j < a9; ++j )
    {
      v27 = sub_1401BC3D0(5333 - v17 + 896) - 51;
      sub_1401C3400(
        (unsigned int)&Src[j],
        (unsigned int)&v18,
        (unsigned int)&v20,
        (unsigned int)&v22,
        v29,
        v30,
        v31,
        v33,
        v32,
        a8,
        v27,
        v26);
      if ( v18 + v14 >= 0 )
        v19 = v18 + v14;
      else
        v19 = 0x7FFFFFFF;
      v14 = v19;
      if ( v20 + v16 >= 0 )
        v21 = v20 + v16;
      else
        v21 = 0x7FFFFFFF;
      v16 = v21;
      if ( (int)(v17 + sub_1401BC2A0(v22 + 51) - 896) >= 0 )
        v23 = v17 + sub_1401BC2A0(v22 + 51) - 896;
      else
        v23 = 0;
      v17 = v23;
      v29 += 100;
      v30 += 20;
    }
    if ( v16 <= v24 )
    {
      v24 = v16;
      *a3 = i;
      MEMORY[0x1401FC920](a2, Src);
      v25 = v17;
    }
  }
  v31 = (__int64)*(&off_140282768 + (char)*a3);
  for ( k = 0; k < a9; ++k )
  {
    for ( m = 0; m < 5; ++m )
      *(_WORD *)(a1 + 2LL * (m + 5 * k)) = *(char *)(v31 + m + 5 * *(char *)(a2 + k)) << 7;
  }
  if ( a9 == 2 )
    v15 = v14 >> 1;
  else
    v15 = v14 >> 2;
  *a4 = v25;
  result = (unsigned int)(-3 * (__int16)(sub_1401BC2A0(v15) - 1920));
  *a5 = result;
  return result;
}

