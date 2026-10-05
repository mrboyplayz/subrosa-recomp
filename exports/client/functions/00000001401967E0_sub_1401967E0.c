/* Address: 0x1401967e0 | Name: sub_1401967E0 | Size: 1400 bytes */
__int64 __fastcall sub_1401967E0(__int64 a1, int a2)
{
  int v4; // r13d
  int v5; // r12d
  __int64 v6; // rsi
  unsigned int *v7; // rcx
  unsigned int *v8; // rdi
  __int64 v9; // r15
  unsigned int *v10; // rdi
  unsigned int *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned int *v15; // rdi
  __int64 v16; // rsi
  unsigned int *v17; // rdi
  unsigned int *v18; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 0;
  Buffer = 1;
  if ( !a2 )
  {
    fread(&Buffer, 4, 1, a1);
    if ( Buffer == 1 )
    {
      fread(&dword_140404A6C[19852365], 4, 1, a1);
      fread(&dword_140404A6C[19852366], 4, 1, a1);
      fread(&dword_140404A6C[19852367], 4, 1, a1);
      fread(&dword_140404A6C[19852368], 4, 1, a1);
      fread(&dword_140404A6C[19852369], 4, 1, a1);
      fread(&dword_140404A6C[19852370], 4, 1, a1);
      fread(&dword_140404A6C[19852371], 4, 1, a1);
      fread(&dword_140404A6C[19852372], 4, 1, a1);
      fread(&dword_140404A6C[19852373], 4, 1, a1);
      fread(&dword_140404A6C[19852374], 4, 1, a1);
      goto LABEL_6;
    }
    return 0;
  }
  sub_14020CE0C(&Buffer, 4, 1, a1);
  sub_14020CE0C(&dword_140404A6C[19852365], 4, 1, a1);
  sub_14020CE0C(&dword_140404A6C[19852366], 4, 1, a1);
  sub_14020CE0C(&dword_140404A6C[19852367], 4, 1, a1);
  sub_14020CE0C(&dword_140404A6C[19852368], 4, 1, a1);
  sub_14020CE0C(&dword_140404A6C[19852369], 4, 1, a1);
  sub_14020CE0C(&dword_140404A6C[19852370], 4, 1, a1);
  sub_14020CE0C(&dword_140404A6C[19852371], 4, 1, a1);
  sub_14020CE0C(&dword_140404A6C[19852372], 4, 1, a1);
  sub_14020CE0C(&dword_140404A6C[19852373], 4, 1, a1);
  sub_14020CE0C(&dword_140404A6C[19852374], 4, 1, a1);
LABEL_6:
  v4 = 0;
  v5 = 0;
  if ( (int)dword_140404A6C[19852374] > 0 )
  {
    do
    {
      v6 = 87LL * v5;
      v7 = &dword_140404A6C[v6 + 19852378];
      v8 = &dword_140404A6C[v6 + 19852349];
      if ( a2 )
      {
        sub_14020CE0C(v7, 4, 1, a1);
        sub_14020CE0C(v8 + 27, 4, 1, a1);
        sub_14020CE0C(&dword_140404A6C[v6 + 19852379], 4, 1, a1);
        sub_14020CE0C(&dword_140404A6C[v6 + 19852377], 4, 1, a1);
        sub_14020CE0C(&dword_140404A6C[v6 + 19852460], 4, 1, a1);
        sub_14020CE0C(&dword_140404A6C[v6 + 19852461], 4, 1, a1);
      }
      else
      {
        fread(v7, 4, 1, a1);
        fread(v8 + 27, 4, 1, a1);
        fread(&dword_140404A6C[v6 + 19852379], 4, 1, a1);
        fread(&dword_140404A6C[v6 + 19852377], 4, 1, a1);
        fread(&dword_140404A6C[v6 + 19852460], 4, 1, a1);
        fread(&dword_140404A6C[v6 + 19852461], 4, 1, a1);
      }
      v9 = 4;
      v10 = &dword_140404A6C[v6 + 19852428];
      v11 = &dword_140404A6C[v6 + 19852380];
      do
      {
        v12 = 4;
        do
        {
          if ( a2 )
          {
            sub_14020CE0C(v11, 4, 3, a1);
            sub_14020CE0C(v10, 4, 2, a1);
          }
          else
          {
            fread(v11, 4, 3, a1);
            fread(v10, 4, 2, a1);
          }
          v11 += 3;
          v10 += 2;
          --v12;
        }
        while ( v12 );
        --v9;
      }
      while ( v9 );
      ++v5;
    }
    while ( v5 < (int)dword_140404A6C[19852374] );
    v4 = 0;
  }
  if ( a2 )
    sub_14020CE0C(&dword_140404A6C[19896919], 4, 1, a1);
  else
    fread(&dword_140404A6C[19896919], 4, 1, a1);
  if ( (int)dword_140404A6C[19896919] > 0 )
  {
    do
    {
      v13 = 31LL * v4;
      v14 = 8;
      v15 = &dword_140404A6C[v13 + 19896920];
      do
      {
        if ( a2 )
          sub_14020CE0C(v15, 4, 3, a1);
        else
          fread(v15, 4, 3, a1);
        v15 += 3;
        --v14;
      }
      while ( v14 );
      v16 = 6;
      v17 = &dword_140404A6C[v13 + 19896944];
      do
      {
        if ( a2 )
          sub_14020CE0C(v17, 4, 1, a1);
        else
          fread(v17, 4, 1, a1);
        ++v17;
        --v16;
      }
      while ( v16 );
      v18 = &dword_140404A6C[31 * v4 + 19896950];
      if ( a2 )
        sub_14020CE0C(v18, 4, 1, a1);
      else
        fread(v18, 4, 1, a1);
      ++v4;
    }
    while ( v4 < (int)dword_140404A6C[19896919] );
  }
  return 1;
}

