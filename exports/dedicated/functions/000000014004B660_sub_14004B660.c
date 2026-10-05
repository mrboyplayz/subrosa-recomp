/* Address: 0x14004b660 | Name: sub_14004B660 | Size: 353 bytes */
void __fastcall sub_14004B660(unsigned int a1)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rdi
  int *v5; // r11
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  int *v9; // r9
  int v10; // r8d
  int *v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  int *v14; // r11
  __int64 v15; // rcx
  int v16; // edx
  int *v17; // r9
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rbx

  if ( a1 <= 0x3FFF )
  {
    v2 = 244LL * (int)a1;
    v3 = *(_DWORD *)((char *)&unk_14B883334 + v2);
    if ( v3 > 0 )
    {
      v4 = (unsigned int)v3;
      v5 = (int *)((char *)&unk_14B883338 + v2);
      do
      {
        v6 = *v5;
        if ( (_DWORD)v6 != -1 )
        {
          v7 = *v5;
          v8 = 0;
          v9 = &dword_16E18CB30[60 * v6];
          v10 = *v9;
          if ( *v9 > 0 )
          {
            v11 = &dword_16E18CB34[60 * v7];
            do
            {
              if ( *v11 == a1 )
              {
                *v9 = v10 - 1;
                *v11 = dword_16E18CB30[60 * v7 + v10];
              }
              else
              {
                ++v8;
                ++v11;
              }
              v10 = *v9;
            }
            while ( v8 < *v9 );
          }
        }
        ++v5;
        --v4;
      }
      while ( v4 );
    }
    v12 = *(_DWORD *)((char *)&unk_14B8833B4 + v2);
    if ( v12 > 0 )
    {
      v13 = (unsigned int)v12;
      v14 = (int *)((char *)&unk_14B8833B8 + v2);
      do
      {
        v15 = *v14;
        v16 = 0;
        v17 = &dword_16E6A4054[5210 * v15];
        v18 = *v17;
        if ( *v17 > 0 )
        {
          v19 = 5210 * v15;
          v20 = v19;
          do
          {
            if ( dword_16E6A4058[v19] == a1 )
            {
              *v17 = v18 - 1;
              dword_16E6A4058[v19] = dword_16E6A4054[v20 + v18];
            }
            else
            {
              ++v16;
              ++v19;
            }
            v18 = *v17;
          }
          while ( v16 < *v17 );
        }
        ++v14;
        --v13;
      }
      while ( v13 );
    }
    *(_DWORD *)((char *)&unk_14B883320 + v2) = 0;
  }
}

