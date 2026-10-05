/* Address: 0x140048ba0 | Name: sub_140048BA0 | Size: 423 bytes */
unsigned int *__fastcall sub_140048BA0(signed int a1, unsigned int *a2)
{
  unsigned int *result; // rax
  __int64 v4; // rsi
  int v5; // r8d
  __int64 v6; // r11
  int v7; // ebx
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  int v10; // ecx
  int v11; // edx

  result = (unsigned int *)(int)dword_140404A6C[349902702];
  v4 = a1;
  if ( (int)dword_140404A6C[349902702] < 512 )
  {
    dword_140404A6C[9 * dword_140404A6C[349902702] + 349902704] = a1;
    dword_140404A6C[9 * dword_140404A6C[349902702] + 349902705] = *a2;
    dword_140404A6C[9 * dword_140404A6C[349902702] + 349902706] = a2[1];
    dword_140404A6C[9 * dword_140404A6C[349902702] + 349902707] = a2[2];
    dword_140404A6C[9 * dword_140404A6C[349902702] + 349902708] = a2[3];
    result = (unsigned int *)sub_14006EC40(
                               &dword_140404A6C[8 * dword_140404A6C[349902702] + 349902709 + dword_140404A6C[349902702]],
                               &dword_140404A6C[4 * *a2 + 349900654],
                               &dword_140404A6C[4 * a2[1] + 349900654],
                               &dword_140404A6C[4 * a2[2] + 349900654]);
    if ( (int)v4 > 0 )
    {
      v5 = dword_140404A6C[349907311];
      v6 = 0;
      v7 = 1;
      do
      {
        v8 = a2[v6];
        result = (unsigned int *)(v7 % (int)v4);
        v9 = a2[(_QWORD)result];
        if ( v5 < 512 )
        {
          v10 = 0;
          if ( v5 <= 0 )
          {
LABEL_12:
            dword_140404A6C[3 * v5 + 349907312] = v8;
            result = (unsigned int *)(int)dword_140404A6C[349907311];
            dword_140404A6C[3 * dword_140404A6C[349907311] + 349907313] = v9;
            v5 = ++dword_140404A6C[349907311];
          }
          else
          {
            result = &dword_140404A6C[349907313];
            while ( 1 )
            {
              v11 = *(result - 1);
              if ( v11 == v8 && *result == v9 )
                break;
              if ( v11 == v9 && *result == v8 )
                break;
              ++v10;
              result += 3;
              if ( v10 >= v5 )
                goto LABEL_12;
            }
          }
        }
        ++v7;
        ++v6;
      }
      while ( v6 < v4 );
    }
    ++dword_140404A6C[349902702];
  }
  return result;
}

