/* Address: 0x140239b48 | Name: ?allocate@?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QEAAH_K@Z | Size: 91 bytes */
__int64 __fastcall __crt_win32_buffer<char,__crt_win32_buffer_internal_dynamic_resizing>::allocate(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v4 = malloc_base(a2);
  *(_QWORD *)(a1 + 16) = v4;
  result = v4 == 0 ? 0xC : 0;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 40) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 24) = a2;
    return 0;
  }
  return result;
}

