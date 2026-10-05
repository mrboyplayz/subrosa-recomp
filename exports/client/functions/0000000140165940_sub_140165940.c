/* Address: 0x140165940 | Name: sub_140165940 | Size: 198 bytes */
__int64 __fastcall sub_140165940(__int64 a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  __int64 *v8; // rdi
  _QWORD *v9; // rdx
  unsigned int v10; // ebx
  int v11; // edx

  v8 = (__int64 *)j__malloc_base(18568);
  *v8 = a1;
  if ( sub_14015F960(v8, 2u) )
  {
    if ( a2 )
      *a2 = *(_DWORD *)*v8;
    if ( a3 )
      *a3 = *(_DWORD *)(*v8 + 4);
    v10 = 1;
    if ( a4 )
    {
      v11 = 1;
      if ( *(int *)(*v8 + 8) >= 3 )
        v11 = 3;
      *a4 = v11;
    }
  }
  else
  {
    v9 = (_QWORD *)*v8;
    v10 = 0;
    v9[24] = *(_QWORD *)(*v8 + 208);
    v9[25] = v9[27];
  }
  free(v8);
  return v10;
}

