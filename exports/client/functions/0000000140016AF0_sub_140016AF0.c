/* Address: 0x140016af0 | Name: sub_140016AF0 | Size: 397 bytes */
void __fastcall sub_140016AF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // rdx
  signed int v7; // edi
  signed int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  signed int v13; // edx
  int v14; // r10d
  unsigned int *v15; // rax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v6 = 263004LL * (int)a1;
    v7 = dword_140404A6C[v6 + 111579650];
    if ( (int)(a2 >> 6) < v7 && (int)(a3 >> 6) < (int)dword_140404A6C[v6 + 111579651] )
    {
      v8 = dword_140404A6C[v6 + 111579652];
      if ( (int)(a4 >> 6) < v8 )
      {
        v9 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
                    + 4LL * (int)((a2 >> 6) + v7 * ((a4 >> 6) + v8 * (a3 >> 6))));
        if ( (_DWORD)v9 != -1 )
        {
          v10 = (int)dword_140404A6C[263004 * (int)a1
                                   + 111579985
                                   + 513 * v9
                                   + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v10 != -1 )
          {
            v11 = (int)dword_140404A6C[6930 * v10 + 83200503 + ((unsigned __int64)(a3 & 6) >> 1)];
            if ( (_DWORD)v11 != -1 )
            {
              v12 = 8969 * v11;
              v13 = 0;
              if ( (int)dword_140404A6C[8969 * v11 + 73995254] > 0 )
              {
                v14 = a2 & 7;
                v15 = &dword_140404A6C[v12 + 73995258];
                do
                {
                  if ( *(v15 - 1) == v14 && *v15 == (a3 & 7) && v15[1] == (a4 & 7) && v15[2] == a5 )
                    *(v15 - 3) = 0;
                  ++v13;
                  v15 += 21;
                }
                while ( v13 < (int)dword_140404A6C[v12 + 73995254] );
              }
            }
          }
        }
      }
    }
  }
}

