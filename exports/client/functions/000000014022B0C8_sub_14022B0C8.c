/* Address: 0x14022b0c8 | Name: sub_14022B0C8 | Size: 1130 bytes */
__int64 __fastcall sub_14022B0C8(struct __crt_locale_pointers *a1, FILE ***a2, signed int a3, unsigned __int8 a4)
{
  signed int v5; // esi
  __int64 v7; // rcx
  FILE **v8; // rax
  unsigned __int64 v9; // rbp
  FILE **v10; // r14
  FILE **v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int64 v19; // rax
  FILE **v20; // r15
  int v21; // eax
  char v22; // dl
  int v23; // eax
  unsigned __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  unsigned __int64 v27; // rax
  int v28; // ecx
  FILE **v29; // rdx
  unsigned __int64 v30; // r15
  unsigned int v31; // ecx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  bool v34; // zf
  int v35; // eax
  unsigned __int64 v36; // rax
  FILE **v37; // rdx
  FILE **v38; // rax
  FILE **v40; // rax
  FILE **v41; // rax
  FILE **v42; // rcx
  __int64 v43; // [rsp+20h] [rbp-48h] BYREF
  char v44[16]; // [rsp+28h] [rbp-40h] BYREF
  char v45; // [rsp+38h] [rbp-30h]
  FILE **v46; // [rsp+78h] [rbp+10h]

  v5 = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno() = 22;
    sub_14024CF6C(v7);
    v8 = a2[3];
    if ( v8 )
    {
      if ( !a2[2] )
        *(_BYTE *)v8 = 0;
    }
    return 0;
  }
  sub_140213644((_LocaleUpdate *)&v43, a1);
  v46 = a2[2];
  v9 = 0;
  a2[2] = (FILE **)((char *)v46 + 1);
  if ( a2[1] && (FILE **)((char *)v46 + 1) > a2[1] || (v10 = *a2, LODWORD(v11) = getc_nolock(**a2), (_DWORD)v11 == -1) )
    LOBYTE(v11) = 0;
  else
    v10[1] = (FILE *)((char *)v10[1] + 1);
  while ( (unsigned int)sub_140236ED8((unsigned __int8)v11, 8, v44) )
  {
    v12 = (unsigned __int64)a2[2] + 1;
    a2[2] = (FILE **)v12;
    if ( a2[1] && v12 > (unsigned __int64)a2[1] || (v11 = *a2, v13 = getc_nolock(**a2), v13 == -1) )
    {
      LOBYTE(v11) = 0;
    }
    else
    {
      v11[1] = (FILE *)((char *)v11[1] + 1);
      LOBYTE(v11) = v13;
    }
  }
  v14 = a4 | 2;
  if ( (_BYTE)v11 != 45 )
    v14 = a4;
  if ( (((_BYTE)v11 - 43) & 0xFD) == 0 )
  {
    v15 = (unsigned __int64)a2[2] + 1;
    a2[2] = (FILE **)v15;
    if ( a2[1] && v15 > (unsigned __int64)a2[1] || (v11 = *a2, v16 = getc_nolock(**a2), v16 == -1) )
    {
      LOBYTE(v11) = 0;
    }
    else
    {
      v11[1] = (FILE *)((char *)v11[1] + 1);
      LOBYTE(v11) = v16;
    }
  }
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_59;
  if ( (unsigned __int8)((_BYTE)v11 - 48) > 9u )
  {
    if ( (unsigned __int8)((_BYTE)v11 - 97) > 0x19u )
    {
      if ( (unsigned __int8)((_BYTE)v11 - 65) > 0x19u )
        v17 = -1;
      else
        v17 = (char)v11 - 55;
    }
    else
    {
      v17 = (char)v11 - 87;
    }
  }
  else
  {
    v17 = (char)v11 - 48;
  }
  if ( !v17 )
  {
    v19 = (unsigned __int64)a2[2] + 1;
    a2[2] = (FILE **)v19;
    if ( a2[1] && v19 > (unsigned __int64)a2[1] || (v20 = *a2, v21 = getc_nolock(**a2), v22 = v21, v21 == -1) )
    {
      v22 = 0;
    }
    else
    {
      v20[1] = (FILE *)((char *)v20[1] + 1);
      if ( (((_BYTE)v21 - 88) & 0xDF) == 0 )
      {
        v23 = 16;
        if ( v5 )
          v23 = v5;
        v5 = v23;
        v24 = (unsigned __int64)a2[2] + 1;
        a2[2] = (FILE **)v24;
        if ( a2[1] && v24 > (unsigned __int64)a2[1] || (v11 = *a2, v25 = getc_nolock(**a2), v25 == -1) )
        {
          LOBYTE(v11) = 0;
        }
        else
        {
          v11[1] = (FILE *)((char *)v11[1] + 1);
          LOBYTE(v11) = v25;
        }
        goto LABEL_59;
      }
    }
    v26 = 8;
    if ( v5 )
      v26 = v5;
    v5 = v26;
    v27 = (unsigned __int64)a2[2] - 1;
    a2[2] = (FILE **)v27;
    if ( (!a2[1] || v27 <= (unsigned __int64)a2[1]) && (unsigned __int8)(v22 + 1) > 1u )
    {
      v28 = v22;
      v29 = *a2;
      if ( v28 != -1 )
      {
        v29[1] = (FILE *)((char *)v29[1] - 1);
        sub_14020CE90(v28, (__int64)*v29);
      }
    }
    goto LABEL_59;
  }
  v18 = 10;
  if ( v5 )
    v18 = v5;
  v5 = v18;
