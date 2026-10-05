/* Address: 0x140265160 | Name: _commit | Size: 145 bytes */
int __cdecl commit(int FileHandle)
{
  int *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = FileHandle;
  if ( FileHandle == -2 )
  {
    *errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0
      && FileHandle < dword_140404A6C[19065657]
      && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)FileHandle >> 6) + 19065401]
                   + 72LL * (FileHandle & 0x3F)
                   + 56)
        & 1) != 0 )
    {
      v5 = FileHandle;
      v6 = FileHandle;
      v2 = &v3;
      return sub_140265018((__int64)&v4, (unsigned int *)&v6, &v2, (unsigned int *)&v5);
    }
    *errno() = 9;
    sub_14024CF6C();
  }
  return -1;
}

