/* Address: 0x140002280 | Name: sub_140002280 | Size: 2139 bytes */
__int64 __fastcall sub_140002280(int a1, int a2, int a3, int a4)
{
  __int64 v5; // r11
  __int64 v7; // r10
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // r8d
  int v14; // edx

  v5 = 34LL * a1;
  v7 = 34LL * a2;
  if ( dword_183989E80[v7 + 25] - dword_183989E80[v5 + 25] <= dword_183989E80[v7 + 27] - dword_183989E80[v5 + 27] )
  {
    dword_183989E80[396 * dword_1839ABEE4 + 34853] = 1;
    dword_183989E80[v5 + 32] = dword_1839ABEE4;
    if ( dword_183989E80[v5 + 35] < a3 )
      dword_183989E80[v5 + 35] = a3;
    if ( dword_183989E80[v5 + 37] < a4 )
      dword_183989E80[v5 + 37] = a4;
    dword_183989E80[v7 + 34] = dword_1839ABEE4;
    if ( dword_183989E80[v7 + 35] < a3 )
      dword_183989E80[v7 + 35] = a3;
    if ( dword_183989E80[v7 + 37] < a4 )
      dword_183989E80[v7 + 37] = a4;
  }
  else
  {
    dword_183989E80[396 * dword_1839ABEE4 + 34853] = 0;
    dword_183989E80[v5 + 31] = dword_1839ABEE4;
    if ( dword_183989E80[v5 + 36] < a4 )
      dword_183989E80[v5 + 36] = a4;
    if ( dword_183989E80[v5 + 38] < a3 )
      dword_183989E80[v5 + 38] = a3;
    dword_183989E80[v7 + 33] = dword_1839ABEE4;
    if ( dword_183989E80[v7 + 36] < a4 )
      dword_183989E80[v7 + 36] = a4;
    if ( dword_183989E80[v7 + 38] < a3 )
      dword_183989E80[v7 + 38] = a3;
  }
  *(float *)&dword_183989E80[396 * dword_1839ABEE4 + 34969] = (float)(dword_183989E80[v7 + 25] - dword_183989E80[v5 + 25]);
  dword_183989E80[396 * dword_1839ABEE4 + 34970] = 0;
  *(float *)&dword_183989E80[396 * dword_1839ABEE4 + 34971] = (float)(dword_183989E80[v7 + 27] - dword_183989E80[v5 + 27]);
  sub_140049260(&dword_183989E80[396 * dword_1839ABEE4 + 34969], &dword_183989E80[396 * dword_1839ABEE4 + 34969]);
  *(float *)&dword_183989E80[396 * dword_1839ABEE4 + 34972] = -*(float *)&dword_183989E80[396 * dword_1839ABEE4 + 34971];
  dword_183989E80[396 * dword_1839ABEE4 + 34973] = 0;
  dword_183989E80[396 * dword_1839ABEE4 + 34974] = dword_183989E80[396 * dword_1839ABEE4 + 34969];
  dword_183989E80[396 * dword_1839ABEE4 + 34851] = a1;
  dword_183989E80[396 * dword_1839ABEE4 + 34852] = a2;
  dword_183989E80[396 * dword_1839ABEE4 + 34854] = a3;
  dword_183989E80[396 * dword_1839ABEE4 + 34855] = a4;
  v10 = 396LL * dword_1839ABEE4;
  v11 = 34LL * dword_183989E80[v10 + 34851];
  if ( dword_183989E80[v10 + 34853] )
  {
    v13 = dword_183989E80[v11 + 25] - 256;
    result = (unsigned int)((unsigned __int64)(2454267027LL * v13) >> 32) >> 31;
    v14 = v13 / 56;
    if ( v13 / 56 )
    {
      switch ( v14 )
      {
        case 1:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Bunten Ave");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 10;
          break;
        case 2:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Carmack Ave");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 11;
          break;
        case 3:
          strcpy((char *)&dword_183989E80[v10 + 34842], "David Ave");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 12;
          break;
        case 4:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Eugene Ave");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 13;
          break;
        case 5:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Flinn Ave");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 14;
          break;
        case 6:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Garriott Ave");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 15;
          break;
        case 7:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Holland Ave");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 16;
          break;
      }
    }
    else
    {
      strcpy((char *)&dword_183989E80[v10 + 34842], "Abrash Ave");
      result = dword_1839ABEE4;
      dword_183989E80[396 * dword_1839ABEE4 + 34850] = 9;
    }
  }
  else
  {
    result = (unsigned int)((dword_183989E80[v11 + 27] - 256) / 32);
    if ( (_DWORD)result )
    {
      switch ( (_DWORD)result )
      {
        case 1:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Second Street");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 1;
          break;
        case 2:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Third Street");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 2;
          break;
        case 3:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Fourth Street");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 3;
          break;
        case 4:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Fifth Street");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 4;
          break;
        case 5:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Sixth Street");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 5;
          break;
        case 6:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Seventh Street");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 6;
          break;
        case 7:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Eighth Street");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 7;
          break;
        case 8:
          strcpy((char *)&dword_183989E80[v10 + 34842], "Ninth Street");
          result = dword_1839ABEE4;
          dword_183989E80[396 * dword_1839ABEE4 + 34850] = 8;
          break;
      }
    }
    else
    {
      strcpy((char *)&dword_183989E80[v10 + 34842], "First Street");
      result = dword_1839ABEE4;
      dword_183989E80[396 * dword_1839ABEE4 + 34850] = 0;
    }
  }
  ++dword_1839ABEE4;
  return result;
}

