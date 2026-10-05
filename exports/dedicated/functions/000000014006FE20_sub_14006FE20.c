/* Address: 0x14006fe20 | Name: sub_14006FE20 | Size: 127 bytes */
char *__fastcall sub_14006FE20(int a1, int a2, char *a3, char a4, int a5)
{
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // r10
  char *v8; // rax
  char v9; // cl

  v5 = 0;
  v6 = a1;
  v7 = a5;
  if ( a5 > 0 )
  {
    v5 = a5;
    v8 = (char *)&unk_19025FC34 + 64 * (a2 + 110LL * a1);
    do
    {
      v9 = *a3;
      if ( *a3 )
        ++a3;
      else
        v9 = 32;
      *(v8 - 2048) = v9;
      *v8++ = a4;
      --v7;
    }
    while ( v7 );
  }
  byte_19025F434[64 * (a2 + 110 * v6) + v5] = 0;
  return byte_19025F434;
}

