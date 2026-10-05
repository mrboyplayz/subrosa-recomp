/* Address: 0x140237fc0 | Name: sub_140237FC0 | Size: 64 bytes */
__int64 sub_140237FC0()
{
  __int64 result; // rax

  result = dword_140404A6C[19064652];
  if ( !dword_140404A6C[19064652] )
  {
    sub_140258B64(6);
    if ( !dword_140404A6C[19064652] )
    {
      sub_140237EB8();
      _InterlockedIncrement((volatile signed __int32 *)&dword_140404A6C[19064652]);
    }
    JUMPOUT(0x140258BB8LL);
  }
  return result;
}

