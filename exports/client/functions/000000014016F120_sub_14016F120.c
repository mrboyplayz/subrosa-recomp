/* Address: 0x14016f120 | Name: sub_14016F120 | Size: 130 bytes */
__int64 __fastcall sub_14016F120(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v3; // ax
  int v4; // ecx

  v3 = sub_1401605B0(a1, (__int64)a2);
  *a2 = (char)-((v3 >> 10) & 0x1F) / 31;
  v4 = 255 * (v3 & 0x1F);
  a2[1] = (char)-((v3 >> 5) & 0x1F) / 31;
  a2[2] = v4 / 31;
  return (unsigned int)((unsigned __int64)(2216757315LL * v4) >> 32) >> 31;
}

