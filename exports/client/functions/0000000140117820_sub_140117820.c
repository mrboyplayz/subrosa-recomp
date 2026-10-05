/* Address: 0x140117820 | Name: sub_140117820 | Size: 205 bytes */
void __fastcall sub_140117820(unsigned int a1)
{
  __int64 v1; // r9
  bool v2; // zf
  int v3; // edx
  unsigned int *v4; // rax
  signed int v5; // ecx
  signed int v6; // edx
  unsigned int v7; // r8d
  unsigned int *v8; // rax

  if ( a1 <= 0xFF )
  {
    v1 = (int)a1;
    v2 = dword_140404A6C[a1 + 284023074] == 1;
    dword_140404A6C[a1 + 284023074] ^= 1u;
    if ( v2 )
    {
      v5 = dword_140404A6C[284023330];
      v6 = 0;
      if ( (int)dword_140404A6C[284023330] > 0 )
      {
        v7 = dword_140404A6C[3597 * v1 + 71856265];
        v8 = &dword_140404A6C[284023331];
        do
        {
          if ( *v8 == v7 )
          {
            dword_140404A6C[284023330] = v5 - 1;
            *v8 = dword_140404A6C[v5 + 284023330];
            v5 = dword_140404A6C[284023330];
          }
          else
          {
            ++v6;
            ++v8;
          }
        }
        while ( v6 < v5 );
      }
    }
    else
    {
      v3 = 0;
      if ( (int)dword_140404A6C[284023330] <= 0 )
      {
LABEL_7:
        if ( (int)dword_140404A6C[284023330] < 1024 )
        {
          dword_140404A6C[dword_140404A6C[284023330] + 284023331] = dword_140404A6C[3597 * a1 + 71856265];
          ++dword_140404A6C[284023330];
        }
      }
      else
      {
        v4 = &dword_140404A6C[284023331];
        while ( *v4 != dword_140404A6C[3597 * a1 + 71856265] )
        {
          ++v3;
          ++v4;
          if ( v3 >= (int)dword_140404A6C[284023330] )
            goto LABEL_7;
        }
      }
    }
  }
}

