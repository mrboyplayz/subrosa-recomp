/* Address: 0x14015b580 | Name: sub_14015B580 | Size: 137 bytes */
__int64 __fastcall sub_14015B580(int a1, int a2)
{
  char v2; // bl
  int v4; // eax
  int v5; // edi
  unsigned int v6; // ecx

  v2 = a2;
  if ( a2 > 16 )
    sub_14023E640(L"bits <= 16", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 4006);
  v4 = a1;
  v5 = 2 * (a1 & 0x5555);
  v6 = (16 * ((4 * (v5 & 0x3333 | (v4 >> 1) & 0x1111)) & 0xF0F | ((v5 | (v4 >> 1) & 0x5555u) >> 2) & 0x303))
     | (((4 * (v5 & 0x3333 | (v4 >> 1) & 0x1111)) | ((v5 | (v4 >> 1) & 0x5555u) >> 2) & 0x3333) >> 4) & 0xF0F;
  return (int)((v6 >> 8) | ((unsigned __int8)v6 << 8)) >> (16 - v2);
}

