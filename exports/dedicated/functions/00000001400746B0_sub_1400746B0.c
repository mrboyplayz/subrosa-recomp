/* Address: 0x1400746b0 | Name: sub_1400746B0 | Size: 813 bytes */
__int64 __fastcall sub_1400746B0(FILE *Stream, int a2)
{
  int v5; // ebx
  int v6; // esi
  int *v7; // rcx
  int v8; // eax
  int *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbp
  char *v12; // rcx
  char *v13; // rbx
  int v14; // ebx
  __int64 v15; // rsi
  int *v16; // rcx
  char *v17; // rcx
  int v18; // r15d
  int *v19; // rsi
  char *v20; // rcx
  int v21; // ebx
  __int64 v22; // rbp
  int *v23; // rcx
  int Buffer; // [rsp+68h] [rbp+10h] BYREF
  int v25; // [rsp+70h] [rbp+18h]
  __int64 v26; // [rsp+78h] [rbp+20h]

  Buffer = 1;
  if ( a2 )
  {
    fwrite(&Buffer, 4u, 1u, Stream);
    fwrite(&dword_18EDD1BB0, 4u, 1u, Stream);
  }
  else
  {
    fread(&Buffer, 4u, 1u, Stream);
    if ( Buffer != 1 )
      return 0;
    fread(&dword_18EDD1BB0, 4u, 1u, Stream);
  }
  v5 = 0;
  if ( dword_18EDD1BB0 > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_18EDBEBA0[v6 + 19461];
      if ( a2 )
        fwrite(v7, 4u, 3u, Stream);
      else
        fread(v7, 4u, 3u, Stream);
      ++v5;
      v6 += 3;
    }
    while ( v5 < dword_18EDD1BB0 );
  }
  if ( a2 )
    fwrite(&dword_18EDD33B4, 4u, 1u, Stream);
  else
    fread(&dword_18EDD33B4, 4u, 1u, Stream);
  v8 = 0;
  v25 = 0;
  if ( dword_18EDD33B4 > 0 )
  {
    v9 = (int *)&unk_18EDD3BC8;
    do
    {
      v10 = v8;
      v11 = 26648LL * v8;
      v26 = v11;
      v12 = (char *)&dword_18EDBEBA0[20998] + v11;
      v13 = (char *)dword_18EDBEBA0 + v11;
      if ( a2 )
      {
        fwrite(v12, 4u, 3u, Stream);
        fwrite(v13 + 84004, 4u, 1u, Stream);
      }
      else
      {
        fread(v12, 4u, 3u, Stream);
        fread(v13 + 84004, 4u, 1u, Stream);
      }
      v14 = 0;
      if ( *(v9 - 513) > 0 )
      {
        v15 = 6662 * v10;
        do
        {
          v16 = &dword_18EDBEBA0[v15 + 21002 + v14];
          if ( a2 )
            fwrite(v16, 4u, 1u, Stream);
          else
            fread(v16, 4u, 1u, Stream);
          ++v14;
        }
        while ( v14 < *(v9 - 513) );
      }
      v17 = (char *)&dword_18EDBEBA0[21514] + v11;
      if ( a2 )
        fwrite(v17, 4u, 1u, Stream);
      else
        fread(v17, 4u, 1u, Stream);
      v18 = 0;
      if ( *v9 > 0 )
      {
        v19 = v9 + 2;
        do
        {
          v20 = (char *)&unk_18EDD3BD0 + 36 * v18 + v11;
          if ( a2 )
            fwrite(v20, 4u, 1u, Stream);
          else
            fread(v20, 4u, 1u, Stream);
          v21 = 0;
          if ( *v19 > 0 )
          {
            v22 = 9LL * v18 + 6662LL * v25;
            do
            {
              v23 = &dword_18EDBEBA0[v22 + 21517 + v21];
              if ( a2 )
                fwrite(v23, 4u, 1u, Stream);
              else
                fread(v23, 4u, 1u, Stream);
              ++v21;
            }
            while ( v21 < *v19 );
            v11 = v26;
          }
          ++v18;
          v19 += 9;
        }
        while ( v18 < *v9 );
      }
      v9 += 6662;
      v8 = ++v25;
    }
    while ( v25 < dword_18EDD33B4 );
  }
  return 1;
}

