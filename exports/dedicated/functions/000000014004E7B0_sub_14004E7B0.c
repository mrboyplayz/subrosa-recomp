/* Address: 0x14004e7b0 | Name: sub_14004E7B0 | Size: 745 bytes */
__int64 __fastcall sub_14004E7B0(FILE *Stream, int a2)
{
  int v5; // ebx
  int v6; // esi
  int *v7; // rcx
  int v8; // r12d
  int *v9; // rbp
  char *v10; // rcx
  int v11; // ebx
  __int64 v12; // r15
  int *v13; // rcx
  int *v14; // rcx
  int Buffer; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]
  unsigned __int64 v17; // [rsp+78h] [rbp+20h]

  Buffer = 2;
  if ( a2 )
  {
    fwrite(&Buffer, 4u, 1u, Stream);
    fwrite(&unk_1749695EC, 4u, 1u, Stream);
    fwrite(&dword_1749695F0, 4u, 1u, Stream);
  }
  else
  {
    fread(&Buffer, 4u, 1u, Stream);
    if ( Buffer != 2 )
      return 0;
    fread(&unk_1749695EC, 4u, 1u, Stream);
    fread(&dword_1749695F0, 4u, 1u, Stream);
  }
  v5 = 0;
  if ( dword_1749695F0 > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_174897DE0[v6 + 214533];
      if ( a2 )
      {
        fwrite(v7, 4u, 3u, Stream);
        fwrite((char *)&unk_1749995F4 + 4 * v5, 4u, 1u, Stream);
      }
      else
      {
        fread(v7, 4u, 3u, Stream);
        fread((char *)&unk_1749995F4 + 4 * v5, 4u, 1u, Stream);
      }
      ++v5;
      v6 += 3;
    }
    while ( v5 < dword_1749695F0 );
  }
  if ( a2 )
    fwrite(&dword_1749A95F4, 4u, 1u, Stream);
  else
    fread(&dword_1749A95F4, 4u, 1u, Stream);
  v8 = 0;
  v16 = 0;
  if ( dword_1749A95F4 > 0 )
  {
    v9 = (int *)&unk_1749A95F8;
    do
    {
      v10 = (char *)&unk_1749A95F8 + 56 * v8;
      v17 = 56LL * v8;
      if ( a2 )
        fwrite(v10, 4u, 1u, Stream);
      else
        fread(v10, 4u, 1u, Stream);
      v11 = 0;
      if ( *v9 > 0 )
      {
        v12 = 7LL * v8;
        do
        {
          v13 = &dword_174897DE0[14 * v8 + 280071 + v11];
          if ( a2 )
          {
            fwrite(v13, 4u, 1u, Stream);
            fwrite((char *)&unk_1749A960C + 8 * v12 + 8 * v11, 4u, 2u, Stream);
          }
          else
          {
            fread(v13, 4u, 1u, Stream);
            fread((char *)&unk_1749A960C + 8 * v12 + 8 * v11, 4u, 2u, Stream);
          }
          ++v11;
        }
        while ( v11 < *v9 );
        v8 = v16;
      }
      v14 = &dword_174897DE0[v17 / 4 + 280083];
      if ( a2 )
        fwrite(v14, 4u, 1u, Stream);
      else
        fread(v14, 4u, 1u, Stream);
      ++v8;
      v9 += 14;
      v16 = v8;
    }
    while ( v8 < dword_1749A95F4 );
  }
  return 1;
}

