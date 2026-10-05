/* Address: 0x1400f2458 | Name: __scrt_unhandled_exception_filter | Size: 91 bytes */
__int64 __fastcall _scrt_unhandled_exception_filter(_QWORD *a1)
{
  _DWORD *v1; // rbx
  int v3; // edx
  __int64 v5; // rbx

  v1 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 == -529697949 && v1[6] == 4 )
  {
    v3 = v1[8];
    if ( (unsigned int)(v3 - 429065504) <= 2 || v3 == 26820608 )
    {
      *(_QWORD *)_current_exception() = v1;
      v5 = a1[1];
      *(_QWORD *)_current_exception_context() = v5;
      terminate();
    }
  }
  return 0;
}

