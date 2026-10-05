/* Address: 0x1401fd260 | Name: sub_1401FD260 | Size: 47 bytes */
__int64 __fastcall sub_1401FD260(__int64 a1)
{
  _QWORD *i; // rdx

  for ( i = *(_QWORD **)(sub_1401FD83C() + 88); ; i = (_QWORD *)i[1] )
  {
    if ( !i )
      return 1;
    if ( *i == a1 )
      break;
  }
  return 0;
}

