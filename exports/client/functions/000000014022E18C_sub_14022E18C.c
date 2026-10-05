/* Address: 0x14022e18c | Name: sub_14022E18C | Size: 83 bytes */
__int64 __fastcall sub_14022E18C(__int64 a1, __int64 a2)
{
  unsigned __int8 *v4; // rax
  unsigned int v5; // ebx

  while ( 1 )
  {
    v4 = *(unsigned __int8 **)(a1 + 16);
    if ( v4 == *(unsigned __int8 **)(a1 + 8) )
      break;
    v5 = *v4;
    *(_QWORD *)(a1 + 16) = v4 + 1;
    if ( !(unsigned int)sub_140236ED8(v5, 8, a2) )
      return v5;
  }
  return (unsigned int)-1;
}

