/* Address: 0x14024877c | Name: sub_14024877C | Size: 358 bytes */
__int64 __fastcall sub_14024877C(_WORD *a1, _WORD *a2)
{
  int i; // edi
  __int16 *v6; // r14
  __int16 v7; // si
  _WORD *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax

  MEMORY[0x1401FCD30](a1, 0, 0x1CAu);
  if ( !*a2 )
    return 0;
  if ( *a2 == 46 && a2[1] )
  {
    if ( (unsigned int)sub_140260D80(a1 + 128, 16, a2 + 1, 15) )
    {
LABEL_27:
      sub_14024CFBC(0, 0, 0, 0, 0);
      JUMPOUT(0x1402488E1LL);
    }
    a1[143] = 0;
    return 0;
  }
  for ( i = 0; ; ++i )
  {
    v10 = MEMORY[0x1402625A4](a2, L"_.,");
    if ( !v10 )
      break;
    v6 = &a2[v10];
    v7 = *v6;
    if ( i )
    {
      if ( i == 1 )
      {
        if ( v10 >= 0x40 || v7 == 95 )
          return 0xFFFFFFFFLL;
        v8 = a1 + 64;
        v9 = 64;
      }
      else
      {
        if ( i != 2 || v10 >= 0x10 || v7 && v7 != 44 )
          return 0xFFFFFFFFLL;
        v8 = a1 + 128;
        v9 = 16;
      }
      if ( (unsigned int)sub_140260D80(v8, v9, a2, v10) )
        goto LABEL_27;
    }
    else
    {
      if ( v10 >= 0x40 )
        return 0xFFFFFFFFLL;
      if ( (unsigned int)sub_140260D80(a1, 64, a2, v10) )
        goto LABEL_27;
      i = v7 == 46;
    }
    if ( v7 == 44 || !v7 )
      return 0;
    a2 = v6 + 1;
  }
  return 0xFFFFFFFFLL;
}

