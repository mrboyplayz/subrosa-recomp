/* Address: 0x14023a198 | Name: sub_14023A198 | Size: 393 bytes */
__int64 __fastcall sub_14023A198(_BYTE *a1, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rcx
  __int64 v7; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v8[2]; // [rsp+20h] [rbp-E0h] BYREF
  void *Block; // [rsp+30h] [rbp-D0h]
  __int64 v10; // [rsp+38h] [rbp-C8h]
  __int64 v11; // [rsp+40h] [rbp-C0h]
  char v12; // [rsp+48h] [rbp-B8h]
  _QWORD v13[3]; // [rsp+50h] [rbp-B0h] BYREF
  char v14; // [rsp+68h] [rbp-98h]
  _BYTE v15[560]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+2A0h] [rbp+1A0h]

  sub_140213644((_LocaleUpdate *)v13, nullptr);
  v4 = 65001;
  if ( *(_DWORD *)(v13[1] + 12LL) == 65001 )
  {
    if ( v14 )
      *(_DWORD *)(v13[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v14 )
      *(_DWORD *)(v13[0] + 936LL) &= ~2u;
    v4 = 0;
  }
  else
  {
    if ( v14 )
      *(_DWORD *)(v13[0] + 936LL) &= ~2u;
    v4 = 1;
  }
  if ( !a2 )
  {
    *errno() = 22;
    sub_14024CF6C(v5);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v16);
  }
  v8[0] = 0;
  v8[1] = 0;
  Block = nullptr;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( (unsigned int)sub_140238394(a1, (__int64)v8, v4) )
  {
    if ( !v12 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v16);
    goto LABEL_22;
  }
  if ( sub_140238DC8((__int64)Block, (__int64)v15) == -1 || !sub_140239928((__int64)v15, a2, v4) )
  {
    if ( v12 )
      goto LABEL_22;
  }
  else if ( v12 )
  {
LABEL_22:
    free_base(Block);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v16);
}

