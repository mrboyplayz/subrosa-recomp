/* Address: 0x140264f68 | Name: __acrt_DownlevelLocaleNameToLCID | Size: 175 bytes */
__int64 __fastcall _acrt_DownlevelLocaleNameToLCID(__int64 a1)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  unsigned int v6; // eax

  if ( !a1 )
    return 0;
  v2 = 0;
  v3 = 227;
  while ( 1 )
  {
    v4 = (v3 + v2) / 2;
    v5 = _ascii_wcsnicmp(a1, *(&off_140291E60 + 2 * v4), 85);
    if ( !v5 )
      break;
    if ( v5 >= 0 )
      v2 = v4 + 1;
    else
      v3 = v4 - 1;
    if ( v2 > v3 )
    {
      v6 = -1;
      goto LABEL_10;
    }
  }
  v6 = dword_140291E68[4 * v4];
LABEL_10:
  if ( v6 < 0xE4 )
    return (unsigned int)dword_140290400[4 * v6];
  else
    return 0;
}

