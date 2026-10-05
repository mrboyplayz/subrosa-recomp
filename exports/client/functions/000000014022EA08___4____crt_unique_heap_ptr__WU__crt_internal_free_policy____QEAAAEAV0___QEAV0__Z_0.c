/* Address: 0x14022ea08 | Name: ??4?$__crt_unique_heap_ptr@_WU__crt_internal_free_policy@@@@QEAAAEAV0@$$QEAV0@@Z_0 | Size: 52 bytes */
void **__fastcall __crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy>::operator=(void **a1, void **a2)
{
  free_base(*a1);
  *a1 = nullptr;
  *a1 = *a2;
  *a2 = nullptr;
  return a1;
}

