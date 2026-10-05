/* Address: 0x140090d00 | Name: sub_140090D00 | Size: 795 bytes */
__int64 __fastcall sub_140090D00(FILE *Stream, int a2)
{
  int v5; // ebx
  int v6; // esi
  unsigned int *v7; // rcx
  int v8; // eax
  unsigned int *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbp
  char *v12; // rcx
  char *v13; // rbx
  signed int v14; // ebx
  __int64 v15; // rsi
  unsigned int *v16; // rcx
  char *v17; // rcx
  signed int v18; // r15d
  int *v19; // rsi
  char *v20; // rcx
  int v21; // ebx
  __int64 v22; // rbp
  unsigned int *v23; // rcx
  int Buffer; // [rsp+68h] [rbp+10h] BYREF
  int v25; // [rsp+70h] [rbp+18h]
  __int64 v26; // [rsp+78h] [rbp+20h]

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C(&Buffer, 4, 1, Stream);
    sub_14020CE0C(&dword_140404A6C[160802395], 4, 1, Stream);
  }
  else
  {
    fread(&Buffer, 4, 1, Stream);
    if ( Buffer != 1 )
      return 0;
    fread(&dword_140404A6C[160802395], 4, 1, Stream);
  }
  v5 = 0;
  if ( (int)dword_140404A6C[160802395] > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_140404A6C[v6 + 160802396];
      if ( a2 )
        sub_14020CE0C(v7, 4, 3, Stream);
      else
        fread(v7, 4, 3, Stream);
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)dword_140404A6C[160802395] );
  }
  if ( a2 )
    sub_14020CE0C(&dword_140404A6C[160803932], 4, 1, Stream);
  else
    fread(&dword_140404A6C[160803932], 4, 1, Stream);
  v8 = 0;
  v25 = 0;
  if ( (int)dword_140404A6C[160803932] > 0 )
  {
    v9 = &dword_140404A6C[160804449];
    do
    {
      v10 = v8;
      v11 = 26648LL * v8;
      v26 = v11;
      v12 = (char *)&dword_140404A6C[160803933] + v11;
      v13 = (char *)&dword_140404A6C[160292949] + v11;
      if ( a2 )
      {
        sub_14020CE0C(v12, 4, 3, Stream);
        sub_14020CE0C(v13 + 2043948, 4, 1, Stream);
      }
      else
      {
        fread(v12, 4, 3, Stream);
        fread(v13 + 2043948, 4, 1, Stream);
      }
      v14 = 0;
      if ( (int)*(v9 - 513) > 0 )
      {
        v15 = 6662 * v10;
        do
        {
          v16 = &dword_140404A6C[v15 + 160803937 + v14];
          if ( a2 )
            sub_14020CE0C(v16, 4, 1, Stream);
          else
            fread(v16, 4, 1, Stream);
          ++v14;
        }
        while ( v14 < (int)*(v9 - 513) );
      }
      v17 = (char *)&dword_140404A6C[160804449] + v11;
      if ( a2 )
        sub_14020CE0C(v17, 4, 1, Stream);
      else
        fread(v17, 4, 1, Stream);
      v18 = 0;
      if ( (int)*v9 > 0 )
      {
        v19 = (int *)(v9 + 2);
        do
        {
          v20 = (char *)&dword_140404A6C[9 * v18 + 160804451] + v11;
          if ( a2 )
            sub_14020CE0C(v20, 4, 1, Stream);
          else
            fread(v20, 4, 1, Stream);
          v21 = 0;
          if ( *v19 > 0 )
          {
            v22 = 9LL * v18 + 6662LL * v25;
            do
            {
              v23 = &dword_140404A6C[v22 + 160804452 + v21];
              if ( a2 )
                sub_14020CE0C(v23, 4, 1, Stream);
              else
                fread(v23, 4, 1, Stream);
              ++v21;
            }
            while ( v21 < *v19 );
            v11 = v26;
          }
          ++v18;
          v19 += 9;
        }
        while ( v18 < (int)*v9 );
      }
      v9 += 6662;
      v8 = ++v25;
    }
    while ( v25 < (int)dword_140404A6C[160803932] );
  }
  return 1;
}

