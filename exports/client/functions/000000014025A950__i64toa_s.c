/* Address: 0x14025a950 | Name: _i64toa_s | Size: 33 bytes */
__int64 __fastcall i64toa_s(signed __int64 a1, char *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // al

  v4 = 0;
  if ( a4 == 10 )
    v4 = a1 < 0;
  return sub_14025A848(a1, a2, a3, a4, v4);
}

