/* Address: 0x140091020 | Name: sub_140091020 | Size: 739 bytes */
__int64 __fastcall sub_140091020(__int64 a1, int a2)
{
  int v5; // ebx
  int v6; // esi
  unsigned int *v7; // rcx
  int v8; // r12d
  unsigned int *v9; // rbp
  unsigned int *v10; // rcx
  signed int v11; // ebx
  __int64 v12; // r15
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  int Buffer; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]
  unsigned __int64 v17; // [rsp+78h] [rbp+20h]

  Buffer = 2;
  if ( a2 )
  {
    sub_14020CE0C(&Buffer, 4, 1, a1);
    sub_14020CE0C(&dword_140404A6C[160507480], 4, 1, a1);
    sub_14020CE0C(&dword_140404A6C[160507481], 4, 1, a1);
  }
  else
  {
    fread(&Buffer, 4, 1, a1);
    if ( Buffer != 2 )
      return 0;
    fread(&dword_140404A6C[160507480], 4, 1, a1);
    fread(&dword_140404A6C[160507481], 4, 1, a1);
  }
  v5 = 0;
  if ( (int)dword_140404A6C[160507481] > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_140404A6C[v6 + 160507482];
      if ( a2 )
      {
        sub_14020CE0C(v7, 4, 3, a1);
        sub_14020CE0C(&dword_140404A6C[v5 + 160556634], 4, 1, a1);
      }
      else
      {
        fread(v7, 4, 3, a1);
        fread(&dword_140404A6C[v5 + 160556634], 4, 1, a1);
      }
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)dword_140404A6C[160507481] );
  }
  if ( a2 )
    sub_14020CE0C(&dword_140404A6C[160573018], 4, 1, a1);
  else
    fread(&dword_140404A6C[160573018], 4, 1, a1);
  v8 = 0;
  v16 = 0;
  if ( (int)dword_140404A6C[160573018] > 0 )
  {
    v9 = &dword_140404A6C[160573019];
    do
    {
      v10 = &dword_140404A6C[14 * v8 + 160573019];
      v17 = 56LL * v8;
      if ( a2 )
        sub_14020CE0C(v10, 4, 1, a1);
      else
        fread(v10, 4, 1, a1);
      v11 = 0;
      if ( (int)*v9 > 0 )
      {
        v12 = 7LL * v8;
        do
        {
          v13 = &dword_140404A6C[14 * v8 + 160573020 + v11];
          if ( a2 )
          {
            sub_14020CE0C(v13, 4, 1, a1);
            sub_14020CE0C(&dword_140404A6C[2 * v12 + 160573024 + 2 * v11], 4, 2, a1);
          }
          else
          {
            fread(v13, 4, 1, a1);
            fread(&dword_140404A6C[2 * v12 + 160573024 + 2 * v11], 4, 2, a1);
          }
          ++v11;
        }
        while ( v11 < (int)*v9 );
        v8 = v16;
      }
      v14 = &dword_140404A6C[v17 / 4 + 160573032];
      if ( a2 )
        sub_14020CE0C(v14, 4, 1, a1);
      else
        fread(v14, 4, 1, a1);
      ++v8;
      v9 += 14;
      v16 = v8;
    }
    while ( v8 < (int)dword_140404A6C[160573018] );
  }
  return 1;
}

