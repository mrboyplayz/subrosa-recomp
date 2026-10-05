/* Address: 0x14009e590 | Name: sub_14009E590 | Size: 150 bytes */
int sub_14009E590()
{
  unsigned __int64 v0; // rax
  __int64 v1; // rcx
  __int64 Frequency; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&dword_140404A6C[278520503] = 1000000000;
  LODWORD(v0) = QueryPerformanceFrequency((LARGE_INTEGER *)&Frequency);
  v1 = *(_QWORD *)&dword_140404A6C[278520503];
  if ( (_DWORD)v0 )
    v1 = Frequency;
  *(_QWORD *)&dword_140404A6C[278520503] = v1;
  if ( v1 )
  {
    if ( v1 < 0 )
    {
      v0 = v1 & 1 | ((unsigned __int64)v1 >> 1);
      *(double *)&dword_140404A6C[278520505] = 1000.0 / ((double)(int)v0 + (double)(int)v0);
    }
    else
    {
      *(double *)&dword_140404A6C[278520505] = 1000.0 / (double)(int)v1;
    }
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[278520505] = 0;
  }
  return v0;
}

