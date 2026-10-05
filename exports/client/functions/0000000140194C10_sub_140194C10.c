/* Address: 0x140194c10 | Name: sub_140194C10 | Size: 303 bytes */
__int64 __fastcall sub_140194C10(int a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  int v3; // ecx
  unsigned int *v4; // rbx
  int v5; // r9d
  int v6; // r10d
  int v7; // edx
  unsigned int *v8; // rcx
  unsigned int v9; // eax

  v1 = a1;
  result = (__int64)&dword_140404A6C[71856286];
  v3 = 0;
  do
  {
    if ( *(_DWORD *)(result - 132) && *(_DWORD *)result == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 14256) && *(_DWORD *)(result + 14388) == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 28644) && *(_DWORD *)(result + 28776) == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 43032) && *(_DWORD *)(result + 43164) == (_DWORD)v1 )
      ++v3;
    result += 57552;
  }
  while ( result < (__int64)&dword_140404A6C[72777118] );
  if ( v3 )
  {
    v4 = &dword_140404A6C[5 * v1 + 188872237];
    v5 = 2 * ((int)*v4 / 10);
    if ( (int)*v4 / 10 >= 0 )
      v5 = (int)*v4 / 10;
    if ( v3 <= 1 )
    {
      v6 = v5;
    }
    else
    {
      v5 /= 2;
      v6 = v5 / (v3 - 1);
    }
    result = 23492 * v1;
    v7 = 0;
    v8 = &dword_140404A6C[71856275];
    do
    {
      if ( *(v8 - 22) && v8[11] == (_DWORD)v1 )
      {
        v9 = *v8;
        if ( dword_140404A6C[5873 * v1 + 283831510] == v7 )
          result = v5 + v9;
        else
          result = v6 + v9;
        *v8 = result;
      }
      ++v7;
      v8 += 3597;
    }
    while ( (__int64)v8 < (__int64)&dword_140404A6C[72777107] );
    *v4 = 0;
  }
  return result;
}

