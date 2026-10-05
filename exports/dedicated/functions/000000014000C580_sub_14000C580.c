/* Address: 0x14000c580 | Name: sub_14000C580 | Size: 719 bytes */
void __fastcall sub_14000C580(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, _BYTE *a6)
{
  __int64 v6; // rbp
  unsigned __int64 v10; // r10
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // r10d
  int v17; // eax
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rdx
  int i; // edi
  int j; // ebx

  v6 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v10 = 1052016LL * a1;
    v11 = a2 >> 6;
    v12 = dword_16CDE9ED4[v10 / 4];
    if ( v11 < v12 )
    {
      v13 = a3 >> 6;
      if ( v13 < dword_16CDE9ED8[v10 / 4] )
      {
        v14 = dword_16CDE9EDC[v10 / 4];
        v15 = a4 >> 6;
        if ( v15 < v14 )
        {
          v16 = *(_DWORD *)(qword_16CDE9EE8[v10 / 8] + 4LL * (v11 + v12 * (v15 + v13 * v14)));
          if ( v16 != -1 || (v16 = sub_1400094F0(v6, v11, v13, v15), v16 != -1) )
          {
            v17 = dword_16CDEA410[263004 * v6
                                + 513 * (int)v16
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v17 != -1 || (v17 = sub_14000B980(v6, v16, a2 >> 3, a3 >> 3, a4 >> 3), v17 != -1) )
            {
              if ( (a5 & 0xE0000000) == 0x80000000 )
              {
                v18 = 0;
                v19 = (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7));
                dword_1661A4EA8[6930 * v17 + v19] = a5;
                v20 = 8 * (v19 + 3465LL * v17);
                byte_1661A56A8[v20] = *a6;
                byte_1661A56A8[v20 + 1] = a6[2];
                byte_1661A56A8[v20 + 2] = a6[4];
                byte_1661A56A8[v20 + 3] = a6[6];
                byte_1661A56A8[v20 + 4] = a6[8];
                byte_1661A56A8[v20 + 5] = a6[10];
                byte_1661A56A8[v20 + 6] = a6[12];
                for ( byte_1661A56A8[v20 + 7] = a6[14]; v18 < dword_15AE31824[58 * (unsigned __int16)a5]; ++v18 )
                {
                  for ( i = 0; i < dword_15AE31828[58 * (unsigned __int16)a5]; ++i )
                  {
                    for ( j = 0; j < dword_15AE31820[58 * (unsigned __int16)a5]; ++j )
                    {
                      if ( v18 || i || j )
                        sub_14000D080(v6, j + a2, v18 + a3, i + a4, j | ((i | (v18 << 8)) << 8) | 0xC0000000);
                    }
                  }
                }
              }
              sub_14000D730((unsigned int)v6, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

