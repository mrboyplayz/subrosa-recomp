/* Address: 0x1402327f8 | Name: sub_1402327F8 | Size: 74 bytes */
char __fastcall sub_1402327F8(__int64 a1, int a2, unsigned __int16 a3)
{
  int v3; // edx

  if ( a3 == 0xFFFF )
    return 0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 7 || !(unsigned __int8)sub_140236014(a1 + 80, a3) )
        return 0;
    }
    else if ( (unsigned __int16)(a3 - 9) <= 4u || a3 == 32 )
    {
      return 0;
    }
  }
  return 1;
}

