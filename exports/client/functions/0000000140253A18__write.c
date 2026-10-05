/* Address: 0x140253a18 | Name: _write | Size: 235 bytes */
int __cdecl write(int FileHandle, const void *Buf, unsigned int MaxCharCount)
{
  __int64 v6; // rsi
  int v7; // edi

  if ( FileHandle == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= dword_140404A6C[19065657]
    || (v6 = (__int64)FileHandle >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) == 0) )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 9;
    sub_14024CF6C();
    return -1;
  }
  sub_140261068((unsigned int)FileHandle);
  v7 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) != 0 )
  {
    v7 = sub_140253B04((unsigned int)FileHandle, Buf, MaxCharCount);
  }
  else
  {
    *errno() = 9;
    *(_DWORD *)sub_14024D19C() = 0;
  }
  sub_140261150((unsigned int)FileHandle);
  return v7;
}

