/* Address: 0x14025a138 | Name: sub_14025A138 | Size: 76 bytes */
__int64 __fastcall sub_14025A138(int a1)
{
  __int64 result; // rax
  int v2; // ebx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  result = dword_140404A6C[19065810];
  v2 = 0;
  if ( !dword_140404A6C[19065810] )
  {
    v3 = a1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ED04((__int64)&v3);
    LOBYTE(v2) = v3 == 1;
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065810], v2 + 1);
    return (unsigned int)(v2 + 1);
  }
  return result;
}

