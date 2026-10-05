/* Address: 0x1401f8310 | Name: sub_1401F8310 | Size: 373 bytes */
__int64 __fastcall sub_1401F8310(__int64 a1, char *a2, int a3, int a4)
{
  _BYTE v5[4]; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+44h] [rbp-14h]
  int v7; // [rsp+48h] [rbp-10h]

  if ( a3 < 1 )
    return 4294967292LL;
  if ( *(_DWORD *)(a1 + 4) )
  {
    if ( (*(_BYTE *)a1 & 0xFC) != (*a2 & 0xFC) )
      return 4294967292LL;
  }
  else
  {
    *(_BYTE *)a1 = *a2;
    *(_DWORD *)(a1 + 488) = sub_1401E2D90(a2, 8000);
  }
  v6 = sub_1401E2EF0(a2, a3);
  if ( v6 < 1 )
    return 4294967292LL;
  if ( *(_DWORD *)(a1 + 488) * (*(_DWORD *)(a1 + 4) + v6) > 960 )
    return 4294967292LL;
  v7 = sub_1401E99E0(
         a2,
         a3,
         a4,
         v5,
         a1 + 8LL * *(int *)(a1 + 4) + 8,
         (__int16 *)(a1 + 2LL * *(int *)(a1 + 4) + 392),
         nullptr,
         nullptr);
  if ( v7 < 1 )
    return (unsigned int)v7;
  *(_DWORD *)(a1 + 4) += v6;
  return 0;
}

