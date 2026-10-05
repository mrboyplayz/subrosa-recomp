/* Address: 0x1400f23f0 | Name: __scrt_is_managed_app | Size: 82 bytes */
bool _scrt_is_managed_app()
{
  HMODULE ModuleHandleW; // rax
  char *v1; // rcx
  bool result; // al

  ModuleHandleW = GetModuleHandleW(nullptr);
  result = false;
  if ( ModuleHandleW )
  {
    if ( *(_WORD *)ModuleHandleW == 23117 )
    {
      v1 = (char *)ModuleHandleW + *((int *)ModuleHandleW + 15);
      if ( *(_DWORD *)v1 == 17744 && *((_WORD *)v1 + 12) == 523 && *((_DWORD *)v1 + 33) > 0xEu && *((_DWORD *)v1 + 62) )
        return true;
    }
  }
  return result;
}

