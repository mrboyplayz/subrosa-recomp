/* Address: 0x1401fec0c | Name: sub_1401FEC0C | Size: 76 bytes */
_OWORD *__fastcall sub_1401FEC0C(_OWORD *a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+0h] [rbp-18h]

  if ( (dword_140404A6C[19064559] & 1) != 0 )
  {
    *(_QWORD *)&v4 = (char *)*(&off_1402834A0 + 2 * a2) + 2;
    DWORD2(v4) = *((_DWORD *)&off_1402834A0 + 4 * a2 + 2) - 2;
    v2 = v4;
  }
  else
  {
    v2 = *((_OWORD *)&off_1402834A0 + a2);
  }
  *a1 = v2;
  return a1;
}

