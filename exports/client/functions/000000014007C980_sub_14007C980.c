/* Address: 0x14007c980 | Name: sub_14007C980 | Size: 64 bytes */
__int64 sub_14007C980()
{
  __int64 PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( !dword_140404A6C[137297775] )
    return 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  return 1000 * (PerformanceCount - *(_QWORD *)&dword_140404A6C[137297779]) / *(_QWORD *)&dword_140404A6C[137297777];
}

