/* Address: 0x140027690 | Name: sub_140027690 | Size: 965 bytes */
__int64 sub_140027690()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  int i; // edi
  int v3; // r10d
  const char *v4; // r11

  v0 = &dword_140404A6C[468675899];
  result = MEMORY[0x1401FCD30](&dword_140404A6C[468675899], 0, 256);
  for ( i = 0; i < (int)dword_140404A6C[468675642]; ++v0 )
  {
    v3 = 2;
    v4 = (const char *)&dword_140404A6C[16 * (__int64)i + 468675643];
    do
    {
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451017797]) )
        *v0 = v3 - 2;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451020885]) )
        *v0 = v3 - 1;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451023973]) )
        *v0 = v3;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451027061]) )
        *v0 = v3 + 1;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451030149]) )
        *v0 = v3 + 2;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451033237]) )
        *v0 = v3 + 3;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451036325]) )
        *v0 = v3 + 4;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451039413]) )
        *v0 = v3 + 5;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451042501]) )
        *v0 = v3 + 6;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451045589]) )
        *v0 = v3 + 7;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451048677]) )
        *v0 = v3 + 8;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451051765]) )
        *v0 = v3 + 9;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451054853]) )
        *v0 = v3 + 10;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451057941]) )
        *v0 = v3 + 11;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451061029]) )
        *v0 = v3 + 12;
      if ( !strcmp(v4, (const char *)&dword_140404A6C[3088 * v3 + 451064117]) )
        *v0 = v3 + 13;
      v3 += 16;
      result = (unsigned int)(v3 - 2);
    }
    while ( (int)result < 64 );
    ++i;
  }
  return result;
}

