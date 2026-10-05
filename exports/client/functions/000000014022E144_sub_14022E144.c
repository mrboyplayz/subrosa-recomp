/* Address: 0x14022e144 | Name: sub_14022E144 | Size: 69 bytes */
__int64 __fastcall sub_14022E144(_QWORD *a1)
{
  unsigned __int16 v2; // bx

  do
  {
    v2 = j__fgetwc_nolock(*a1);
    if ( v2 == 0xFFFF )
      break;
    ++a1[1];
  }
  while ( (unsigned int)sub_140256E00(v2, 8) );
  return v2;
}

