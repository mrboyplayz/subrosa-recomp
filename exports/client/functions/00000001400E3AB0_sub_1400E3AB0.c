/* Address: 0x1400e3ab0 | Name: sub_1400E3AB0 | Size: 220 bytes */
__int64 sub_1400E3AB0()
{
  int v0; // ebx
  __int64 result; // rax
  __int64 v2; // r8
  int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // r9d
  unsigned int *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edx
  _BYTE v10[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+24h] [rbp-24h]
  unsigned int v12; // [rsp+28h] [rbp-20h]

  v0 = 0;
  result = MEMORY[0x140198EB7](0);
  if ( (int)result > 0 )
  {
    do
    {
      if ( v0 < 512 )
      {
        MEMORY[0x140198EBD](0, (unsigned int)v0, v10);
        v2 = (int)dword_140404A6C[285097137];
        v3 = 0;
        v4 = v12;
        v5 = v11;
        if ( (int)dword_140404A6C[285097137] <= 0 )
        {
LABEL_8:
          v7 = 3 * v2;
          dword_140404A6C[v7 + 284532901] = v5;
          dword_140404A6C[v7 + 284532902] = v4;
          dword_140404A6C[v7 + 284532903] = 32;
          dword_140404A6C[285097137] = v2 + 1;
        }
        else
        {
          v6 = &dword_140404A6C[284532902];
          while ( 1 )
          {
            if ( *(v6 - 1) == v5 )
            {
              *v6 = v4;
              if ( v4 )
                break;
            }
            ++v3;
            v6 += 3;
            if ( v3 >= (int)v2 )
              goto LABEL_8;
          }
        }
      }
      ++v0;
      result = MEMORY[0x140198EB7](0);
    }
    while ( v0 < (int)result );
  }
  v8 = 3LL * (int)dword_140404A6C[285097137];
  v9 = dword_140404A6C[285097137] + 1;
  dword_140404A6C[v8 + 284532901] = 1024;
  dword_140404A6C[v8 + 284532902] = 640;
  dword_140404A6C[v8 + 284532903] = 32;
  dword_140404A6C[285097137] = v9;
  return result;
}

