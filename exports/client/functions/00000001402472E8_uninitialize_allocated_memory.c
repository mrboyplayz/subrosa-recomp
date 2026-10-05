/* Address: 0x1402472e8 | Name: uninitialize_allocated_memory | Size: 64 bytes */
char uninitialize_allocated_memory()
{
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)&dword_140404A6C[19065829], 0xFFFFFFFF) == 1
    && *(_UNKNOWN **)&dword_140404A6C[19065829] != &unk_1403025A0 )
  {
    free_base(*(void **)&dword_140404A6C[19065829]);
    *(_QWORD *)&dword_140404A6C[19065829] = &unk_1403025A0;
  }
  return 1;
}

