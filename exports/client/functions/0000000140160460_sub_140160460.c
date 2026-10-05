/* Address: 0x140160460 | Name: sub_140160460 | Size: 132 bytes */
__int64 __fastcall sub_140160460(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  void *v6; // rcx
  void *v7; // rcx

  if ( a2 > 0 )
  {
    v4 = a1 + 18136;
    v5 = (unsigned int)a2;
    do
    {
      if ( *(_QWORD *)v4 )
      {
        free(*(void **)v4);
        *(_QWORD *)v4 = 0;
        *(_QWORD *)(v4 - 8) = 0;
      }
      v6 = *(void **)(v4 + 8);
      if ( v6 )
      {
        free(v6);
        *(_QWORD *)(v4 + 8) = 0;
        *(_QWORD *)(v4 + 24) = 0;
      }
      v7 = *(void **)(v4 + 16);
      if ( v7 )
      {
        free(v7);
        *(_QWORD *)(v4 + 16) = 0;
      }
      v4 += 96;
      --v5;
    }
    while ( v5 );
  }
  return a3;
}

