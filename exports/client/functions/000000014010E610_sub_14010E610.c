/* Address: 0x14010e610 | Name: sub_14010E610 | Size: 109 bytes */
__int64 __fastcall sub_14010E610(float *a1, __int64 a2)
{
  signed int v2; // r8d
  float v3; // xmm3_4
  int v4; // ecx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (unsigned int)(1 << a2) >> 1;
  v3 = *a1;
  v4 = (v2 - 1) & (int)(fabs(*a1) * ((float)v2 * 0.1591549430918849));
  v6 = v4;
  if ( v3 < 0.0 )
    v6 = v2 | v4;
  return sub_140115D90(&v6, a2);
}

