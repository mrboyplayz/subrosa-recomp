/* Address: 0x140249aec | Name: parse_bcp47 | Size: 511 bytes */
__int64 __fastcall parse_bcp47(_WORD *a1, unsigned __int16 *a2)
{
  char *v4; // r12
  unsigned __int64 v5; // rdi
  int v6; // r15d
  __int64 v7; // rax
  unsigned __int16 *v8; // r14
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  char *v15; // rdx
  __int64 v17; // [rsp+0h] [rbp-69h] BYREF
  char v18[8]; // [rsp+20h] [rbp-49h] BYREF
  char v19; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v20[24]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v21[24]; // [rsp+50h] [rbp-19h] BYREF
  char v22; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+80h] [rbp+17h]

  MEMORY[0x1401FCD30](a1, 0, 0x1CAu);
  v4 = &v19;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v5 >= 4 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v23);
    if ( v6 == 2 )
    {
      v7 = -1;
      do
        ++v7;
      while ( a2[v7] );
    }
    else
    {
      v7 = MEMORY[0x1402625A4](a2, L"-_.");
    }
    *((_QWORD *)v4 - 1) = a2;
    ++v5;
    v8 = &a2[v7];
    *(_QWORD *)v4 = v7;
    v9 = *v8;
    *((_DWORD *)v4 + 2) = v6;
    v4 += 24;
    v10 = v9 - 45;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        v6 = 2;
        goto LABEL_13;
      }
      if ( v11 != 49 )
      {
        v6 = 1;
        goto LABEL_13;
      }
    }
    v6 = 0;
LABEL_13:
    a2 = v8 + 1;
  }
  while ( v6 != 1 );
  v12 = v5 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1
          && (unsigned __int8)parse_bcp47_language(a1, v18)
          && (unsigned __int8)parse_bcp47_script(a1, v20)
          && (unsigned __int8)sub_140249DC0(a1, v21) )
        {
          v15 = &v22;
LABEL_32:
          parse_bcp47_code_page(a1, v15);
        }
      }
      else if ( (unsigned __int8)parse_bcp47_language(a1, v18)
             && (!(unsigned __int8)parse_bcp47_script(a1, v20)
              || !(unsigned __int8)sub_140249DC0(a1, v21) && !(unsigned __int8)parse_bcp47_code_page(a1, v21))
             && (unsigned __int8)sub_140249DC0(a1, v20) )
      {
        v15 = v21;
        goto LABEL_32;
      }
    }
    else if ( (unsigned __int8)parse_bcp47_language(a1, v18)
           && !(unsigned __int8)parse_bcp47_script(a1, v20)
           && !(unsigned __int8)sub_140249DC0(a1, v20) )
    {
      v15 = v20;
      goto LABEL_32;
    }
  }
  else
  {
    parse_bcp47_language(a1, v18);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v23);
}

