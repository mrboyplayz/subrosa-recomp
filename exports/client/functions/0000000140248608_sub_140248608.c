/* Address: 0x140248608 | Name: sub_140248608 | Size: 130 bytes */
__int64 __fastcall sub_140248608(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx

  if ( !a1 )
    return 0;
  v2 = MEMORY[0x140254F48](a1, 85);
  v3 = v2;
  if ( v2 >= 0x55 )
    return 0;
  v4 = malloc_base(2 * v2 + 2);
  v5 = v4;
  if ( !v4 )
    return 0;
  if ( (unsigned int)sub_140260D80(v4, v3 + 1, a1, v3 + 1) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140248689LL);
  }
  return v5;
}

