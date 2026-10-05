/* Address: 0x1400ca9b0 | Name: sub_1400CA9B0 | Size: 220 bytes */
__int64 __fastcall sub_1400CA9B0(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax
  int *v3; // r11
  int v4; // r9d
  int v5; // r8d
  unsigned int v6; // ebp

  result = 7040LL * (int)a2;
  v3 = (int *)((char *)&dword_140404A6C[278845906] + result);
  v4 = 0;
  v5 = *(unsigned int *)((char *)&dword_140404A6C[278845906] + result);
  if ( v5 > 0 )
  {
    v6 = dword_140404A6C[456202453];
    result = (__int64)&dword_140404A6C[1760 * a2 + 278845907];
    do
    {
      if ( *(_DWORD *)result == a1 )
      {
        *v3 = v5 - 1;
        *(_DWORD *)result = dword_140404A6C[1760 * a2 + 278845906 + v5];
        dword_140404A6C[1760 * a1 + 278845903] = -1;
        if ( v6 )
        {
          if ( a1 <= 0x3FF )
            ++dword_140404A6C[a1 + 280648157];
          if ( a2 <= 0x3FF )
            ++dword_140404A6C[a2 + 280648157];
        }
      }
      else
      {
        ++v4;
        result += 4;
      }
      v5 = *v3;
    }
    while ( v4 < *v3 );
  }
  return result;
}

