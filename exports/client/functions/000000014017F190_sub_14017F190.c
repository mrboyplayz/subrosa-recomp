/* Address: 0x14017f190 | Name: sub_14017F190 | Size: 93 bytes */
__int64 __fastcall sub_14017F190(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // ebx

  result = *(unsigned int *)(a1 + 12);
  v4 = a2 + *(_DWORD *)(a1 + 8);
  if ( (v4 > (int)result || v4 < 0)
    && ((sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116),
         result = *(unsigned int *)(a1 + 12),
         v4 > (int)result)
     || v4 < 0) )
  {
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v4;
  }
  return result;
}

