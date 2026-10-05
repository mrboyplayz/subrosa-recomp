/* Address: 0x14004c9b0 | Name: sub_14004C9B0 | Size: 178 bytes */
__int64 __fastcall sub_14004C9B0(int a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  int v7; // r11d
  _DWORD *i; // r10
  unsigned __int8 *v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  v3 = 0;
  v4 = 10280LL * a1;
  v7 = *(_DWORD *)((char *)&unk_18F7174C0 + v4 + 4108);
  if ( v7 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)((char *)&unk_18F7184E4 + v4); ; i += 6 )
  {
    if ( *i == a2 )
    {
      v9 = (unsigned __int8 *)&unk_18F7184D4 + 24 * v3 + v4;
      v10 = a3 - (_QWORD)v9;
      do
      {
        v11 = v9[v10];
        v12 = *v9 - v11;
        if ( v12 )
          break;
        ++v9;
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

