/* Address: 0x14019ad20 | Name: sub_14019AD20 | Size: 133 bytes */
__int64 __fastcall sub_14019AD20(unsigned int *a1, unsigned int a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  a1[10] = sub_14019A1A0(a1[8], a2);
  v3 = a1[9] / a1[10];
  return a2 - (v3 + (a2 < v3 + 1 ? a2 - (v3 + 1) : 0) + 1);
}

