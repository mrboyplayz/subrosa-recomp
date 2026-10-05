/* Address: 0x14025a334 | Name: sub_14025A334 | Size: 81 bytes */
__int64 sub_14025A334()
{
  unsigned __int32 v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140404A6C[19065811];
  if ( !dword_140404A6C[19065811] )
  {
    v0 = 1;
    v2 = 1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) < 0 || (sub_14024ECB4((__int64)&v2), v2 == 1) )
      v0 = 2;
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065811], v0);
  }
  return v0;
}

