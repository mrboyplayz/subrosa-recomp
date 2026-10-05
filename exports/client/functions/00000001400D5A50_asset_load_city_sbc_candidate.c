/* Address: 0x1400d5a50 | Name: asset_load_city_sbc_candidate | Size: 2099 bytes */
// Candidate .sbc city loader: references city2.sbc; compare against save routine at asset_save_city_sbc_candidate.
__int64 asset_load_city_sbc_candidate()
{
  __int64 v0; // rax
  int v1; // r15d
  __int64 v2; // rdi
  int i; // ebx
  int j; // esi
  unsigned __int64 v5; // rbx
  int k; // esi
  __int64 v7; // rbx
  int m; // esi
  __int64 v9; // rbx
  int v10; // r13d
  int *v11; // r14
  __int64 v12; // r12
  int v13; // ebp
  __int64 v14; // rsi
  char *v15; // rbx
  int v16; // ebp
  _DWORD *v17; // r14
  __int64 v18; // rbx
  char *v19; // rbx
  __int64 v20; // rsi
  int v21; // r12d
  char *v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rbp
  char *v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 v31; // rbp
  int n; // ebx
  _DWORD *v33; // rbx
  __int64 v35; // [rsp+0h] [rbp-168h] BYREF
  int Buffer[4]; // [rsp+20h] [rbp-148h] BYREF
  char FileName[256]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v38; // [rsp+130h] [rbp-38h]

  sub_140158AB0(FileName, "city2.sbc");
  v0 = MEMORY[0x14020B8D8](FileName, "rb");
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    fread(Buffer, 4, 1, v0);
    if ( (unsigned int)(Buffer[0] - 7) > 5 )
    {
      sub_14020B9E8(v2);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v38);
    }
    if ( Buffer[0] >= 10 )
    {
      fread(&MEMORY[0x175EEA08C], 4, 1, v2);
      for ( i = 0; i < MEMORY[0x175EEA08C]; ++i )
        fread(&MEMORY[0x175EEA090][8 * (__int64)i], 1, 64, v2);
    }
    fread(&MEMORY[0x16E486878], 4, 1, v2);
    for ( j = 0; j < MEMORY[0x16E486878]; ++j )
    {
      v5 = 12LL * j;
      fread((char *)&MEMORY[0x16E48687C] + v5, 4, 1, v2);
      fread((char *)&MEMORY[0x16E48687C] + v5 + 4, 4, 1, v2);
      fread(&MEMORY[0x16E486884][v5 / 4], 4, 1, v2);
    }
    fread(&MEMORY[0x16E48987C], 4, 1, v2);
    for ( k = 0; k < MEMORY[0x16E48987C]; ++k )
    {
      v7 = 52LL * k;
      fread((char *)&MEMORY[0x16E489880] + v7, 4, 1, v2);
      fread((char *)&MEMORY[0x16E489884] + v7, 4, 1, v2);
      fread((char *)&MEMORY[0x16E489888] + v7, 4, 1, v2);
      fread((char *)&MEMORY[0x16E48988C] + v7, 4, 1, v2);
      fread((char *)&MEMORY[0x16E489890] + v7, 4, 1, v2);
      fread((char *)&MEMORY[0x16E489894] + v7, 1, 32, v2);
    }
    fread(&MEMORY[0x175EFB090], 4, 1, v2);
    for ( m = 0; m < MEMORY[0x175EFB090]; ++m )
    {
      v9 = 96LL * m;
      fread(&MEMORY[0x175EFB098][v9], 1, 64, v2);
      fread((char *)&MEMORY[0x175EFB0D8] + v9, 4, 1, v2);
      fread((char *)&MEMORY[0x175EFB0DC] + v9, 4, 1, v2);
      fread((char *)&MEMORY[0x175EFB0E0] + v9, 4, 1, v2);
      fread((char *)&MEMORY[0x175EFB0E4] + v9, 4, 1, v2);
    }
    if ( Buffer[0] < 12 )
    {
      if ( Buffer[0] == 11 )
      {
        fread(&MEMORY[0x16E492084], 4, 1, v2);
        v16 = 0;
        if ( MEMORY[0x16E492084] > 0 )
        {
          v17 = &MEMORY[0x16E4920CC];
          do
          {
            v18 = 16968LL * v16;
            fread((char *)&MEMORY[0x16E492088] + v18, 1, 64, v2);
            *v17 = 1;
            v19 = (char *)&MEMORY[0x16E486840] + v18 + 47248;
            v20 = 8;
            do
            {
              fread(v19, 1, 64, v2);
              v19 += 64;
              --v20;
            }
            while ( v20 );
            ++v16;
            v17 += 4242;
          }
          while ( v16 < MEMORY[0x16E492084] );
        }
      }
      else
      {
        MEMORY[0x16E492084] = 0;
      }
    }
    else
    {
      fread(&MEMORY[0x16E492084], 4, 1, v2);
      v10 = 0;
      if ( MEMORY[0x16E492084] > 0 )
      {
        v11 = (int *)&MEMORY[0x16E4920CC];
        do
        {
          v12 = 16968LL * v10;
          fread((char *)&MEMORY[0x16E492088] + v12, 1, 64, v2);
          fread((char *)&MEMORY[0x16E4920CC] + v12, 4, 1, v2);
          v13 = 0;
          if ( *v11 > 0 )
          {
            do
            {
              v14 = 8;
              v15 = (char *)&MEMORY[0x16E4920D0] + 528 * v13 + v12;
              do
              {
                fread(v15, 1, 64, v2);
                v15 += 64;
                --v14;
              }
              while ( v14 );
              ++v13;
            }
            while ( v13 < *v11 );
            v1 = 0;
          }
          ++v10;
          v11 += 4242;
        }
        while ( v10 < MEMORY[0x16E492084] );
      }
    }
    if ( Buffer[0] >= 8 )
    {
      fread(&MEMORY[0x1726DA088], 4, 1, v2);
      v21 = 0;
      if ( MEMORY[0x1726DA088] > 0 )
      {
        v22 = (char *)&MEMORY[0x1726DC89C];
        do
        {
          v23 = 14352LL * v21;
          fread((char *)&MEMORY[0x1726DA08C] + v23, 4, 1, v2);
          fread((char *)&MEMORY[0x1726DA090] + v23, 4, 1, v2);
          fread((char *)&MEMORY[0x1726DA094] + v23, 4, 1, v2);
          fread((char *)&MEMORY[0x1726DA098] + v23, 4, 1, v2);
          if ( Buffer[0] < 11 )
            goto LABEL_37;
          v24 = 512;
          v25 = (char *)&MEMORY[0x16E486840] + v23 + 69558364;
          do
          {
            fread(v25, 4, 1, v2);
            v25 += 4;
            --v24;
          }
          while ( v24 );
          MEMORY[0x1401FCD30](v22 - 10240, 0, 2048);
          if ( Buffer[0] < 11 )
          {
LABEL_37:
            v26 = 0;
            v27 = 512;
            do
            {
              fread(&MEMORY[0x1726DA09C][3588 * v21 + v26++], 4, 1, v2);
              --v27;
            }
            while ( v27 );
            v28 = 0;
            v29 = 4096;
            do
            {
              fread(&MEMORY[0x1726DA89C][7176 * v21 + v28++], 2, 1, v2);
              --v29;
            }
            while ( v29 );
            MEMORY[0x1401FCD30](v22, 0, 2048);
          }
          if ( Buffer[0] >= 10 )
          {
            v30 = 0;
            v31 = 512;
            do
            {
              fread(&MEMORY[0x1726DD09C][3588 * v21 + v30++], 4, 1, v2);
              --v31;
            }
            while ( v31 );
          }
          ++v21;
          v22 += 14352;
        }
        while ( v21 < MEMORY[0x1726DA088] );
      }
    }
    if ( Buffer[0] >= 9 )
    {
      fread(&MEMORY[0x175FBB094], 4, 1, v2);
      for ( n = 0; n < MEMORY[0x175FBB094]; ++n )
        fread((char *)&MEMORY[0x16E486840] + 8 * n + 4 * n + 129189976, 4, 3, v2);
    }
    sub_14020B9E8(v2);
  }
  if ( MEMORY[0x175EFB090] > 0 )
  {
    v33 = &MEMORY[0x175EFB0F0];
    do
    {
      asset_load_building_sbb_candidate(MEMORY[0x1AD2C94A0], &MEMORY[0x175EFB098][96 * v1], 1);
      v33 += 24;
      ++v1;
      *(v33 - 26) = MEMORY[0x1AD2C94E0] - MEMORY[0x1AD2C94EC];
      *(v33 - 24) = MEMORY[0x1AD2C94E8] - MEMORY[0x1AD2C94F0];
      *(v33 - 25) = MEMORY[0x1AD2C94E4] - MEMORY[0x1AD2C94F4];
    }
    while ( v1 < MEMORY[0x175EFB090] );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v38);
}

