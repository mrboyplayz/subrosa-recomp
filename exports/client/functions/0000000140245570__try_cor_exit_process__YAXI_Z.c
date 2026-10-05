/* Address: 0x140245570 | Name: ?try_cor_exit_process@@YAXI@Z | Size: 91 bytes */
__int64 (__fastcall *__fastcall try_cor_exit_process(unsigned int a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 phModule; // [rsp+38h] [rbp+10h] BYREF

  phModule = 0;
  result = (__int64 (__fastcall *)(_QWORD))((__int64 (__fastcall *)(_QWORD, const __int16 *, __int64 *))GetModuleHandleExW)(
                                             0,
                                             L"mscoree.dll",
                                             &phModule);
  if ( (_DWORD)result )
  {
    result = (__int64 (__fastcall *)(_QWORD))((__int64 (__fastcall *)(__int64, const char *))GetProcAddress)(
                                               phModule,
                                               "CorExitProcess");
    if ( result )
      result = (__int64 (__fastcall *)(_QWORD))result(a1);
  }
  if ( phModule )
    return (__int64 (__fastcall *)(_QWORD))((__int64 (*)(void))FreeLibrary)();
  return result;
}

