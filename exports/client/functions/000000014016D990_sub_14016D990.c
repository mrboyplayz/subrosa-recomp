/* Address: 0x14016d990 | Name: sub_14016D990 | Size: 63 bytes */
__int64 __fastcall sub_14016D990(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r10
  __int64 v6; // rax

  if ( (int)a4 > 0 )
  {
    v5 = a1;
    a4 = (unsigned int)a4;
    do
    {
      if ( a5 > 0LL )
      {
        v6 = 0;
        do
          *(_BYTE *)(v5 + v6++) = *a2;
        while ( v6 < a5 );
      }
      v5 += a5;
      ++a2;
      --a4;
    }
    while ( a4 );
  }
  return a1;
}

