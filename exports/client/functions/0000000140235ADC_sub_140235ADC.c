/* Address: 0x140235adc | Name: sub_140235ADC | Size: 500 bytes */
char __fastcall sub_140235ADC(__int64 a1)
{
  void **v1; // rsi
  _WORD *v3; // rcx
  __int64 v4; // rbx
  _WORD *v6; // rbx
  _WORD *v7; // rcx
  __int16 v8; // r15
  unsigned __int16 v9; // ax
  _WORD *v10; // r12
  _WORD *v11; // rdx
  unsigned __int16 *v12; // rcx
  unsigned __int16 v13; // bp
  unsigned __int16 v14; // r14
  __int16 v15; // r14
  __int16 v16; // [rsp+50h] [rbp+8h]

  v1 = (void **)(a1 + 56);
  v3 = *(_WORD **)(a1 + 56);
  if ( !v3 )
  {
    v4 = calloc_base(0x2000, 1);
    free_base(*v1);
    *v1 = (void *)v4;
    free_base(nullptr);
    v3 = *v1;
    if ( !*v1 )
    {
      *(_QWORD *)(a1 + 16) = 12;
      *(_DWORD *)(a1 + 24) = 0;
LABEL_4:
      *(_BYTE *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_BYTE *)(a1 + 44) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      return 0;
    }
  }
  MEMORY[0x1401FCD30](v3, 0, 0x2000u);
  v6 = *(_WORD **)(a1 + 8);
  v7 = v6;
  v8 = *v6;
  v16 = *v6;
  v9 = *v6;
  if ( *v6 == 94 )
  {
    *(_QWORD *)(a1 + 8) = ++v6;
    v7 = v6;
    v9 = *v6;
  }
  if ( v9 == 93 )
  {
    *(_QWORD *)(a1 + 8) = v6 + 1;
    sub_140235D1C(v1, 93);
    v6 = *(_WORD **)(a1 + 8);
    v7 = v6;
    v9 = *v6;
  }
  v10 = nullptr;
  if ( v9 != 93 )
  {
    v11 = v6;
    do
    {
      if ( !v9 )
        break;
      if ( v9 != 45 || (v12 = v11 - 1, v11 - 1 == v10) || v11 == v6 || (v13 = v11[1], v13 == 93) )
      {
        sub_140235D1C(v1, v9);
      }
      else
      {
        v14 = *v12;
        v10 = v11 + 1;
        if ( *v12 <= v13 )
          v14 = v11[1];
        v15 = v14 + 1;
        if ( *v12 <= v13 )
          v13 = *v12;
        for ( ; v13 != v15; ++v13 )
          sub_140235D1C(v1, v13);
      }
      v7 = (_WORD *)(*(_QWORD *)(a1 + 8) + 2LL);
      *(_QWORD *)(a1 + 8) = v7;
      v11 = v7;
      v9 = *v7;
    }
    while ( *v7 != 93 );
    v8 = v16;
  }
  if ( !*v7 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 16) = 22;
    goto LABEL_4;
  }
  if ( v8 == 94 )
  {
    sub_1402326E8(v1);
    v7 = *(_WORD **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v7 + 1;
  return 1;
}

