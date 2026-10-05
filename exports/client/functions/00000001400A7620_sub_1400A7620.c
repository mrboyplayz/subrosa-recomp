/* Address: 0x1400a7620 | Name: sub_1400A7620 | Size: 240 bytes */
__int64 __fastcall sub_1400A7620(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE *v5; // rcx
  unsigned __int8 **v7; // r9
  int v8; // r10d
  unsigned __int8 *v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  if ( (int)dword_140404A6C[18215115] >= 3 )
  {
    v7 = *(unsigned __int8 ***)&dword_140404A6C[18215121];
    if ( *(_QWORD *)&dword_140404A6C[18215121] )
    {
      v8 = 0;
      if ( (int)dword_140404A6C[18215119] > 0 )
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            v10 = a1 - (_QWORD)v9;
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
          ++v8;
          ++v7;
          if ( v8 >= (int)dword_140404A6C[18215119] )
            return 0;
        }
        return 1;
      }
    }
    return 0;
  }
  v2 = *(_BYTE **)&dword_140404A6C[18215117];
  if ( !*(_QWORD *)&dword_140404A6C[18215117] )
    return 0;
  if ( !a1 )
    return 0;
  v3 = sub_1401FC614(*(_QWORD *)&dword_140404A6C[18215117], a1);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( *(_BYTE *)(a1 + v4) );
    v5 = (_BYTE *)(v3 + v4);
    if ( ((_BYTE *)v3 == v2 || *(_BYTE *)(v3 - 1) == 32) && (*v5 & 0xDF) == 0 )
      break;
    v2 = v5;
    v3 = sub_1401FC614(v5, a1);
    if ( !v3 )
      return 0;
  }
  return 1;
}

