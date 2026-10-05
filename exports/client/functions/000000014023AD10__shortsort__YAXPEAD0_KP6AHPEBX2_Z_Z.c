/* Address: 0x14023ad10 | Name: ?shortsort@@YAXPEAD0_KP6AHPEBX2@Z@Z | Size: 188 bytes */
void __fastcall shortsort(char *a1, char *a2, __int64 a3, int (__fastcall *a4)(char *, char *))
{
  char *v6; // rdi
  char *v7; // r12
  char *v9; // rbx
  char *i; // rsi
  __int64 v11; // r8
  char *v12; // rax
  signed __int64 v13; // rbx
  char v14; // dl

  if ( a2 > a1 )
  {
    v6 = a2;
    v7 = &a1[a3];
    do
    {
      v9 = a1;
      for ( i = v7; i <= v6; i += a3 )
      {
        if ( a4(i, v9) > 0 )
          v9 = i;
      }
      v11 = a3;
      v12 = v6;
      if ( v9 != v6 && a3 )
      {
        v13 = v9 - v6;
        do
        {
          v14 = v12[v13];
          v12[v13] = *v12;
          *v12++ = v14;
          --v11;
        }
        while ( v11 );
      }
      v6 -= a3;
    }
    while ( v6 > a1 );
  }
}

