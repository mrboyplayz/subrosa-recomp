/* Address: 0x1400cbeb0 | Name: sub_1400CBEB0 | Size: 618 bytes */
__int64 sub_1400CBEB0()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8

  sub_1400CC120();
  strcpy((char *)&qword_14AB397F4, "Helicopter");
  dword_14AB39818 = 1148846080;
  dword_14AB397E8 = 2;
  dword_14AB39814 = 1000000;
  dword_14AB397E0 = 1;
  sub_1400EAEF0(12, "park5");
  dword_14AB51058 = 0;
  dword_143FE2808 = 0;
  dword_143FE0E04 = 0;
  sub_14009E250(12, "data/helitest.tst");
  sub_1400D1E00(12, v0, v1, 0);
  dword_14AA152E0[3 * dword_14AB51AF8 + 324103] = -1094713344;
  dword_14AA152E0[3 * dword_14AB51AF8 + 324104] = -1089470464;
  dword_14AA152E0[3 * dword_14AB51AF8 + 324105] = -1084227584;
  v2 = dword_14AB51AF8++;
  dword_14AA152E0[3 * v2 + 324106] = 1052770304;
  dword_14AA152E0[3 * dword_14AB51AF8 + 324104] = -1089470464;
  dword_14AA152E0[3 * dword_14AB51AF8 + 324105] = -1084227584;
  v3 = dword_14AB51AF8++;
  dword_14AA152E0[3 * v3 + 324106] = -1094713344;
  dword_14AA152E0[3 * dword_14AB51AF8 + 324104] = -1089470464;
  dword_14AA152E0[3 * dword_14AB51AF8 + 324105] = 1061158912;
  v4 = dword_14AB51AF8++;
  dword_14AA152E0[3 * v4 + 324106] = 1052770304;
  dword_14AA152E0[3 * dword_14AB51AF8 + 324104] = -1089470464;
  dword_14AA152E0[3 * dword_14AB51AF8++ + 324105] = 1061158912;
  sub_1400D0DE0(12);
  strcpy((char *)&dword_14AB51DB4, "Train");
  dword_14AB51DA0 = 1;
  dword_14AB51DD4 = 1000;
  dword_14AB51DA8 = 0;
  dword_14AB51DD8 = 1218199552;
  sub_1400EAEF0(13, "train04");
  return sub_1400D30F0(13, v5, v6, 0);
}

