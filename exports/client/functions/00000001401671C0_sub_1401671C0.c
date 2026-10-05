/* Address: 0x1401671c0 | Name: sub_1401671C0 | Size: 103 bytes */
__int64 __fastcall sub_1401671C0(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v4; // r10d
  signed int v5; // r11d
  signed int v6; // ecx
  signed int v7; // eax

  v4 = a1 - a3 + a2 - a3;
  v5 = abs32(a2 - a3);
  v6 = abs32(a1 - a3);
  v7 = abs32(v4);
  if ( v5 <= v6 && v5 <= v7 )
    return a1;
  if ( v6 <= v7 )
    return a2;
  return a3;
}

