/* Address: 0x140249ecc | Name: parse_bcp47_script | Size: 143 bytes */
char __fastcall parse_bcp47_script(__int64 a1, _QWORD *a2)
{
  if ( *((_DWORD *)a2 + 4) || a2[1] != 4 || !(unsigned __int8)sub_140249F5C(*a2) )
    return 0;
  if ( (unsigned int)sub_14025AE2C(a1 + 288, 85, L"-", 1) || (unsigned int)sub_14025AE2C(a1 + 288, 85, *a2, a2[1]) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140249F5ALL);
  }
  return 1;
}

