/* Address: 0x140251d2c | Name: ?stream_is_at_end_of_file_nolock@@YA_NV__crt_stdio_stream@@@Z | Size: 121 bytes */
bool __fastcall stream_is_at_end_of_file_nolock(__int64 a1)
{
  __int64 osfhandle; // rax
  __int64 v3; // rbx
  __int64 FileSize; // [rsp+30h] [rbp+8h] BYREF
  __int64 NewFilePointer; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 20) & 8) != 0 )
    return 1;
  if ( (*(_DWORD *)(a1 + 20) & 0xC0) != 0 && *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
    return 0;
  osfhandle = get_osfhandle(*(unsigned int *)(a1 + 24));
  v3 = osfhandle;
  if ( osfhandle == -1
    || !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64))SetFilePointerEx)(
                        osfhandle,
                        0,
                        &NewFilePointer,
                        1)
    || !(unsigned int)((__int64 (__fastcall *)(__int64, __int64 *))GetFileSizeEx)(v3, &FileSize) )
  {
    return 0;
  }
  return NewFilePointer == FileSize;
}

