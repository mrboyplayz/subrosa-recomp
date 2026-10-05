/* Address: 0x14004a990 | Name: sub_14004A990 | Size: 64 bytes */
LONGLONG sub_14004A990()
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( !dword_196ABD368 )
    return 0;
  QueryPerformanceCounter(&PerformanceCount);
  return 1000 * (PerformanceCount.QuadPart - ::PerformanceCount.QuadPart) / Frequency.QuadPart;
}

