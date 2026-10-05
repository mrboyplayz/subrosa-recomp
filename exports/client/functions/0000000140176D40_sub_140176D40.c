/* Address: 0x140176d40 | Name: sub_140176D40 | Size: 164 bytes */
char __fastcall sub_140176D40(_BYTE *a1, float *a2)
{
  float v4; // xmm6_4
  float v5; // xmm2_4
  float v6; // xmm2_4
  float v7; // xmm2_4
  char result; // al
  char v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = fmaxf(fmaxf(a2[2], a2[1]), *a2);
  if ( v4 >= 1.0e-32 )
  {
    v5 = sub_14020B144(a1, &v9);
    v6 = (float)(v5 * 256.0) / v4;
    *a1 = (int)(float)(v6 * *a2);
    a1[1] = (int)(float)(v6 * a2[1]);
    v7 = v6 * a2[2];
    result = v9 + 0x80;
    a1[3] = v9 + 0x80;
    a1[2] = (int)v7;
  }
  else
  {
    *(_DWORD *)a1 = 0;
  }
  return result;
}

