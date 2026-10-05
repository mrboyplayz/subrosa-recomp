/* Address: 0x140052090 | Name: sub_140052090 | Size: 272 bytes */
__int64 sub_140052090()
{
  float v0; // xmm1_4
  unsigned int v1; // edx
  float v2; // xmm0_4
  __int64 v3; // rcx
  unsigned int v4; // r11d
  int v5; // r8d
  unsigned int v6; // r9d
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v0 = *(float *)&dword_140404A6C[335047074];
    v1 = dword_140404A6C[308307070] + 1;
    v2 = *(float *)&dword_140404A6C[335047062] * 10.0;
    v3 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 13;
    dword_140404A6C[308307070] = v1;
    dword_140404A6C[335047064] = (int)v2;
    dword_140404A6C[335047076] = (int)(float)(v0 * 10.0);
    dword_140404A6C[335047070] = (int)(float)(*(float *)&dword_140404A6C[335047068] * 10.0);
    v4 = (int)v2 + (dword_140404A6C[335047070] << 16);
    v5 = (int)(float)(*(float *)&dword_140404A6C[335047086] * 10.0);
    dword_140404A6C[335047082] = (int)(float)(*(float *)&dword_140404A6C[335047080] * 10.0);
    v6 = dword_140404A6C[335047076] + (dword_140404A6C[335047082] << 16);
    dword_140404A6C[335047088] = v5;
    dword_140404A6C[335047094] = (int)(float)(*(float *)&dword_140404A6C[335047092] * 10.0);
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = dword_140404A6C[283831474];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v3) = v5;
    HIWORD(dword_140404A6C[308307070]) = 0;
    return 0;
  }
  return result;
}

