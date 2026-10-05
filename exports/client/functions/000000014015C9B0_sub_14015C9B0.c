/* Address: 0x14015c9b0 | Name: sub_14015C9B0 | Size: 276 bytes */
__int64 __fastcall sub_14015C9B0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char v4; // cl
  char *v5; // rax
  char v6; // cl
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 result; // rax

  v2 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_14;
    sub_14016D910(a1, a2);
    v2 = *(char **)(a1 + 192);
  }
  v4 = *v2;
  v5 = v2 + 1;
  *(_QWORD *)(a1 + 192) = v5;
  if ( v4 != 66 )
    goto LABEL_14;
  if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, a2);
      v5 = *(char **)(a1 + 192);
      goto LABEL_8;
    }
LABEL_14:
    result = 0;
    goto LABEL_15;
  }
LABEL_8:
  v6 = *v5;
  *(_QWORD *)(a1 + 192) = v5 + 1;
  if ( v6 != 77 )
    goto LABEL_14;
  sub_1401605B0(a1, a2);
  sub_1401605B0(a1, v7);
  sub_1401605B0(a1, v8);
  sub_1401605B0(a1, v9);
  sub_1401605B0(a1, v10);
  sub_1401605B0(a1, v11);
  v13 = sub_1401605B0(a1, v12);
  v15 = v13 + ((unsigned int)sub_1401605B0(a1, v14) << 16);
  if ( (unsigned int)v15 > 0x38 || (v16 = 0x100010000001000LL, !_bittest64(&v16, v15)) )
  {
    if ( (_DWORD)v15 != 108 && (_DWORD)v15 != 124 )
      goto LABEL_14;
  }
  result = 1;
LABEL_15:
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return result;
}

