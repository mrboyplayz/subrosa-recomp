/* Address: 0x140158b10 | Name: sub_140158B10 | Size: 350 bytes */
void __fastcall sub_140158B10(__int64 a1, unsigned int a2)
{
  if ( (int)a2 < 1000000000 )
  {
    if ( (int)a2 < 1000000 )
    {
      if ( (int)a2 < 1000 )
        sub_140158AB0(a1, "%d", a2);
      else
        sub_140158AB0(a1, "%d,%03d", a2 / 0x3E8, a2 % 0x3E8);
    }
    else
    {
      sub_140158AB0(a1, "%d,%03d,%03d", a2 / 0xF4240, (int)(a2 / 0x3E8) % 1000, a2 % 0x3E8);
    }
  }
  else
  {
    sub_140158AB0(
      a1,
      "%d,%03d,%03d,%03d",
      a2 / 0x3B9ACA00,
      (int)(a2 / 0xF4240) % 1000,
      (int)(a2 / 0x3E8) % 1000,
      a2 % 0x3E8);
  }
}

