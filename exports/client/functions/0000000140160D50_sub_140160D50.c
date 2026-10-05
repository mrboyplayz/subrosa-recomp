/* Address: 0x140160d50 | Name: sub_140160D50 | Size: 176 bytes */
__int64 __fastcall sub_140160D50(_QWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v8; // rdi

  v8 = (_DWORD *)j__malloc_base(34928);
  if ( (unsigned int)sub_140160930((__int64)a1, v8, a4, 1) )
  {
    if ( a2 )
      *a2 = *v8;
    if ( a3 )
      *a3 = v8[1];
    free(v8);
    return 1;
  }
  else
  {
    free(v8);
    a1[24] = a1[26];
    a1[25] = a1[27];
    return 0;
  }
}

