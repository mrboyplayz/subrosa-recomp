/* Address: 0x14016d9d0 | Name: sub_14016D9D0 | Size: 226 bytes */
_BYTE *__fastcall sub_14016D9D0(_BYTE *a1, unsigned __int8 *a2, __int64 a3, int a4)
{
  char v4; // al
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // r9
  _BYTE *v12; // r8
  unsigned __int8 *v13; // rdx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r8

  v4 = *a2;
  *a1 = *a2;
  if ( a4 == 1 )
  {
    a1[1] = v4;
    return a1;
  }
  else
  {
    v8 = a4;
    v9 = 1;
    a1[1] = (3 * *a2 + (unsigned int)a2[1] + 2) >> 2;
    v10 = a4 - 1LL;
    if ( v10 > 1 )
    {
      v11 = a4 - 2LL;
      v9 = v10;
      v12 = a1 + 2;
      v13 = a2 + 2;
      do
      {
        v14 = *(v13 - 1);
        v12 += 2;
        ++v13;
        v15 = v14 + 2 * (v14 + 1);
        *(v12 - 2) = (v15 + (unsigned int)*(v13 - 3)) >> 2;
        *(v12 - 1) = (v15 + (unsigned int)*(v13 - 1)) >> 2;
        --v11;
      }
      while ( v11 );
    }
    v16 = 2 * v9;
    a1[v16] = (3 * a2[v8 - 2] + (unsigned int)a2[v10] + 2) >> 2;
    a1[v16 + 1] = a2[v10];
    return a1;
  }
}

