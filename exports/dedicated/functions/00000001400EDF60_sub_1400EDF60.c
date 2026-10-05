/* Address: 0x1400edf60 | Name: sub_1400EDF60 | Size: 1484 bytes */
__int64 __fastcall sub_1400EDF60(FILE *Stream, int a2)
{
  int v4; // r13d
  int v5; // r12d
  __int64 v6; // rsi
  char *v7; // rcx
  char *v8; // rdi
  __int64 v9; // r15
  char *v10; // rdi
  char *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rsi
  char *v15; // rdi
  __int64 v16; // rsi
  char *v17; // rdi
  char *v18; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( !Stream )
    return 0;
  Buffer = 1;
  if ( !a2 )
  {
    fread(&Buffer, 4u, 1u, Stream);
    if ( Buffer == 1 )
    {
      fread(&dword_15AD76740, 4u, 1u, Stream);
      fread(&dword_15AD76744, 4u, 1u, Stream);
      fread(&dword_15AD76748, 4u, 1u, Stream);
      fread(&dword_15AD7674C, 4u, 1u, Stream);
      fread(&dword_15AD76750, 4u, 1u, Stream);
      fread(&dword_15AD76754, 4u, 1u, Stream);
      fread(&dword_15AD76758, 4u, 1u, Stream);
      fread(&dword_15AD7675C, 4u, 1u, Stream);
      fread(&dword_15AD76760, 4u, 1u, Stream);
      fread(&dword_15AD76764, 4u, 1u, Stream);
      goto LABEL_6;
    }
    return 0;
  }
  fwrite(&Buffer, 4u, 1u, Stream);
  fwrite(&dword_15AD76740, 4u, 1u, Stream);
  fwrite(&dword_15AD76744, 4u, 1u, Stream);
  fwrite(&dword_15AD76748, 4u, 1u, Stream);
  fwrite(&dword_15AD7674C, 4u, 1u, Stream);
  fwrite(&dword_15AD76750, 4u, 1u, Stream);
  fwrite(&dword_15AD76754, 4u, 1u, Stream);
  fwrite(&dword_15AD76758, 4u, 1u, Stream);
  fwrite(&dword_15AD7675C, 4u, 1u, Stream);
  fwrite(&dword_15AD76760, 4u, 1u, Stream);
  fwrite(&dword_15AD76764, 4u, 1u, Stream);
LABEL_6:
  v4 = 0;
  v5 = 0;
  if ( dword_15AD76764 > 0 )
  {
    do
    {
      v6 = 348LL * v5;
      v7 = (char *)&unk_15AD76774 + v6;
      v8 = (char *)&unk_15AD76700 + v6;
      if ( a2 )
      {
        fwrite(v7, 4u, 1u, Stream);
        fwrite(v8 + 108, 4u, 1u, Stream);
        fwrite((char *)&unk_15AD76778 + v6, 4u, 1u, Stream);
        fwrite((char *)&unk_15AD76770 + v6, 4u, 1u, Stream);
        fwrite((char *)&unk_15AD768BC + v6, 4u, 1u, Stream);
        fwrite((char *)&unk_15AD768C0 + v6, 4u, 1u, Stream);
      }
      else
      {
        fread(v7, 4u, 1u, Stream);
        fread(v8 + 108, 4u, 1u, Stream);
        fread((char *)&unk_15AD76778 + v6, 4u, 1u, Stream);
        fread((char *)&unk_15AD76770 + v6, 4u, 1u, Stream);
        fread((char *)&unk_15AD768BC + v6, 4u, 1u, Stream);
        fread((char *)&unk_15AD768C0 + v6, 4u, 1u, Stream);
      }
      v9 = 4;
      v10 = (char *)&unk_15AD7683C + v6;
      v11 = (char *)&unk_15AD76700 + v6 + 124;
      do
      {
        v12 = 4;
        do
        {
          if ( a2 )
          {
            fwrite(v11, 4u, 3u, Stream);
            fwrite(v10, 4u, 2u, Stream);
          }
          else
          {
            fread(v11, 4u, 3u, Stream);
            fread(v10, 4u, 2u, Stream);
          }
          v11 += 12;
          v10 += 8;
          --v12;
        }
        while ( v12 );
        --v9;
      }
      while ( v9 );
      ++v5;
    }
    while ( v5 < dword_15AD76764 );
    v4 = 0;
  }
  if ( a2 )
    fwrite(&dword_15ADA1F68, 4u, 1u, Stream);
  else
    fread(&dword_15ADA1F68, 4u, 1u, Stream);
  if ( dword_15ADA1F68 > 0 )
  {
    do
    {
      v13 = 124LL * v4;
      v14 = 8;
      v15 = (char *)&unk_15ADA1F6C + v13;
      do
      {
        if ( a2 )
          fwrite(v15, 4u, 3u, Stream);
        else
          fread(v15, 4u, 3u, Stream);
        v15 += 12;
        --v14;
      }
      while ( v14 );
      v16 = 6;
      v17 = (char *)&unk_15ADA1FCC + v13;
      do
      {
        if ( a2 )
          fwrite(v17, 4u, 1u, Stream);
        else
          fread(v17, 4u, 1u, Stream);
        v17 += 4;
        --v16;
      }
      while ( v16 );
      v18 = (char *)&unk_15ADA1FE4 + 124 * v4;
      if ( a2 )
        fwrite(v18, 4u, 1u, Stream);
      else
        fread(v18, 4u, 1u, Stream);
      ++v4;
    }
    while ( v4 < dword_15ADA1F68 );
  }
  return 1;
}

