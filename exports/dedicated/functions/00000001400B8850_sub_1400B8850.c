/* Address: 0x1400b8850 | Name: sub_1400B8850 | Size: 590 bytes */
int sub_1400B8850()
{
  FILE *v0; // rax
  FILE *v1; // rbx
  int i; // esi
  __int64 v3; // rdi
  int v5; // [rsp+20h] [rbp-8h]
  int v6; // [rsp+20h] [rbp-8h]
  int v7; // [rsp+20h] [rbp-8h]
  int v8; // [rsp+20h] [rbp-8h]
  int v9; // [rsp+20h] [rbp-8h]
  int v10; // [rsp+20h] [rbp-8h]
  int v11; // [rsp+20h] [rbp-8h]
  int v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+20h] [rbp-8h]
  int v14; // [rsp+20h] [rbp-8h]
  int v15; // [rsp+20h] [rbp-8h]
  int v16; // [rsp+20h] [rbp-8h]
  int v17; // [rsp+20h] [rbp-8h]
  int v18; // [rsp+20h] [rbp-8h]
  int v19; // [rsp+20h] [rbp-8h]
  int v20; // [rsp+20h] [rbp-8h]
  int v21; // [rsp+30h] [rbp+8h] BYREF

  _chdir(byte_196ABD6C0);
  v0 = fopen("server.srk", "wb");
  v1 = v0;
  if ( v0 )
  {
    v21 = 8;
    ((void (__fastcall *)(int *, __int64, __int64, FILE *))qword_19AAD8640)(&v21, 4, 1, v0);
    qword_19AAD8640(dword_16DDCBA20, 4, 1, v1, v5);
    qword_19AAD8640(&dword_16DDCBA24, 4, 1, v1, v6);
    for ( i = 0; i < dword_16DDCBA24; ++i )
    {
      v3 = 112LL * i;
      qword_19AAD8640((char *)&unk_16DDCBA30 + v3, 4, 1, v1, v7);
      qword_19AAD8640((char *)&unk_16DDCBA34 + v3, 4, 1, v1, v8);
      qword_19AAD8640((char *)&unk_16DDCBA38 + v3, 8, 1, v1, v9);
      qword_19AAD8640((char *)&unk_16DDCBA28 + v3, 4, 1, v1, v10);
      qword_19AAD8640((char *)&unk_16DDCBA2C + v3, 4, 1, v1, v11);
      qword_19AAD8640((char *)&unk_16DDCBA40 + v3, 1, 32, v1, v12);
      qword_19AAD8640((char *)&unk_16DDCBA64 + v3, 4, 1, v1, v13);
      qword_19AAD8640((char *)&unk_16DDCBA68 + v3, 4, 1, v1, v14);
      qword_19AAD8640((char *)&unk_16DDCBA6C + v3, 4, 1, v1, v15);
      qword_19AAD8640((char *)&unk_16DDCBA74 + v3, 4, 1, v1, v16);
      qword_19AAD8640((char *)&unk_16DDCBA7C + v3, 4, 1, v1, v17);
      qword_19AAD8640((char *)&unk_16DDCBA80 + v3, 4, 1, v1, v18);
      qword_19AAD8640((char *)&unk_16DDCBA84 + v3, 4, 1, v1, v19);
      qword_19AAD8640((char *)&unk_16DDCBA90 + v3, 4, 1, v1, v20);
    }
    fclose(v1);
  }
  return _chdir(DstBuf);
}

