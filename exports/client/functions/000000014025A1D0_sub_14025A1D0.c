/* Address: 0x14025a1d0 | Name: sub_14025A1D0 | Size: 105 bytes */
__int64 __fastcall sub_14025A1D0(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF

  result = dword_140404A6C[19065812];
  if ( !dword_140404A6C[19065812] )
  {
    v2 = a1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ED54((__int64)&v2);
    switch ( v2 )
    {
      case 1:
        result = 2;
        break;
      case 2:
        result = 1;
        break;
      case 3:
        result = 3;
        break;
      default:
        result = 4;
        break;
    }
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065812], result);
  }
  return result;
}

