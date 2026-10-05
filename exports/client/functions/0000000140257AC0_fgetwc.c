/* Address: 0x140257ac0 | Name: fgetwc | Size: 85 bytes */
__int64 __fastcall fgetwc(FILE *Stream)
{
  unsigned __int16 v3; // di

  if ( Stream )
  {
    sub_14020B5E0(Stream);
    v3 = fgetwc_nolock(Stream);
    sub_14020B5EC(Stream);
    return v3;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFF;
  }
}

