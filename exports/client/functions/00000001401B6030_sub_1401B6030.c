/* Address: 0x1401b6030 | Name: sub_1401B6030 | Size: 231 bytes */
__int64 __fastcall sub_1401B6030(_DWORD *a1, int a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-18h]
  int v4; // [rsp+24h] [rbp-14h]
  unsigned __int8 v6; // [rsp+48h] [rbp+10h]

  v6 = a2;
  if ( a2 == 255 )
  {
    result = (unsigned int)(a1[10] + 1);
    a1[10] = result;
  }
  else
  {
    v3 = a2 >> 8;
    if ( (int)a1[11] >= 0 )
      a1[12] |= sub_1401B5F50(a1, (unsigned int)(v3 + a1[11]));
    if ( a1[10] )
    {
      do
      {
        a1[12] |= sub_1401B5F50(a1, (unsigned __int8)(v3 - 1));
        v4 = a1[10] - 1;
        a1[10] = v4;
      }
      while ( v4 );
    }
    a1[11] = v6;
    return v6;
  }
  return result;
}

