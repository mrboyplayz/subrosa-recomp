/* Address: 0x140003660 | Name: sub_140003660 | Size: 380 bytes */
int *__fastcall sub_140003660(int a1)
{
  int v1; // r15d
  __int64 v2; // r13
  int *result; // rax
  int *v4; // r12
  __int64 v5; // r14
  int *v6; // rsi
  __int64 v7; // r11
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // edx
  unsigned __int64 v11; // rbx
  __int64 v12; // [rsp+38h] [rbp+10h]

  v1 = dword_163D75B60;
  v2 = 8;
  result = dword_19094849C;
  v12 = 8;
  v4 = &dword_19094849C[7166 * a1];
  do
  {
    v5 = *(v4 - 1);
    if ( v5 > 0 )
    {
      v6 = v4;
      do
      {
        v7 = *v6;
        v8 = 1760 * v7;
        if ( dword_19025F0F4[1760 * v7] > 0 )
        {
          result = (int *)dword_19025F0F8[v8];
          v9 = 0;
          dword_19025F0DC[1760 * (_QWORD)result] = 0;
          v10 = dword_19025F0F4[v8];
          v11 = dword_19025F0F8[v8];
          if ( v10 > 0 )
          {
            result = &dword_19025F0F8[1760 * v7];
            do
            {
              if ( *result == (_DWORD)v11 )
              {
                dword_19025F0F4[v8] = v10 - 1;
                *result = dword_19025F0F4[1760 * v7 + v10];
                *((_DWORD *)&unk_19025F0E8 + 1760 * v11) = -1;
                if ( v1 )
                {
                  if ( v11 <= 0x3FF )
                    ++dword_19093F0C0[v11];
                  if ( (unsigned int)v7 <= 0x3FF )
                    ++dword_19093F0C0[v7];
                }
              }
              else
              {
                ++v9;
                ++result;
              }
              v10 = dword_19025F0F4[v8];
            }
            while ( v9 < v10 );
          }
        }
        ++v6;
        dword_19025F0DC[v8] = 0;
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

