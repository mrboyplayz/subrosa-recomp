/* Address: 0x1401dc160 | Name: sub_1401DC160 | Size: 462 bytes */
__int64 __fastcall sub_1401DC160(_DWORD *a1, int a2, int a3)
{
  unsigned int v4; // [rsp+0h] [rbp-18h]
  int v5; // [rsp+4h] [rbp-14h]
  int i; // [rsp+8h] [rbp-10h]

  v4 = a1[a3];
  v5 = 16 * a2;
  if ( a3 == 8 )
  {
    return (unsigned int)((v5
                         * (__int64)(int)(((v5
                                          * (__int64)(int)(((v5
                                                           * (__int64)(int)(((v5
                                                                            * (__int64)(int)(((v5
                                                                                             * (__int64)(int)(((v5 * (__int64)(int)(((v5 * (__int64)(int)(((v5 * (__int64)(int)v4) >> 16) + a1[7])) >> 16) + a1[6])) >> 16) + a1[5])) >> 16)
                                                                                           + a1[4])) >> 16)
                                                                          + a1[3])) >> 16)
                                                         + a1[2])) >> 16)
                                        + a1[1])) >> 16)
         + *a1;
  }
  else
  {
    for ( i = a3 - 1; i >= 0; --i )
      v4 = ((v5 * (__int64)(int)v4) >> 16) + a1[i];
  }
  return v4;
}

