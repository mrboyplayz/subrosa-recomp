/* Address: 0x140258b1c | Name: __acrt_initialize_locks | Size: 72 bytes */
char _acrt_initialize_locks()
{
  __int64 v0; // rbx

  v0 = 0;
  while ( (unsigned int)_acrt_InitializeCriticalSectionEx((__int64)&dword_140404A6C[10 * v0 + 19065669], 0xFA0u, 0) )
  {
    ++dword_140404A6C[19065809];
    v0 = (unsigned int)(v0 + 1);
    if ( (unsigned int)v0 >= 0xE )
      return 1;
  }
  _acrt_uninitialize_locks_0(0);
  return 0;
}

