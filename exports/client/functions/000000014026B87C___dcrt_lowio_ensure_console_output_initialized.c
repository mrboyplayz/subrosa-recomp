/* Address: 0x14026b87c | Name: __dcrt_lowio_ensure_console_output_initialized | Size: 82 bytes */
__int64 _dcrt_lowio_ensure_console_output_initialized()
{
  __int64 v0; // rax
  unsigned int v1; // ebx

  v0 = hObject;
  v1 = 0;
  if ( hObject == -2 )
  {
    v0 = ((__int64 (__fastcall *)(const __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
           L"CONOUT$",
           0x40000000,
           3,
           0,
           3,
           0,
           0);
    hObject = v0;
  }
  LOBYTE(v1) = v0 != -1;
  return v1;
}

