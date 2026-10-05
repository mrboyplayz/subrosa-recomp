/* Address: 0x1401a32c0 | Name: sub_1401A32C0 | Size: 149 bytes */
__int64 __fastcall sub_1401A32C0(__int16 a1)
{
  __int16 v2; // [rsp+0h] [rbp-18h]

  v2 = (a1 * a1 + 4096) >> 13;
  return (unsigned int)((__int16)((((__int16)((((__int16)(((-626 * v2 + 0x4000) >> 15) + 8277) * v2 + 0x4000) >> 15)
                                            - 7651)
                                  * v2
                                  + 0x4000) >> 15)
                                + 0x7FFF
                                - v2)
                      + 1);
}

