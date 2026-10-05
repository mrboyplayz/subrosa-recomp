/* Address: 0x1401a3360 | Name: sub_1401A3360 | Size: 223 bytes */
__int64 __fastcall sub_1401A3360(unsigned int a1, unsigned int a2)
{
  int v2; // eax
  int v4; // [rsp+20h] [rbp-18h]

  v4 = sub_14019A020(a2) + 1;
  v2 = sub_14019A020(a1);
  return (unsigned int)((((__int16)(((-2597 * (__int16)(a1 << (15 - (v2 + 1))) + 0x4000) >> 15) + 7932)
                        * (__int16)(a1 << (15 - (v2 + 1)))
                        + 0x4000) >> 15)
                      + ((v2 + 1 - v4) << 11)
                      - (((__int16)(((-2597 * (__int16)(a2 << (15 - v4)) + 0x4000) >> 15) + 7932)
                        * (__int16)(a2 << (15 - v4))
                        + 0x4000) >> 15));
}

