/* Address: 0x1400b0a60 | Name: sub_1400B0A60 | Size: 186 bytes */
__int64 __fastcall sub_1400B0A60(int a1, _BYTE *a2)
{
  __int64 v2; // rax
  size_t v3; // r8
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = -1;
  do
    ++v2;
  while ( a2[v2] );
  v3 = v2 & 0x3F;
  v4 = 3597LL * a1;
  dword_16D67D5A0[21 * dword_16D67D5A0[v4 + 109] + 114 + v4] = 1;
  dword_16D67D5A0[21 * dword_16D67D5A0[v4 + 109] + 115 + v4] = v3;
  memcpy(&byte_16D67D77C[84 * dword_16D67D5A0[v4 + 109] + v4 * 4], a2, v3);
  dword_16D67D5A0[21 * dword_16D67D5A0[v4 + 109] + 116 + v4] = dword_191536C24;
  result = ((unsigned __int8)dword_16D67D5A0[v4 + 109] + 1) & 0x3F;
  dword_16D67D5A0[v4 + 109] = result;
  return result;
}

