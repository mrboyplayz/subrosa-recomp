/* Address: 0x14000b650 | Name: sub_14000B650 | Size: 302 bytes */
void __fastcall sub_14000B650(signed int a1, int a2)
{
  __int64 v3; // r8
  int v4; // eax
  int v5; // eax
  unsigned int *v6; // rdx
  unsigned int *v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // xmm0_4
  unsigned int v10; // r8d
  __int64 v11; // rcx
  unsigned int v12; // xmm1_4
  unsigned int v13; // xmm2_4
  unsigned int v14; // xmm3_4
  unsigned int v15; // xmm1_4
  unsigned int v16; // xmm2_4

  v3 = 5210LL * a1;
  if ( dword_140404A6C[v3 + 129716710] != 13 )
  {
    v4 = dword_140404A6C[v3 + 129716712];
    if ( v4 > 0 )
    {
      v5 = v4 - a2;
      dword_140404A6C[v3 + 129716712] = v5;
      if ( v5 <= 0 )
      {
        v6 = &dword_140404A6C[v3 + 129716744];
        v7 = &dword_140404A6C[v3 + 129716720];
        if ( dword_140404A6C[456202453] )
        {
          v8 = dword_140404A6C[283831474];
          v9 = 0;
          v10 = dword_140404A6C[308307070];
          v11 = (__int64)(int)dword_140404A6C[308307070] << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v11) = 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v11) = v8;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v11) = a1;
          *(_QWORD *)((char *)&dword_140404A6C[297756294] + v11) = 2;
          if ( v7 )
          {
            v12 = v7[2];
            v13 = v7[1];
            v14 = *v7;
          }
          else
          {
            v12 = 0;
            v13 = 0;
            v14 = 0;
          }
          *(unsigned int *)((char *)&dword_140404A6C[297756287] + v11) = v14;
          *(unsigned int *)((char *)&dword_140404A6C[297756288] + v11) = v13;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v11) = v12;
          if ( v6 )
          {
            v9 = v6[2];
            v15 = v6[1];
            v16 = *v6;
          }
          else
          {
            v15 = 0;
            v16 = 0;
          }
          *(unsigned int *)((char *)&dword_140404A6C[297756290] + v11) = v16;
          *(unsigned int *)((char *)&dword_140404A6C[297756291] + v11) = v15;
          *(unsigned int *)((char *)&dword_140404A6C[297756292] + v11) = v9;
          dword_140404A6C[308307070] = v10 + 1;
          HIWORD(dword_140404A6C[308307070]) = 0;
        }
      }
    }
  }
}

