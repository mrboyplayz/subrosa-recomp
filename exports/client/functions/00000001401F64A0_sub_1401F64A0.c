/* Address: 0x1401f64a0 | Name: sub_1401F64A0 | Size: 161 bytes */
__int64 __fastcall sub_1401F64A0(int *a1)
{
  int i; // [rsp+20h] [rbp-18h]

  for ( i = 0; i < a1[1]; ++i )
  {
    if ( i >= a1[2] )
    {
      if ( (unsigned int)sub_1401E4DF0(a1, i, -1) == -1 )
        return 0;
    }
    else
    {
      if ( (unsigned int)sub_1401E4CF0(a1, i, -1) == -1 )
        return 0;
      if ( (unsigned int)sub_1401E4D70(a1, i, -1) == -1 )
        return 0;
    }
  }
  return 1;
}

