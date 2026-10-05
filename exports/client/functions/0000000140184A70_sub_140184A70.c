/* Address: 0x140184a70 | Name: sub_140184A70 | Size: 52 bytes */
int sub_140184A70()
{
  int result; // eax
  __int64 PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  result = QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  if ( result )
    return (int)((double)(int)PerformanceCount * *(double *)&dword_140404A6C[278520505]);
  return result;
}

