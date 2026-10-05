/* Address: 0x1401be290 | Name: sub_1401BE290 | Size: 128 bytes */
__int64 __fastcall sub_1401BE290(unsigned int a1, int a2)
{
  if ( !a2 )
    return a1;
  if ( a2 >= 0 )
    return (unsigned int)__ROR4__(a1, a2);
  return (unsigned int)__ROL4__(a1, -(char)a2);
}

