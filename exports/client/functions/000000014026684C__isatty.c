/* Address: 0x14026684c | Name: _isatty | Size: 95 bytes */
int __cdecl isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < dword_140404A6C[19065657] )
      return *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)FileHandle >> 6) + 19065401]
                      + 72LL * (FileHandle & 0x3F)
                      + 56)
           & 0x40;
    *errno() = 9;
    sub_14024CF6C();
  }
  return 0;
}

