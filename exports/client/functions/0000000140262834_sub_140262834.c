/* Address: 0x140262834 | Name: sub_140262834 | Size: 374 bytes */
void __fastcall sub_140262834(__int64 a1)
{
  _UNKNOWN **v1; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  _DWORD *v6; // rax
  void **v7; // rsi
  __int64 v8; // rbp
  _DWORD **v9; // rdi
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx

  v1 = *(_UNKNOWN ***)(a1 + 248);
  if ( v1 )
  {
    if ( v1 != &off_140302AE0 )
    {
      v3 = *(_DWORD **)(a1 + 224);
      if ( v3 )
      {
        if ( !*v3 )
        {
          v4 = *(_DWORD **)(a1 + 240);
          if ( v4 && !*v4 )
          {
            free_base(v4);
            sub_140261548(*(_QWORD **)(a1 + 248));
          }
          v5 = *(_DWORD **)(a1 + 232);
          if ( v5 && !*v5 )
          {
            free_base(v5);
            sub_140261BBC(*(_QWORD *)(a1 + 248));
          }
          free_base(*(void **)(a1 + 224));
          free_base(*(void **)(a1 + 248));
        }
      }
    }
  }
  v6 = *(_DWORD **)(a1 + 256);
  if ( v6 && !*v6 )
  {
    free_base((void *)(*(_QWORD *)(a1 + 264) - 254LL));
    free_base((void *)(*(_QWORD *)(a1 + 272) - 128LL));
    free_base((void *)(*(_QWORD *)(a1 + 280) - 128LL));
    free_base(*(void **)(a1 + 256));
  }
  sub_1402629D4(*(void **)(a1 + 288));
  v7 = (void **)(a1 + 296);
  v8 = 6;
  v9 = (_DWORD **)(a1 + 56);
  do
  {
    if ( *(v9 - 2) != (_DWORD *)&unk_140302588 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        if ( !*v10 )
        {
          free_base(v10);
          free_base(*v7);
        }
      }
    }
    if ( *(v9 - 3) )
    {
      v11 = *(v9 - 1);
      if ( v11 )
      {
        if ( !*v11 )
          free_base(v11);
      }
    }
    ++v7;
    v9 += 4;
    --v8;
  }
  while ( v8 );
  free_base((void *)a1);
}

