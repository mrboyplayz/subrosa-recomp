/* Address: 0x14004eaa0 | Name: sub_14004EAA0 | Size: 872 bytes */
__int64 __fastcall sub_14004EAA0(FILE *Stream, int a2)
{
  int v4; // ebp
  int i; // esi
  unsigned __int64 v6; // r14
  char *v7; // rcx
  int *v8; // r12
  int v9; // esi
  int *v10; // rcx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    fwrite(&Buffer, 4u, 1u, Stream);
    fwrite(dword_174897DE0, 4u, 1u, Stream);
  }
  else
  {
    fread(&Buffer, 4u, 1u, Stream);
    fread(dword_174897DE0, 4u, 1u, Stream);
  }
  v4 = 0;
  for ( i = 0; i < dword_174897DE0[0]; ++i )
  {
    v6 = 24LL * i;
    v7 = (char *)&unk_174897DE4 + v6;
    v8 = &dword_174897DE0[v6 / 4];
    if ( a2 )
    {
      fwrite(v7, 4u, 1u, Stream);
      fwrite(v8 + 2, 4u, 1u, Stream);
      fwrite((char *)&unk_174897DEC + v6, 4u, 1u, Stream);
      fwrite((char *)&unk_174897DF0 + v6, 4u, 1u, Stream);
      fwrite((char *)&unk_174897DF4 + v6, 4u, 1u, Stream);
      fwrite((char *)&unk_174897DF8 + v6, 4u, 1u, Stream);
    }
    else
    {
      fread(v7, 4u, 1u, Stream);
      fread(v8 + 2, 4u, 1u, Stream);
      fread((char *)&unk_174897DEC + v6, 4u, 1u, Stream);
      fread((char *)&unk_174897DF0 + v6, 4u, 1u, Stream);
      fread((char *)&unk_174897DF4 + v6, 4u, 1u, Stream);
      fread((char *)&unk_174897DF8 + v6, 4u, 1u, Stream);
    }
  }
  if ( a2 )
    fwrite(&dword_1748995E4, 4u, 1u, Stream);
  else
    fread(&dword_1748995E4, 4u, 1u, Stream);
  if ( dword_1748995E4 > 0 )
  {
    v9 = 0;
    do
    {
      v10 = &dword_174897DE0[v9 + 1538];
      if ( a2 )
        fwrite(v10, 4u, 3u, Stream);
      else
        fread(v10, 4u, 3u, Stream);
      ++v4;
      v9 += 3;
    }
    while ( v4 < dword_1748995E4 );
  }
  if ( a2 )
  {
    fwrite(&dword_1748C95E8, 4u, 1u, Stream);
    fwrite(&unk_1748C95EC, 4u, 3 * dword_1748C95E8, Stream);
    fwrite(&unk_1748F95EC, 4u, dword_1748C95E8, Stream);
    fwrite(&unk_1749095EC, 4u, 6 * dword_1748C95E8, Stream);
  }
  else
  {
    fread(&dword_1748C95E8, 4u, 1u, Stream);
    fread(&unk_1748C95EC, 4u, 3 * dword_1748C95E8, Stream);
    fread(&unk_1748F95EC, 4u, dword_1748C95E8, Stream);
    fread(&unk_1749095EC, 4u, 6 * dword_1748C95E8, Stream);
  }
  return 1;
}

