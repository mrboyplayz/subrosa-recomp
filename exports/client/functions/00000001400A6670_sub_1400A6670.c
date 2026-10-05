/* Address: 0x1400a6670 | Name: sub_1400A6670 | Size: 131 bytes */
__int64 sub_1400A6670()
{
  __int64 v0; // rax
  __int64 result; // rax
  unsigned int v2; // ebx

  v0 = ((__int64 (__fastcall *)(const __int16 *))LoadLibraryW)(L"opengl32.dll");
  *(_QWORD *)&dword_140404A6C[18215111] = v0;
  if ( !v0 )
    return 0;
  *(_QWORD *)&dword_140404A6C[18215113] = ((__int64 (__fastcall *)(__int64, const char *))GetProcAddress)(
                                            v0,
                                            "wglGetProcAddress");
  if ( !*(_QWORD *)&dword_140404A6C[18215113] )
    return 0;
  result = sub_1400A6700((__int64 (__fastcall *)(const char *))sub_14009E190);
  v2 = result;
  if ( *(_QWORD *)&dword_140404A6C[18215111] )
  {
    ((void (*)(void))FreeLibrary)();
    result = v2;
    *(_QWORD *)&dword_140404A6C[18215111] = 0;
  }
  return result;
}

