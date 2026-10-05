/* Address: 0x140247b18 | Name: sub_140247B18 | Size: 257 bytes */
int __cdecl sub_140247B18(int FileHandle, int Mode)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  int v6; // ebx

  if ( Mode != 0x4000 && Mode != 0x8000 && Mode != 0x10000 && Mode != 0x40000 && Mode != 0x20000 )
  {
    *errno() = 22;
LABEL_17:
    sub_14024CF6C(v4);
    return -1;
  }
  if ( FileHandle == -2 )
  {
    *errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= dword_140404A6C[19065657]
    || (v5 = (__int64)FileHandle >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v5 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) == 0) )
  {
    *errno() = 9;
    goto LABEL_17;
  }
  sub_140261068((unsigned int)FileHandle);
  v6 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v5 + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) != 0 )
    v6 = sub_140247C1C((unsigned int)FileHandle, (unsigned int)Mode);
  else
    *errno() = 9;
  sub_140261150((unsigned int)FileHandle);
  return v6;
}

