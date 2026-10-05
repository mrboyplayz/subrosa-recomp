/* Address: 0x14022e1e0 | Name: sub_14022E1E0 | Size: 89 bytes */
__int64 __fastcall sub_14022E1E0(__int64 a1)
{
  unsigned __int16 *v2; // rax
  unsigned __int16 v3; // bx

  while ( 1 )
  {
    v2 = *(unsigned __int16 **)(a1 + 16);
    if ( v2 == *(unsigned __int16 **)(a1 + 8) )
      break;
    v3 = *v2;
    *(_QWORD *)(a1 + 16) = v2 + 1;
    if ( v3 == 0xFFFF || !(unsigned int)sub_140256E00(v3, 8) )
      return v3;
  }
  return (unsigned __int16)-1;
}

