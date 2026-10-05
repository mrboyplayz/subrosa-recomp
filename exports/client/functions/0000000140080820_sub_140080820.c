/* Address: 0x140080820 | Name: sub_140080820 | Size: 178 bytes */
__int64 __fastcall sub_140080820(int a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  int v7; // r11d
  unsigned int *i; // r10
  unsigned int *v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  v3 = 0;
  v4 = 2570LL * a1;
  v7 = dword_140404A6C[v4 + 275754072];
  if ( v7 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[v4 + 275754078]; ; i += 6 )
  {
    if ( *i == a2 )
    {
      v9 = &dword_140404A6C[6 * v3 + 275754074 + v4];
      v10 = a3 - (_QWORD)v9;
      do
      {
        v11 = *((unsigned __int8 *)v9 + v10);
        v12 = *(unsigned __int8 *)v9 - v11;
        if ( v12 )
          break;
        v9 = (unsigned int *)((char *)v9 + 1);
      }
      while ( v11 );
      if ( !v12 )
        break;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (int)v3 >= v7 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v3;
}

