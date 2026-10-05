/* Address: 0x1401c2970 | Name: sub_1401C2970 | Size: 1005 bytes */
__int64 __fastcall sub_1401C2970(char *a1, __int64 a2, char *a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  int v6; // eax
  int i; // [rsp+20h] [rbp-38h]
  int v8; // [rsp+24h] [rbp-34h]
  char v9; // [rsp+28h] [rbp-30h]
  char v10; // [rsp+2Ch] [rbp-2Ch]
  char v11; // [rsp+30h] [rbp-28h]
  char v12; // [rsp+34h] [rbp-24h]
  char v13; // [rsp+38h] [rbp-20h]
  char v14; // [rsp+3Ch] [rbp-1Ch]
  char v15; // [rsp+40h] [rbp-18h]
  char v16; // [rsp+44h] [rbp-14h]
  char v17; // [rsp+48h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    a1[i] = (unsigned int)(2251 * (__int16)(sub_1401BC2A0(*(_DWORD *)(a2 + 4LL * i)) - 2090)) >> 16;
    if ( a1[i] < *a3 )
      ++a1[i];
    if ( a1[i] <= 63 )
    {
      if ( a1[i] >= 0 )
        v9 = a1[i];
      else
        v9 = 0;
      v10 = v9;
    }
    else
    {
      v10 = 63;
    }
    a1[i] = v10;
    if ( i || a4 )
    {
      a1[i] -= *a3;
      v8 = *a3 + 8;
      if ( a1[i] > v8 )
        a1[i] = ((a1[i] - v8 + 1) >> 1) + v8;
      if ( a1[i] <= 36 )
      {
        if ( a1[i] >= -4 )
          v16 = a1[i];
        else
          v16 = -4;
        v17 = v16;
      }
      else
      {
        v17 = 36;
      }
      a1[i] = v17;
      if ( a1[i] <= v8 )
      {
        *a3 += a1[i];
      }
      else
      {
        *a3 += 2 * a1[i] - v8;
        *a3 = sub_1401BE320(*a3, 0x3Fu);
      }
      a1[i] += 4;
    }
    else
    {
      if ( *a3 - 4 <= 63 )
      {
        if ( *a1 <= 63 )
        {
          if ( *a1 >= *a3 - 4 )
            v13 = *a1;
          else
            v13 = *a3 - 4;
          v14 = v13;
        }
        else
        {
          v14 = 63;
        }
        v15 = v14;
      }
      else
      {
        if ( *a1 <= *a3 - 4 )
        {
          if ( *a1 >= 63 )
            v11 = *a1;
          else
            v11 = 63;
          v12 = v11;
        }
        else
        {
          v12 = *a3 - 4;
        }
        v15 = v12;
      }
      *a1 = v15;
      *a3 = *a1;
    }
    v6 = sub_1401BE360((unsigned int)((1907825LL * *a3) >> 16) + 2090, 0xF7Fu);
    *(_DWORD *)(a2 + 4LL * i) = sub_1401BC3D0(v6);
  }
  return result;
}

