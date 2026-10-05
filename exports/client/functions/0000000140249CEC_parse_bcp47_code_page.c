/* Address: 0x140249cec | Name: parse_bcp47_code_page | Size: 71 bytes */
char __fastcall parse_bcp47_code_page(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 16) != 2 )
    return 0;
  if ( (unsigned int)sub_140260D80(a1 + 256, 16, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140249D32LL);
  }
  return 1;
}

