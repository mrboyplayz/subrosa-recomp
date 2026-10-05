/* Address: 0x1401e2280 | Name: sub_1401E2280 | Size: 100 bytes */
__int64 __fastcall sub_1401E2280(signed int a1)
{
  unsigned int v2; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  if ( a1 < 1 || a1 > 2 )
    return 0;
  if ( (unsigned int)sub_1401CCA90(&v2) )
    return 0;
  v2 = sub_1401E99B0(v2);
  v4 = sub_14019F150(a1);
  return v4 + v2 + (unsigned int)sub_1401E99B0(88);
}

