/* Address: 0x140017260 | Name: sub_140017260 | Size: 344 bytes */
void __fastcall sub_140017260(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rdx
  signed int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r10

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v7 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v7 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v7 + 111579651] )
    {
      v8 = dword_140404A6C[v7 + 111579652];
      if ( (int)(a4 >> 6) < v8 )
      {
        v9 = *(int *)(*(_QWORD *)&dword_140404A6C[v7 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v7 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v8)));
        if ( (_DWORD)v9 != -1 )
        {
          v10 = (int)dword_140404A6C[263004 * (int)a1
                                   + 111579985
                                   + 513 * v9
                                   + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v10 != -1 )
          {
            v11 = a3 & 7;
            v12 = (a3 >> 1) & 3;
            dword_140404A6C[6930 * v10 + 83198967 + 64 * v11 + 8 * (a4 & 7) + (a2 & 7)] = a5;
            if ( (dword_140404A6C[6930 * v10 + 83200503 + v12] & 0x80000000) == 0 )
              sub_140012940(v10, v12);
          }
        }
      }
    }
  }
}

