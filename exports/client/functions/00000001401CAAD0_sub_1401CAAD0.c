/* Address: 0x1401caad0 | Name: sub_1401CAAD0 | Size: 196 bytes */
__int64 __fastcall sub_1401CAAD0(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  int i; // [rsp+24h] [rbp-14h]

  v4 = 0;
  MEMORY[0x1401FCD30](a1, 0, 20264);
  for ( i = 0; i < 2; ++i )
    v4 += sub_1401D26F0(10088LL * i + a1, a2);
  *(_DWORD *)(a1 + 20240) = 1;
  *(_DWORD *)(a1 + 20244) = 1;
  return (unsigned int)sub_1401D68F0(a1, a3) + v4;
}

