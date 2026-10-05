/* Address: 0x140260aa8 | Name: sub_140260AA8 | Size: 128 bytes */
char __fastcall sub_140260AA8(unsigned __int8 (**a1)(void), unsigned __int8 (**a2)(void))
{
  unsigned __int8 (**v4)(void); // rbx
  unsigned __int8 (**v5)(void); // rbx

  if ( a1 == a2 )
    return 1;
  v4 = a1;
  do
  {
    if ( *v4 && !(*v4)() )
      break;
    v4 += 2;
  }
  while ( v4 != a2 );
  if ( v4 == a2 )
    return 1;
  if ( v4 != a1 )
  {
    v5 = v4 - 1;
    do
    {
      if ( *(v5 - 1) )
      {
        if ( *v5 )
          ((void (__fastcall *)(_QWORD))*v5)(0);
      }
      v5 -= 2;
    }
    while ( v5 + 1 != a1 );
  }
  return 0;
}

