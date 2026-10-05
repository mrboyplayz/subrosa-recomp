/* Address: 0x140016f60 | Name: sub_140016F60 | Size: 430 bytes */
void __fastcall sub_140016F60(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rdi
  __int64 v9; // r10
  int v10; // edx
  signed int v11; // ecx
  int v12; // r8d
  signed int v13; // eax
  int v14; // r9d
  unsigned int v15; // r11d
  signed int v16; // r10d
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rcx

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
              v17 = 6930LL * v16;
              v18 = a3 & 7;
              v19 = (a3 >> 1) & 3;
              v20 = v17 + (a2 & 7) + 8 * ((a4 & 7) + 8 * v18);
              dword_140404A6C[v20 + 83199479] = a5;
              dword_140404A6C[v20 + 83199991] = 0;
              if ( (dword_140404A6C[v17 + 83200503 + v19] & 0x80000000) == 0 )
                sub_140012940(v16, v19);
            }
          }
        }
      }
    }
  }
}

