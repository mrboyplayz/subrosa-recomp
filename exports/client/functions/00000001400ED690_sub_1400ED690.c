/* Address: 0x1400ed690 | Name: sub_1400ED690 | Size: 307 bytes */
__int64 __fastcall sub_1400ED690(const char *a1)
{
  char *v2; // rax
  FILE *v4; // rsi
  int v5; // edi
  FILE *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int *v11; // rbx
  __int64 v12; // rdi
  __int64 v14; // [rsp+0h] [rbp-238h] BYREF
  char v15[512]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v16; // [rsp+220h] [rbp-18h]

  sub_140158AB0(v15, "%s\r\n", a1);
  v2 = (char *)&dword_140404A6C[71741524] + 3;
  while ( *++v2 != 0 )
    ;
  v4 = (FILE *)strcpy(v2, v15);
  v5 = 0;
  v6 = (FILE *)MEMORY[0x14020B8D8](a1, "rb");
  if ( v6 )
  {
    v7 = sub_14020BB2C(v6);
    if ( v7 != -1 )
    {
      v11 = &dword_140404A6C[71823477];
      do
      {
        *(_BYTE *)v11 = v7;
        v11 = (unsigned int *)((char *)v11 + 1);
        ++v5;
        v7 = sub_14020BB2C(v4);
      }
      while ( v7 != -1 );
    }
    if ( (unsigned __int64)v5 >= 0x20000 )
      sub_1401F8694(v9, v8, v10);
    *((_BYTE *)&dword_140404A6C[71823477] + v5) = 0;
    sub_14020B9E8(v4);
    v12 = j__malloc_base(v5 + 1);
    MEMORY[0x1401FC920](v12, &dword_140404A6C[71823477]);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v16);
}

