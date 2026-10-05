/* Address: 0x1400a6b50 | Name: sub_1400A6B50 | Size: 327 bytes */
__int64 __fastcall sub_1400A6B50(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 result; // rax

  v8 = 24944LL * a1;
  v9 = 1559LL * a1;
  dword_14AA152E0[16 * v9 + 1303 + 16 * dword_14AA152E0[v8 + 1302]] = a2;
  dword_14AA152E0[16 * v9 + 1304 + 16 * dword_14AA152E0[v8 + 1302]] = a3;
  dword_14AA152E0[16 * v9 + 1305 + 16 * dword_14AA152E0[v8 + 1302]] = a4;
  dword_14AA152E0[16 * v9 + 1306 + 16 * dword_14AA152E0[v8 + 1302]] = a5;
  dword_14AA152E0[16 * v9 + 1307 + 16 * dword_14AA152E0[v8 + 1302]] = a6;
  dword_14AA152E0[16 * v9 + 1308 + 16 * dword_14AA152E0[v8 + 1302]] = -1;
  dword_14AA152E0[16 * v9 + 1309 + 16 * dword_14AA152E0[v8 + 1302]] = -1;
  dword_14AA152E0[16 * v9 + 1310 + 16 * dword_14AA152E0[v8 + 1302]] = -1;
  dword_14AA152E0[16 * v9 + 1311 + 16 * dword_14AA152E0[v8 + 1302]] = -1;
  dword_14AA152E0[16 * v9 + 1316 + 16 * dword_14AA152E0[v8 + 1302]] = a7;
  result = (v9 + dword_14AA152E0[v8 + 1302]) << 6;
  *(int *)((char *)&dword_14AA152E0[1317] + result) = a8;
  ++dword_14AA152E0[v8 + 1302];
  return result;
}

