/* Address: 0x14025bbc0 | Name: ?signal_failed@@YAP6AXH@ZH@Z | Size: 39 bytes */
__int64 __fastcall signal_failed(unsigned int a1)
{
  int v1; // eax

  if ( a1 > 0x11 || (v1 = 204810, !_bittest(&v1, a1)) )
    *errno() = 22;
  return -1;
}

