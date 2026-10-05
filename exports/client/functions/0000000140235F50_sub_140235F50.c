/* Address: 0x140235f50 | Name: sub_140235F50 | Size: 134 bytes */
char __fastcall sub_140235F50(__crt_strtox *this, char a2, char a3, char a4)
{
  char v4; // bl
  char v8; // di
  int v9; // eax

  v4 = 0;
  v8 = (char)this;
  if ( !a3 && !a4 )
    return 0;
  v9 = fegetround_0();
  if ( v9 )
  {
    if ( v9 == 256 )
    {
      return v8;
    }
    else
    {
      if ( v9 != 512 )
        return 0;
      return v8 ^ 1;
    }
  }
  else
  {
    if ( a3 && (a4 || a2) )
      return 1;
    return v4;
  }
}

