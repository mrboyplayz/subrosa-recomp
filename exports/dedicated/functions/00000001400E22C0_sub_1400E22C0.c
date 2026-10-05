/* Address: 0x1400e22c0 | Name: sub_1400E22C0 | Size: 52 bytes */
int sub_1400E22C0()
{
  int result; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  result = QueryPerformanceCounter(&PerformanceCount);
  if ( result )
    return (int)((double)(int)PerformanceCount.LowPart * *(double *)&qword_196ABD8D0);
  return result;
}

