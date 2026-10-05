/* Address: 0x14017d490 | Name: sub_14017D490 | Size: 115 bytes */
__int64 __fastcall sub_14017D490(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( a2 > 8 )
    result = sub_14023E640(L"h_oversample <= 8", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 3809);
  if ( a3 > 8 )
    result = sub_14023E640(L"v_oversample <= 8", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 3810);
  if ( a2 <= 8 )
    *(_DWORD *)(a1 + 32) = a2;
  if ( a3 <= 8 )
    *(_DWORD *)(a1 + 36) = a3;
  return result;
}

