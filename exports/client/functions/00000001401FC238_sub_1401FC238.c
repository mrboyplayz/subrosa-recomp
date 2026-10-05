/* Address: 0x1401fc238 | Name: sub_1401FC238 | Size: 107 bytes */
unsigned __int64 sub_1401FC238()
{
  unsigned __int64 v1; // [rsp+30h] [rbp+10h] BYREF
  unsigned __int64 SystemTimeAsFileTime; // [rsp+38h] [rbp+18h] BYREF
  __int64 PerformanceCount; // [rsp+40h] [rbp+20h] BYREF

  SystemTimeAsFileTime = 0;
  ((void (__fastcall *)(unsigned __int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
  v1 = SystemTimeAsFileTime;
  v1 ^= (unsigned int)((__int64 (*)(void))GetCurrentThreadId)();
  v1 ^= (unsigned int)((__int64 (*)(void))GetCurrentProcessId)();
  QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  return ((unsigned __int64)&v1
        ^ v1
        ^ PerformanceCount
        ^ ((unsigned __int64)(unsigned int)PerformanceCount << 32))
       & 0xFFFFFFFFFFFFLL;
}

