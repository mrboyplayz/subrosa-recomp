/* Address: 0x14008a390 | Name: sub_14008A390 | Size: 1051 bytes */
__int64 sub_14008A390()
{
  FILE *v0; // rax
  FILE *v1; // rbx
  int i; // esi
  __int64 v3; // rdi
  FILE *v4; // rax
  FILE *v5; // rbx
  int j; // eax
  int v7; // r9d
  __int64 v8; // rdx
  int v9; // eax
  char v10; // r8
  int v11; // r9d
  int v12; // ecx
  __int64 v13; // rdx
  _DWORD *v14; // rax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  dword_16DDCBA20[0] = sub_14004F640();
  dword_16DDCBA24 = 0;
  _chdir(byte_196ABD6C0);
  v0 = fopen("server.srk", "rb");
  v1 = v0;
  if ( v0 )
  {
    qword_19AAD8648(&v16, 4, 1, v0);
    if ( (unsigned int)(v16 - 7) <= 1 )
    {
      qword_19AAD8648(dword_16DDCBA20, 4, 1, v1);
      qword_19AAD8648(&dword_16DDCBA24, 4, 1, v1);
      for ( i = 0; i < dword_16DDCBA24; ++i )
      {
        v3 = 112LL * i;
        qword_19AAD8648((char *)&unk_16DDCBA30 + v3, 4, 1, v1);
        qword_19AAD8648((char *)&unk_16DDCBA34 + v3, 4, 1, v1);
        qword_19AAD8648((char *)&unk_16DDCBA38 + v3, 8, 1, v1);
        qword_19AAD8648((char *)&unk_16DDCBA28 + v3, 4, 1, v1);
        qword_19AAD8648((char *)&unk_16DDCBA2C + v3, 4, 1, v1);
        qword_19AAD8648((char *)&unk_16DDCBA40 + v3, 1, 32, v1);
        qword_19AAD8648((char *)&unk_16DDCBA64 + v3, 4, 1, v1);
        if ( v16 >= 8 )
        {
          qword_19AAD8648((char *)&unk_16DDCBA68 + v3, 4, 1, v1);
          qword_19AAD8648((char *)&unk_16DDCBA6C + v3, 4, 1, v1);
        }
        qword_19AAD8648((char *)&unk_16DDCBA74 + v3, 4, 1, v1);
        qword_19AAD8648((char *)&unk_16DDCBA7C + v3, 4, 1, v1);
        qword_19AAD8648((char *)&unk_16DDCBA80 + v3, 4, 1, v1);
        qword_19AAD8648((char *)&unk_16DDCBA84 + v3, 4, 1, v1);
        qword_19AAD8648((char *)&unk_16DDCBA90 + v3, 4, 1, v1);
      }
    }
    fclose(v1);
  }
  _chdir(DstBuf);
  dword_16E18BA30 = 0;
  dword_1406A6784 = 0;
  v4 = fopen("serveradmin.txt", "rb");
  v5 = v4;
  if ( v4 )
  {
    for ( j = fgetc(v4); j != -1; j = fgetc(v5) )
      byte_1406A6788[dword_1406A6784++] = j;
    byte_1406A6788[dword_1406A6784] = 0;
    fclose(v5);
  }
  v7 = 0;
  dword_1406A6780 = 0;
  while ( 1 )
  {
LABEL_13:
    while ( v7 < dword_1406A6784 )
    {
      v8 = 0;
      if ( v7 < dword_1406A6784 )
      {
        v9 = v7;
        do
        {
          v10 = aAdminphone[v8];
          if ( !v10 )
            break;
          if ( v10 != byte_1406A6788[v9] )
            break;
          ++v9;
          ++v8;
        }
        while ( v9 < dword_1406A6784 );
      }
      if ( !aAdminphone[v8] )
        break;
      dword_1406A6780 = ++v7;
    }
    dword_1406A6780 = v7 + 11;
    if ( v7 + 11 >= dword_1406A6784 )
      return sub_140090810();
    v11 = sub_1400AF380();
    if ( dword_16E18BA30 < 1024 )
      dword_16DDCBA20[dword_16E18BA30++ + 983045] = v11;
    v12 = 0;
    v13 = 0;
    if ( dword_16DDCBA24 <= 0 )
      goto LABEL_30;
    v14 = &unk_16DDCBA34;
    while ( *v14 != v11 )
    {
      ++v12;
      ++v13;
      v14 += 28;
      if ( v12 >= dword_16DDCBA24 )
      {
        v7 = dword_1406A6780;
        goto LABEL_13;
      }
    }
    if ( v13 == -1 )
    {
LABEL_30:
      v7 = dword_1406A6780;
    }
    else
    {
      v7 = dword_1406A6780;
      dword_16DDCBA20[28 * v13 + 29] = 1;
    }
  }
}

