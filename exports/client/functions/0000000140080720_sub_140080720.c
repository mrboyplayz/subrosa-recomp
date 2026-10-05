/* Address: 0x140080720 | Name: sub_140080720 | Size: 162 bytes */
__int64 __fastcall sub_140080720(int a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdi
  int v7; // r11d
  unsigned int *i; // r10
  unsigned int *v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  v3 = 1;
  v4 = 2570LL * a1;
  v7 = dword_140404A6C[v4 + 275753047];
  if ( v7 <= 1 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[v4 + 275753055]; ; i += 4 )
  {
    if ( *i == a2 )
    {
      v9 = &dword_140404A6C[4 * v3 + 275753048 + v4];
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
    if ( (int)++v3 >= v7 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}

