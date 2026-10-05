/* Address: 0x14023a5c4 | Name: sub_14023A5C4 | Size: 224 bytes */
__int64 __fastcall sub_14023A5C4(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-298h] BYREF
  _QWORD v7[3]; // [rsp+20h] [rbp-278h] BYREF
  char v8; // [rsp+38h] [rbp-260h]
  _BYTE v9[560]; // [rsp+40h] [rbp-258h] BYREF
  __int64 v10; // [rsp+270h] [rbp-28h]

  sub_140213644((_LocaleUpdate *)v7, nullptr);
  v4 = 65001;
  if ( *(_DWORD *)(v7[1] + 12LL) == 65001 )
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
    v4 = 0;
  }
  else
  {
    if ( v8 )
      *(_DWORD *)(v7[0] + 936LL) &= ~2u;
    v4 = 1;
  }
  if ( (unsigned int)sub_140239448(a1, (__int64)v9) != -1 )
    sub_140239928((__int64)v9, a2, v4);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v10);
}

