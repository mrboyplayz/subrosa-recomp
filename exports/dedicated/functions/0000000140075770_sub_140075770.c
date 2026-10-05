/* Address: 0x140075770 | Name: sub_140075770 | Size: 685 bytes */
__int64 __fastcall sub_140075770(int a1, FILE *a2, int a3)
{
  __int64 v4; // rbx
  int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rbp
  int *v8; // r14
  int i; // ebx
  char *v11; // rcx
  int *v12; // rcx
  int v13; // eax
  int *v14; // r15
  __int64 v15; // r14
  char *v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  int *v19; // rcx
  int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a1;
  v24 = 2;
  v5 = a3;
  if ( a3 )
  {
    fwrite(&v24, 4u, 1u, a2);
    v6 = 9730 * v4;
    v7 = v4;
    v8 = &dword_18EDBEBA0[9730 * v4];
    fwrite(v8, 4u, 1u, a2);
  }
  else
  {
    fread(&v24, 4u, 1u, a2);
    if ( v24 != 2 )
      return 0;
    v6 = 9730 * v4;
    v7 = v4;
    v8 = &dword_18EDBEBA0[9730 * v4];
    fread(v8, 4u, 1u, a2);
  }
  for ( i = 0; i < *v8; ++i )
  {
    v11 = (char *)&unk_18EDBEBA4 + 12 * i + v6 * 4;
    if ( v5 )
      fwrite(v11, 4u, 3u, a2);
    else
      fread(v11, 4u, 3u, a2);
  }
  v12 = &dword_18EDC1BA4[v6];
  if ( v5 )
    fwrite(v12, 4u, 1u, a2);
  else
    fread(v12, 4u, 1u, a2);
  v13 = 0;
  v20 = 0;
  if ( dword_18EDC1BA4[v6] > 0 )
  {
    v14 = (int *)((char *)&unk_18EDC1BA8 + v6 * 4);
    do
    {
      v15 = v13;
      v22 = 52LL * v13;
      v16 = (char *)&unk_18EDC1BA8 + v22 + v6 * 4;
      if ( v5 )
        fwrite(v16, 4u, 1u, a2);
      else
        fread(v16, 4u, 1u, a2);
      v17 = 0;
      if ( *v14 > 0 )
      {
        v18 = 13 * v15 + 9730 * v7;
        v21 = 4865 * v7;
        do
        {
          v19 = &dword_18EDBEBA0[v18 + 3075 + v17];
          if ( a3 )
          {
            fwrite(v19, 4u, 1u, a2);
            fwrite((char *)&unk_18EDC1BBC + 8 * v17 + 8 * v21 + v22, 4u, 2u, a2);
          }
          else
          {
            fread(v19, 4u, 1u, a2);
            fread((char *)&unk_18EDC1BBC + 8 * v17 + 8 * v21 + v22, 4u, 2u, a2);
          }
          v18 = 13 * v15 + 9730 * v7;
          ++v17;
        }
        while ( v17 < *v14 );
        v5 = a3;
      }
      v13 = v20 + 1;
      v14 += 13;
      v20 = v13;
    }
    while ( v13 < dword_18EDC1BA4[v6] );
  }
  return 1;
}

