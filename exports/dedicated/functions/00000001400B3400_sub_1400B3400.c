/* Address: 0x1400b3400 | Name: sub_1400B3400 | Size: 259 bytes */
__int64 __fastcall sub_1400B3400(int a1, int a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  int v6; // r10d
  char Buffer[512]; // [rsp+30h] [rbp-228h] BYREF

  if ( (unsigned int)a1 <= 0xFF )
  {
    v4 = 3597LL * a1;
    if ( !dword_16D67D5A0[v4 + 24] && a2 > 0 )
    {
      result = (unsigned int)(dword_19154118C - 4);
      if ( (unsigned int)result > 1 )
      {
        sub_1400DBB30(Buffer, "%s(%d) team damage: %d");
        sub_1400BEF50(Buffer);
        v6 = dword_16D67D5A0[v4 + 39];
        if ( v6 != -1 )
          sub_140052E10(v6, 3u, 0, a2 * dword_1915413C8 / 100);
        sub_14003A3D0(a1);
        return sub_14003A560(a1);
      }
    }
  }
  return result;
}

