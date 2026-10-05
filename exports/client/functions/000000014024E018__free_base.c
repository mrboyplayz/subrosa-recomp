/* Address: 0x14024e018 | Name: _free_base | Size: 61 bytes */
void __cdecl free_base(void *Block)
{
  int *v1; // rbx
  unsigned int v2; // eax

  if ( Block )
  {
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, void *))HeapFree)(
                          *(_QWORD *)&dword_140404A6C[19065847],
                          0,
                          Block) )
    {
      v1 = errno();
      v2 = ((__int64 (*)(void))GetLastError)();
      *v1 = MEMORY[0x14024D104](v2);
    }
  }
}

