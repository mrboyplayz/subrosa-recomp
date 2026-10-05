/* Address: 0x14023a324 | Name: sub_14023A324 | Size: 224 bytes */
__int64 __fastcall sub_14023A324(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-288h] BYREF
  _QWORD v7[3]; // [rsp+20h] [rbp-268h] BYREF
  char v8; // [rsp+38h] [rbp-250h]
  _DWORD v9[136]; // [rsp+40h] [rbp-248h] BYREF
  __int64 v10; // [rsp+260h] [rbp-28h]

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
  if ( (unsigned int)sub_1402390C0(a1, v9) != -1 )
    sub_140239710((__int64)v9, a2, v4);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v10);
}

