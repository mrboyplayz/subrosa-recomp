/* Address: 0x140255cf4 | Name: __acrt_uninitialize_ptd_0 | Size: 34 bytes */
char _acrt_uninitialize_ptd_0()
{
  if ( dword_140302410 != -1 )
  {
    sub_14024EF9C(dword_140302410);
    dword_140302410 = -1;
  }
  return 1;
}

