/* Address: 0x14011ddb0 | Name: sub_14011DDB0 | Size: 736 bytes */
__int64 __fastcall sub_14011DDB0(int a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r15
  unsigned int *v6; // rsi
  __int64 v7; // r9
  signed int v8; // edi
  __int64 v9; // r14
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = a1;
  if ( !dword_140404A6C[312324428] && !dword_140404A6C[322062692] )
  {
    unk_1404044A8(0, 3, 5126);
    if ( !a2 )
    {
      unk_1404044A8(1, 3, 5126);
      unk_1404044A8(2, 3, 5126);
    }
    result = (__int64)&dword_140404A6C[83200503];
    v5 = 4;
    v6 = &dword_140404A6C[6930 * v4 + 83200503];
    do
    {
      if ( v6[780] )
      {
        result = (int)*v6;
        if ( (int)result >= 0 )
        {
          v7 = (int)*v6;
          result *= 3;
          if ( dword_140404A6C[2 * result + 312226123] != -1 )
          {
            v8 = 0;
            v9 = 8969 * v7;
            result = dword_140404A6C[318816608] * dword_140404A6C[2 * result + 321964387]
                   + dword_140404A6C[3074 * dword_140404A6C[2 * result + 321964387]
                                   + 318816612
                                   + 3 * dword_140404A6C[2 * result + 321964388]];
            if ( (int)dword_140404A6C[8969 * v7 + 73994484] > 0 )
            {
              v10 = &dword_140404A6C[v9 + 73994485];
              do
              {
                v11 = *(unsigned __int8 *)v10;
                result = 184 * v11;
                if ( !dword_140404A6C[46 * v11 + 421784738] )
                {
                  unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[4 * v11 + 283827814] + 284024944]);
                  unk_140404098(33986);
                  unk_140404050(
                    3553,
                    dword_140404A6C[44 * dword_140404A6C[4 * *(unsigned __int8 *)v10 + 283827815] + 284024944]);
                  unk_140404098(33988);
                  unk_140404050(35866, dword_140404A6C[44 * dword_140404A6C[283827820] + 284024944]);
                  unk_140404098(33989);
                  unk_140404050(35866, dword_140404A6C[44 * dword_140404A6C[283827821] + 284024944]);
                  unk_140404098(33984);
                  result = unk_1404047F0(4, 3 * v10[1], 5125);
                }
                ++v8;
                v10 += 3;
              }
              while ( v8 < (int)dword_140404A6C[v9 + 73994484] );
            }
          }
        }
      }
      ++v6;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

