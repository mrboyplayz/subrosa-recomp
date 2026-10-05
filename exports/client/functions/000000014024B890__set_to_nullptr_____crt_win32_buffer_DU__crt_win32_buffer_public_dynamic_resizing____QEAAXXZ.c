/* Address: 0x14024b890 | Name: ?set_to_nullptr@?$__crt_win32_buffer@DU__crt_win32_buffer_public_dynamic_resizing@@@@QEAAXXZ | Size: 49 bytes */
void __fastcall __crt_win32_buffer<char,__crt_win32_buffer_public_dynamic_resizing>::set_to_nullptr(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
}

