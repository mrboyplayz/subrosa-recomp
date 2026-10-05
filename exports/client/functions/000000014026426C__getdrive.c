/* Address: 0x14026426c | Name: _getdrive | Size: 246 bytes */
int __cdecl getdrive()
{
  unsigned int v0; // eax
  unsigned int v1; // esi
  __int64 v2; // rax
  void *v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-248h] BYREF
  __int16 Buffer; // [rsp+20h] [rbp-228h] BYREF
  __int64 v7; // [rsp+230h] [rbp-18h]

  MEMORY[0x1401FCD30](&Buffer, 0, 0x20Au);
  v0 = ((__int64 (__fastcall *)(__int64, __int16 *))GetCurrentDirectoryW)(261, &Buffer);
  if ( v0 > 0x104 )
  {
    v1 = v0 + 1;
    v2 = calloc_base(v0 + 1, 2u);
    v3 = (void *)v2;
    if ( !v2 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, __int64))GetCurrentDirectoryW)(v1, v2) )
      *errno() = 12;
    free_base(v3);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v7);
}

