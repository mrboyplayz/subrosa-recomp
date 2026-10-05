/* Address: 0x140048080 | Name: sub_140048080 | Size: 92 bytes */
__int64 __fastcall sub_140048080(char a1)
{
  if ( QueryPerformanceFrequency(&Frequency) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    dword_196ABD368 = 1;
  }
  if ( (a1 & 2) != 0 )
  {
    WSAStartup(0x101u, &WSAData);
    dword_196ABD364 = 1;
  }
  return 1;
}

