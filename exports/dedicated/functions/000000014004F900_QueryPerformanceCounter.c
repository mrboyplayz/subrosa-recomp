/* Address: 0x14004f900 | Name: QueryPerformanceCounter | Size: 7 bytes */
// attributes: thunk
BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)
{
  return __imp_QueryPerformanceCounter(lpPerformanceCount);
}

