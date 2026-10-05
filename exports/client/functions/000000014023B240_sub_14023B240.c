/* Address: 0x14023b240 | Name: sub_14023B240 | Size: 773 bytes */
__int64 __fastcall sub_14023B240(struct __crt_locale_pointers *a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rcx
  unsigned __int8 *v8; // r15
  unsigned int v9; // esi
  unsigned int v10; // edi
  __int64 i; // rax
  char v12; // al
  char v13; // bp
  int v14; // eax
  int v15; // eax
  char v16; // dl
  _BYTE *v17; // rcx
  int v18; // eax
  _BYTE *v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  char v23; // cl
  unsigned __int8 *v24; // rax
  __int64 v25; // rcx
  bool v26; // zf
  unsigned __int8 *v27; // rcx
  int v29; // edi
  int v30; // ebp
  unsigned __int8 *v31; // rax
  unsigned __int8 *v32; // rdx
  unsigned __int8 *v33; // rdx
  __int64 v34; // [rsp+20h] [rbp-38h] BYREF
  __int64 v35; // [rsp+28h] [rbp-30h] BYREF
  char v36; // [rsp+38h] [rbp-20h]

  v5 = a3;
  if ( !*a2 || a3 && a3 - 2 > 0x22 )
  {
    *errno() = 22;
    sub_14024CF6C(v7);
LABEL_54:
    v27 = (unsigned __int8 *)a2[1];
    if ( v27 )
      *(_QWORD *)v27 = *a2;
    return 0;
  }
  sub_140213644((_LocaleUpdate *)&v34, a1);
  v8 = (unsigned __int8 *)*a2;
  v9 = 0;
  v10 = *(unsigned __int8 *)*a2;
  for ( i = *a2 + 1; ; i = *a2 + 1 )
  {
    *a2 = i;
    if ( !(unsigned int)sub_140236ED8(v10, 8, &v35) )
      break;
    v10 = *(unsigned __int8 *)*a2;
  }
  v12 = a4;
  v13 = a4 | 2;
  if ( (_BYTE)v10 != 45 )
    v13 = v12;
  if ( (((_BYTE)v10 - 43) & 0xFD) == 0 )
    LOBYTE(v10) = *(_BYTE *)(*a2)++;
  if ( (v5 & 0xFFFFFFEF) == 0 )
  {
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
LABEL_29:
      if ( v5 )
        v15 = v5;
      v5 = v15;
      goto LABEL_32;
    }
    v16 = *(_BYTE *)*a2;
    v17 = (_BYTE *)(*a2 + 1);
    *a2 = (__int64)v17;
    if ( ((v16 - 88) & 0xDF) == 0 )
    {
      LOBYTE(v10) = *v17;
      *a2 = (__int64)(v17 + 1);
      v15 = 16;
      goto LABEL_29;
    }
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
  }
LABEL_32:
  v21 = 0xFFFFFFFF / v5;
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
    if ( v9 < v21 || v9 == v21 && v22 <= 0xFFFFFFFF % v5 )
    {
      v9 = v22 + v5 * v9;
      v23 = 8;
    }
    else
    {
      v23 = 12;
    }
    LOBYTE(v10) = *(_BYTE *)(*a2)++;
    v13 |= v23;
  }
  v24 = (unsigned __int8 *)(*a2 - 1);
  *a2 = (__int64)v24;
  if ( (_BYTE)v10 && *v24 != (_BYTE)v10 )
  {
    *errno() = 22;
    sub_14024CF6C(v25);
  }
  if ( (v13 & 8) == 0 )
  {
    v26 = v36 == 0;
    *a2 = (__int64)v8;
    if ( !v26 )
      *(_DWORD *)(v34 + 936) &= ~2u;
    goto LABEL_54;
  }
  v29 = v13 & 1;
  if ( (v13 & 4) == 0 )
  {
    if ( (v13 & 1) == 0 )
      goto LABEL_69;
    if ( (v13 & 2) != 0 )
    {
      if ( v9 > 0x80000000 )
        goto LABEL_61;
LABEL_69:
      if ( (v13 & 2) != 0 )
        v9 = -v9;
      goto LABEL_63;
    }
    if ( v9 <= 0x7FFFFFFF )
      goto LABEL_69;
  }
LABEL_61:
  v30 = v13 & 2;
  *errno() = 34;
  if ( !v29 )
  {
    v9 = -1;
LABEL_63:
    if ( v36 )
      *(_DWORD *)(v34 + 936) &= ~2u;
    v31 = (unsigned __int8 *)a2[1];
    if ( v31 )
      *(_QWORD *)v31 = *a2;
    return v9;
  }
  if ( v30 )
  {
    if ( v36 )
      *(_DWORD *)(v34 + 936) &= ~2u;
    v32 = (unsigned __int8 *)a2[1];
    if ( v32 )
      *(_QWORD *)v32 = *a2;
    return 0x80000000LL;
  }
  else
  {
    if ( v36 )
      *(_DWORD *)(v34 + 936) &= ~2u;
    v33 = (unsigned __int8 *)a2[1];
    if ( v33 )
      *(_QWORD *)v33 = *a2;
    return 0x7FFFFFFF;
  }
}

