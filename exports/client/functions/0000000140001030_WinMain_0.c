/* Address: 0x140001030 | Name: WinMain_0 | Size: 372 bytes */
__int64 WinMain_0()
{
  __int64 v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rbp
  int v4; // ebx
  int v5; // edi
  _QWORD *v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // esi
  _QWORD *v11; // rdi
  int pNumArgs; // [rsp+40h] [rbp+8h] BYREF

  v0 = ((__int64 (*)(void))GetCommandLineW)();
  v1 = ((__int64 (__fastcall *)(__int64, int *))CommandLineToArgvW)(v0, &pNumArgs);
  if ( !v1 || (v2 = MEMORY[0x14026C9DE](pNumArgs + 1, 8), (v3 = v2) == 0) )
  {
LABEL_11:
    MEMORY[0x140198F95](16, "Fatal Error", "Out of memory - aborting");
    return 0;
  }
  v4 = 0;
  v5 = 0;
  if ( pNumArgs > 0 )
  {
    v6 = (_QWORD *)v1;
    v7 = v2 - v1;
    do
    {
      v8 = MEMORY[0x14026C9D8](*v6);
      v9 = MEMORY[0x14026C9D2]("UTF-8", "UTF-16LE", *v6, 2 * v8 + 2);
      *(_QWORD *)((char *)v6 + v7) = v9;
      if ( !v9 )
        goto LABEL_11;
      ++v5;
      ++v6;
    }
    while ( v5 < pNumArgs );
  }
  *(_QWORD *)(v3 + 8LL * v5) = 0;
  ((void (__fastcall *)(__int64))LocalFree)(v1);
  MEMORY[0x14026C9CC]();
  v10 = app_main_utf8_candidate(pNumArgs, v3);
  if ( pNumArgs > 0 )
  {
    v11 = (_QWORD *)v3;
    do
    {
      MEMORY[0x14026C9C6](*v11);
      ++v4;
      ++v11;
    }
    while ( v4 < pNumArgs );
  }
  MEMORY[0x14026C9C6](v3);
  return v10;
}

