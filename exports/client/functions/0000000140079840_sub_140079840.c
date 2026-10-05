/* Address: 0x140079840 | Name: sub_140079840 | Size: 424 bytes */
__int64 __fastcall sub_140079840(int a1)
{
  __int64 result; // rax
  unsigned __int8 *v2; // rcx
  int v3; // r12d
  signed int v4; // edx
  int v5; // ebx
  signed int v6; // ebp
  unsigned int v7; // r13d
  int v8; // r15d
  int v9; // r14d
  int v10; // esi
  int v11; // edi
  int v12; // r9d
  int v13; // r10d
  int v14; // r8d
  int v15; // r11d
  int v16; // eax
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  result = sub_140170C30(
             a1,
             (unsigned int)&dword_140404A6C[468765293],
             (unsigned int)&dword_140404A6C[468765294],
             (unsigned int)&v17,
             0);
  v2 = (unsigned __int8 *)result;
  if ( result )
  {
    v3 = dword_140404A6C[468765293];
    if ( (int)dword_140404A6C[468765293] > 4096
      || (v4 = dword_140404A6C[468765294], (int)dword_140404A6C[468765294] > 4096)
      || (v5 = v17, v17 - 1 > 3) )
    {
      free((void *)result);
      return 0;
    }
    else
    {
      v6 = 0;
      v7 = v17 * dword_140404A6C[468765293];
      v17 *= dword_140404A6C[468765293];
      if ( (int)dword_140404A6C[468765294] > 0 )
      {
        v8 = 0;
        do
        {
          v9 = 0;
          if ( v3 > 0 )
          {
            v10 = v8;
            v11 = v8;
            do
            {
              v12 = v2[v11];
              if ( v5 <= 1 )
              {
                v13 = v2[v11];
                v14 = v13;
              }
              else
              {
                v13 = v2[v11 + 1];
                v14 = v2[v11 + 2];
              }
              if ( v5 == 4 )
                v15 = v2[v10 + 3];
              else
                v15 = 255;
              v11 += v5;
              v10 += 4;
              v16 = v9 + v3 * (v4 - v6 - 1);
              ++v9;
              dword_140404A6C[v16 + 468765295] = (v15 << 24) + v12 + (v14 << 16) + (v13 << 8);
              v3 = dword_140404A6C[468765293];
              v4 = dword_140404A6C[468765294];
            }
            while ( v9 < (int)dword_140404A6C[468765293] );
            v7 = v17;
          }
          ++v6;
          v8 += v7;
        }
        while ( v6 < v4 );
      }
      free(v2);
      return 1;
    }
  }
  return result;
}

