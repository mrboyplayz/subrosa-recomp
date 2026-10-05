/* Address: 0x14001a450 | Name: sub_14001A450 | Size: 1109 bytes */
int __fastcall sub_14001A450(char *a1, int a2)
{
  __int64 v2; // rsi
  FILE *v4; // rax
  FILE *v5; // rbx
  __int64 v6; // r12
  char *v7; // rcx
  char v8; // al
  __int64 v9; // r13
  __int64 v10; // r15
  int *v11; // rbp
  char *v12; // r14
  int v13; // esi
  __int64 v14; // rdi
  int v15; // esi
  char *v16; // rdi
  int v17; // esi
  __int64 v18; // rdi
  int v20; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-A0h]
  __int64 v22; // [rsp+30h] [rbp-98h]
  __int64 v23; // [rsp+38h] [rbp-90h]
  char FileName[64]; // [rsp+40h] [rbp-88h] BYREF

  v2 = a2;
  sub_1400DBB30(FileName, "buildblock/%s.sbl");
  v4 = fopen(FileName, "rb");
  v5 = v4;
  if ( v4 )
  {
    qword_19AAD8648(&v20, 4, 1, v4);
    if ( v20 == 1 )
    {
      v6 = 12352 * v2;
      v7 = &byte_143C7A200[12352 * v2 - (_QWORD)a1];
      do
      {
        v8 = *a1;
        a1[(_QWORD)v7] = *a1;
        ++a1;
      }
      while ( v8 );
      v9 = 0;
      v23 = 16;
      v10 = 0;
      v22 = 0;
      v21 = 0;
      v11 = (int *)((char *)&unk_143C7A274 + v6);
      v12 = (char *)&unk_143C7A3B8 + v6;
      do
      {
        qword_19AAD8648(v12 - 376, 4, 1, v5);
        qword_19AAD8648(v12 - 372, 4, 1, v5);
        qword_19AAD8648(v12 - 368, 4, 1, v5);
        qword_19AAD8648(v12 - 364, 4, 1, v5);
        qword_19AAD8648(v12 - 360, 4, 1, v5);
        qword_19AAD8648(v12 - 352, 4, 1, v5);
        v13 = 0;
        if ( *(v11 - 7) > 0 )
        {
          do
          {
            v14 = v6 + 12 * (v10 + v13);
            qword_19AAD8648((char *)&unk_143C7A25C + v14, 4, 1, v5);
            qword_19AAD8648((char *)&unk_143C7A260 + v14, 4, 1, v5);
            qword_19AAD8648((char *)&unk_143C7A264 + v14, 4, 1, v5);
            ++v13;
          }
          while ( v13 < *(v11 - 7) );
          v9 = v22;
        }
        qword_19AAD8648(v12 - 324, 4, 1, v5);
        v15 = 0;
        if ( *v11 > 0 )
        {
          do
          {
            v16 = &v12[20LL * v15 - (_QWORD)&unk_143C7A3B8];
            qword_19AAD8648((char *)&unk_143C7A278 + (_QWORD)v16, 4, 1, v5);
            qword_19AAD8648((char *)&unk_143C7A27C + (_QWORD)v16, 4, 1, v5);
            qword_19AAD8648((char *)&unk_143C7A280 + (_QWORD)v16, 4, 1, v5);
            qword_19AAD8648((char *)&unk_143C7A284 + (_QWORD)v16, 4, 1, v5);
            qword_19AAD8648((char *)&unk_143C7A288 + (_QWORD)v16, 4, 1, v5);
            ++v15;
          }
          while ( v15 < *v11 );
          v10 = v21;
          v9 = v22;
        }
        qword_19AAD8648(v12, 4, 1, v5);
        v17 = 0;
        if ( v11[81] > 0 )
        {
          do
          {
            v18 = v6 + 24 * (v9 + v17);
            qword_19AAD8648((char *)&unk_143C7A3BC + v18, 4, 1, v5);
            qword_19AAD8648((char *)&unk_143C7A3C4 + v18, 4, 1, v5);
            qword_19AAD8648((char *)&unk_143C7A3C8 + v18, 4, 1, v5);
            qword_19AAD8648((char *)&unk_143C7A3CC + v18, 4, 1, v5);
            qword_19AAD8648((char *)&unk_143C7A3D0 + v18, 4, 1, v5);
            ++v17;
          }
          while ( v17 < v11[81] );
          v10 = v21;
        }
        v10 += 64;
        v9 += 32;
        v12 += 768;
        v21 = v10;
        v11 += 192;
        v22 = v9;
        --v23;
      }
      while ( v23 );
    }
    LODWORD(v4) = fclose(v5);
  }
  return (int)v4;
}

