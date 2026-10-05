/* Address: 0x1401f60a0 | Name: sub_1401F60A0 | Size: 177 bytes */
__int64 __fastcall sub_1401F60A0(__int64 a1, int a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int j; // [rsp+0h] [rbp-18h]

  if ( a4 )
  {
    for ( i = 0; ; ++i )
    {
      result = a6;
      if ( i >= (int)a6 )
        break;
      *(_DWORD *)(a1 + 4LL * (a3 + a2 * i)) = *(_DWORD *)(a4 + 4LL * a5 * i);
    }
  }
  else
  {
    for ( j = 0; ; ++j )
    {
      result = a6;
      if ( j >= (int)a6 )
        break;
      *(_DWORD *)(a1 + 4LL * (a3 + a2 * j)) = 0;
    }
  }
  return result;
}

