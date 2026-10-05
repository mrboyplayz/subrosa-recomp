/* Address: 0x14008ed50 | Name: sub_14008ED50 | Size: 422 bytes */
__int64 __fastcall sub_14008ED50(int a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  unsigned int v3; // ebp
  unsigned int *v4; // rdx

  v1 = 39LL * a1;
  sub_140115D90(&dword_140404A6C[v1 + 290382647], 6);
  sub_140115D90(&dword_140404A6C[v1 + 290382648], 28);
  result = dword_140404A6C[v1 + 290382647];
  if ( !(_DWORD)result )
  {
    sub_140115D90(&dword_140404A6C[v1 + 290382649], 12);
    sub_140115D90(&dword_140404A6C[v1 + 290382650], 6);
    sub_140115D90(&dword_140404A6C[v1 + 290382651], 7);
    result = dword_140404A6C[289301092];
    v3 = dword_140404A6C[v1 + 290382651];
    if ( (int)dword_140404A6C[289301092] >= 0x10000 )
      return result;
    if ( (int)dword_140404A6C[289301093] > 0 )
    {
      LODWORD(result) = ++dword_140404A6C[289301092];
      dword_140404A6C[289301093] = 0;
    }
    v4 = &dword_140404A6C[290382652];
    goto LABEL_14;
  }
  if ( (_DWORD)result == 1 )
  {
    sub_140115D90(&dword_140404A6C[v1 + 290382649], 12);
    sub_140115D90(&dword_140404A6C[v1 + 290382650], 5);
    sub_140115D90(&dword_140404A6C[v1 + 290382651], 7);
    v3 = dword_140404A6C[v1 + 290382651];
    result = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        LODWORD(result) = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      MEMORY[0x1401FC920]((char *)&dword_140404A6C[289301094] + (int)result, &dword_140404A6C[v1 + 290382652]);
      result = v3 + dword_140404A6C[289301092];
      dword_140404A6C[289301092] = result;
      if ( (int)result < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          LODWORD(result) = result + 1;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = result;
        }
        v4 = &dword_140404A6C[290382668];
LABEL_14:
        result = MEMORY[0x1401FC920]((char *)&dword_140404A6C[289301094] + (int)result, &v4[v1]);
        dword_140404A6C[289301092] += v3;
      }
    }
  }
  return result;
}

