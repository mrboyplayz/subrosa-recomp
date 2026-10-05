/* Address: 0x1401bc4c0 | Name: sub_1401BC4C0 | Size: 566 bytes */
_DWORD *__fastcall sub_1401BC4C0(_DWORD *a1, _DWORD *a2, __int64 a3, signed int a4)
{
  int v4; // eax
  signed int i; // [rsp+20h] [rbp-28h]
  signed int j; // [rsp+20h] [rbp-28h]
  unsigned int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  int v11; // [rsp+2Ch] [rbp-1Ch]

  v10 = 31 - sub_1401BA490(a4);
  v8 = a4;
  for ( i = 0; i < a4 - 1; i += 2 )
    v8 += (unsigned int)(*(__int16 *)(a3 + 2LL * (i + 1)) * *(__int16 *)(a3 + 2LL * (i + 1))
                       + *(__int16 *)(a3 + 2LL * i) * *(__int16 *)(a3 + 2LL * i)) >> v10;
  if ( i < a4 )
    v8 += (unsigned int)(*(__int16 *)(a3 + 2LL * i) * *(__int16 *)(a3 + 2LL * i)) >> v10;
  v4 = sub_1401BA490(v8);
  v11 = sub_1401BE420(0, (unsigned int)(v10 + 3 - v4));
  v9 = 0;
  for ( j = 0; j < a4 - 1; j += 2 )
    v9 += (unsigned int)(*(__int16 *)(a3 + 2LL * (j + 1)) * *(__int16 *)(a3 + 2LL * (j + 1))
                       + *(__int16 *)(a3 + 2LL * j) * *(__int16 *)(a3 + 2LL * j)) >> v11;
  if ( j < a4 )
    v9 += (unsigned int)(*(__int16 *)(a3 + 2LL * j) * *(__int16 *)(a3 + 2LL * j)) >> v11;
  *a2 = v11;
  *a1 = v9;
  return a1;
}

