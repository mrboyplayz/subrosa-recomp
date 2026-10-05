/* Address: 0x14025cb88 | Name: _sincosf_special | Size: 137 bytes */
float __fastcall sincosf_special(float a1, __int64 a2, __int16 a3)
{
  float v4; // [rsp+78h] [rbp+20h]

  v4 = a1;
  if ( (LODWORD(a1) & 0x7F800000) == 0x7F800000 )
  {
    if ( (LODWORD(a1) & 0x7FFFFF) != 0 )
    {
      LODWORD(v4) = LODWORD(a1) | 0x400000;
    }
    else
    {
      v4 = NAN;
      handle_errorf(a2, a3, -4194304, 1, 8, 0x21u, a1, 0.0, 1);
    }
  }
  return v4;
}

