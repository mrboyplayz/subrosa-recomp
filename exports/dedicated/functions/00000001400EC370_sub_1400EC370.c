/* Address: 0x1400ec370 | Name: sub_1400EC370 | Size: 303 bytes */
__int64 __fastcall sub_1400EC370(int a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  int v3; // ecx
  _DWORD *v4; // rbx
  int v5; // r9d
  int v6; // r10d
  int v7; // edx
  int *v8; // rcx
  int v9; // eax

  v1 = a1;
  result = (__int64)dword_16D67D624;
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
  while ( result < (__int64)&unk_16DA00A24 );
  if ( v3 )
  {
    v4 = (_DWORD *)&qword_17AE3AD40 + 5 * v1;
    v5 = 2 * (*v4 / 10);
    if ( *v4 / 10 >= 0 )
      v5 = *v4 / 10;
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
    v8 = dword_16D67D5F8;
    do
    {
      if ( *(v8 - 22) && v8[11] == (_DWORD)v1 )
      {
        v9 = *v8;
        if ( dword_1915414A4[5873 * v1] == v7 )
          result = (unsigned int)(v5 + v9);
        else
          result = (unsigned int)(v6 + v9);
        *v8 = result;
      }
      ++v7;
      v8 += 3597;
    }
    while ( (__int64)v8 < (__int64)dword_16DA009F8 );
    *v4 = 0;
  }
  return result;
}

