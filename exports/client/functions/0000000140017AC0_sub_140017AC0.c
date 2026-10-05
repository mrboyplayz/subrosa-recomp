/* Address: 0x140017ac0 | Name: sub_140017AC0 | Size: 382 bytes */
void __fastcall sub_140017AC0(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v9; // r10
  int v10; // edx
  signed int v11; // ecx
  int v12; // r8d
  signed int v13; // eax
  int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // eax

  v5 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v9 = 263004LL * a1;
    v10 = a2 >> 6;
    v11 = dword_140404A6C[v9 + 111579650];
    if ( v10 < v11 )
    {
      v12 = a3 >> 6;
      if ( v12 < (int)dword_140404A6C[v9 + 111579651] )
      {
        v13 = dword_140404A6C[v9 + 111579652];
        v14 = a4 >> 6;
        if ( v14 < v13 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v9 + 111579655] + 4LL * (v10 + v11 * (v14 + v12 * v13)));
          if ( v15 != -1 || (v15 = sub_140010020(v5, v10, v12, v14), v15 != -1) )
          {
            v16 = dword_140404A6C[263004 * v5
                                + 111579985
                                + 513 * (int)v15
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v16 != -1 || (v16 = sub_140012490(v5, v15, a2 >> 3, a3 >> 3, a4 >> 3), v16 != -1) )
            {
              dword_140404A6C[6930 * v16 + 83194359 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
              sub_1400173C0(v5, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

