/* Address: 0x14006c870 | Name: sub_14006C870 | Size: 98 bytes */
__int64 __fastcall sub_14006C870(_BYTE *a1)
{
  int v1; // edx
  unsigned int v2; // r11d
  int v3; // r9d
  _BYTE *v4; // r8

  v1 = dword_140404A6C[129454557];
  v2 = 0;
  v3 = 0;
  if ( (int)dword_140404A6C[129454557] < (int)dword_140404A6C[129454558] )
  {
    v4 = a1;
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 != *((_BYTE *)&dword_140404A6C[129454559] + v1) )
        break;
      ++v3;
      ++v1;
      ++v4;
    }
    while ( v1 < (int)dword_140404A6C[129454558] );
  }
  LOBYTE(v2) = a1[v3] == 0;
  return v2;
}

