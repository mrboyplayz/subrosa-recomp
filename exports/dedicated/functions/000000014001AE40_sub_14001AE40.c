/* Address: 0x14001ae40 | Name: sub_14001AE40 | Size: 211 bytes */
__int64 sub_14001AE40()
{
  int *v0; // rbx
  __int64 result; // rax
  int v2; // edi
  int v3; // r11d
  int v4; // r9d
  __int64 *v5; // r10
  unsigned __int8 *v6; // rax
  int v7; // ecx
  int v8; // edx

  v0 = (int *)&unk_14A9AF2D0;
  memset(&unk_14A9AF2D0, 0, 0x400u);
  result = (unsigned int)dword_14A9AB2CC;
  v2 = 0;
  if ( dword_14A9AB2CC > 0 )
  {
    v3 = dword_15AD75F80;
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &qword_15ADC0F98;
        do
        {
          v6 = (unsigned __int8 *)&unk_14A9AB2D0 + 64 * (__int64)v2;
          do
          {
            v7 = v6[(char *)v5 - ((char *)&unk_14A9AB2D0 + 64 * (__int64)v2)];
            v8 = *v6 - v7;
            if ( v8 )
              break;
            ++v6;
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 23;
        }
        while ( v4 < v3 );
        result = (unsigned int)dword_14A9AB2CC;
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

