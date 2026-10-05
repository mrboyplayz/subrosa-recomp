/* Address: 0x140160930 | Name: sub_140160930 | Size: 868 bytes */
__int64 __fastcall sub_140160930(__int64 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char *v4; // rax
  char v9; // cl
  char *v10; // rax
  char v11; // cl
  char *v12; // rax
  char v13; // cl
  char *v14; // rax
  char v15; // cl
  _BYTE *v16; // rax
  char v17; // cl
  unsigned __int8 *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int8 *v23; // rax
  unsigned __int8 v24; // cl
  unsigned __int8 *v25; // rax
  unsigned __int8 *v26; // rax
  unsigned __int8 v27; // cl
  unsigned __int8 *v28; // rax
  unsigned __int8 *v29; // rax
  unsigned __int8 v30; // cl
  unsigned __int8 *v31; // rax
  bool v32; // cc
  int v33; // eax

  v4 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    sub_14016D910(a1, a2);
    v4 = *(char **)(a1 + 192);
  }
  v9 = *v4;
  v10 = v4 + 1;
  *(_QWORD *)(a1 + 192) = v10;
  if ( v9 != 71 )
    goto LABEL_49;
  if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    sub_14016D910(a1, a2);
    v10 = *(char **)(a1 + 192);
  }
  v11 = *v10;
  v12 = v10 + 1;
  *(_QWORD *)(a1 + 192) = v12;
  if ( v11 != 73 )
    goto LABEL_49;
  if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    sub_14016D910(a1, a2);
    v12 = *(char **)(a1 + 192);
  }
  v13 = *v12;
  v14 = v12 + 1;
  *(_QWORD *)(a1 + 192) = v14;
  if ( v13 != 70 )
    goto LABEL_49;
  if ( (unsigned __int64)v14 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    sub_14016D910(a1, a2);
    v14 = *(char **)(a1 + 192);
  }
  v15 = *v14;
  v16 = v14 + 1;
  *(_QWORD *)(a1 + 192) = v16;
  if ( v15 != 56 )
    goto LABEL_49;
  if ( (unsigned __int64)v16 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    sub_14016D910(a1, a2);
    v16 = *(_BYTE **)(a1 + 192);
  }
  v17 = *v16;
  v18 = v16 + 1;
  *(_QWORD *)(a1 + 192) = v18;
  if ( ((v17 - 55) & 0xFD) != 0 )
    goto LABEL_49;
  if ( (unsigned __int64)v18 < *(_QWORD *)(a1 + 200) )
    goto LABEL_24;
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_49:
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "not GIF";
    return 0;
  }
  sub_14016D910(a1, a2);
  v18 = *(unsigned __int8 **)(a1 + 192);
LABEL_24:
  v19 = *v18;
  *(_QWORD *)(a1 + 192) = v18 + 1;
  if ( (_BYTE)v19 != 97 )
    goto LABEL_49;
  v20 = (_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL);
  *v20 = Parameters;
  *a2 = sub_1401605B0(a1, v19);
  a2[1] = sub_1401605B0(a1, v21);
  v23 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v23 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, v22);
      v25 = *(unsigned __int8 **)(a1 + 192);
      v24 = *v25;
      *(_QWORD *)(a1 + 192) = v25 + 1;
    }
    else
    {
      v24 = 0;
    }
  }
  else
  {
    v24 = *v23;
    *(_QWORD *)(a1 + 192) = v23 + 1;
  }
  a2[8] = v24;
  v26 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v26 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, v22);
      v28 = *(unsigned __int8 **)(a1 + 192);
      v27 = *v28;
      *(_QWORD *)(a1 + 192) = v28 + 1;
    }
    else
    {
      v27 = 0;
    }
  }
  else
  {
    v27 = *v26;
    *(_QWORD *)(a1 + 192) = v26 + 1;
  }
  a2[9] = v27;
  v29 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v29 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, v22);
      v31 = *(unsigned __int8 **)(a1 + 192);
      v30 = *v31;
      *(_QWORD *)(a1 + 192) = v31 + 1;
    }
    else
    {
      v30 = 0;
    }
  }
  else
  {
    v30 = *v29;
    *(_QWORD *)(a1 + 192) = v29 + 1;
  }
  v32 = *a2 <= 0x1000000;
  a2[10] = v30;
  a2[11] = -1;
  if ( v32 && (int)a2[1] <= 0x1000000 )
  {
    if ( a3 )
      *a3 = 4;
    if ( !a4 )
    {
      v33 = a2[8];
      if ( (v33 & 0x80u) != 0 )
        sub_140161A30(a1, a2 + 13, (unsigned int)(2 << (v33 & 7)), 0xFFFFFFFFLL);
    }
    return 1;
  }
  else
  {
    *v20 = "too large";
    return 0;
  }
}

