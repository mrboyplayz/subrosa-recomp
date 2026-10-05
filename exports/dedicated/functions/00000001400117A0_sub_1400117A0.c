/* Address: 0x1400117a0 | Name: sub_1400117A0 | Size: 215 bytes */
__int64 __fastcall sub_1400117A0(__int64 a1, unsigned int a2)
{
  int *v2; // rax
  float v3; // xmm0_4
  int v4; // xmm2_4
  int v5; // xmm1_4
  float v6; // xmm0_4
  int v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm0_4

  if ( (int)a1 > 0 )
  {
    a1 = (unsigned int)a1;
    do
    {
      v2 = &dword_15ADEF168;
      do
      {
        v3 = 1.0 - *(float *)v2;
        v4 = v2[1];
        *v2 = *(v2 - 2);
        v5 = v2[4];
        *((float *)v2 - 2) = v3;
        v6 = 1.0 - *((float *)v2 + 3);
        v2[3] = v4;
        v7 = v2[7];
        *((float *)v2 + 1) = v6;
        v8 = 1.0 - *((float *)v2 + 6);
        v2[6] = v5;
        *((float *)v2 + 4) = v8;
        v9 = 1.0 - *((float *)v2 + 9);
        v2[9] = v7;
        *((float *)v2 + 7) = v9;
        v2 += 12;
      }
      while ( (__int64)v2 < (__int64)dword_15ADEF228 );
      switch ( a2 )
      {
        case 0x60000u:
          a2 = 0x10000;
          break;
        case 0x10000u:
          a2 = 327680;
          break;
        case 0x50000u:
          a2 = 0x20000;
          break;
        case 0x20000u:
          a2 = 393216;
          break;
      }
      --a1;
    }
    while ( a1 );
  }
  return a2;
}

