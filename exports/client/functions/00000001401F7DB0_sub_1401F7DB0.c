/* Address: 0x1401f7db0 | Name: sub_1401F7DB0 | Size: 112 bytes */
__int64 __fastcall sub_1401F7DB0(__int64 a1, int a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    *(_DWORD *)(a1 + 4LL * a2 * i) = *(_DWORD *)(a3 + 4LL * (a5 + a4 * i));
  }
  return result;
}

