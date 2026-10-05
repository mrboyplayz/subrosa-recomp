/* Address: 0x14016e050 | Name: sub_14016E050 | Size: 149 bytes */
__int64 __fastcall sub_14016E050(unsigned int a1, int a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // ebx

  v3 = a3;
  if ( a2 >= 0 )
    v4 = a1 >> a2;
  else
    v4 = a1 << -(char)a2;
  if ( v4 >= 0x100 )
    sub_14023E640(L"v < 256", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 5262);
  v5 = v4 >> (8 - v3);
  if ( (unsigned int)v3 > 8 )
    sub_14023E640(L"bits >= 0 && bits <= 8", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 5264);
  return (unsigned int)((int)(v5 * dword_140301870[v3]) >> dword_140301870[v3 + 10]);
}

