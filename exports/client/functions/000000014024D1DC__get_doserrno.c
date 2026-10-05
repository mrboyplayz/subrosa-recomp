/* Address: 0x14024d1dc | Name: _get_doserrno | Size: 59 bytes */
__int64 __fastcall get_doserrno(_DWORD *a1)
{
  __int64 v3; // rax
  _DWORD *v4; // rax

  if ( a1 )
  {
    v3 = sub_140255BEC();
    if ( v3 )
      v4 = (_DWORD *)(v3 + 36);
    else
      v4 = &unk_1403022B0;
    *a1 = *v4;
    return 0;
  }
  else
  {
    sub_14024CF6C();
    return 22;
  }
}

