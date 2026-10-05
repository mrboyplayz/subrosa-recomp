/* Address: 0x14024c658 | Name: _mkdir | Size: 222 bytes */
int __cdecl mkdir(const char *Path)
{
  unsigned int v3; // r8d
  int v4; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-50h] BYREF
  char v6; // [rsp+38h] [rbp-38h]
  _QWORD v7[2]; // [rsp+40h] [rbp-30h] BYREF
  void *Block; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp-10h]
  char v11; // [rsp+68h] [rbp-8h]

  if ( !Path )
    return wmkdir(nullptr);
  v7[0] = 0;
  v7[1] = 0;
  Block = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  sub_140213644((_LocaleUpdate *)v5, nullptr);
  v3 = 65001;
  if ( *(_DWORD *)(v5[1] + 12LL) == 65001 )
  {
    if ( v6 )
      *(_DWORD *)(v5[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v6 )
      *(_DWORD *)(v5[0] + 936LL) &= ~2u;
    v3 = 0;
  }
  else
  {
    if ( v6 )
      *(_DWORD *)(v5[0] + 936LL) &= ~2u;
    v3 = 1;
  }
  if ( (unsigned int)sub_140238394(Path, (__int64)v7, v3) )
    v4 = -1;
  else
    v4 = wmkdir((const #49 *)Block);
  if ( v11 )
    free_base(Block);
  return v4;
}

