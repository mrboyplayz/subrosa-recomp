/* Address: 0x1401f4b00 | Name: sub_1401F4B00 | Size: 158 bytes */
__int64 __fastcall sub_1401F4B00(_DWORD *a1, int a2, int a3)
{
  int v4; // [rsp+10h] [rbp+10h]

  v4 = a2;
  if ( !a2 )
    v4 = a1[36] / 400;
  if ( a1[41] == -1000 )
    return (unsigned int)(a1[28] * a1[36] + 60 * a1[36] / v4);
  if ( a1[41] == -1 )
    return (unsigned int)(a1[36] * 8 * a3 / v4);
  return (unsigned int)a1[41];
}

