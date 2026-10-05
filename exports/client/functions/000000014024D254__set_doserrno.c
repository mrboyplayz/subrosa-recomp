/* Address: 0x14024d254 | Name: _set_doserrno | Size: 58 bytes */
__int64 __fastcall set_doserrno(int a1)
{
  __int64 v3; // rax
  _DWORD *v4; // rax

  if ( !sub_140255BEC() )
    return 12;
  v3 = sub_140255BEC();
  if ( v3 )
    v4 = (_DWORD *)(v3 + 36);
  else
    v4 = &unk_1403022B0;
  *v4 = a1;
  return 0;
}

