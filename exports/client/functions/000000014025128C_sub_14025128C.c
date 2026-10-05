/* Address: 0x14025128c | Name: sub_14025128C | Size: 126 bytes */
__int64 __fastcall sub_14025128C(unsigned int FileHandle)
{
  __int64 osfhandle; // rbx
  __int64 v3; // rax

  if ( ((__int64 (*)(void))get_osfhandle)() == -1 )
    return 0;
  if ( FileHandle == 1 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[19065401] + 200LL) & 1) != 0
    || FileHandle == 2 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[19065401] + 128LL) & 1) != 0 )
  {
    osfhandle = get_osfhandle(2);
    if ( get_osfhandle(1) == osfhandle )
      return 0;
  }
  v3 = get_osfhandle(FileHandle);
  if ( (unsigned int)((__int64 (__fastcall *)(__int64))CloseHandle)(v3) )
    return 0;
  else
    return ((__int64 (*)(void))GetLastError)();
}

