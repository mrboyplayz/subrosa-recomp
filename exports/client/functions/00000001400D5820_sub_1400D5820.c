/* Address: 0x1400d5820 | Name: sub_1400D5820 | Size: 175 bytes */
unsigned int *__fastcall sub_1400D5820(__int64 a1, int a2)
{
  __int64 v2; // r11
  __int64 v3; // r9
  unsigned int *v4; // r10
  __int64 v5; // rdx
  unsigned int *v6; // r8
  __int64 v7; // rcx
  unsigned int *result; // rax

  v2 = 3588LL * a2;
  v3 = 0;
  v4 = &dword_140404A6C[v2 + 210460556];
LABEL_2:
  v5 = 0;
  v6 = v4;
LABEL_3:
  v7 = 0;
  result = v6;
  while ( !*(result - 2560) && !*result && !result[512] )
  {
    ++v7;
    ++result;
    if ( v7 >= 8 )
    {
      ++v5;
      v6 += 8;
      if ( v5 < 8 )
        goto LABEL_3;
      ++v3;
      v4 += 64;
      if ( v3 >= 8 )
      {
        --dword_140404A6C[210457991];
        return (unsigned int *)MEMORY[0x1401FC920](
                                 &dword_140404A6C[v2 + 210457992],
                                 &dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992]);
      }
      goto LABEL_2;
    }
  }
  return result;
}

