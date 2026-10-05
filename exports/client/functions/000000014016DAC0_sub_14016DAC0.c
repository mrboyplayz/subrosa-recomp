/* Address: 0x14016dac0 | Name: sub_14016DAC0 | Size: 192 bytes */
_BYTE *__fastcall sub_14016DAC0(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // eax
  __int64 v9; // rbx
  unsigned __int8 *v10; // r9
  __int64 v11; // rdi
  _BYTE *v12; // r10
  int v13; // ecx
  int v14; // r8d
  int v15; // eax

  v5 = a4;
  v6 = *a3 + 3 * *a2;
  if ( a4 == 1 )
  {
    v7 = (unsigned int)(v6 + 2) >> 2;
    a1[1] = v7;
    *a1 = v7;
    return a1;
  }
  else
  {
    *a1 = (unsigned int)(v6 + 2) >> 2;
    if ( a4 > 1LL )
    {
      v9 = a2 - a3;
      v10 = a3 + 1;
      v11 = v5 - 1;
      v12 = a1 + 2;
      do
      {
        v13 = *v10;
        v12 += 2;
        v14 = v6;
        v15 = (v10++)[v9];
        v6 = v13 + 3 * v15;
        *(v12 - 3) = (unsigned int)(v14 + v6 + 2 * (v14 + 4)) >> 4;
        *(v12 - 2) = (unsigned int)(v6 + v14 + 2 * (v6 + 4)) >> 4;
        --v11;
      }
      while ( v11 );
    }
    a1[2 * (int)v5 - 1] = (unsigned int)(v6 + 2) >> 2;
    return a1;
  }
}

