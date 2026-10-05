/* Address: 0x1400038e0 | Name: sub_1400038E0 | Size: 2139 bytes */
__int64 __fastcall sub_1400038E0(signed int a1, signed int a2, signed int a3, signed int a4)
{
  __int64 v5; // r11
  __int64 v7; // r10
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 result; // rax
  signed int v13; // r8d
  int v14; // edx

  v5 = 34LL * a1;
  v7 = 34LL * a2;
  if ( (int)(dword_140404A6C[v7 + 225391230] - dword_140404A6C[v5 + 225391230]) <= (int)(dword_140404A6C[v7 + 225391232]
                                                                                       - dword_140404A6C[v5 + 225391232]) )
  {
    dword_140404A6C[396 * dword_140404A6C[225426046] + 225426058] = 1;
    dword_140404A6C[v5 + 225391237] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v5 + 225391240] < a3 )
      dword_140404A6C[v5 + 225391240] = a3;
    if ( (int)dword_140404A6C[v5 + 225391242] < a4 )
      dword_140404A6C[v5 + 225391242] = a4;
    dword_140404A6C[v7 + 225391239] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v7 + 225391240] < a3 )
      dword_140404A6C[v7 + 225391240] = a3;
    if ( (int)dword_140404A6C[v7 + 225391242] < a4 )
      dword_140404A6C[v7 + 225391242] = a4;
  }
  else
  {
    dword_140404A6C[396 * dword_140404A6C[225426046] + 225426058] = 0;
    dword_140404A6C[v5 + 225391236] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v5 + 225391241] < a4 )
      dword_140404A6C[v5 + 225391241] = a4;
    if ( (int)dword_140404A6C[v5 + 225391243] < a3 )
      dword_140404A6C[v5 + 225391243] = a3;
    dword_140404A6C[v7 + 225391238] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v7 + 225391241] < a4 )
      dword_140404A6C[v7 + 225391241] = a4;
    if ( (int)dword_140404A6C[v7 + 225391243] < a3 )
      dword_140404A6C[v7 + 225391243] = a3;
  }
  *(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426174] = (float)(int)(dword_140404A6C[v7 + 225391230]
                                                                                        - dword_140404A6C[v5 + 225391230]);
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426175] = 0;
  *(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426176] = (float)(int)(dword_140404A6C[v7 + 225391232]
                                                                                        - dword_140404A6C[v5 + 225391232]);
  sub_14007A240(
    &dword_140404A6C[396 * dword_140404A6C[225426046] + 225426174],
    &dword_140404A6C[396 * dword_140404A6C[225426046] + 225426174]);
  *(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426177] = -*(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426176];
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426178] = 0;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426179] = dword_140404A6C[396 * dword_140404A6C[225426046]
                                                                                + 225426174];
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426056] = a1;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426057] = a2;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426059] = a3;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426060] = a4;
  v10 = 396LL * (int)dword_140404A6C[225426046];
  v11 = 34LL * (int)dword_140404A6C[v10 + 225426056];
  if ( dword_140404A6C[v10 + 225426058] )
  {
    v13 = dword_140404A6C[v11 + 225391230] - 256;
    result = (unsigned int)((unsigned __int64)(2454267027LL * v13) >> 32) >> 31;
    v14 = v13 / 56;
    if ( v13 / 56 )
    {
      switch ( v14 )
      {
        case 1:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Bunten Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 10;
          break;
        case 2:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Carmack Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 11;
          break;
        case 3:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "David Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 12;
          break;
        case 4:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Eugene Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 13;
          break;
        case 5:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Flinn Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 14;
          break;
        case 6:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Garriott Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 15;
          break;
        case 7:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Holland Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 16;
          break;
      }
    }
    else
    {
      strcpy((char *)&dword_140404A6C[v10 + 225426047], "Abrash Ave");
      result = (int)dword_140404A6C[225426046];
      dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 9;
    }
  }
  else
  {
    result = (unsigned int)((int)(dword_140404A6C[v11 + 225391232] - 256) / 32);
    if ( (_DWORD)result )
    {
      switch ( (_DWORD)result )
      {
        case 1:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Second Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 1;
          break;
        case 2:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Third Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 2;
          break;
        case 3:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Fourth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 3;
          break;
        case 4:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Fifth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 4;
          break;
        case 5:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Sixth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 5;
          break;
        case 6:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Seventh Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 6;
          break;
        case 7:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Eighth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 7;
          break;
        case 8:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Ninth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 8;
          break;
      }
    }
    else
    {
      strcpy((char *)&dword_140404A6C[v10 + 225426047], "First Street");
      result = (int)dword_140404A6C[225426046];
      dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 0;
    }
  }
  ++dword_140404A6C[225426046];
  return result;
}

