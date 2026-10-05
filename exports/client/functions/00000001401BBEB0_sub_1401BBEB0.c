/* Address: 0x1401bbeb0 | Name: sub_1401BBEB0 | Size: 180 bytes */
__int64 __fastcall sub_1401BBEB0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int v5; // [rsp+30h] [rbp+18h]

  v5 = a3;
  for ( i = 0; i < a2 - 1; ++i )
  {
    *(_DWORD *)(a1 + 4LL * i) = (*(int *)(a1 + 4LL * i) * (__int64)v5) >> 16;
    v5 += ((((a3 - 0x10000) * v5) >> 15) + 1) >> 1;
  }
  result = (*(int *)(a1 + 4LL * (a2 - 1)) * (__int64)v5) >> 16;
  *(_DWORD *)(a1 + 4LL * (a2 - 1)) = result;
  return result;
}

