/* Address: 0x14001ad60 | Name: sub_14001AD60 | Size: 211 bytes */
__int64 sub_14001AD60()
{
  int *v0; // rbx
  __int64 result; // rax
  int v2; // edi
  int v3; // r11d
  int v4; // r9d
  _BYTE *v5; // r10
  unsigned __int8 *v6; // rax
  int v7; // ecx
  int v8; // edx

  v0 = (int *)&unk_14A9C02D4;
  memset(&unk_14A9C02D4, 0, 0x1000u);
  result = (unsigned int)dword_14A9B02D0;
  v2 = 0;
  if ( dword_14A9B02D0 > 0 )
  {
    v3 = dword_15ADEF2A0;
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = byte_15AE31760;
        do
        {
          v6 = (unsigned __int8 *)&unk_14A9B02D4 + 64 * (__int64)v2;
          do
          {
            v7 = v6[v5 - ((char *)&unk_14A9B02D4 + 64 * (__int64)v2)];
            v8 = *v6 - v7;
            if ( v8 )
              break;
            ++v6;
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 232;
        }
        while ( v4 < v3 );
        result = (unsigned int)dword_14A9B02D0;
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

