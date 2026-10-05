/* Address: 0x14017ccf0 | Name: sub_14017CCF0 | Size: 211 bytes */
__int64 __fastcall sub_14017CCF0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // edi
  int v7; // r11d
  _DWORD *v8; // r8
  int v9; // r10d
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // r9
  _DWORD *v13; // rcx

  result = *(_QWORD *)(a1 + 8);
  v5 = a3;
  v6 = 0;
  if ( a3 > 0 )
  {
    v7 = *(_DWORD *)(result + 8);
    v8 = (_DWORD *)(a2 + 12);
    v9 = *(_DWORD *)(result + 12);
    v10 = 0;
    do
    {
      if ( v7 + *v8 > *(_DWORD *)result )
      {
        v9 = *(_DWORD *)(result + 16);
        v7 = 0;
        *(_DWORD *)(result + 12) = v9;
        *(_DWORD *)(result + 8) = 0;
      }
      if ( v9 + v8[1] > *(_DWORD *)(result + 4) )
        break;
      *(v8 - 3) = v7;
      *(v8 - 2) = *(_DWORD *)(result + 12);
      v8[2] = 1;
      v7 = *v8 + *(_DWORD *)(result + 8);
      v9 = *(_DWORD *)(result + 12);
      *(_DWORD *)(result + 8) = v7;
      v11 = v9 + v8[1];
      if ( v11 > *(_DWORD *)(result + 16) )
        *(_DWORD *)(result + 16) = v11;
      ++v6;
      ++v10;
      v8 += 6;
    }
    while ( v10 < v5 );
  }
  if ( v6 < v5 )
  {
    result = 3LL * v6;
    v12 = v5 - v6;
    v13 = (_DWORD *)(a2 + 20 + 24LL * v6);
    do
    {
      *v13 = 0;
      v13 += 6;
      --v12;
    }
    while ( v12 );
  }
  return result;
}

