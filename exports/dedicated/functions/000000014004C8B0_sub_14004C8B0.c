/* Address: 0x14004c8b0 | Name: sub_14004C8B0 | Size: 162 bytes */
__int64 __fastcall sub_14004C8B0(int a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdi
  int v7; // r11d
  _DWORD *i; // r10
  unsigned __int8 *v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  v3 = 1;
  v4 = 10280LL * a1;
  v7 = *(_DWORD *)((char *)&unk_18F7174C0 + v4 + 8);
  if ( v7 <= 1 )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)((char *)&unk_18F7174E8 + v4); ; i += 4 )
  {
    if ( *i == a2 )
    {
      v9 = (unsigned __int8 *)&unk_18F7174CC + 16 * v3 + v4;
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
    if ( (int)++v3 >= v7 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}

