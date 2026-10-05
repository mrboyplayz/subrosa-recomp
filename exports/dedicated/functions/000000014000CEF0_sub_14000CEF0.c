/* Address: 0x14000cef0 | Name: sub_14000CEF0 | Size: 397 bytes */
void __fastcall sub_14000CEF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned __int64 v6; // rdx
  int v7; // edi
  int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // edx
  int v14; // r10d
  _DWORD *v15; // rax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v6 = 1052016LL * (int)a1;
    v7 = dword_16CDE9ED4[v6 / 4];
    if ( (int)(a2 >> 6) < v7 && (int)(a3 >> 6) < dword_16CDE9ED8[v6 / 4] )
    {
      v8 = dword_16CDE9EDC[v6 / 4];
      if ( (int)(a4 >> 6) < v8 )
      {
        v9 = *(int *)(qword_16CDE9EE8[v6 / 8] + 4LL * (int)((a2 >> 6) + v7 * ((a4 >> 6) + v8 * (a3 >> 6))));
        if ( (_DWORD)v9 != -1 )
        {
          v10 = dword_16CDEA410[263004 * (int)a1
                              + 513 * v9
                              + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v10 != -1 )
          {
            v11 = dword_1661A7EA8[6930 * v10 + ((unsigned __int64)(a3 & 6) >> 1)];
            if ( (_DWORD)v11 != -1 )
            {
              v12 = 35876 * v11;
              v13 = 0;
              if ( *((int *)&unk_163E9C6A4 + 8969 * v11) > 0 )
              {
                v14 = a2 & 7;
                v15 = (_DWORD *)((char *)&unk_163E9C6B4 + v12);
                do
                {
                  if ( *(v15 - 1) == v14 && *v15 == (a3 & 7) && v15[1] == (a4 & 7) && v15[2] == a5 )
                    *(v15 - 3) = 0;
                  ++v13;
                  v15 += 21;
                }
                while ( v13 < *(_DWORD *)((char *)&unk_163E9C6A4 + v12) );
              }
            }
          }
        }
      }
    }
  }
}

