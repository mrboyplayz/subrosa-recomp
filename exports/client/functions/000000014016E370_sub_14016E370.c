/* Address: 0x14016e370 | Name: sub_14016E370 | Size: 1058 bytes */
__int64 __fastcall sub_14016E370(__int64 a1, __int64 a2, int *a3, unsigned int *a4)
{
  unsigned __int8 *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int8 v7; // di
  unsigned __int8 *v8; // rax
  char v10; // r14
  char *v11; // rax
  int v12; // r15d
  int v13; // r8d
  __int64 v14; // rcx
  unsigned __int8 *v15; // rcx
  unsigned __int8 v16; // r8
  unsigned __int8 *v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // r8
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r13d
  int v26; // r12d
  unsigned __int8 *v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int8 v29; // dl
  _BYTE *v30; // rax
  int v31; // ebp
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  unsigned int v37; // edi
  _DWORD *v38; // [rsp+68h] [rbp+10h]

  v38 = (_DWORD *)a2;
  v5 = *(unsigned __int8 **)(a1 + 192);
  v6 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v5 >= v6 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_11;
    sub_14016D910(a1);
    v5 = (unsigned __int8 *)++*(_QWORD *)(a1 + 192);
    v6 = *(_QWORD *)(a1 + 200);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = ++v5;
  }
  if ( (unsigned __int64)v5 < v6 )
  {
    v7 = *v5++;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  sub_14016D910(a1);
  v8 = *(unsigned __int8 **)(a1 + 192);
  v7 = *v8;
  v5 = v8 + 1;
LABEL_9:
  *(_QWORD *)(a1 + 192) = v5;
  if ( v7 > 1u )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
LABEL_12:
  if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v11 = *(char **)(a1 + 192);
      v10 = *v11;
      v5 = (unsigned __int8 *)(v11 + 1);
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v10 = *v5++;
  }
  v12 = 0;
  if ( v7 == 1 )
  {
    if ( ((v10 - 1) & 0xF7) == 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v13 = *(_DWORD *)(a1 + 200) - (_DWORD)v5, v13 < 4) )
      {
        v14 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 24))(v14, (unsigned int)(4 - v13));
        v15 = *(unsigned __int8 **)(a1 + 192);
      }
      else
      {
        v15 = v5 + 4;
        *(_QWORD *)(a1 + 192) = v15;
      }
      if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v17 = *(unsigned __int8 **)(a1 + 192);
          v16 = *v17;
          v15 = v17 + 1;
        }
        else
        {
          v16 = 0;
        }
        a2 = (unsigned int)v15;
      }
      else
      {
        v16 = *v15;
        a2 = (__int64)++v15;
      }
      v18 = v16;
      if ( v16 <= 0x20u )
      {
        v19 = 0x101018100LL;
        if ( _bittest64(&v19, v18) )
        {
          if ( *(_QWORD *)(a1 + 16) && (v20 = *(_DWORD *)(a1 + 200) - a2, v20 < 4) )
          {
            v21 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
            (*(void (__fastcall **)(__int64, _QWORD))(a1 + 24))(v21, (unsigned int)(4 - v20));
          }
          else
          {
            *(_QWORD *)(a1 + 192) = v15 + 4;
          }
          goto LABEL_42;
        }
      }
    }
LABEL_36:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  if ( ((v10 - 2) & 0xF6) != 0 )
    goto LABEL_36;
  if ( *(_QWORD *)(a1 + 16) && (v22 = *(_DWORD *)(a1 + 200) - (_DWORD)v5, v22 < 9) )
  {
    v23 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 24))(v23, (unsigned int)(9 - v22));
  }
  else
  {
    *(_QWORD *)(a1 + 192) = v5 + 9;
  }
  LODWORD(v18) = 0;
LABEL_42:
  v25 = sub_1401605B0(a1, a2);
  if ( v25 < 1 )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  v26 = sub_1401605B0(a1, v24);
  if ( v26 < 1 )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  v27 = *(unsigned __int8 **)(a1 + 192);
  v28 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v27 >= v28 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v31 = 0;
      v32 = 0;
      goto LABEL_52;
    }
    sub_14016D910(a1);
    v27 = *(unsigned __int8 **)(a1 + 192);
    v28 = *(_QWORD *)(a1 + 200);
  }
  v29 = *v27;
  v30 = v27 + 1;
  v31 = v29;
  *(_QWORD *)(a1 + 192) = v30;
  v32 = v29;
  if ( (unsigned __int64)v30 < v28 )
  {
    *(_QWORD *)(a1 + 192) = v30 + 1;
    goto LABEL_54;
  }
LABEL_52:
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1);
    ++*(_QWORD *)(a1 + 192);
  }
LABEL_54:
  if ( !(_DWORD)v18 )
  {
    if ( v10 == 3 || v10 == 11 )
      v12 = 1;
    v33 = v32 - 8;
    if ( v33 )
    {
      v34 = v33 - 7;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 8;
          if ( v36 && v36 != 8 )
            goto LABEL_72;
          LODWORD(v18) = v31;
          goto LABEL_71;
        }
        if ( v12 )
        {
          v37 = 2;
          goto LABEL_77;
        }
      }
LABEL_75:
      v37 = 3;
      goto LABEL_77;
    }
LABEL_76:
    v37 = 1;
    goto LABEL_77;
  }
  if ( ((v31 - 8) & 0xFFFFFFF7) != 0 )
  {
LABEL_72:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  if ( (_DWORD)v18 == 8 )
    goto LABEL_76;
  if ( (_DWORD)v18 == 15 || (_DWORD)v18 == 16 )
    goto LABEL_75;
  if ( (_DWORD)v18 != 24 && (_DWORD)v18 != 32 )
    goto LABEL_72;
LABEL_71:
  v37 = (unsigned int)v18 >> 3;
  if ( !v37 )
    goto LABEL_72;
LABEL_77:
  if ( v38 )
    *v38 = v25;
  if ( a3 )
    *a3 = v26;
  if ( a4 )
    *a4 = v37;
  return 1;
}

