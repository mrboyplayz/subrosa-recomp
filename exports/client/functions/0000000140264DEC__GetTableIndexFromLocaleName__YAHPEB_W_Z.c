/* Address: 0x140264dec | Name: ?GetTableIndexFromLocaleName@@YAHPEB_W@Z | Size: 135 bytes */
__int64 __fastcall GetTableIndexFromLocaleName(const #49 *a1)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebp
  int v5; // eax

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
      return 0xFFFFFFFFLL;
  }
  return *((unsigned int *)&off_140291E60 + 4 * v4 + 2);
}

