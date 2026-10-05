/* Address: 0x14000d330 | Name: sub_14000D330 | Size: 373 bytes */
void __fastcall sub_14000D330(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // rbp
  unsigned __int64 v9; // r10
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // eax
  int v14; // r9d
  unsigned int v15; // r10d
  int v16; // eax
  __int64 v17; // rdx

  v5 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v9 = 1052016LL * a1;
    v10 = a2 >> 6;
    v11 = dword_16CDE9ED4[v9 / 4];
    if ( v10 < v11 )
    {
      v12 = a3 >> 6;
      if ( v12 < dword_16CDE9ED8[v9 / 4] )
      {
        v13 = dword_16CDE9EDC[v9 / 4];
        v14 = a4 >> 6;
        if ( v14 < v13 )
        {
          v15 = *(_DWORD *)(qword_16CDE9EE8[v9 / 8] + 4LL * (v10 + v11 * (v14 + v12 * v13)));
          if ( v15 != -1 || (v15 = sub_1400094F0(v5, v10, v12, v14), v15 != -1) )
          {
            v16 = dword_16CDEA410[263004 * v5
                                + 513 * (int)v15
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v16 != -1 || (v16 = sub_14000B980(v5, v15, a2 >> 3, a3 >> 3, a4 >> 3), v16 != -1) )
            {
              v17 = 6930LL * v16 + (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7));
              dword_1661A6EA8[v17] = a5;
              dword_1661A76A8[v17] = 0;
            }
          }
        }
      }
    }
  }
}

