/* Address: 0x140229f5c | Name: sub_140229F5C | Size: 799 bytes */
__int64 __fastcall sub_140229F5C(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // dl
  char v6; // di
  __int64 i; // r10
  unsigned __int64 v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  char *v15; // rax
  char v16; // cl
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  bool v23; // cc
  __int64 v24; // rax
  char *v25; // rax
  char v26; // cl
  char v27; // cl
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  char v30; // al
  char v31; // dl
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  char v34; // r8
  unsigned __int64 v35; // rax
  char *v36; // rax
  unsigned __int64 v37; // rax

  v5 = *a1;
  v6 = 0;
  LOBYTE(a4) = *a1;
  for ( i = 0; i != 3; ++i )
  {
    if ( v5 != byte_1402858D4[i + 24] && v5 != byte_1402858D4[i + 28] )
    {
      v17 = *(_QWORD *)(a2 + 16) - 1LL;
      *(_QWORD *)(a2 + 16) = v17;
      if ( (!*(_QWORD *)(a2 + 8) || v17 <= *(_QWORD *)(a2 + 8)) && (_BYTE)a4 != 0xFF && (_BYTE)a4 != 0 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( v18 != **(_QWORD **)a2 )
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v18 - 1;
      }
      *a1 = 0;
      if ( a3 != *(_QWORD *)(a2 + 16) )
        **(_BYTE **)(a2 + 24) = 0;
      return 7;
    }
    v9 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = v9;
    if ( *(_QWORD *)(a2 + 8) && v9 > *(_QWORD *)(a2 + 8)
      || (v10 = *(char **)(*(_QWORD *)a2 + 16LL), v10 == *(char **)(*(_QWORD *)a2 + 8LL)) )
    {
      v5 = 0;
    }
    else
    {
      v5 = *v10;
      *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v10 + 1;
    }
    *a1 = v5;
    LOBYTE(a4) = v5;
  }
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = v12;
  if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
  {
    v13 = v12;
    v14 = v11;
    if ( v5 )
    {
      if ( v5 != -1 )
      {
        a4 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( a4 != **(_QWORD **)a2 )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = a4 - 1;
          v13 = *(_QWORD *)(a2 + 16);
          v14 = *(_QWORD *)(a2 + 8);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 16) = v13 + 1;
  if ( v14 && v13 + 1 > v14 || (v15 = *(char **)(*(_QWORD *)a2 + 16LL), v15 == *(char **)(*(_QWORD *)a2 + 8LL)) )
  {
    v16 = 0;
  }
  else
  {
    v16 = *v15;
    *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v15 + 1;
  }
  *a1 = v16;
  v20 = *(_QWORD *)(a2 + 16);
  v21 = *(_QWORD *)(a2 + 8);
  if ( v16 != 40 )
  {
    v22 = v20 - 1;
    *(_QWORD *)(a2 + 16) = v22;
    if ( v21 )
    {
      v23 = v22 <= v21;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  *(_QWORD *)(a2 + 16) = v20 + 1;
  if ( v21 && v20 + 1 > v21 || (v25 = *(char **)(*(_QWORD *)a2 + 16LL), v25 == *(char **)(*(_QWORD *)a2 + 8LL)) )
  {
    v26 = 0;
  }
  else
  {
    v26 = *v25;
    *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v25 + 1;
  }
  *a1 = v26;
  if ( (unsigned __int8)sub_14022ABCC(a1, a2, v11, a4) )
  {
    v27 = *a1;
    v28 = *(_QWORD *)(a2 + 16) - 1LL;
    *(_QWORD *)(a2 + 16) = v28;
    if ( (!*(_QWORD *)(a2 + 8) || v28 <= *(_QWORD *)(a2 + 8)) && v27 != -1 && v27 != 0 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
      if ( v29 != **(_QWORD **)a2 )
        *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v29 - 1;
    }
    return 5;
  }
  else
  {
    v30 = sub_14022A988(a1, a2);
    v31 = *a1;
    if ( !v30 )
    {
      v16 = *a1;
      if ( v31 == 41 )
        return 4;
      v34 = *a1;
      while ( v34
           && ((unsigned __int8)(v34 - 48) <= 9u
            || (unsigned __int8)(v34 - 97) <= 0x19u
            || (unsigned __int8)(v34 - 65) <= 0x19u
            || v34 == 95) )
      {
        v35 = *(_QWORD *)(a2 + 16) + 1LL;
        *(_QWORD *)(a2 + 16) = v35;
        if ( *(_QWORD *)(a2 + 8) && v35 > *(_QWORD *)(a2 + 8)
          || (v36 = *(char **)(*(_QWORD *)a2 + 16LL), v36 == *(char **)(*(_QWORD *)a2 + 8LL)) )
        {
          v16 = 0;
        }
        else
        {
          v16 = *v36;
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v36 + 1;
        }
        *a1 = v16;
        v34 = v16;
        if ( v16 == 41 )
          return 4;
      }
      v37 = *(_QWORD *)(a2 + 16) - 1LL;
      *(_QWORD *)(a2 + 16) = v37;
      if ( !*(_QWORD *)(a2 + 8) )
        goto LABEL_33;
      v23 = v37 <= *(_QWORD *)(a2 + 8);
LABEL_32:
      if ( v23 )
      {
LABEL_33:
        if ( v16 != -1 && v16 != 0 )
        {
          v24 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
          if ( v24 != **(_QWORD **)a2 )
            *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v24 - 1;
        }
      }
      *a1 = 0;
      if ( v13 == *(_QWORD *)(a2 + 16) )
        v6 = 1;
      else
        **(_BYTE **)(a2 + 24) = 0;
      return v6 != 0 ? 4 : 7;
    }
    v32 = *(_QWORD *)(a2 + 16) - 1LL;
    *(_QWORD *)(a2 + 16) = v32;
    if ( (!*(_QWORD *)(a2 + 8) || v32 <= *(_QWORD *)(a2 + 8)) && v31 != -1 && v31 != 0 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
      if ( v33 != **(_QWORD **)a2 )
        *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v33 - 1;
    }
    return 6;
  }
}

