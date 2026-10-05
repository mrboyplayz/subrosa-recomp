/* Address: 0x14015ccb0 | Name: sub_14015CCB0 | Size: 453 bytes */
__int64 __fastcall sub_14015CCB0(__int64 a1, int *a2)
{
  int v2; // edi
  int v4; // r9d
  int v5; // r11d
  __int64 v6; // r8
  int v7; // eax
  _BYTE *v8; // rcx
  __int64 v9; // rax
  unsigned int *v10; // r15
  int v11; // r10d
  unsigned int v12; // edx
  int v13; // ebx
  __int64 v14; // r9
  int i; // esi
  unsigned __int8 *v16; // rcx
  _WORD *v17; // r8
  unsigned int v18; // r11d
  unsigned int v19; // eax
  unsigned __int8 *v20; // rsi
  unsigned __int16 *v21; // rbp
  unsigned int v22; // eax
  char v23; // cl
  int v24; // eax

  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = 0;
    if ( *a2 > 0 )
    {
      v8 = (_BYTE *)(v6 + a1 + 1280);
      do
      {
        *v8++ = v5 + 1;
        ++v4;
        ++v6;
        ++v7;
      }
      while ( v7 < *a2 );
    }
    ++v5;
    ++a2;
  }
  while ( v5 < 16 );
  v9 = v4;
  v10 = (unsigned int *)(a1 + 1544);
  v11 = 1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  *(_BYTE *)(v9 + a1 + 1280) = 0;
  for ( i = 15; i >= 0; --i )
  {
    v16 = (unsigned __int8 *)(v14 + a1 + 1280);
    v10[18] = v13 - v12;
    if ( *v16 == v11 )
    {
      v17 = (_WORD *)(a1 + 512 + 2 * v14);
      do
      {
        *v17 = v12;
        ++v16;
        ++v17;
        v18 = v12;
        ++v13;
        ++v14;
        ++v12;
      }
      while ( *v16 == v11 );
      if ( v18 >= 1 << v11 )
      {
        *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad code lengths";
        return 0;
      }
    }
    v19 = v12 << i;
    v12 *= 2;
    *v10 = v19;
    ++v11;
    ++v10;
  }
  *(_DWORD *)(a1 + 4LL * v11 + 1540) = -1;
  MEMORY[0x1401FCD30](a1, 255, 512);
  if ( v13 > 0 )
  {
    v20 = (unsigned __int8 *)(a1 + 1280);
    v21 = (unsigned __int16 *)(a1 + 512);
    do
    {
      v22 = *v20;
      if ( v22 <= 9 )
      {
        v23 = 9 - v22;
        v24 = 1 << (9 - v22);
        if ( v24 > 0 )
          MEMORY[0x1401FCD30](a1 + (*v21 << v23), (unsigned __int8)v2, v24);
      }
      ++v2;
      ++v21;
      ++v20;
    }
    while ( v2 < v13 );
  }
  return 1;
}

