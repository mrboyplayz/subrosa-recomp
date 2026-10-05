/* Address: 0x14004ee10 | Name: sub_14004EE10 | Size: 348 bytes */
__int64 __fastcall sub_14004EE10(FILE *Stream, int a2)
{
  int v5; // ebp
  int *v6; // rdi
  __int64 v7; // r14
  int *v8; // rcx
  int i; // ebx
  char *v10; // rcx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    fwrite(&Buffer, 4u, 1u, Stream);
    fwrite(&dword_174ABEED8, 4u, 1u, Stream);
  }
  else
  {
    fread(&Buffer, 4u, 1u, Stream);
    if ( Buffer != 1 )
      return 0;
    fread(&dword_174ABEED8, 4u, 1u, Stream);
  }
  v5 = 0;
  if ( dword_174ABEED8 > 0 )
  {
    v6 = dword_174ABEEDC;
    do
    {
      v7 = 13LL * v5;
      v8 = &dword_174ABEEDC[v7];
      if ( a2 )
        fwrite(v8, 4u, 1u, Stream);
      else
        fread(v8, 4u, 1u, Stream);
      for ( i = 0; i < *v6; ++i )
      {
        v10 = (char *)&unk_174ABEEE0 + 12 * i + v7 * 4;
        if ( a2 )
          fwrite(v10, 4u, 3u, Stream);
        else
          fread(v10, 4u, 3u, Stream);
      }
      ++v5;
      v6 += 13;
    }
    while ( v5 < dword_174ABEED8 );
  }
  return 1;
}

