/* Address: 0x14022be60 | Name: sub_14022BE60 | Size: 1034 bytes */
__int64 __fastcall sub_14022BE60(struct __crt_locale_pointers *a1, _QWORD *a2, signed int a3, unsigned __int8 a4)
{
  signed int v5; // esi
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  unsigned __int64 i; // rax
  unsigned __int8 *v11; // rax
  unsigned __int8 v12; // di
  unsigned int v13; // eax
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  unsigned __int8 *v16; // rax
  int v17; // eax
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  char v21; // dl
  char *v22; // rax
  int v23; // eax
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  _BYTE *v27; // rax
  int v28; // eax
  unsigned __int64 v29; // r8
  unsigned __int8 *v30; // rax
  unsigned __int64 v31; // r8
  unsigned int v32; // ecx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int8 *v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  _BYTE *v38; // rax
  _BYTE *v40; // rax
  _BYTE *v41; // rax
  _BYTE *v42; // rcx
  __int64 v43; // [rsp+20h] [rbp-38h] BYREF
  char v44[16]; // [rsp+28h] [rbp-30h] BYREF
  char v45; // [rsp+38h] [rbp-20h]

  v5 = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno() = 22;
    sub_14024CF6C(v7);
    goto LABEL_86;
  }
  sub_140213644((_LocaleUpdate *)&v43, a1);
  v8 = a2[2];
  v9 = 0;
  for ( i = v8 + 1; ; i = a2[2] + 1LL )
  {
    if ( (a2[2] = i, a2[1]) && i > a2[1]
      || (v11 = *(unsigned __int8 **)(*a2 + 16LL), v11 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v12 = 0;
    }
    else
    {
      v12 = *v11;
      *(_QWORD *)(*a2 + 16LL) = v11 + 1;
    }
    if ( !(unsigned int)sub_140236ED8(v12, 8, v44) )
      break;
  }
  v13 = a4;
  v14 = a4 | 2;
  if ( v12 != 45 )
    v14 = v13;
  if ( ((v12 - 43) & 0xFD) == 0 )
  {
    v15 = a2[2] + 1LL;
    a2[2] = v15;
    if ( a2[1] && v15 > a2[1] || (v16 = *(unsigned __int8 **)(*a2 + 16LL), v16 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v12 = 0;
    }
    else
    {
      v12 = *v16;
      *(_QWORD *)(*a2 + 16LL) = v16 + 1;
    }
  }
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_55;
  if ( (unsigned __int8)(v12 - 48) > 9u )
  {
    if ( (unsigned __int8)(v12 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v12 - 65) > 0x19u )
        v17 = -1;
      else
        v17 = (char)v12 - 55;
    }
    else
    {
      v17 = (char)v12 - 87;
    }
  }
  else
  {
    v17 = (char)v12 - 48;
  }
  if ( v17 )
  {
    v18 = 10;
    if ( v5 )
      v18 = v5;
    v5 = v18;
    goto LABEL_55;
  }
  v19 = a2[1];
  v20 = a2[2] + 1LL;
  a2[2] = v20;
  if ( v19 && v20 > v19 || (v22 = *(char **)(*a2 + 16LL), v22 == *(char **)(*a2 + 8LL)) )
  {
    v21 = 0;
  }
  else
  {
    v21 = *v22;
    *(_QWORD *)(*a2 + 16LL) = v22 + 1;
    v20 = a2[2];
    v19 = a2[1];
  }
  if ( ((v21 - 88) & 0xDF) != 0 )
  {
    v23 = 8;
    if ( v5 )
      v23 = v5;
    v24 = v20 - 1;
    a2[2] = v24;
    v5 = v23;
    if ( v19 && v24 > v19 )
      goto LABEL_55;
    if ( (unsigned __int8)(v21 + 1) <= 1u )
      goto LABEL_55;
    v25 = *a2;
    v26 = *(_QWORD *)(*a2 + 16LL);
    if ( v26 == *(_QWORD *)*a2 )
      goto LABEL_55;
    v27 = (_BYTE *)(v26 - 1);
  }
  else
  {
    v28 = 16;
    if ( v5 )
      v28 = v5;
    v29 = v20 + 1;
    a2[2] = v29;
    v5 = v28;
    if ( v19 && v29 > v19
      || (v25 = *a2, v30 = *(unsigned __int8 **)(*a2 + 16LL), v30 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v12 = 0;
      goto LABEL_55;
    }
    v12 = *v30;
    v27 = v30 + 1;
  }
  *(_QWORD *)(v25 + 16) = v27;
LABEL_55:
  v31 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (unsigned __int8)(v12 - 48) > 9u )
    {
      if ( (unsigned __int8)(v12 - 97) > 0x19u )
        v32 = (unsigned __int8)(v12 - 65) > 0x19u ? -1 : (char)v12 - 55;
      else
        v32 = (char)v12 - 87;
    }
    else
    {
      v32 = (char)v12 - 48;
    }
    if ( v32 == -1 || v32 >= v5 )
      break;
    v14 |= 8u;
    if ( v9 < v31 )
    {
      v33 = v32;
LABEL_70:
      v9 = v33 + v5 * v9;
      goto LABEL_71;
    }
    if ( v9 == v31 )
    {
      v33 = v32;
      if ( v32 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
        goto LABEL_70;
    }
    v14 |= 4u;
LABEL_71:
    v34 = a2[2] + 1LL;
    a2[2] = v34;
    if ( a2[1] && v34 > a2[1] || (v35 = *(unsigned __int8 **)(*a2 + 16LL), v35 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v12 = 0;
    }
    else
    {
      v12 = *v35;
      *(_QWORD *)(*a2 + 16LL) = v35 + 1;
    }
  }
  v36 = a2[2] - 1LL;
  a2[2] = v36;
  if ( (!a2[1] || v36 <= a2[1]) && (unsigned __int8)(v12 + 1) > 1u )
  {
    v37 = *(_QWORD *)(*a2 + 16LL);
    if ( v37 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = v37 - 1;
  }
  if ( (v14 & 8) != 0 )
  {
    if ( (unsigned __int8)MEMORY[0x1402257B4](v14, v9) )
    {
      *errno() = 34;
      if ( (v14 & 1) != 0 )
      {
        if ( (v14 & 2) != 0 )
        {
          if ( v45 )
            *(_DWORD *)(v43 + 936) &= ~2u;
          v40 = (_BYTE *)a2[3];
          if ( v40 && !a2[2] )
            *v40 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v45 )
            *(_DWORD *)(v43 + 936) &= ~2u;
          v41 = (_BYTE *)a2[3];
          if ( v41 && !a2[2] )
            *v41 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v9 = -1;
    }
    else if ( (v14 & 2) != 0 )
    {
      v9 = -(__int64)v9;
    }
    if ( v45 )
      *(_DWORD *)(v43 + 936) &= ~2u;
    v42 = (_BYTE *)a2[3];
    if ( v42 && !a2[2] )
      *v42 = 0;
    return v9;
  }
  if ( v8 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( v45 )
    *(_DWORD *)(v43 + 936) &= ~2u;
LABEL_86:
  v38 = (_BYTE *)a2[3];
  if ( v38 )
  {
    if ( !a2[2] )
      *v38 = 0;
  }
  return 0;
}

