/* Address: 0x140091310 | Name: sub_140091310 | Size: 846 bytes */
__int64 __fastcall sub_140091310(FILE *Stream, int a2)
{
  int v4; // ebp
  int i; // esi
  __int64 v6; // r14
  unsigned int *v7; // rcx
  unsigned int *v8; // r12
  int v9; // esi
  unsigned int *v10; // rcx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C(&Buffer, 4, 1, Stream);
    sub_14020CE0C(&dword_140404A6C[160292949], 4, 1, Stream);
  }
  else
  {
    fread(&Buffer, 4, 1, Stream);
    fread(&dword_140404A6C[160292949], 4, 1, Stream);
  }
  v4 = 0;
  for ( i = 0; i < (int)dword_140404A6C[160292949]; ++i )
  {
    v6 = 6LL * i;
    v7 = &dword_140404A6C[v6 + 160292950];
    v8 = &dword_140404A6C[v6 + 160292949];
    if ( a2 )
    {
      sub_14020CE0C(v7, 4, 1, Stream);
      sub_14020CE0C(v8 + 2, 4, 1, Stream);
      sub_14020CE0C(&dword_140404A6C[v6 + 160292952], 4, 1, Stream);
      sub_14020CE0C(&dword_140404A6C[v6 + 160292953], 4, 1, Stream);
      sub_14020CE0C(&dword_140404A6C[v6 + 160292954], 4, 1, Stream);
      sub_14020CE0C(&dword_140404A6C[v6 + 160292955], 4, 1, Stream);
    }
    else
    {
      fread(v7, 4, 1, Stream);
      fread(v8 + 2, 4, 1, Stream);
      fread(&dword_140404A6C[v6 + 160292952], 4, 1, Stream);
      fread(&dword_140404A6C[v6 + 160292953], 4, 1, Stream);
      fread(&dword_140404A6C[v6 + 160292954], 4, 1, Stream);
      fread(&dword_140404A6C[v6 + 160292955], 4, 1, Stream);
    }
  }
  if ( a2 )
    sub_14020CE0C(&dword_140404A6C[160294486], 4, 1, Stream);
  else
    fread(&dword_140404A6C[160294486], 4, 1, Stream);
  if ( (int)dword_140404A6C[160294486] > 0 )
  {
    v9 = 0;
    do
    {
      v10 = &dword_140404A6C[v9 + 160294487];
      if ( a2 )
        sub_14020CE0C(v10, 4, 3, Stream);
      else
        fread(v10, 4, 3, Stream);
      ++v4;
      v9 += 3;
    }
    while ( v4 < (int)dword_140404A6C[160294486] );
  }
  if ( a2 )
  {
    sub_14020CE0C(&dword_140404A6C[160343639], 4, 1, Stream);
    sub_14020CE0C(&dword_140404A6C[160343640], 4, 3 * dword_140404A6C[160343639], Stream);
    sub_14020CE0C(&dword_140404A6C[160392792], 4, (int)dword_140404A6C[160343639], Stream);
    sub_14020CE0C(&dword_140404A6C[160409176], 4, 6 * dword_140404A6C[160343639], Stream);
  }
  else
  {
    fread(&dword_140404A6C[160343639], 4, 1, Stream);
    fread(&dword_140404A6C[160343640], 4, 3 * dword_140404A6C[160343639], Stream);
    fread(&dword_140404A6C[160392792], 4, (int)dword_140404A6C[160343639], Stream);
    fread(&dword_140404A6C[160409176], 4, 6 * dword_140404A6C[160343639], Stream);
  }
  return 1;
}

