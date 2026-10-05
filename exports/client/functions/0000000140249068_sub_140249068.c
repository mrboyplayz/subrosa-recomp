/* Address: 0x140249068 | Name: sub_140249068 | Size: 328 bytes */
unsigned int **__fastcall sub_140249068(unsigned int a1, __int64 a2)
{
  unsigned int **v4; // rbp
  unsigned int **v5; // rsi
  unsigned int *v6; // rbx
  unsigned int *v7; // rdi
  unsigned int *v8; // rax
  unsigned int **v9; // rax
  unsigned int *v10; // rcx

  if ( a1 > 5 )
    return nullptr;
  v4 = nullptr;
  if ( !a2 )
    return nullptr;
  v5 = (unsigned int **)calloc_base(1, 16);
  if ( v5 )
  {
    v6 = (unsigned int *)calloc_base(1, 344);
    if ( v6 )
    {
      v7 = (unsigned int *)calloc_base(1, 552);
      if ( v7 )
      {
        sub_140248950((__int64)v6, &off_140302420);
        if ( !sub_1402494A8(v6, a1, a2) || (unsigned int)setmbcp_nolock(v6[3], v7) )
        {
          sub_140262A34(v6);
          v10 = v6;
          v6 = nullptr;
          sub_140262834(v10);
        }
        else
        {
          *v7 = 1;
          *v5 = v6;
          v6 = nullptr;
          v8 = v7;
          v7 = nullptr;
          v5[1] = v8;
          v9 = v5;
          v5 = nullptr;
          v4 = v9;
        }
      }
      else
      {
        *errno() = 12;
      }
      free_base(v7);
    }
    else
    {
      *errno() = 12;
    }
    free_base(v6);
  }
  else
  {
    *errno() = 12;
  }
  free_base(v5);
  return v4;
}

