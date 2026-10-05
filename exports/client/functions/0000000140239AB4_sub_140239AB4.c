/* Address: 0x140239ab4 | Name: sub_140239AB4 | Size: 73 bytes */
__int64 sub_140239AB4()
{
  unsigned int v0; // edx
  _QWORD v2[3]; // [rsp+20h] [rbp-28h] BYREF
  char v3; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v2, nullptr);
  v0 = 65001;
  if ( *(_DWORD *)(v2[1] + 12LL) != 65001 )
    v0 = sub_14024EDA4() == 0;
  if ( v3 )
    *(_DWORD *)(v2[0] + 936LL) &= ~2u;
  return v0;
}

