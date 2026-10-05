/* Address: 0x1401db040 | Name: sub_1401DB040 | Size: 97 bytes */
__int64 __fastcall sub_1401DB040(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    *(_DWORD *)(a1 + 4LL * i) = *(_DWORD *)(a2 + 4LL * (2 * i + 1)) + *(_DWORD *)(a2 + 8LL * i);
  }
  return result;
}

