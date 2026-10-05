/* Address: 0x140165a10 | Name: sub_140165A10 | Size: 164 bytes */
__int64 __fastcall sub_140165A10(__int64 *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  _QWORD *v8; // rcx
  int v10; // edx

  if ( sub_14015F960(a1, 2u) )
  {
    if ( a2 )
      *a2 = *(_DWORD *)*a1;
    if ( a3 )
      *a3 = *(_DWORD *)(*a1 + 4);
    if ( a4 )
    {
      v10 = 1;
      if ( *(int *)(*a1 + 8) >= 3 )
        v10 = 3;
      *a4 = v10;
    }
    return 1;
  }
  else
  {
    v8 = (_QWORD *)*a1;
    v8[24] = *(_QWORD *)(*a1 + 208);
    v8[25] = v8[27];
    return 0;
  }
}

