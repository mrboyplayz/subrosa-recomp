/* Address: 0x1401f6160 | Name: sub_1401F6160 | Size: 189 bytes */
__int64 __fastcall sub_1401F6160(__int64 a1, int a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-18h]
  int j; // [rsp+20h] [rbp-18h]

  if ( a4 )
  {
    for ( i = 0; ; ++i )
    {
      result = a6;
      if ( i >= (int)a6 )
        break;
      *(_WORD *)(a1 + 2LL * (a3 + a2 * i)) = sub_1401AD3E0();
    }
  }
  else
  {
    for ( j = 0; ; ++j )
    {
      result = a6;
      if ( j >= (int)a6 )
        break;
      *(_WORD *)(a1 + 2LL * (a3 + a2 * j)) = 0;
    }
  }
  return result;
}

