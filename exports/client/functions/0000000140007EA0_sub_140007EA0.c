/* Address: 0x140007ea0 | Name: sub_140007EA0 | Size: 380 bytes */
unsigned int *__fastcall sub_140007EA0(int a1)
{
  unsigned int v1; // r15d
  __int64 v2; // r13
  unsigned int *result; // rax
  unsigned int *v4; // r12
  __int64 v5; // r14
  unsigned int *v6; // rsi
  __int64 v7; // r11
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // edx
  unsigned __int64 v11; // rbx
  __int64 v12; // [rsp+38h] [rbp+10h]

  v1 = dword_140404A6C[456202453];
  v2 = 8;
  result = &dword_140404A6C[280658140];
  v12 = 8;
  v4 = &dword_140404A6C[7166 * a1 + 280658140];
  do
  {
    v5 = (int)*(v4 - 1);
    if ( v5 > 0 )
    {
      v6 = v4;
      do
      {
        v7 = (int)*v6;
        v8 = 1760 * v7;
        if ( (int)dword_140404A6C[1760 * v7 + 278845906] > 0 )
        {
          result = (unsigned int *)(int)dword_140404A6C[v8 + 278845907];
          v9 = 0;
          dword_140404A6C[1760 * (_QWORD)result + 278845900] = 0;
          v10 = dword_140404A6C[v8 + 278845906];
          v11 = (int)dword_140404A6C[v8 + 278845907];
          if ( v10 > 0 )
          {
            result = &dword_140404A6C[1760 * v7 + 278845907];
            do
            {
              if ( *result == (_DWORD)v11 )
              {
                dword_140404A6C[v8 + 278845906] = v10 - 1;
                *result = dword_140404A6C[1760 * v7 + 278845906 + v10];
                dword_140404A6C[1760 * v11 + 278845903] = -1;
                if ( v1 )
                {
                  if ( v11 <= 0x3FF )
                    ++dword_140404A6C[v11 + 280648157];
                  if ( (unsigned int)v7 <= 0x3FF )
                    ++dword_140404A6C[v7 + 280648157];
                }
              }
              else
              {
                ++v9;
                ++result;
              }
              v10 = dword_140404A6C[v8 + 278845906];
            }
            while ( v9 < v10 );
          }
        }
        ++v6;
        dword_140404A6C[v8 + 278845900] = 0;
        --v5;
      }
      while ( v5 );
      v2 = v12;
    }
    v4 += 10;
    v12 = --v2;
  }
  while ( v2 );
  return result;
}

