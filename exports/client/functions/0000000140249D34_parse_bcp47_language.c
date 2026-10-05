/* Address: 0x140249d34 | Name: parse_bcp47_language | Size: 137 bytes */
char __fastcall parse_bcp47_language(__int64 a1, _QWORD *a2)
{
  if ( *((_DWORD *)a2 + 4) || (unsigned __int64)(a2[1] - 2LL) > 1 || !(unsigned __int8)sub_140249F5C(*a2) )
    return 0;
  if ( (unsigned int)sub_140260D80(a1, 64, *a2, a2[1]) || (unsigned int)sub_140260D80(a1 + 288, 85, *a2, a2[1]) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140249DBCLL);
  }
  return 1;
}

