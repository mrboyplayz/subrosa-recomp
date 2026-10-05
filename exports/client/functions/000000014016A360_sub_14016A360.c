/* Address: 0x14016a360 | Name: sub_14016A360 | Size: 151 bytes */
__int64 __fastcall sub_14016A360(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v10[0] = a1;
  v7 = sub_140167D10(v10, 2, 0);
  v8 = v10[0];
  if ( v7 )
  {
    if ( a2 )
      *a2 = *(_DWORD *)v10[0];
    if ( a3 )
      *a3 = *(_DWORD *)(v8 + 4);
    if ( a4 )
      *a4 = *(_DWORD *)(v8 + 8);
    return 1;
  }
  else
  {
    *(_QWORD *)(v10[0] + 192LL) = *(_QWORD *)(v10[0] + 208LL);
    *(_QWORD *)(v8 + 200) = *(_QWORD *)(v8 + 216);
    return 0;
  }
}

