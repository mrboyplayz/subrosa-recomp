/* Address: 0x140181c60 | Name: sub_140181C60 | Size: 90 bytes */
__int64 __fastcall sub_140181C60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // edi

  v3 = a3;
  if ( a3 >= 0x40000000 )
    sub_14023E640(L"size < 0x40000000", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1138);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = v3;
  *(_DWORD *)(a1 + 8) = 0;
  return a1;
}

