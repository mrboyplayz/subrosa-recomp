/* Address: 0x1400718b0 | Name: sub_1400718B0 | Size: 464 bytes */
void __fastcall sub_1400718B0(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned int v4; // r12d
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  int v8; // ecx
  int v9; // eax
  int v10; // r9d
  int v11; // ebx
  __int64 v12; // rbp
  int *v13; // r14
  int v14; // eax

  v2 = 1760LL * a1;
  v3 = a1;
  v4 = dword_190260718[v2];
  if ( v4 != -1 && *(_DWORD *)((char *)&unk_19025F3F4 + v2 * 4) != -1 )
  {
    v5 = dword_190260724[v2];
    if ( v5 <= 0 )
    {
      if ( (((unsigned __int8)a1 ^ (unsigned __int8)dword_191541414) & 0xF) == 0 )
      {
        v14 = dword_190260728[v2];
        if ( !v14 )
        {
          sub_140070C20(a1);
          v14 = dword_190260728[v2];
        }
        if ( v14 == 1 )
        {
          sub_140071350(a1);
          v14 = dword_190260728[v2];
        }
        if ( v14 == 2 )
          sub_140071A80((unsigned int)a1);
      }
    }
    else
    {
      v6 = v5 - 1;
      v7 = dword_190260720[v2] == 1;
      v8 = v6;
      dword_190260724[v2] = v6;
      if ( v7 && (v6 & 0xF) == 0 )
      {
        sub_140071A80((unsigned int)a1);
        v8 = dword_190260724[v2];
      }
      if ( !v8 )
      {
        v9 = dword_190260720[v2];
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = 0;
            v11 = 0;
            v12 = 1760 * v3;
            v13 = &dword_178C85450;
            dword_190260728[v2] = 0;
            do
            {
              if ( *((_DWORD *)&unk_18F7184D0
                   + 2570 * *(int *)((char *)&unk_19025F3F4 + v2 * 4)
                   + 6 * dword_190260740[v12 + *(int *)&algn_190260734[v2 * 4]]) == *v13 )
              {
                sub_1400ED730((unsigned int)v11, v4);
                v10 = 1;
                dword_19026072C[v2] = v11;
                dword_190260728[v2] = 1;
                dword_190260730[v2] = 0;
              }
              ++v11;
              v13 += 34653;
            }
            while ( v11 < 7 );
            if ( !v10 )
              sub_140070C20(a1);
            if ( dword_190260728[v2] == 1 )
              sub_140071350(a1);
          }
        }
        else
        {
          sub_140070C20(a1);
        }
      }
    }
  }
}

