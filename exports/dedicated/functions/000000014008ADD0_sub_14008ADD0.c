/* Address: 0x14008add0 | Name: sub_14008ADD0 | Size: 1043 bytes */
int sub_14008ADD0()
{
  FILE *v0; // rax
  FILE *v1; // rsi
  int v2; // r15d
  int i; // r12d
  __int64 v4; // rbx
  __int64 v5; // r14
  char *v6; // rdi
  char *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // rdi
  char *v11; // rbx
  __int64 v12; // rdi
  char *v13; // rbx
  int v15[4]; // [rsp+20h] [rbp-248h] BYREF
  char FileName[512]; // [rsp+30h] [rbp-238h] BYREF

  sub_1400DBB30(FileName, "block/%s.sbl");
  v0 = fopen(FileName, "rb");
  v1 = v0;
  if ( v0 )
  {
    qword_19AAD8648(v15, 4, 1, v0);
    if ( (unsigned int)(v15[0] - 1) <= 1 )
    {
      qword_19AAD8648(&dword_15AD76740, 4, 1, v1);
      qword_19AAD8648(&dword_15AD76744, 4, 1, v1);
      qword_19AAD8648(&dword_15AD76748, 4, 1, v1);
      qword_19AAD8648(&dword_15AD7674C, 4, 1, v1);
      qword_19AAD8648(&dword_15AD76750, 4, 1, v1);
      qword_19AAD8648(&dword_15AD76754, 4, 1, v1);
      qword_19AAD8648(&dword_15AD76758, 4, 1, v1);
      qword_19AAD8648(&dword_15AD7675C, 4, 1, v1);
      qword_19AAD8648(&dword_15AD76760, 4, 1, v1);
      qword_19AAD8648(&dword_15AD76764, 4, 1, v1);
      v2 = 0;
      for ( i = 0; i < dword_15AD76764; ++i )
      {
        v4 = 348LL * i;
        qword_19AAD8648((char *)&unk_15AD76774 + v4, 4, 1, v1);
        qword_19AAD8648((char *)&unk_15AD7676C + v4, 4, 1, v1);
        qword_19AAD8648((char *)&unk_15AD76778 + v4, 4, 1, v1);
        qword_19AAD8648((char *)&unk_15AD76770 + v4, 4, 1, v1);
        qword_19AAD8648((char *)&unk_15AD768BC + v4, 4, 1, v1);
        qword_19AAD8648((char *)&unk_15AD768C0 + v4, 4, 1, v1);
        v5 = 4;
        v6 = (char *)&unk_15AD7683C + v4;
        v7 = (char *)&unk_15AD76700 + v4 + 124;
        do
        {
          v8 = 4;
          do
          {
            qword_19AAD8648(v7, 4, 3, v1);
            qword_19AAD8648(v6, 4, 2, v1);
            v7 += 12;
            v6 += 8;
            --v8;
          }
          while ( v8 );
          --v5;
        }
        while ( v5 );
      }
      dword_15ADA1F68 = 0;
      if ( v15[0] >= 2 )
      {
        qword_19AAD8648(&dword_15ADA1F68, 4, 1, v1);
        if ( dword_15ADA1F68 > 0 )
        {
          do
          {
            v9 = 124LL * v2;
            v10 = 8;
            v11 = (char *)&unk_15ADA1F6C + v9;
            do
            {
              qword_19AAD8648(v11, 4, 3, v1);
              v11 += 12;
              --v10;
            }
            while ( v10 );
            v12 = 6;
            v13 = (char *)&unk_15ADA1FCC + v9;
            do
            {
              qword_19AAD8648(v13, 4, 1, v1);
              v13 += 4;
              --v12;
            }
            while ( v12 );
            qword_19AAD8648((char *)&unk_15ADA1FE4 + v9, 4, 1, v1);
            ++v2;
          }
          while ( v2 < dword_15ADA1F68 );
        }
      }
    }
    LODWORD(v0) = fclose(v1);
  }
  return (int)v0;
}

