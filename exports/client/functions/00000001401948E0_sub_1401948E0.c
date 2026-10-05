/* Address: 0x1401948e0 | Name: sub_1401948E0 | Size: 219 bytes */
__int64 __fastcall sub_1401948E0(int a1, char *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v7; // r10
  unsigned int *v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  unsigned int *v11; // rax
  char v12; // cl

  result = a1;
  v4 = 5873LL * a1;
  v7 = (int)dword_140404A6C[v4 + 283831511];
  if ( v7 > 0 )
  {
    v8 = &dword_140404A6C[v4 + 283831512];
    do
    {
      v9 = 2570LL * (int)*v8;
      result = (int)dword_140404A6C[v9 + 275754072];
      if ( (int)result < 256 )
      {
        v10 = a2;
        dword_140404A6C[6 * result + 275754073 + v9] = a3;
        v11 = &dword_140404A6C[6 * (int)dword_140404A6C[v9 + 275754072] + 275754074 + v9];
        do
        {
          v12 = *v10++;
          *(_BYTE *)v11 = v12;
          v11 = (unsigned int *)((char *)v11 + 1);
        }
        while ( v12 );
        result = v9 * 4 + 24LL * (int)dword_140404A6C[v9 + 275754072];
        *(unsigned int *)((char *)&dword_140404A6C[275754078] + result) = 0;
        ++dword_140404A6C[v9 + 275754072];
      }
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  return result;
}

