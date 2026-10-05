/* Address: 0x1401f21e0 | Name: sub_1401F21E0 | Size: 144 bytes */
__int64 __fastcall sub_1401F21E0(_DWORD *a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  v7 = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)(a3 * a2);
    if ( i >= (int)result )
      break;
    *(_WORD *)(v7 + 2LL * i) = *(_WORD *)(a5 + 2LL * i);
  }
  return result;
}

