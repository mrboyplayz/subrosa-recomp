/* Address: 0x14025f02c | Name: ?setSBCS@@YAXPEAU__crt_multibyte_data@@@Z | Size: 144 bytes */
void __fastcall setSBCS(struct __crt_multibyte_data *a1)
{
  _BYTE *v1; // rbx
  __int64 v3; // rbp
  _WORD *v4; // rdi
  __int64 v5; // rcx
  signed __int64 v6; // rdi
  _BYTE *v7; // rcx
  __int64 v8; // rdx

  v1 = (char *)a1 + 24;
  v3 = 257;
  MEMORY[0x1401FCD30]((_WORD *)a1 + 12, 0, 0x101u);
  v4 = (_WORD *)((char *)a1 + 12);
  *(_QWORD *)((char *)a1 + 4) = 0;
  v5 = 6;
  *((_QWORD *)a1 + 68) = 0;
  while ( v5 )
  {
    *v4++ = 0;
    --v5;
  }
  v6 = &unk_1403025A0 - (_UNKNOWN *)a1;
  do
  {
    *v1 = v1[v6];
    ++v1;
    --v3;
  }
  while ( v3 );
  v7 = (char *)a1 + 281;
  v8 = 256;
  do
  {
    *v7 = v7[v6];
    ++v7;
    --v8;
  }
  while ( v8 );
}

