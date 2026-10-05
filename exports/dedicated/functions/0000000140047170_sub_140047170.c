/* Address: 0x140047170 | Name: sub_140047170 | Size: 98 bytes */
__int64 __fastcall sub_140047170(_BYTE *a1)
{
  int v1; // edx
  unsigned int v2; // r11d
  int v3; // r9d
  _BYTE *v4; // r8

  v1 = dword_195899540;
  v2 = 0;
  v3 = 0;
  if ( dword_195899540 < dword_195899544 )
  {
    v4 = a1;
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 != byte_195899548[v1] )
        break;
      ++v3;
      ++v1;
      ++v4;
    }
    while ( v1 < dword_195899544 );
  }
  LOBYTE(v2) = a1[v3] == 0;
  return v2;
}

