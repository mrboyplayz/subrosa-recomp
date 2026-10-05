/* Address: 0x14025a3c4 | Name: sub_14025A3C4 | Size: 108 bytes */
__int64 sub_14025A3C4()
{
  unsigned __int32 v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140404A6C[19065812];
  if ( !dword_140404A6C[19065812] )
  {
    v0 = 2;
    v2 = 2;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ED54((__int64)&v2);
    if ( v2 != 1 )
    {
      if ( v2 == 2 )
      {
        v0 = 1;
      }
      else if ( v2 == 3 )
      {
        v0 = 3;
      }
      else
      {
        v0 = 4;
      }
    }
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065812], v0);
  }
  return v0;
}

