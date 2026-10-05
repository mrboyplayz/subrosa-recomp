/* Address: 0x1401c12f0 | Name: sub_1401C12F0 | Size: 865 bytes */
__int64 __fastcall sub_1401C12F0(int *a1, _DWORD *a2)
{
  int v3; // [rsp+20h] [rbp-28h]
  int v4; // [rsp+24h] [rbp-24h]
  unsigned int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]
  int v10; // [rsp+3Ch] [rbp-Ch]

  v4 = a1[1144];
  if ( !v4 )
    v4 = a1[8];
  v5 = v4;
  v3 = 1000 * (__int16)v4;
  if ( v3 )
  {
    if ( v3 <= a1[1139] && v3 <= a1[1141] && v3 >= a1[1142] )
    {
      if ( a1[6] >= 256 )
        a1[7] = 0;
      if ( a1[1134] || a2[16] )
      {
        if ( 1000 * (__int16)v4 <= a1[1143] )
        {
          if ( 1000 * (__int16)v4 >= a1[1143] )
          {
            if ( a1[7] < 0 )
              a1[7] = 1;
          }
          else if ( a2[16] )
          {
            if ( v4 == 8 )
              v10 = 12;
            else
              v10 = 16;
            v5 = v10;
            a1[6] = 0;
            MEMORY[0x1401FCD30](a1 + 4, 0, 8);
            a1[7] = 1;
          }
          else if ( a1[7] )
          {
            a1[7] = 1;
          }
          else
          {
            a2[22] = 1;
            a2[14] -= 5 * a2[14] / (a2[6] + 5);
          }
        }
        else
        {
          if ( !a1[7] )
          {
            a1[6] = 256;
            MEMORY[0x1401FCD30](a1 + 4, 0, 8);
          }
          if ( a2[16] )
          {
            a1[7] = 0;
            if ( v4 == 16 )
              return 12;
            else
              return 8;
          }
          else if ( a1[6] > 0 )
          {
            a1[7] = -2;
          }
          else
          {
            a2[22] = 1;
            a2[14] -= 5 * a2[14] / (a2[6] + 5);
          }
        }
      }
    }
    else
    {
      if ( a1[1139] >= a1[1141] )
        v7 = a1[1141];
      else
        v7 = a1[1139];
      if ( v7 <= a1[1142] )
        v8 = a1[1142];
      else
        v8 = v7;
      return (unsigned int)(v8 / 1000);
    }
  }
  else
  {
    if ( a1[1143] >= a1[1139] )
      v6 = a1[1139];
    else
      v6 = a1[1143];
    return (unsigned int)(v6 / 1000);
  }
  return v5;
}

