/* Address: 0x14001b9b0 | Name: sub_14001B9B0 | Size: 1095 bytes */
int __fastcall sub_14001B9B0(__int64 a1, int a2)
{
  __int64 v2; // rdi
  FILE *v3; // rax
  FILE *v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r15
  int *v7; // rsi
  __int64 v8; // r12
  char *v9; // r14
  int v10; // ebp
  __int64 v11; // rdi
  int v12; // ebp
  __int64 v13; // rdi
  int v14; // ebp
  __int64 v15; // r14
  __int64 v16; // rdi
  int v18; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+28h] [rbp-B0h]
  __int64 v20; // [rsp+30h] [rbp-A8h]
  __int64 v21; // [rsp+38h] [rbp-A0h]
  char *v22; // [rsp+40h] [rbp-98h]
  char FileName[64]; // [rsp+50h] [rbp-88h] BYREF

  v2 = a2;
  sub_1400DBB30(FileName, "buildblock/%s.sbl");
  v3 = fopen(FileName, "wb");
  v4 = v3;
  if ( v3 )
  {
    v18 = 1;
    ((void (__fastcall *)(int *, __int64, __int64, FILE *))qword_19AAD8640)(&v18, 4, 1, v3);
    v5 = 12352 * v2;
    v6 = 0;
    v20 = 0;
    v19 = 0;
    v21 = 16;
    v7 = (int *)((char *)&unk_143C7A274 + 12352 * v2);
    v8 = 12352 * v2;
    do
    {
      v9 = (char *)&unk_143C7A3B8 + v8;
      v22 = (char *)&unk_143C7A3B8 + v8;
      qword_19AAD8640((char *)&unk_143C7A3B8 + v8 - 376, 4, 1, v4, v18);
      qword_19AAD8640((char *)&unk_143C7A3B8 + v8 - 372, 4, 1, v4, v18);
      qword_19AAD8640((char *)&unk_143C7A3B8 + v8 - 368, 4, 1, v4, v18);
      qword_19AAD8640((char *)&unk_143C7A3B8 + v8 - 364, 4, 1, v4, v18);
      qword_19AAD8640((char *)&unk_143C7A3B8 + v8 - 360, 4, 1, v4, v18);
      qword_19AAD8640((char *)&unk_143C7A3B8 + v8 - 352, 4, 1, v4, v18);
      v10 = 0;
      if ( *(v7 - 7) > 0 )
      {
        do
        {
          v11 = v5 + 12 * (v6 + v10);
          qword_19AAD8640((char *)&unk_143C7A25C + v11, 4, 1, v4, v18);
          qword_19AAD8640((char *)&unk_143C7A260 + v11, 4, 1, v4, v18);
          qword_19AAD8640((char *)&unk_143C7A264 + v11, 4, 1, v4, v18);
          ++v10;
        }
        while ( v10 < *(v7 - 7) );
        v9 = v22;
      }
      qword_19AAD8640(v9 - 324, 4, 1, v4, v18);
      v12 = 0;
      if ( *v7 > 0 )
      {
        do
        {
          v13 = v8 + 20LL * v12;
          qword_19AAD8640((char *)&unk_143C7A278 + v13, 4, 1, v4, v18);
          qword_19AAD8640((char *)&unk_143C7A27C + v13, 4, 1, v4, v18);
          qword_19AAD8640((char *)&unk_143C7A280 + v13, 4, 1, v4, v18);
          qword_19AAD8640((char *)&unk_143C7A284 + v13, 4, 1, v4, v18);
          qword_19AAD8640((char *)&unk_143C7A288 + v13, 4, 1, v4, v18);
          ++v12;
        }
        while ( v12 < *v7 );
        v6 = v19;
      }
      qword_19AAD8640(v9, 4, 1, v4, v18);
      v14 = 0;
      if ( v7[81] > 0 )
      {
        v15 = v20;
        do
        {
          v16 = v5 + 24 * (v15 + v14);
          qword_19AAD8640((char *)&unk_143C7A3BC + v16, 4, 1, v4, v18);
          qword_19AAD8640((char *)&unk_143C7A3C4 + v16, 4, 1, v4, v18);
          qword_19AAD8640((char *)&unk_143C7A3C8 + v16, 4, 1, v4, v18);
          qword_19AAD8640((char *)&unk_143C7A3CC + v16, 4, 1, v4, v18);
          qword_19AAD8640((char *)&unk_143C7A3D0 + v16, 4, 1, v4, v18);
          ++v14;
        }
        while ( v14 < v7[81] );
        v6 = v19;
      }
      v20 += 32;
      v6 += 64;
      v8 += 768;
      v7 += 192;
      v19 = v6;
      --v21;
    }
    while ( v21 );
    LODWORD(v3) = fclose(v4);
  }
  return (int)v3;
}

