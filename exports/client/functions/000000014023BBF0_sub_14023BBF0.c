/* Address: 0x14023bbf0 | Name: sub_14023BBF0 | Size: 752 bytes */
__int64 __fastcall sub_14023BBF0(struct __crt_locale_pointers *a1, __int64 *a2, signed int a3, unsigned __int8 a4)
{
  signed int v5; // r14d
  __int64 v7; // rcx
  unsigned __int8 *v8; // r15
  unsigned __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 i; // rax
  unsigned int v12; // eax
  unsigned int v13; // ebp
  int v14; // eax
  int v15; // eax
  char v16; // dl
  _BYTE *v17; // rcx
  int v18; // eax
  _BYTE *v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned int v22; // ecx
  __int64 v23; // rdx
  unsigned __int8 *v24; // rax
  __int64 v25; // rcx
  bool v26; // zf
  unsigned __int8 *v27; // rcx
  unsigned __int8 *v29; // rcx
  unsigned __int8 *v30; // rcx
  unsigned __int8 *v31; // rax
  __int64 v32; // [rsp+20h] [rbp-38h] BYREF
  __int64 v33; // [rsp+28h] [rbp-30h] BYREF
  char v34; // [rsp+38h] [rbp-20h]

  v5 = a3;
  if ( !*a2 || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno() = 22;
    sub_14024CF6C(v7);
    goto LABEL_55;
  }
  sub_140213644((_LocaleUpdate *)&v32, a1);
  v8 = (unsigned __int8 *)*a2;
  v9 = 0;
  v10 = *(unsigned __int8 *)*a2;
  for ( i = *a2 + 1; ; i = *a2 + 1 )
  {
    *a2 = i;
    if ( !(unsigned int)sub_140236ED8(v10, 8, &v33) )
      break;
    v10 = *(unsigned __int8 *)*a2;
  }
  v12 = a4;
  v13 = a4 | 2;
  if ( (_BYTE)v10 != 45 )
    v13 = v12;
  if ( (((_BYTE)v10 - 43) & 0xFD) == 0 )
    LOBYTE(v10) = *(_BYTE *)(*a2)++;
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_32;
  if ( (unsigned __int8)(v10 - 48) > 9u )
  {
    if ( (unsigned __int8)(v10 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v10 - 65) > 0x19u )
        v14 = -1;
      else
        v14 = (char)v10 - 55;
    }
    else
    {
      v14 = (char)v10 - 87;
    }
  }
  else
  {
    v14 = (char)v10 - 48;
  }
  if ( v14 )
  {
    v15 = 10;
  }
  else
  {
    v16 = *(_BYTE *)*a2;
    v17 = (_BYTE *)(*a2 + 1);
    *a2 = (__int64)v17;
    if ( ((v16 - 88) & 0xDF) != 0 )
    {
      v18 = 8;
      if ( v5 )
        v18 = v5;
      v19 = v17 - 1;
      *a2 = (__int64)v19;
      v5 = v18;
      if ( v16 && *v19 != v16 )
      {
        *errno() = 22;
        sub_14024CF6C(v20);
      }
      goto LABEL_32;
    }
    LOBYTE(v10) = *v17;
    *a2 = (__int64)(v17 + 1);
    v15 = 16;
  }
  if ( v5 )
    v15 = v5;
  v5 = v15;
LABEL_32:
  v21 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (unsigned __int8)(v10 - 48) > 9u )
    {
      if ( (unsigned __int8)(v10 - 97) > 0x19u )
        v22 = (unsigned __int8)(v10 - 65) > 0x19u ? -1 : (char)v10 - 55;
      else
        v22 = (char)v10 - 87;
    }
    else
    {
      v22 = (char)v10 - 48;
    }
    if ( v22 == -1 || v22 >= v5 )
      break;
    v13 |= 8u;
    if ( v9 < v21 )
    {
      v23 = v22;
    }
    else if ( v9 != v21 || (v23 = v22, v22 > 0xFFFFFFFFFFFFFFFFuLL % v5) )
    {
      v13 |= 4u;
      goto LABEL_48;
    }
    v9 = v23 + v5 * v9;
LABEL_48:
    LOBYTE(v10) = *(_BYTE *)(*a2)++;
  }
  v24 = (unsigned __int8 *)(*a2 - 1);
  *a2 = (__int64)v24;
  if ( (_BYTE)v10 && *v24 != (_BYTE)v10 )
  {
    *errno() = 22;
    sub_14024CF6C(v25);
  }
  if ( (v13 & 8) != 0 )
  {
    if ( (unsigned __int8)MEMORY[0x1402257B4](v13, v9) )
    {
      *errno() = 34;
      if ( (v13 & 1) != 0 )
      {
        if ( (v13 & 2) != 0 )
        {
          if ( v34 )
            *(_DWORD *)(v32 + 936) &= ~2u;
          v29 = (unsigned __int8 *)a2[1];
          if ( v29 )
            *(_QWORD *)v29 = *a2;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v34 )
            *(_DWORD *)(v32 + 936) &= ~2u;
          v30 = (unsigned __int8 *)a2[1];
          if ( v30 )
            *(_QWORD *)v30 = *a2;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v9 = -1;
    }
    else if ( (v13 & 2) != 0 )
    {
      v9 = -(__int64)v9;
    }
    if ( v34 )
      *(_DWORD *)(v32 + 936) &= ~2u;
    v31 = (unsigned __int8 *)a2[1];
    if ( v31 )
      *(_QWORD *)v31 = *a2;
    return v9;
  }
  v26 = v34 == 0;
  *a2 = (__int64)v8;
  if ( !v26 )
    *(_DWORD *)(v32 + 936) &= ~2u;
LABEL_55:
  v27 = (unsigned __int8 *)a2[1];
  if ( v27 )
    *(_QWORD *)v27 = *a2;
  return 0;
}

