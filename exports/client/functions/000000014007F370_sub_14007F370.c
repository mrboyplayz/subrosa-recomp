/* Address: 0x14007f370 | Name: sub_14007F370 | Size: 353 bytes */
void __fastcall sub_14007F370(unsigned int a1)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rdi
  unsigned int *v5; // r11
  __int64 v6; // rax
  __int64 v7; // rcx
  signed int v8; // edx
  unsigned int *v9; // r9
  int v10; // r8d
  unsigned int *v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  unsigned int *v14; // r11
  __int64 v15; // rcx
  signed int v16; // edx
  unsigned int *v17; // r9
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rbx

  if ( a1 <= 0x3FFF )
  {
    v2 = 61LL * (int)a1;
    v3 = dword_140404A6C[v2 + 486149258];
    if ( v3 > 0 )
    {
      v4 = (unsigned int)v3;
      v5 = &dword_140404A6C[v2 + 486149259];
      do
      {
        v6 = (int)*v5;
        if ( (_DWORD)v6 != -1 )
        {
          v7 = (int)*v5;
          v8 = 0;
          v9 = &dword_140404A6C[60 * v6 + 73007041];
          v10 = *v9;
          if ( (int)*v9 > 0 )
          {
            v11 = &dword_140404A6C[60 * v7 + 73007042];
            do
            {
              if ( *v11 == a1 )
              {
                *v9 = v10 - 1;
                *v11 = dword_140404A6C[60 * v7 + 73007041 + v10];
              }
              else
              {
                ++v8;
                ++v11;
              }
              v10 = *v9;
            }
            while ( v8 < (int)*v9 );
          }
        }
        ++v5;
        --v4;
      }
      while ( v4 );
    }
    v12 = dword_140404A6C[v2 + 486149290];
    if ( v12 > 0 )
    {
      v13 = (unsigned int)v12;
      v14 = &dword_140404A6C[v2 + 486149291];
      do
      {
        v15 = (int)*v14;
        v16 = 0;
        v17 = &dword_140404A6C[5210 * v15 + 129716962];
        v18 = *v17;
        if ( (int)*v17 > 0 )
        {
          v19 = 5210 * v15;
          v20 = v19;
          do
          {
            if ( dword_140404A6C[v19 + 129716963] == a1 )
            {
              *v17 = v18 - 1;
              dword_140404A6C[v19 + 129716963] = dword_140404A6C[v20 + 129716962 + v18];
            }
            else
            {
              ++v16;
              ++v19;
            }
            v18 = *v17;
          }
          while ( v16 < (int)*v17 );
        }
        ++v14;
        --v13;
      }
      while ( v13 );
    }
    dword_140404A6C[v2 + 486149253] = 0;
  }
}

