/* Address: 0x140258b80 | Name: __acrt_uninitialize_locks_0 | Size: 55 bytes */
char _acrt_uninitialize_locks_0()
{
  unsigned int v0; // ebx

  v0 = dword_140404A6C[19065809];
  while ( v0 )
  {
    ((void (__fastcall *)(unsigned int *))DeleteCriticalSection)(&dword_140404A6C[10 * --v0 + 19065669]);
    --dword_140404A6C[19065809];
  }
  return 1;
}

