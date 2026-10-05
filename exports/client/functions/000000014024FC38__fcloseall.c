/* Address: 0x14024fc38 | Name: _fcloseall | Size: 177 bytes */
int __cdecl fcloseall()
{
  int i; // ebx
  __int64 v1; // rcx
  int v3; // [rsp+20h] [rbp-18h]

  v3 = 0;
  sub_140258B64(8);
  for ( i = 3; i != dword_140404A6C[19064591]; ++i )
  {
    v1 = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064593] + 8LL * i);
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 20) & 0x2000) != 0
        && (unsigned int)sub_14020B9E8(*(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064593] + 8LL * i)) != -1 )
      {
        ++v3;
      }
      ((void (__fastcall *)(__int64))DeleteCriticalSection)(*(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064593] + 8LL * i) + 48LL);
      free_base(*(void **)(*(_QWORD *)&dword_140404A6C[19064593] + 8LL * i));
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064593] + 8LL * i) = 0;
    }
  }
  sub_140258BB8(8);
  return v3;
}

