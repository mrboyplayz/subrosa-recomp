/* Address: 0x14025dde0 | Name: sub_14025DDE0 | Size: 393 bytes */
__int64 __fastcall sub_14025DDE0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbp
  unsigned int v6; // esi
  unsigned __int64 v10; // rbp
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  char *v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // r14
  unsigned __int64 v17; // r14
  __int64 v18; // rax

  v4 = -1;
  v6 = 0;
  do
    ++v4;
  while ( *(_WORD *)(a1 + 2 * v4) );
  v10 = v4 + 1;
  if ( v10 > ~a3 )
    return 12;
  v12 = v10 + a3 + 1;
  v13 = calloc_base(v12, 2u);
  v14 = (char *)v13;
  if ( a3 && (unsigned int)sub_140260D80(v13, v12, a2, a3)
    || (unsigned int)sub_140260D80(&v14[2 * a3], v12 - a3, a1, v10) )
  {
    sub_14024CFBC();
    JUMPOUT(0x14025DF68LL);
  }
  v15 = (_QWORD *)a4[1];
  v16 = (_QWORD *)a4[2];
  if ( v15 != v16 )
    goto LABEL_18;
  if ( *a4 )
  {
    v17 = ((__int64)v16 - *a4) >> 3;
    if ( v17 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v18 = recalloc_base(*a4, 2 * v17, 8);
      if ( v18 )
      {
        *a4 = v18;
        a4[1] = v18 + 8 * v17;
        a4[2] = v18 + 16 * v17;
        free_base(nullptr);
        v15 = (_QWORD *)a4[1];
        goto LABEL_18;
      }
      free_base(nullptr);
    }
  }
  else
  {
    *a4 = calloc_base(4u, 8u);
    free_base(nullptr);
    v15 = (_QWORD *)*a4;
    if ( *a4 )
    {
      a4[1] = (__int64)v15;
      a4[2] = (__int64)(v15 + 4);
LABEL_18:
      *v15 = v14;
      a4[1] += 8;
      goto LABEL_16;
    }
  }
  free_base(v14);
  v6 = 12;
LABEL_16:
  free_base(nullptr);
  return v6;
}

