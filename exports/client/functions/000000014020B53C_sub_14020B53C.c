/* Address: 0x14020b53c | Name: sub_14020B53C | Size: 91 bytes */
void sub_14020B53C()
{
  __int64 i; // rbx

  flushall();
  fcloseall();
  for ( i = 0; i != 24; i += 8 )
  {
    sub_1402502FC(*(_QWORD *)(i + *(_QWORD *)&dword_140404A6C[19064593]));
    ((void (__fastcall *)(__int64))DeleteCriticalSection)(*(_QWORD *)(i + *(_QWORD *)&dword_140404A6C[19064593]) + 48LL);
  }
  free_base(*(void **)&dword_140404A6C[19064593]);
  *(_QWORD *)&dword_140404A6C[19064593] = 0;
}

