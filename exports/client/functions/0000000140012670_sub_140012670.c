/* Address: 0x140012670 | Name: sub_140012670 | Size: 714 bytes */
void __fastcall sub_140012670(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  signed int v9; // r10d
  signed int v10; // r8d
  signed int v11; // eax
  signed int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r15
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v8 = 263004LL * (int)a1;
    v9 = dword_140404A6C[v8 + 111579650];
    if ( (int)(a2 >> 6) < v9 )
    {
      v10 = a3 >> 6;
      if ( v10 < (int)dword_140404A6C[v8 + 111579651] )
      {
        v11 = dword_140404A6C[v8 + 111579652];
        v12 = a4 >> 6;
        if ( v12 < v11 )
        {
          v13 = *(int *)(*(_QWORD *)&dword_140404A6C[v8 + 111579655] + 4LL * (int)((a2 >> 6) + v9 * (v12 + v10 * v11)));
          if ( (_DWORD)v13 != -1 )
          {
            v14 = (int)dword_140404A6C[263004 * (int)a1
                                     + 111579985
                                     + 513 * v13
                                     + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( (_DWORD)v14 != -1 )
            {
              v15 = 6930 * v14 + (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7));
              if ( (dword_140404A6C[v15 + 83194359] & 0xE0000000) == 0x40000000 )
              {
                v16 = sub_1400129D0(a1, a2, a3 - 1, a4);
                if ( (v16 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3 - 1, a4, v16 | 0x20);
                v17 = sub_1400129D0(a1, a2, a3 + 1, a4);
                if ( (v17 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3 + 1, a4, v17 | 1);
                v18 = sub_1400129D0(a1, a2, a3, a4 + 1);
                if ( (v18 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3, a4 + 1, v18 | 8);
                v19 = sub_1400129D0(a1, a2, a3, a4 - 1);
                if ( (v19 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3, a4 - 1, v19 | 2);
                v20 = sub_1400129D0(a1, a2 - 1, a3, a4);
                if ( (v20 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2 - 1, a3, a4, v20 | 0x10);
                v21 = sub_1400129D0(a1, a2 + 1, a3, a4);
                if ( (v21 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2 + 1, a3, a4, v21 | 4);
              }
              dword_140404A6C[v15 + 83194359] = 0;
              dword_140404A6C[v15 + 83197431] = 0;
              sub_1400173C0(a1, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

