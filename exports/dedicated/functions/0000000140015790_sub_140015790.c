/* Address: 0x140015790 | Name: sub_140015790 | Size: 399 bytes */
void sub_140015790()
{
  int *v0; // rsi
  int i; // r10d
  int v2; // ecx
  int v3; // eax
  int *v4; // r11
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // r8d
  int *v9; // r9
  int v10; // edx
  int *v11; // rax
  int v12; // eax
  int *v13; // r11
  __int64 v14; // rdi
  __int64 v15; // r8
  int v16; // ecx
  int *v17; // r9
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rbx

  v0 = (int *)&unk_14B88332C;
  for ( i = 0; i < 0x4000; ++i )
  {
    if ( *(v0 - 3) )
    {
      v2 = *v0;
      if ( *v0 < 0x10000 )
        *v0 = --v2;
      if ( v2 <= 0 && (unsigned int)i <= 0x3FFF )
      {
        v3 = v0[2];
        if ( v3 > 0 )
        {
          v4 = v0 + 3;
          v5 = (unsigned int)v3;
          do
          {
            v6 = *v4;
            if ( (_DWORD)v6 != -1 )
            {
              v7 = *v4;
              v8 = 0;
              v9 = &dword_16E18CB30[60 * v6];
              v10 = *v9;
              if ( *v9 > 0 )
              {
                v11 = &dword_16E18CB34[60 * v7];
                do
                {
                  if ( *v11 == i )
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
            ++v4;
            --v5;
          }
          while ( v5 );
        }
        v12 = v0[34];
        if ( v12 > 0 )
        {
          v13 = v0 + 35;
          v14 = (unsigned int)v12;
          do
          {
            v15 = *v13;
            v16 = 0;
            v17 = &dword_16E6A4054[5210 * v15];
            v18 = *v17;
            if ( *v17 > 0 )
            {
              v19 = 5210 * v15;
              v20 = v19;
              do
              {
                if ( dword_16E6A4058[v19] == i )
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
            ++v13;
            --v14;
          }
          while ( v14 );
        }
        *(v0 - 3) = 0;
      }
    }
    v0 += 61;
  }
}

