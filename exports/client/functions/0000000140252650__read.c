/* Address: 0x140252650 | Name: _read | Size: 281 bytes */
int __cdecl read(int FileHandle, void *DstBuf, unsigned int MaxCharCount)
{
  __int64 v6; // r15
  int nolock; // ebx

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
    goto LABEL_13;
  }
  if ( MaxCharCount > 0x7FFFFFFF )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 22;
LABEL_13:
    sub_14024CF6C();
    return -1;
  }
  sub_140261068((unsigned int)FileHandle);
  nolock = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) != 0 )
  {
    nolock = read_nolock((unsigned int)FileHandle, DstBuf, MaxCharCount);
  }
  else
  {
    *errno() = 9;
    *(_DWORD *)sub_14024D19C() = 0;
  }
  sub_140261150((unsigned int)FileHandle);
  return nolock;
}

