/* Address: 0x14024b5cc | Name: ?allocate@__crt_win32_buffer_internal_dynamic_resizing@@SAHQEAPEAX_KAEBV__crt_win32_buffer_empty_debug_info@@@Z | Size: 36 bytes */
__int64 __fastcall __crt_win32_buffer_internal_dynamic_resizing::allocate(
        void **const a1,
        __int64 a2,
        const struct __crt_win32_buffer_empty_debug_info *a3)
{
  void *v4; // rax

  v4 = (void *)j__malloc_base(a2);
  *a1 = v4;
  return v4 == nullptr ? 0xC : 0;
}

