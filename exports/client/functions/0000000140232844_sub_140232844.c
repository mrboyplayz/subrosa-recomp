/* Address: 0x140232844 | Name: sub_140232844 | Size: 74 bytes */
char __fastcall sub_140232844(__int64 a1, int a2, unsigned __int16 a3)
{
  int v3; // edx

  if ( a3 == 0xFFFF )
    return 0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 7 || !(unsigned __int8)sub_140236014(a1 + 88, a3) )
        return 0;
    }
    else if ( (unsigned __int16)(a3 - 9) <= 4u || a3 == 32 )
    {
      return 0;
    }
  }
  return 1;
}

