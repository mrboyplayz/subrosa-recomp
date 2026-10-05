/* Address: 0x1400e7720 | Name: sub_1400E7720 | Size: 563 bytes */
__int64 __fastcall sub_1400E7720(int a1, __int64 a2)
{
  unsigned __int8 *v2; // r9
  signed int v3; // edx
  unsigned int v4; // ebp
  int v5; // edi
  unsigned int v6; // r13d
  signed int v7; // r14d
  unsigned int v8; // r12d
  int v9; // r15d
  int v10; // eax
  int v11; // ebx
  int v12; // r11d
  int v13; // esi
  int v14; // r8d
  int v15; // r10d
  int v16; // ecx
  int v17; // edx
  _BYTE v19[32]; // [rsp+0h] [rbp-158h] BYREF
  unsigned int v20; // [rsp+30h] [rbp-128h] BYREF
  char v21; // [rsp+40h] [rbp-118h] BYREF
  __int64 v22; // [rsp+50h] [rbp-108h]
  int v23; // [rsp+70h] [rbp-E8h]
  int v24; // [rsp+F8h] [rbp-60h]
  __int64 v25; // [rsp+100h] [rbp-58h]
  __int64 v26; // [rsp+108h] [rbp-50h]
  __int64 v27; // [rsp+110h] [rbp-48h]
  __int64 v28; // [rsp+118h] [rbp-40h]
  __int64 v29; // [rsp+120h] [rbp-38h]

  if ( !a1 )
    return MEMORY[0x1401F8B20]((unsigned __int64)v19 ^ v29);
  v22 = 0;
  v23 = 0;
  v27 = a2;
  v28 = a2 + a1;
  v26 = v28;
  v25 = a2;
  v24 = 0;
  v2 = (unsigned __int8 *)sub_140166160(
                            (unsigned int)&v21,
                            (unsigned int)&dword_140404A6C[468765293],
                            (unsigned int)&dword_140404A6C[468765294],
                            (unsigned int)&v20,
                            0);
  if ( !v2 )
    return MEMORY[0x1401F8B20]((unsigned __int64)v19 ^ v29);
  v3 = dword_140404A6C[468765294];
  v4 = v20;
  v5 = dword_140404A6C[468765293];
  v6 = v20 * dword_140404A6C[468765293];
  v7 = 0;
  v20 *= dword_140404A6C[468765293];
  if ( (int)dword_140404A6C[468765294] > 0 )
  {
    v8 = dword_140404A6C[293250409];
    v9 = 0;
    do
    {
      v10 = 0;
      if ( v5 > 0 )
      {
        v11 = v9;
        v12 = v9;
        do
        {
          v13 = v2[v12];
          v14 = v2[v12 + 1];
          v15 = v2[v12 + 2];
          if ( v4 == 4 )
            v16 = v2[v11 + 3];
          else
            v16 = 255;
          v17 = v5 * (v3 - v7 - 1);
          if ( v8 )
            dword_140404A6C[v10 + 468765295 + v17] = (v15 << 8) + v16 + (v14 << 16) + (v13 << 24);
          else
            dword_140404A6C[v10 + 468765295 + v17] = (v16 << 24) + v13 + (v15 << 16) + (v14 << 8);
          v5 = dword_140404A6C[468765293];
          ++v10;
          v3 = dword_140404A6C[468765294];
          v12 += v4;
          v11 += 4;
        }
        while ( v10 < (int)dword_140404A6C[468765293] );
        v6 = v20;
      }
      ++v7;
      v9 += v6;
    }
    while ( v7 < v3 );
  }
  free(v2);
  return MEMORY[0x1401F8B20]((unsigned __int64)v19 ^ v29);
}

