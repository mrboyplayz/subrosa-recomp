/* Address: 0x1400c8500 | Name: sub_1400C8500 | Size: 464 bytes */
void __fastcall sub_1400C8500(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned int v4; // r12d
  int v5; // eax
  unsigned int v6; // eax
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // r9d
  int v11; // ebx
  __int64 v12; // rbp
  unsigned int *v13; // r14
  unsigned int v14; // eax

  v2 = 1760LL * a1;
  v3 = a1;
  v4 = dword_140404A6C[v2 + 278847323];
  if ( v4 != -1 && dword_140404A6C[v2 + 278846098] != -1 )
  {
    v5 = dword_140404A6C[v2 + 278847326];
    if ( v5 <= 0 )
    {
      if ( (((unsigned __int8)a1 ^ LOBYTE(dword_140404A6C[283831474])) & 0xF) == 0 )
      {
        v14 = dword_140404A6C[v2 + 278847327];
        if ( !v14 )
        {
          sub_1400C7890(a1);
          v14 = dword_140404A6C[v2 + 278847327];
        }
        if ( v14 == 1 )
        {
          sub_1400C7FC0(a1);
          v14 = dword_140404A6C[v2 + 278847327];
        }
        if ( v14 == 2 )
          sub_1400C86D0((unsigned int)a1);
      }
    }
    else
    {
      v6 = v5 - 1;
      v7 = dword_140404A6C[v2 + 278847325] == 1;
      v8 = v6;
      dword_140404A6C[v2 + 278847326] = v6;
      if ( v7 && (v6 & 0xF) == 0 )
      {
        sub_1400C86D0((unsigned int)a1);
        v8 = dword_140404A6C[v2 + 278847326];
      }
      if ( !v8 )
      {
        v9 = dword_140404A6C[v2 + 278847325];
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = 0;
            v11 = 0;
            v12 = 1760 * v3;
            v13 = &dword_140404A6C[180035569];
            dword_140404A6C[v2 + 278847327] = 0;
            do
            {
              if ( dword_140404A6C[2570 * dword_140404A6C[v2 + 278846098]
                                 + 275754073
                                 + 6 * dword_140404A6C[v12 + 278847333 + (int)dword_140404A6C[v2 + 278847330]]] == *v13 )
              {
                sub_140195FB0((unsigned int)v11, v4);
                v10 = 1;
                dword_140404A6C[v2 + 278847328] = v11;
                dword_140404A6C[v2 + 278847327] = 1;
                dword_140404A6C[v2 + 278847329] = 0;
              }
              ++v11;
              v13 += 34653;
            }
            while ( v11 < 7 );
            if ( !v10 )
              sub_1400C7890(a1);
            if ( dword_140404A6C[v2 + 278847327] == 1 )
              sub_1400C7FC0(a1);
          }
        }
        else
        {
          sub_1400C7890(a1);
        }
      }
    }
  }
}

