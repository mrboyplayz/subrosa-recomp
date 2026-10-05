/* Address: 0x14007c4c0 | Name: sub_14007C4C0 | Size: 2148 bytes */
int sub_14007C4C0()
{
  FILE *v0; // rax
  int v1; // r15d
  FILE *v2; // rdi
  int i; // ebx
  int j; // esi
  __int64 v5; // rbx
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
  int Buffer[4]; // [rsp+20h] [rbp-148h] BYREF
  char FileName[256]; // [rsp+30h] [rbp-138h] BYREF

  sub_1400DBB30(FileName, "city2.sbc");
  v0 = fopen(FileName, "rb");
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    fread(Buffer, 4u, 1u, v0);
    if ( (unsigned int)(Buffer[0] - 7) > 5 )
    {
      LODWORD(v0) = fclose(v2);
      return (int)v0;
    }
    if ( Buffer[0] >= 10 )
    {
      fread(&dword_1838A2B0C, 4u, 1u, v2);
      for ( i = 0; i < dword_1838A2B0C; ++i )
        fread((char *)&unk_1838A2B10 + 64 * (__int64)i, 1u, 0x40u, v2);
    }
    fread(&dword_17BE3F2F8, 4u, 1u, v2);
    for ( j = 0; j < dword_17BE3F2F8; ++j )
    {
      v5 = 12LL * j;
      fread(&algn_17BE3F2FC[v5], 4u, 1u, v2);
      fread((char *)&unk_17BE3F300 + v5, 4u, 1u, v2);
      fread((char *)&unk_17BE3F304 + v5, 4u, 1u, v2);
    }
    fread(&dword_17BE422FC, 4u, 1u, v2);
    for ( k = 0; k < dword_17BE422FC; ++k )
    {
      v7 = 52LL * k;
      fread((char *)&unk_17BE42300 + v7, 4u, 1u, v2);
      fread((char *)&unk_17BE42304 + v7, 4u, 1u, v2);
      fread((char *)&unk_17BE42308 + v7, 4u, 1u, v2);
      fread((char *)&unk_17BE4230C + v7, 4u, 1u, v2);
      fread((char *)&unk_17BE42310 + v7, 4u, 1u, v2);
      fread((char *)&unk_17BE42314 + v7, 1u, 0x20u, v2);
    }
    fread(&dword_1838B3B10, 4u, 1u, v2);
    for ( m = 0; m < dword_1838B3B10; ++m )
    {
      v9 = 96LL * m;
      fread((char *)&unk_1838B3B18 + v9, 1u, 0x40u, v2);
      fread((char *)&unk_1838B3B58 + v9, 4u, 1u, v2);
      fread((char *)&unk_1838B3B5C + v9, 4u, 1u, v2);
      fread((char *)&unk_1838B3B60 + v9, 4u, 1u, v2);
      fread((char *)&unk_1838B3B64 + v9, 4u, 1u, v2);
    }
    if ( Buffer[0] < 12 )
    {
      if ( Buffer[0] == 11 )
      {
        fread(&dword_17BE4AB04, 4u, 1u, v2);
        v16 = 0;
        if ( dword_17BE4AB04 > 0 )
        {
          v17 = &unk_17BE4AB4C;
          do
          {
            v18 = 16968LL * v16;
            fread((char *)&unk_17BE4AB08 + v18, 1u, 0x40u, v2);
            *v17 = 1;
            v19 = (char *)&unk_17BE3F2C0 + v18 + 47248;
            v20 = 8;
            do
            {
              fread(v19, 1u, 0x40u, v2);
              v19 += 64;
              --v20;
            }
            while ( v20 );
            ++v16;
            v17 += 4242;
          }
          while ( v16 < dword_17BE4AB04 );
        }
      }
      else
      {
        dword_17BE4AB04 = 0;
      }
    }
    else
    {
      fread(&dword_17BE4AB04, 4u, 1u, v2);
      v10 = 0;
      if ( dword_17BE4AB04 > 0 )
      {
        v11 = (int *)&unk_17BE4AB4C;
        do
        {
          v12 = 16968LL * v10;
          fread((char *)&unk_17BE4AB08 + v12, 1u, 0x40u, v2);
          fread((char *)&unk_17BE4AB4C + v12, 4u, 1u, v2);
          v13 = 0;
          if ( *v11 > 0 )
          {
            do
            {
              v14 = 8;
              v15 = (char *)&unk_17BE4AB50 + 528 * v13 + v12;
              do
              {
                fread(v15, 1u, 0x40u, v2);
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
        while ( v10 < dword_17BE4AB04 );
      }
    }
    if ( Buffer[0] >= 8 )
    {
      fread(&dword_180092B08, 4u, 1u, v2);
      v21 = 0;
      if ( dword_180092B08 > 0 )
      {
        v22 = (char *)&unk_18009531C;
        do
        {
          v23 = 14352LL * v21;
          fread((char *)&unk_180092B0C + v23, 4u, 1u, v2);
          fread((char *)&unk_180092B10 + v23, 4u, 1u, v2);
          fread((char *)&unk_180092B14 + v23, 4u, 1u, v2);
          fread((char *)&unk_180092B18 + v23, 4u, 1u, v2);
          if ( Buffer[0] < 11 )
            goto LABEL_37;
          v24 = 512;
          v25 = (char *)&unk_17BE3F2C0 + v23 + 69558364;
          do
          {
            fread(v25, 4u, 1u, v2);
            v25 += 4;
            --v24;
          }
          while ( v24 );
          memset(v22 - 10240, 0, 0x800u);
          if ( Buffer[0] < 11 )
          {
LABEL_37:
            v26 = 0;
            v27 = 512;
            do
            {
              fread((char *)&unk_180092B1C + 14352 * v21 + 4 * v26++, 4u, 1u, v2);
              --v27;
            }
            while ( v27 );
            v28 = 0;
            v29 = 4096;
            do
            {
              fread(&word_18009331C[7176 * v21 + v28++], 2u, 1u, v2);
              --v29;
            }
            while ( v29 );
            memset(v22, 0, 0x800u);
          }
          if ( Buffer[0] >= 10 )
          {
            v30 = 0;
            v31 = 512;
            do
            {
              fread((char *)&unk_180095B1C + 14352 * v21 + 4 * v30++, 4u, 1u, v2);
              --v31;
            }
            while ( v31 );
          }
          ++v21;
          v22 += 14352;
        }
        while ( v21 < dword_180092B08 );
      }
    }
    if ( Buffer[0] >= 9 )
    {
      fread(&dword_183973B14, 4u, 1u, v2);
      for ( n = 0; n < dword_183973B14; ++n )
        fread((char *)&unk_17BE3F2C0 + 8 * n + 4 * n + 129189976, 4u, 3u, v2);
    }
    LODWORD(v0) = fclose(v2);
  }
  if ( dword_1838B3B10 > 0 )
  {
    v33 = &unk_1838B3B70;
    do
    {
      sub_140019A10(byte_147CAAC20, (__int64)&unk_1838B3B18 + 96 * v1, 1);
      v33 += 24;
      ++v1;
      *(v33 - 26) = dword_147CAAC60 - qword_147CAAC6C;
      *(v33 - 24) = dword_147CAAC68 - HIDWORD(qword_147CAAC6C);
      LODWORD(v0) = dword_147CAAC64 - dword_147CAAC74;
      *(v33 - 25) = dword_147CAAC64 - dword_147CAAC74;
    }
    while ( v1 < dword_1838B3B10 );
  }
  return (int)v0;
}

