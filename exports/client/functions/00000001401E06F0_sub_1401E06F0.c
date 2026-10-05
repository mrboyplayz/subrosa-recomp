/* Address: 0x1401e06f0 | Name: sub_1401E06F0 | Size: 100 bytes */
__int64 __fastcall sub_1401E06F0(signed int a1)
{
  int v2; // eax
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  if ( a1 < 1 || a1 > 2 )
    return 0;
  if ( (unsigned int)sub_1401CAAA0(&v3) )
    return 0;
  v3 = sub_1401E99B0(v3);
  v5 = sub_14019B2A0(a1);
  v2 = sub_1401E99B0(18144);
  return v5 + v3 + v2;
}

