/* Address: 0x1401dc0a0 | Name: sub_1401DC0A0 | Size: 184 bytes */
__int64 __fastcall sub_1401DC0A0(__int64 a1, int a2)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int j; // [rsp+4h] [rbp-14h]

  for ( i = 2; ; ++i )
  {
    result = (unsigned int)a2;
    if ( i > a2 )
      break;
    for ( j = a2; j > i; --j )
      *(_DWORD *)(a1 + 4LL * (j - 2)) -= *(_DWORD *)(a1 + 4LL * j);
    *(_DWORD *)(a1 + 4LL * (i - 2)) -= 2 * *(_DWORD *)(a1 + 4LL * i);
  }
  return result;
}

