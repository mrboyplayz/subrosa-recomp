/* Address: 0x14023d5b8 | Name: sub_14023D5B8 | Size: 1200 bytes */
__int64 __fastcall sub_14023D5B8(
        __int64 a1,
        unsigned __int64 a2,
        const char *a3,
        unsigned __int64 a4,
        unsigned int Value,
        __int64 lpModuleName)
{
  int v10; // eax
  __int64 v11; // r14
  char *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  char v18; // al
  unsigned __int64 v19; // r12
  char *v20; // rcx
  bool v21; // cf
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  const char *v30; // r8
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  _BYTE v35[32]; // [rsp+0h] [rbp-100h] BYREF
  __int128 phModule; // [rsp+30h] [rbp-D0h] BYREF
  char Destination[261]; // [rsp+40h] [rbp-C0h] BYREF
  char v38; // [rsp+145h] [rbp+45h] BYREF
  __int64 v39; // [rsp+150h] [rbp+50h]

  if ( (unsigned int)strcpy_s(a1, a2, "Assertion failed!") )
    goto LABEL_67;
  if ( (unsigned int)strcat_s(a1, a2, word_140276948) )
    goto LABEL_67;
  if ( (unsigned int)strcat_s(a1, a2, "Program: ") )
    goto LABEL_67;
  MEMORY[0x1401FCD30](Destination, 0, 0x105u);
  *(_QWORD *)&phModule = 0;
  v10 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *))GetModuleHandleExW)(6, lpModuleName, &phModule);
  *(_QWORD *)&phModule = phModule & -(__int64)(v10 != 0);
  if ( !(unsigned int)sub_14025B344(phModule, Destination, 261) )
  {
    if ( (unsigned int)strcpy_s(Destination, 261, "<program name unknown>") )
      goto LABEL_67;
  }
  v11 = -1;
  v12 = Destination;
  v13 = -1;
  do
    ++v13;
  while ( Destination[v13] );
  if ( (unsigned __int64)(v13 + 11) > 0x40 )
  {
    v12 = &v35[v13 + 11];
    v14 = &v38 - &v35[v13 + 11];
    if ( !&v35[v13 + 11] )
    {
      *errno() = 22;
      goto LABEL_66;
    }
    if ( v14 < 3 )
    {
      MEMORY[0x1401FCD30](v12, 0, v14);
      *errno() = 34;
LABEL_66:
      sub_14024CF6C(v15);
      sub_14024CFBC(0, 0, 0, 0, 0);
      __debugbreak();
    }
    qmemcpy(v12, "...", 3);
  }
  if ( (unsigned int)strcat_s(a1, a2, v12)
    || (unsigned int)strcat_s(a1, a2, word_140276980)
    || (unsigned int)strcat_s(a1, a2, "File: ") )
  {
    goto LABEL_67;
  }
  v16 = -1;
  do
    ++v16;
  while ( *(_BYTE *)(a4 + v16) );
  if ( (unsigned __int64)(v16 + 8) <= 0x40 )
  {
    v33 = a4;
LABEL_64:
    v25 = strcat_s(a1, a2, v33);
    goto LABEL_35;
  }
  v17 = -1;
  do
    ++v17;
  while ( *(_BYTE *)(a4 + v17) );
  v18 = *(_BYTE *)(a4 + v17 - 1);
  v19 = 1;
  if ( v18 != 92 )
  {
    v20 = (char *)(v17 + a4 - 1);
    do
    {
      if ( v18 == 47 )
        break;
      if ( v19 >= v17 )
        break;
      --v20;
      ++v19;
      v18 = *v20;
    }
    while ( *v20 != 92 );
  }
  v21 = v17 - v19 < 0x26;
  if ( v17 - v19 > 0x26 )
  {
    if ( v19 < 0x12 )
    {
      v22 = a4;
      v23 = a2;
      v24 = a1;
      goto LABEL_32;
    }
    v21 = v17 - v19 < 0x26;
  }
  v22 = a4;
  v23 = a2;
  v24 = a1;
  if ( !v21 )
  {
    if ( (unsigned int)strncat_s(a1, a2, a4, 35)
      || (unsigned int)strcat_s(a1, a2, "...")
      || (unsigned int)strncat_s(a1, a2, v17 + a4 - v19, 8)
      || (unsigned int)strcat_s(a1, a2, "...") )
    {
      goto LABEL_67;
    }
    v33 = v17 + a4 - 7;
    goto LABEL_64;
  }
  v19 >>= 1;
LABEL_32:
  if ( (unsigned int)strncat_s(v24, v23, v22, 53 - v19) || (unsigned int)strcat_s(a1, a2, "...") )
    goto LABEL_67;
  v25 = strcat_s(a1, a2, v17 + a4 - v19);
LABEL_35:
  if ( v25 )
    goto LABEL_67;
  if ( (unsigned int)strcat_s(a1, a2, word_140276980) )
    goto LABEL_67;
  if ( (unsigned int)strcat_s(a1, a2, "Line: ") )
    goto LABEL_67;
  v26 = -1;
  do
    ++v26;
  while ( *(_BYTE *)(a1 + v26) );
  v27 = -1;
  do
    ++v27;
  while ( *(_BYTE *)(a1 + v27) );
  if ( (unsigned int)itoa_s(Value, a1 + v27, a2 - v26, 10)
    || (unsigned int)strcat_s(a1, a2, word_140276948)
    || (unsigned int)strcat_s(a1, a2, "Expression: ") )
  {
    goto LABEL_67;
  }
  v28 = -1;
  do
    ++v28;
  while ( *(_BYTE *)(a1 + v28) );
  v29 = v28 + 176;
  do
    ++v11;
  while ( a3[v11] );
  v30 = a3;
  v31 = a2;
  v32 = a1;
  if ( v29 + v11 > a2 )
  {
    if ( (unsigned int)strncat_s(a1, a2, a3, a2 - v29 - 3) )
      goto LABEL_67;
    v30 = "...";
    v31 = a2;
    v32 = a1;
  }
  if ( (unsigned int)strcat_s(v32, v31, v30)
    || (unsigned int)strcat_s(a1, a2, word_140276948)
    || (unsigned int)strcat_s(
                       a1,
                       a2,
                       "For information on how your program can cause an assertion\n"
                       "failure, see the Visual C++ documentation on asserts")
    || (unsigned int)strcat_s(a1, a2, word_140276948)
    || (unsigned int)strcat_s(a1, a2, "(Press Retry to debug the application - JIT must be enabled)") )
  {
LABEL_67:
    sub_14024CFBC(0, 0, 0, 0, 0);
    __debugbreak();
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v35 ^ v39);
}

