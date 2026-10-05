/* Address: 0x140177d70 | Name: sub_140177D70 | Size: 199 bytes */
__int64 __fastcall sub_140177D70(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  int v5; // edi
  int v6; // r11d
  int *v7; // r8
  int v8; // r10d
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // r11d
  int v12; // edx
  __int64 v13; // r9
  _DWORD *v14; // rcx

  v3 = a3;
  v5 = 0;
  if ( a3 > 0 )
  {
    v6 = a1[2];
    v7 = (int *)(a2 + 12);
    v8 = a1[3];
    v9 = 0;
    do
    {
      if ( v6 + *v7 > *a1 )
      {
        v8 = a1[4];
        v6 = 0;
        a1[3] = v8;
        a1[2] = 0;
      }
      if ( v8 + v7[1] > a1[1] )
        break;
      *(v7 - 3) = v6;
      result = (unsigned int)a1[3];
      v11 = *v7;
      *(v7 - 2) = result;
      v7[2] = 1;
      v6 = a1[2] + v11;
      v8 = a1[3];
      a1[2] = v6;
      v12 = v8 + v7[1];
      if ( v12 > a1[4] )
        a1[4] = v12;
      ++v5;
      ++v9;
      v7 += 6;
    }
    while ( v9 < v3 );
  }
  if ( v5 < v3 )
  {
    result = 3LL * v5;
    v13 = v3 - v5;
    v14 = (_DWORD *)(a2 + 20 + 24LL * v5);
    do
    {
      *v14 = 0;
      v14 += 6;
      --v13;
    }
    while ( v13 );
  }
  return result;
}

