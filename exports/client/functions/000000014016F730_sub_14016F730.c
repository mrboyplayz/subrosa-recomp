/* Address: 0x14016f730 | Name: sub_14016F730 | Size: 672 bytes */
__int64 __fastcall sub_14016F730(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v5; // edi
  __int16 v6; // bp
  unsigned __int8 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int i; // ecx
  int v12; // r10d
  int v13; // r8d
  int j; // r11d
  int v15; // esi
  int v16; // r8d
  int v17; // eax
  __int64 v18; // r9
  int *v19; // r11
  int v20; // r10d
  __int64 v21; // rax
  unsigned int v22; // eax
  int k; // eax
  __int64 v24; // rcx
  __int64 v26; // [rsp+0h] [rbp-E8h] BYREF
  _OWORD v27[4]; // [rsp+20h] [rbp-C8h] BYREF
  int v28; // [rsp+60h] [rbp-88h]
  _DWORD v29[16]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-38h]

  v5 = 0;
  v28 = 0;
  v6 = 0;
  memset(v27, 0, sizeof(v27));
  MEMORY[0x1401FCD30](a1, 0, 1024);
  if ( a3 > 0 )
  {
    v8 = a2;
    v9 = (unsigned int)a3;
    do
    {
      v10 = *v8++;
      ++*((_DWORD *)v27 + v10);
      --v9;
    }
    while ( v9 );
  }
  LODWORD(v27[0]) = 0;
  for ( i = 1; i < 16; ++i )
  {
    if ( *((_DWORD *)v27 + (unsigned int)i) > 1 << i )
    {
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad sizes";
      return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v30);
    }
  }
  v12 = 1;
  v13 = 0;
  for ( j = 15; j > 0; --j )
  {
    v15 = *((_DWORD *)v27 + v12);
    v29[v12] = v13;
    *(_WORD *)(a1 + 2LL * v12 + 1024) = v13;
    v16 = v15 + v13;
    *(_WORD *)(a1 + 2LL * v12 + 1124) = v6;
    if ( v15 && v16 - 1 >= 1 << v12 )
    {
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad codelengths";
      return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v30);
    }
    v17 = v16 << j;
    v13 = 2 * v16;
    v6 += v15;
    *(_DWORD *)(a1 + 4LL * v12++ + 1056) = v17;
  }
  *(_DWORD *)(a1 + 1120) = 0x10000;
  if ( a3 > 0 )
  {
    do
    {
      v18 = *a2;
      if ( *a2 )
      {
        v19 = &v29[v18];
        v20 = *v19;
        v21 = *v19 + *(unsigned __int16 *)(a1 + 2 * v18 + 1124) - *(unsigned __int16 *)(a1 + 2 * v18 + 1024);
        *(_BYTE *)(v21 + a1 + 1156) = v18;
        *(_WORD *)(a1 + 2 * v21 + 1444) = v5;
        if ( (unsigned int)v18 <= 9 )
        {
          v22 = (16
               * ((4 * ((2 * (v20 & 0x5555)) & 0x3333 | (v20 >> 1) & 0x1111)) & 0xF0F
                | (((2 * (v20 & 0x5555)) | (v20 >> 1) & 0x5555u) >> 2) & 0x303))
              | (((4 * ((2 * (v20 & 0x5555)) & 0x3333 | (v20 >> 1) & 0x1111))
                | (((2 * (v20 & 0x5555)) | (v20 >> 1) & 0x5555u) >> 2) & 0x3333) >> 4)
              & 0xF0F;
          for ( k = (((unsigned __int8)v22 << 8) | BYTE1(v22)) >> (16 - v18);
                k < 512;
                *(_WORD *)(a1 + 2 * v24) = v5 | ((_WORD)v18 << 9) )
          {
            v24 = k;
            k += 1 << v18;
          }
        }
        *v19 = v20 + 1;
      }
      ++v5;
      ++a2;
    }
    while ( v5 < a3 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v30);
}

