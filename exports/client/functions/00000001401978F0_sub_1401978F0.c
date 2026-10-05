/* Address: 0x1401978f0 | Name: sub_1401978F0 | Size: 213 bytes */
unsigned int *__fastcall sub_1401978F0(int a1, __int64 a2, int a3)
{
  unsigned int *result; // rax
  __int64 v4; // rbx
  int v7; // r9d
  unsigned int v8; // edi
  unsigned int *i; // r10
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  result = (unsigned int *)a1;
  v4 = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[v4 + 293512629] )
  {
    if ( !dword_140404A6C[v4 + 293512631] )
    {
      v7 = 0;
      v8 = dword_140404A6C[v4 + 293512634];
      if ( v8 )
      {
        for ( i = &dword_140404A6C[v4 + 293512635]; ; i += 16 )
        {
          if ( *i == a3 )
          {
            result = &dword_140404A6C[16 * (__int64)v7 + 293512638 + v4];
            v10 = a2 - (_QWORD)result;
            do
            {
              v11 = *((unsigned __int8 *)result + v10);
              v12 = *(unsigned __int8 *)result - v11;
              if ( v12 )
                break;
              result = (unsigned int *)((char *)result + 1);
            }
            while ( v11 );
            if ( !v12 )
              break;
          }
          if ( ++v7 >= v8 )
            return result;
        }
        return (unsigned int *)MEMORY[0x14020C4A8](
                                 *(_QWORD *)&dword_140404A6C[v4 + 293512629],
                                 dword_140404A6C[16 * (__int64)v7 + 293512636 + v4],
                                 0);
      }
    }
  }
  return result;
}

