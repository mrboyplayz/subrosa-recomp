/* Address: 0x14010e030 | Name: sub_14010E030 | Size: 72 bytes */
__int64 sub_14010E030()
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(const __int16 *))LoadLibraryW)(L"opengl32.dll");
  *(_QWORD *)&dword_140404A6C[18215111] = result;
  if ( result )
  {
    *(_QWORD *)&dword_140404A6C[18215113] = ((__int64 (__fastcall *)(__int64, const char *))GetProcAddress)(
                                              result,
                                              "wglGetProcAddress");
    return *(_QWORD *)&dword_140404A6C[18215113] != 0;
  }
  return result;
}

