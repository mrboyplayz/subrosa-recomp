/* Address: 0x1401fc2a4 | Name: sub_1401FC2A4 | Size: 172 bytes */
__int64 sub_1401FC2A4()
{
  unsigned __int64 v0; // rax
  __int64 result; // rax
  unsigned __int64 v2; // [rsp+30h] [rbp+10h] BYREF
  unsigned __int64 SystemTimeAsFileTime; // [rsp+38h] [rbp+18h] BYREF
  __int64 PerformanceCount; // [rsp+40h] [rbp+20h] BYREF

  v0 = _security_cookie;
  if ( _security_cookie == 0x2B992DDFA232LL )
  {
    SystemTimeAsFileTime = 0;
    ((void (__fastcall *)(unsigned __int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
    v2 = SystemTimeAsFileTime;
    v2 ^= (unsigned int)((__int64 (*)(void))GetCurrentThreadId)();
    v2 ^= (unsigned int)((__int64 (*)(void))GetCurrentProcessId)();
    QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
    v0 = ((unsigned __int64)&v2
        ^ v2
        ^ PerformanceCount
        ^ ((unsigned __int64)(unsigned int)PerformanceCount << 32))
       & 0xFFFFFFFFFFFFLL;
    if ( v0 == 0x2B992DDFA232LL )
      v0 = 0x2B992DDFA233LL;
    _security_cookie = v0;
  }
  result = ~v0;
  qword_140302098 = result;
  return result;
}