LABEL_59:
  v30 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (unsigned __int8)((_BYTE)v11 - 48) > 9u )
    {
      if ( (unsigned __int8)((_BYTE)v11 - 97) > 0x19u )
        v31 = (unsigned __int8)((_BYTE)v11 - 65) > 0x19u ? -1 : (char)v11 - 55;
      else
        v31 = (char)v11 - 87;
    }
    else
    {
      v31 = (char)v11 - 48;
    }
    if ( v31 == -1 || v31 >= v5 )
      break;
    v14 |= 8u;
    if ( v9 < v30 )
    {
      v32 = v31;
LABEL_74:
      v9 = v32 + v5 * v9;
      goto LABEL_75;
    }
    if ( v9 == v30 )
    {
      v32 = v31;
      if ( v31 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
        goto LABEL_74;
    }
    v14 |= 4u;
LABEL_75:
    v33 = (unsigned __int64)a2[2] + 1;
    v34 = a2[1] == nullptr;
    a2[2] = (FILE **)v33;
    if ( !v34 && v33 > (unsigned __int64)a2[1] || (v11 = *a2, v35 = getc_nolock(**a2), v35 == -1) )
    {
      LOBYTE(v11) = 0;
    }
    else
    {
      v11[1] = (FILE *)((char *)v11[1] + 1);
      LOBYTE(v11) = v35;
    }
  }
  v36 = (unsigned __int64)a2[2] - 1;
  a2[2] = (FILE **)v36;
  if ( (!a2[1] || v36 <= (unsigned __int64)a2[1]) && (unsigned __int8)((_BYTE)v11 + 1) > 1u )
  {
    v37 = *a2;
    if ( (char)v11 != -1 )
    {
      v37[1] = (FILE *)((char *)v37[1] - 1);
      sub_14020CE90((char)v11, (__int64)*v37);
    }
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
          v40 = a2[3];
          if ( v40 && !a2[2] )
            *(_BYTE *)v40 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v45 )
            *(_DWORD *)(v43 + 936) &= ~2u;
          v41 = a2[3];
          if ( v41 && !a2[2] )
            *(_BYTE *)v41 = 0;
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
    v42 = a2[3];
    if ( v42 && !a2[2] )
      *(_BYTE *)v42 = 0;
    return v9;
  }
  if ( v46 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( v45 )
    *(_DWORD *)(v43 + 936) &= ~2u;
  v38 = a2[3];
  if ( v38 && !a2[2] )
    *(_BYTE *)v38 = 0;
  return 0;
}

