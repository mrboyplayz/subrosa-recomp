/* Address: 0x1400c2bb0 | Name: sub_1400C2BB0 | Size: 412 bytes */
__int64 __fastcall sub_1400C2BB0(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v4; // rcx
  unsigned int v5; // r8d
  int v6; // edi
  int v7; // r11d
  int v8; // r10d
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // r8
  int v19; // edx
  unsigned int v20; // ecx
  __int64 result; // rax
  __int64 v22; // rcx

  v2 = 1;
  dword_140404A6C[18600733] = 19650218;
  do
  {
    v4 = v2;
    v5 = v2 + 1812433253 * (dword_140404A6C[v2 + 18600732] ^ (dword_140404A6C[v2 + 18600732] >> 30));
    ++v2;
    dword_140404A6C[v4 + 18600733] = v5;
  }
  while ( v2 < 624 );
  v6 = 0;
  dword_14030186C = v2;
  v7 = a2;
  if ( a2 < 624 )
    v7 = 624;
  v8 = 1;
  if ( v7 )
  {
    v9 = a2;
    v10 = 1;
    v11 = 0;
    do
    {
      v12 = v11 + 1;
      v13 = v8 + 1;
      v14 = v6 + 1;
      v8 = 1;
      dword_140404A6C[v10 + 18600733] = v6
                                      + *(_DWORD *)(a1 + 4 * v11)
                                      + (dword_140404A6C[v10 + 18600733]
                                       ^ (1664525
                                        * (dword_140404A6C[v10 + 18600732] ^ (dword_140404A6C[v10 + 18600732] >> 30))));
      v15 = dword_140404A6C[18600733];
      v16 = v10 + 1;
      if ( v13 < 624 )
        v8 = v13;
      else
        v15 = dword_140404A6C[18601356];
      v10 = 1;
      dword_140404A6C[18600733] = v15;
      if ( v13 < 624 )
        v10 = v16;
      v6 = 0;
      if ( v12 < v9 )
        v6 = v14;
      v11 = 0;
      if ( v12 < v9 )
        v11 = v12;
      --v7;
    }
    while ( v7 );
  }
  v17 = 623;
  v18 = v8;
  do
  {
    v19 = v8 + 1;
    v20 = (dword_140404A6C[v18 + 18600733]
         ^ (1566083941 * (dword_140404A6C[v18 + 18600732] ^ (dword_140404A6C[v18 + 18600732] >> 30))))
        - v8;
    v8 = 1;
    dword_140404A6C[v18 + 18600733] = v20;
    result = dword_140404A6C[18600733];
    v22 = v18 + 1;
    if ( v19 >= 624 )
      result = dword_140404A6C[18601356];
    v18 = 1;
    if ( v19 < 624 )
      v18 = v22;
    dword_140404A6C[18600733] = result;
    if ( v19 < 624 )
      v8 = v19;
    --v17;
  }
  while ( v17 );
  dword_140404A6C[18600733] = 0x80000000;
  return result;
}

