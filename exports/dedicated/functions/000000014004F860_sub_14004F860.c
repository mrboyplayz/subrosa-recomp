/* Address: 0x14004f860 | Name: sub_14004F860 | Size: 150 bytes */
int sub_14004F860()
{
  unsigned __int64 v0; // rax
  LARGE_INTEGER v1; // rcx
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  qword_196ABD8C8 = 1000000000;
  LODWORD(v0) = QueryPerformanceFrequency(&Frequency);
  v1.QuadPart = qword_196ABD8C8;
  if ( (_DWORD)v0 )
    v1 = Frequency;
  qword_196ABD8C8 = v1.QuadPart;
  if ( v1.QuadPart )
  {
    if ( v1.QuadPart < 0 )
    {
      v0 = v1.LowPart & 1 | ((unsigned __int64)v1.QuadPart >> 1);
      *(double *)&qword_196ABD8D0 = 1000.0 / ((double)(int)v0 + (double)(int)v0);
    }
    else
    {
      *(double *)&qword_196ABD8D0 = 1000.0 / (double)(int)v1.LowPart;
    }
  }
  else
  {
    qword_196ABD8D0 = 0;
  }
  return v0;
}

