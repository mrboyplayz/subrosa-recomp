/* Address: 0x1401f3e60 | Name: sub_1401F3E60 | Size: 295 bytes */
__int64 __fastcall sub_1401F3E60(int a1, int a2, int a3, int a4)
{
  char v5; // [rsp+0h] [rbp-18h]
  char v6; // [rsp+4h] [rbp-14h]
  char v7; // [rsp+8h] [rbp-10h]

  v6 = 0;
  while ( a2 < 400 )
  {
    a2 *= 2;
    ++v6;
  }
  if ( a1 == 1000 )
  {
    v5 = (8 * v6 - 16) | (32 * (a3 - 77));
  }
  else if ( a1 == 1002 )
  {
    v7 = a3 - 78;
    if ( a3 - 1102 < 0 )
      v7 = 0;
    v5 = (8 * v6) | (32 * v7) | 0x80;
  }
  else
  {
    v5 = (8 * v6 - 16) | (16 * (a3 - 80)) | 0x60;
  }
  return (unsigned __int8)((4 * (a4 == 2)) | v5);
}

