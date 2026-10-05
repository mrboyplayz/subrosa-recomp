/* Address: 0x14026b8ec | Name: unknown_libname_946 | Size: 190 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_946(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx

  v6 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, _QWORD))WriteConsoleW)(hObject, a1, a2, a3, 0);
  if ( !v6 && (unsigned int)((__int64 (*)(void))GetLastError)() == 6 )
  {
    if ( hObject <= 0xFFFFFFFFFFFFFFFDuLL )
      ((void (*)(void))CloseHandle)();
    hObject = ((__int64 (__fastcall *)(const __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
                L"CONOUT$",
                0x40000000,
                3,
                0,
                3,
                0,
                0);
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, _QWORD))WriteConsoleW)(
                           hObject,
                           a1,
                           a2,
                           a3,
                           0);
  }
  return v6;
}

