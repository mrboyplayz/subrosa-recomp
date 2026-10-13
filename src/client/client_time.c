#include "shared_client.h"


//----- (000000014007C980) ----------------------------------------------------
__int64 sub_14007C980()
{
  __int64 PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( !dword_140404A6C[137297775] )
    return 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  return 1000 * (PerformanceCount - *(_QWORD *)&dword_140404A6C[137297779]) / *(_QWORD *)&dword_140404A6C[137297777];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014009E590) ----------------------------------------------------
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
      *(double *)&dword_140404A6C[278520505] = 1000.0 / ((double)(long long)v0 + (double)(long long)v0);
    }
    else
    {
      *(double *)&dword_140404A6C[278520505] = 1000.0 / (double)(long long)v1;
    }
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[278520505] = 0;
  }
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 182A7D548: using guessed type unsigned int;
// 182A7D550: using guessed type unsigned int;

//----- (00000001400A65B0) ----------------------------------------------------
__int64            sub_1400A65B0(_DWORD *a1, int *a2)
{
  unsigned __int64 v4; // rcx
  __int64 SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    ((void (           *)(__int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
    v4 = (SystemTimeAsFileTime - 11644473600000000LL) / 0xAuLL;
    *a1 = v4 / 0xF4240;
    a1[1] = v4 % 0xF4240;
  }
  if ( a2 )
  {
    if ( !dword_140404A6C[18215639] )
    {
      sub_140238064();
      ++dword_140404A6C[18215639];
    }
    *a2 = (int)*sub_140237128() / 60;
    a2[1] = *sub_140237118();
  }
  return 0;
}

// 14026E310: invalid function type 'void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1449815C8: using guessed type unsigned int;

