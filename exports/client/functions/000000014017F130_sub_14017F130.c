/* Address: 0x14017f130 | Name: sub_14017F130 | Size: 90 bytes */
__int64 __fastcall sub_14017F130(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 12);
  if ( (a2 > (int)result || a2 < 0)
    && ((sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116),
         result = *(unsigned int *)(a1 + 12),
         a2 > (int)result)
     || a2 < 0) )
  {
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a2;
  }
  return result;
}

