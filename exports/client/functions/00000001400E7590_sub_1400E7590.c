/* Address: 0x1400e7590 | Name: sub_1400E7590 | Size: 398 bytes */
__int64 __fastcall sub_1400E7590(int a1)
{
  __int64 result; // rax
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
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF

  result = sub_140170C30(
             a1,
             (unsigned int)&dword_140404A6C[468765293],
             (unsigned int)&dword_140404A6C[468765294],
             (unsigned int)&v18,
             0);
  v2 = (unsigned __int8 *)result;
  if ( result )
  {
    v3 = dword_140404A6C[468765294];
    v4 = v18;
    v5 = dword_140404A6C[468765293];
    v6 = v18 * dword_140404A6C[468765293];
    v7 = 0;
    v18 *= dword_140404A6C[468765293];
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
          v6 = v18;
        }
        ++v7;
        v9 += v6;
      }
      while ( v7 < v3 );
    }
    free(v2);
    return 1;
  }
  return result;
}

