/* Address: 0x1400a63e0 | Name: sub_1400A63E0 | Stack analysis corrected in export snapshot. */
__int64 sub_1400A63E0()
{
  const char *v0; // r8
  char *v1; // rcx
  bool v2; // zf
  _QWORD *v3; // rax
  char *v4; // rcx
  const char *v5; // rdi
  const char *v6; // rbx
  const char *v7; // rax
  char *v8; // rcx
  _WORD *v9; // rcx
  int v10; // eax
  char *v11; // rcx
  char *v12; // rdx
  __int64 v14; // [rsp-20h] [rbp-2088h] BYREF
  char v15[4096]; // [rsp+10h] [rbp-2058h] BYREF
  __int64 v16; // [rsp+1010h] [rbp-1058h]

  LOBYTE(dword_140404A6C[83177973]) = 0;
  v0 = (const char *)MEMORY[0x140198E51]();
  v1 = (char *)&dword_140404A6C[83177972] + 3;
  do
    v2 = *++v1 == 0;
  while ( !v2 );
  strcpy(v1, v0);
  v3 = (_QWORD *)((char *)&dword_140404A6C[83177972] + 3);
  do
  {
    v2 = *((_BYTE *)v3 + 1) == 0;
    v3 = (_QWORD *)((char *)v3 + 1);
  }
  while ( !v2 );
  v4 = (char *)&dword_140404A6C[83177972] + 3;
  *v3 = 0x7469622D343620LL;
  do
    v2 = *++v4 == 0;
  while ( !v2 );
  strcpy(v4, "\n\n");
  v5 = (const char *)qword_140302FA8(7936);
  v6 = (const char *)qword_140302FA8(7937);
  v7 = (const char *)qword_140302FA8(7938);
  sub_140158AB0(v15, "GL_VENDOR: %s\nGL_RENDERER: %s\nGL_VERSION: %s\n", v5, v6, v7);
  v8 = (char *)&dword_140404A6C[83177972] + 3;
  do
    v2 = *++v8 == 0;
  while ( !v2 );
  strcpy(v8, v15);
  v9 = (_WORD *)((char *)&dword_140404A6C[83177972] + 3);
  do
  {
    v2 = *((_BYTE *)v9 + 1) == 0;
    v9 = (_WORD *)((char *)v9 + 1);
  }
  while ( !v2 );
  *v9 = 10;
  v10 = MEMORY[0x140198EB1]();
  sub_140158AB0(v15, "RAM: %d MB\n", v10);
  v11 = (char *)&dword_140404A6C[83177972] + 3;
  do
    v2 = *++v11 == 0;
  while ( !v2 );
  strcpy(v11, v15);
  if ( (unsigned int)MEMORY[0x140198EAB]() )
  {
    v12 = (char *)&dword_140404A6C[83177972] + 3;
    do
      v2 = *++v12 == 0;
    while ( !v2 );
    strcpy(v12, "SSE2\n");
  }
  MEMORY[0x140198EA5]();
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v16);
}

