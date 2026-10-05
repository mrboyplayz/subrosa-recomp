/* Address: 0x1401be4c0 | Name: sub_1401BE4C0 | Size: 135 bytes */
__int64 __fastcall sub_1401BE4C0(signed int a1)
{
  int v2; // [rsp+20h] [rbp-18h]
  int v3; // [rsp+24h] [rbp-14h] BYREF
  _DWORD v4[4]; // [rsp+28h] [rbp-10h] BYREF

  if ( a1 <= 0 )
    return 0;
  sub_1401BE460(a1, &v3, v4);
  if ( (v3 & 1) != 0 )
    v2 = 0x8000;
  else
    v2 = 46214;
  return (unsigned int)(((__int16)(213 * LOWORD(v4[0])) * (__int64)(v2 >> (v3 >> 1))) >> 16) + (v2 >> (v3 >> 1));
}

