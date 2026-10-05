/* Address: 0x140266274 | Name: _sopen_nolock | Size: 279 bytes */
__int64 __fastcall sopen_nolock(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, int a5, int a6, int a7)
{
  unsigned int v11; // r8d
  unsigned int v12; // ebx
  _QWORD v14[3]; // [rsp+48h] [rbp-11h] BYREF
  char v15; // [rsp+60h] [rbp+7h]
  _QWORD v16[2]; // [rsp+68h] [rbp+Fh] BYREF
  void *Block; // [rsp+78h] [rbp+1Fh]
  __int64 v18; // [rsp+80h] [rbp+27h]
  __int64 v19; // [rsp+88h] [rbp+2Fh]
  char v20; // [rsp+90h] [rbp+37h]

  v16[0] = 0;
  v16[1] = 0;
  Block = nullptr;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  sub_140213644((_LocaleUpdate *)v14, nullptr);
  v11 = 65001;
  if ( *(_DWORD *)(v14[1] + 12LL) == 65001 )
  {
    if ( v15 )
      *(_DWORD *)(v14[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v15 )
      *(_DWORD *)(v14[0] + 936LL) &= ~2u;
    v11 = 0;
  }
  else
  {
    if ( v15 )
      *(_DWORD *)(v14[0] + 936LL) &= ~2u;
    v11 = 1;
  }
  if ( (unsigned int)sub_140238394(a3, (__int64)v16, v11) )
    v12 = -1;
  else
    v12 = wsopen_nolock(a1, a2, Block, a4, a5, a6, a7);
  if ( v20 )
    free_base(Block);
  return v12;
}

