/* Address: 0x14008a120 | Name: sub_14008A120 | Size: 190 bytes */
__int64 __fastcall sub_14008A120(int a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx

  v2 = 1760LL * a1;
  v3 = dword_19025F0F4[v2];
  if ( (int)v3 >= 8 )
    return 0;
  v4 = 7040LL * a2;
  v5 = dword_19025F0D4[v4 / 4];
  if ( !dword_1901221DC[1268 * v5 + dword_19025F0D4[v2]] )
    return 0;
  if ( (unsigned int)(v5 - 17) <= 1 )
  {
    if ( (int)v3 >= 5 )
      return 0;
  }
  else if ( (int)v3 > 0 )
  {
    return 0;
  }
  dword_19025F0F8[1760 * a1 + v3] = a2;
  ++dword_19025F0F4[v2];
  *(_DWORD *)((char *)&unk_19025F0E8 + v4) = a1;
  *(_DWORD *)((char *)&unk_19025F0EC + v4) = v3;
  return 1;
}

