/* Address: 0x14024d290 | Name: _set_errno | Size: 58 bytes */
__int64 __fastcall set_errno(int a1)
{
  __int64 v3; // rax
  _DWORD *v4; // rax

  if ( !sub_140255BEC() )
    return 12;
  v3 = sub_140255BEC();
  if ( v3 )
    v4 = (_DWORD *)(v3 + 32);
  else
    v4 = &unk_1403022AC;
  *v4 = a1;
  return 0;
}

