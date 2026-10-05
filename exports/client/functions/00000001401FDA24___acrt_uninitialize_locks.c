/* Address: 0x1401fda24 | Name: __acrt_uninitialize_locks | Size: 55 bytes */
char _acrt_uninitialize_locks()
{
  unsigned int v0; // ebx

  v0 = dword_140404A6C[19064547];
  while ( v0 )
  {
    ((void (__fastcall *)(unsigned int *))DeleteCriticalSection)(&dword_140404A6C[10 * --v0 + 19064537]);
    --dword_140404A6C[19064547];
  }
  return 1;
}

