/* Address: 0x14001a8b0 | Name: sub_14001A8B0 | Size: 965 bytes */
unsigned __int64 sub_14001A8B0()
{
  int *v0; // rbx
  unsigned __int64 result; // rax
  int i; // edi
  int v3; // r10d
  const char *v4; // r11

  v0 = (int *)&unk_14A9C16D8;
  result = (unsigned __int64)memset(&unk_14A9C16D8, 0, 0x100u);
  for ( i = 0; i < dword_14A9C12D4; ++v0 )
  {
    v3 = 2;
    v4 = (char *)&unk_14A9C12D8 + 64 * (__int64)i;
    do
    {
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 - 24704]) )
        *v0 = v3 - 2;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 - 12352]) )
        *v0 = v3 - 1;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3]) )
        *v0 = v3;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 12352]) )
        *v0 = v3 + 1;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 24704]) )
        *v0 = v3 + 2;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 37056]) )
        *v0 = v3 + 3;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 49408]) )
        *v0 = v3 + 4;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 61760]) )
        *v0 = v3 + 5;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 74112]) )
        *v0 = v3 + 6;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 86464]) )
        *v0 = v3 + 7;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 98816]) )
        *v0 = v3 + 8;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 111168]) )
        *v0 = v3 + 9;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 123520]) )
        *v0 = v3 + 10;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 135872]) )
        *v0 = v3 + 11;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 148224]) )
        *v0 = v3 + 12;
      if ( !strcmp(v4, &byte_143C7A200[12352 * v3 + 160576]) )
        *v0 = v3 + 13;
      v3 += 16;
      result = (unsigned int)(v3 - 2);
    }
    while ( (int)result < 64 );
    ++i;
  }
  return result;
}

