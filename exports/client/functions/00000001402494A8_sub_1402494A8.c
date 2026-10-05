/* Address: 0x1402494a8 | Name: sub_1402494A8 | Size: 662 bytes */
__int64 __fastcall sub_1402494A8(__int64 a1, __int64 a2, __int64 a3)
{
  const #49 *v3; // rbx
  __int64 v4; // rdi
  int v5; // ebp
  int v6; // esi
  #49 *v7; // rax
  #49 *v8; // r14
  __int64 v9; // rbp
  int v10; // r12d
  __int16 **v11; // r15
  __int64 v12; // rax
  _WORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  _WORD *v16; // rax
  __int16 v17; // cx
  int v19; // ebx
  _QWORD *v20; // r14
  unsigned __int16 *v21; // rax
  int v22; // r8d
  int v23; // ecx
  __int64 v24; // [rsp+0h] [rbp-248h] BYREF
  _DWORD v25[4]; // [rsp+30h] [rbp-218h] BYREF
  _WORD v26[136]; // [rsp+40h] [rbp-208h] BYREF
  _BYTE v27[176]; // [rsp+150h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+200h] [rbp-48h]

  v3 = (const #49 *)a3;
  v4 = a1;
  if ( (_DWORD)a2 )
  {
    if ( a3 )
      sub_140249740(a1, a2, a3);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v24 ^ v28);
  }
  v5 = 1;
  v6 = 0;
  if ( !a3 )
  {
LABEL_32:
    sub_1402492BC(a1);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v24 ^ v28);
  }
  if ( *(_WORD *)a3 != 76 || *(_WORD *)(a3 + 2) != 67 || *(_WORD *)(a3 + 4) != 95 )
  {
    if ( !sub_140248A88((char *)a3, (#57 *)v26, 131, (#44 *)v27, 85, v25) )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v24 ^ v28);
    v19 = 0;
    v20 = (_QWORD *)(v4 + 40);
    do
    {
      if ( v19 )
      {
        v21 = v26;
        do
        {
          v22 = *(unsigned __int16 *)((char *)v21 + *v20 - (_QWORD)v26);
          v23 = *v21 - v22;
          if ( v23 )
            break;
          ++v21;
        }
        while ( v22 );
        if ( !v23 || sub_140249740(v4, (unsigned int)v19, v26) )
          ++v6;
        else
          v5 = 0;
      }
      ++v19;
      v20 += 4;
    }
    while ( v19 <= 5 );
    if ( !v5 )
    {
LABEL_30:
      if ( !v6 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v24 ^ v28);
    }
    a1 = v4;
    goto LABEL_32;
  }
  while ( 1 )
  {
    v7 = wcspbrk(v3, (const #49 *)L"=;");
    v8 = v7;
    if ( !v7 )
      break;
    v9 = (v7 - v3) >> 1;
    if ( !v9 || *(_WORD *)v7 == 59 )
      break;
    v10 = 1;
    v11 = &off_14028A188;
    do
    {
      if ( !(unsigned int)wcsncmp(*v11, v3, v9) )
      {
        v12 = -1;
        do
          ++v12;
        while ( (*v11)[v12] );
        if ( v9 == v12 )
          break;
      }
      ++v10;
      v11 += 3;
    }
    while ( (__int64)v11 <= (__int64)&off_14028A1E8 );
    v13 = (_WORD *)((char *)v8 + 2);
    v14 = MEMORY[0x1402625A4](v13, L";");
    v15 = v14;
    if ( !v14 && *v13 != 59 )
      break;
    if ( v10 <= 5 )
    {
      if ( (unsigned int)sub_140260D80(v26, 131, v13, v14) )
      {
        sub_14024CFBC(0, 0, 0, 0, 0);
        JUMPOUT(0x14024973DLL);
      }
      if ( (unsigned __int64)(2 * v15) >= 0x106 )
        sub_1401F8694();
      v26[v15] = 0;
      if ( sub_140249740(v4, (unsigned int)v10, v26) )
        ++v6;
    }
    v16 = &v13[v15];
    v17 = *v16;
    if ( *v16 )
      v17 = v16[1];
    v3 = (const #49 *)(v16 + 1);
    if ( !*v16 )
      v3 = (const #49 *)v16;
    if ( !v17 )
      goto LABEL_30;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v24 ^ v28);
}

