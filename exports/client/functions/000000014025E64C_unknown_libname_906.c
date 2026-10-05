/* Address: 0x14025e64c | Name: unknown_libname_906 | Size: 222 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_906(__int64 *a1, void *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rax

  v4 = (_QWORD *)a1[1];
  v5 = (_QWORD *)a1[2];
  if ( v4 != v5 )
    goto LABEL_10;
  v6 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v7 = v5 - v6;
    if ( v7 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v8 = recalloc_base(v6, 2 * v7, 8);
      if ( v8 )
      {
        *a1 = v8;
        a1[1] = v8 + 8 * v7;
        a1[2] = v8 + 16 * v7;
        free_base(nullptr);
        v4 = (_QWORD *)a1[1];
        goto LABEL_10;
      }
      free_base(nullptr);
    }
LABEL_8:
    free_base(a2);
    return 12;
  }
  *a1 = calloc_base(4u, 8u);
  free_base(nullptr);
  v4 = (_QWORD *)*a1;
  if ( !*a1 )
    goto LABEL_8;
  a1[1] = (__int64)v4;
  a1[2] = (__int64)(v4 + 4);
LABEL_10:
  *v4 = a2;
  a1[1] += 8;
  return 0;
}

