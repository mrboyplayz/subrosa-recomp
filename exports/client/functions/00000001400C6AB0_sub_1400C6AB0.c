/* Address: 0x1400c6ab0 | Name: sub_1400C6AB0 | Size: 127 bytes */
unsigned int *__fastcall sub_1400C6AB0(int a1, int a2, char *a3, char a4, int a5)
{
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // r10
  unsigned int *v8; // rax
  char v9; // cl

  v5 = 0;
  v6 = a1;
  v7 = a5;
  if ( a5 > 0 )
  {
    v5 = a5;
    v8 = &dword_140404A6C[16 * (a2 + 110LL * a1) + 278846626];
    do
    {
      v9 = *a3;
      if ( *a3 )
        ++a3;
      else
        v9 = 32;
      *((_BYTE *)v8 - 2048) = v9;
      *(_BYTE *)v8 = a4;
      v8 = (unsigned int *)((char *)v8 + 1);
      --v7;
    }
    while ( v7 );
  }
  *((_BYTE *)&dword_140404A6C[16 * (a2 + 110 * v6) + 278846114] + v5) = 0;
  return &dword_140404A6C[278846114];
}

