/* Address: 0x140257e0c | Name: ungetwc | Size: 94 bytes */
__int64 __fastcall ungetwc(unsigned __int16 a1, __int64 a2)
{
  unsigned __int16 v5; // di

  if ( a2 )
  {
    sub_14020B5E0(a2);
    v5 = ungetwc_nolock(a1, a2);
    sub_14020B5EC(a2);
    return v5;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFF;
  }
}

