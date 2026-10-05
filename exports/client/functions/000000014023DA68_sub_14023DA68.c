/* Address: 0x14023da68 | Name: sub_14023DA68 | Size: 1284 bytes */
__int64 __fastcall sub_14023DA68(
        __int64 a1,
        unsigned __int64 a2,
        const __int16 *a3,
        __int64 a4,
        unsigned int Value,
        __int64 lpModuleName)
{
  int v10; // eax
  __int64 v11; // rbp
  _WORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int16 v19; // ax
  unsigned __int64 v20; // r14
  __int16 *v21; // rcx
  unsigned __int64 v22; // r12
  bool v23; // cf
  __int64 v24; // r8
  unsigned __int64 v25; // r14
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  const __int16 *v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v35; // [rsp+0h] [rbp-2A8h] BYREF
  __int128 phModule; // [rsp+30h] [rbp-278h] BYREF
  _WORD Filename[264]; // [rsp+40h] [rbp-268h] BYREF
  __int64 v38; // [rsp+250h] [rbp-58h]

  if ( (unsigned int)sub_140259444(a1, a2, L"Assertion failed!") )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, L"\n\n") )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, L"Program: ") )
    goto LABEL_66;
  MEMORY[0x1401FCD30](Filename, 0, 0x20Au);
  *(_QWORD *)&phModule = 0;
  v10 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *))GetModuleHandleExW)(6, lpModuleName, &phModule);
  *(_QWORD *)&phModule = phModule & -(__int64)(v10 != 0);
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _WORD *, __int64))GetModuleFileNameW)(phModule, Filename, 261) )
  {
    if ( (unsigned int)sub_140259444(Filename, 261, L"<program name unknown>") )
      goto LABEL_66;
  }
  v11 = -1;
  v12 = Filename;
  v13 = -1;
  do
    ++v13;
  while ( Filename[v13] );
  if ( (unsigned __int64)(v13 + 11) > 0x40 )
  {
    v14 = 2 * v13 - 106;
    v15 = 522 - v14;
    v12 = (_WORD *)((char *)Filename + v14);
    if ( !(_WORD *)((char *)Filename + v14) )
    {
      *errno() = 22;
      goto LABEL_68;
    }
    if ( v15 < 6 )
    {
      MEMORY[0x1401FCD30](v12, 0, v15);
      *errno() = 34;
LABEL_68:
      sub_14024CF6C(v16);
      sub_14024CFBC(0, 0, 0, 0, 0);
      __debugbreak();
    }
    *(_DWORD *)v12 = *(_DWORD *)asc_140285E10;
    v12[2] = 46;
  }
  if ( (unsigned int)sub_14025ACB4(a1, a2, v12)
    || (unsigned int)sub_14025ACB4(a1, a2, &unk_140285E18)
    || (unsigned int)sub_14025ACB4(a1, a2, L"File: ") )
  {
    goto LABEL_66;
  }
  v17 = -1;
  do
    ++v17;
  while ( *(_WORD *)(a4 + 2 * v17) );
  if ( (unsigned __int64)(v17 + 8) <= 0x40 )
  {
    v24 = a4;
LABEL_65:
    v26 = sub_14025ACB4(a1, a2, v24);
    goto LABEL_36;
  }
  v18 = -1;
  do
    ++v18;
  while ( *(_WORD *)(a4 + 2 * v18) );
  v19 = *(_WORD *)(a4 + 2 * v18 - 2);
  v20 = 1;
  if ( v19 != 92 )
  {
    v21 = (__int16 *)(a4 - 2 + 2 * v18);
    do
    {
      if ( v19 == 47 )
        break;
      if ( v20 >= v18 )
        break;
      --v21;
      ++v20;
      v19 = *v21;
    }
    while ( *v21 != 92 );
  }
  v22 = v18 - v20;
  v23 = v18 - v20 < 0x26;
  if ( v18 - v20 > 0x26 )
  {
    if ( v20 < 0x12 )
    {
      if ( (unsigned int)sub_14025AE2C(a1, a2, a4, 53 - v20) || (unsigned int)sub_14025ACB4(a1, a2, asc_140285E10) )
        goto LABEL_66;
      v24 = a4 + 2 * v22;
      goto LABEL_65;
    }
    v23 = v22 < 0x26;
  }
  if ( !v23 )
  {
    if ( (unsigned int)sub_14025AE2C(a1, a2, a4, 35)
      || (unsigned int)sub_14025ACB4(a1, a2, asc_140285E10)
      || (unsigned int)sub_14025AE2C(a1, a2, a4 + 2 * v22, 8)
      || (unsigned int)sub_14025ACB4(a1, a2, asc_140285E10) )
    {
      goto LABEL_66;
    }
    v24 = a4 - 14 + 2 * v18;
    goto LABEL_65;
  }
  v25 = v20 >> 1;
  if ( (unsigned int)sub_14025AE2C(a1, a2, a4, 53 - v25) || (unsigned int)sub_14025ACB4(a1, a2, asc_140285E10) )
    goto LABEL_66;
  v26 = sub_14025ACB4(a1, a2, a4 + 2 * (v18 - v25));
LABEL_36:
  if ( v26 )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, &unk_140285E18) )
    goto LABEL_66;
  if ( (unsigned int)sub_14025ACB4(a1, a2, L"Line: ") )
    goto LABEL_66;
  v27 = -1;
  do
    ++v27;
  while ( *(_WORD *)(a1 + 2 * v27) );
  v28 = -1;
  do
    ++v28;
  while ( *(_WORD *)(a1 + 2 * v28) );
  if ( (unsigned int)itow_s(Value, a1 + 2 * v28, a2 - v27, 10)
    || (unsigned int)sub_14025ACB4(a1, a2, L"\n\n")
    || (unsigned int)sub_14025ACB4(a1, a2, L"Expression: ") )
  {
    goto LABEL_66;
  }
  v29 = -1;
  do
    ++v29;
  while ( *(_WORD *)(a1 + 2 * v29) );
  v30 = v29 + 176;
  do
    ++v11;
  while ( a3[v11] );
  v31 = a3;
  v32 = a2;
  v33 = a1;
  if ( v30 + v11 > a2 )
  {
    if ( (unsigned int)sub_14025AE2C(a1, a2, a3, a2 - v30 - 3) )
      goto LABEL_66;
    v31 = asc_140285E10;
    v32 = a2;
    v33 = a1;
  }
  if ( (unsigned int)sub_14025ACB4(v33, v32, v31)
    || (unsigned int)sub_14025ACB4(a1, a2, L"\n\n")
    || (unsigned int)sub_14025ACB4(
                       a1,
                       a2,
                       L"For information on how your program can cause an assertion\n"
                        "failure, see the Visual C++ documentation on asserts")
    || (unsigned int)sub_14025ACB4(a1, a2, L"\n\n")
    || (unsigned int)sub_14025ACB4(a1, a2, L"(Press Retry to debug the application - JIT must be enabled)") )
  {
LABEL_66:
    sub_14024CFBC(0, 0, 0, 0, 0);
    __debugbreak();
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v38);
}

