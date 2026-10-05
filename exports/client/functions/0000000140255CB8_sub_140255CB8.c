/* Address: 0x140255cb8 | Name: sub_140255CB8 | Size: 57 bytes */
char sub_140255CB8()
{
  dword_140302410 = sub_14024EF54((__int64)sub_1402555F8);
  if ( dword_140302410 == -1 )
    return 0;
  if ( !sub_140255BEC() )
  {
    _acrt_uninitialize_ptd_0(0);
    return 0;
  }
  return 1;
}

