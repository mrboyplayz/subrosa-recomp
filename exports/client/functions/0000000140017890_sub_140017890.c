/* Address: 0x140017890 | Name: sub_140017890 | Size: 126 bytes */
__int64 __fastcall sub_140017890(unsigned int a1)
{
  __int64 v2; // rsi
  int i; // ebx
  __int64 result; // rax

  if ( a1 <= 0xFFF )
  {
    v2 = 6930LL * (int)a1;
    if ( dword_140404A6C[v2 + 83194357] )
    {
      sub_14000C4C0(a1);
      for ( i = 0; i < 4; ++i )
        result = sub_140012940(a1, i);
      dword_140404A6C[v2 + 83200510] = 0;
      if ( a1 == 1008 )
        ++dword_140404A6C[284205157];
    }
  }
  return result;
}

