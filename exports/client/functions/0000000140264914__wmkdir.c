/* Address: 0x140264914 | Name: _wmkdir | Size: 41 bytes */
int __cdecl wmkdir(const #49 *Path)
{
  unsigned int v1; // eax

  if ( (unsigned int)((__int64 (__fastcall *)(const #49 *, _QWORD))CreateDirectoryW)(Path, 0) )
    return 0;
  v1 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v1);
  return -1;
}

