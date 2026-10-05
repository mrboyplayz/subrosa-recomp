/* Address: 0x14001a050 | Name: sub_14001A050 | Size: 367 bytes */
unsigned __int64 __fastcall sub_14001A050(__int64 a1, float a2, float a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax

  *(float *)&dword_140404A6C[19928798] = a2;
  *(float *)&dword_140404A6C[19928791] = a3;
  v3 = a1;
  *(float *)&dword_140404A6C[19928800] = a3;
  *(float *)&dword_140404A6C[19928836] = a3;
  *(float *)&dword_140404A6C[19928827] = a3;
  *(float *)&dword_140404A6C[19928834] = a2;
  dword_140404A6C[19928789] = 0;
  dword_140404A6C[19928790] = 1065353216;
  dword_140404A6C[19928799] = 1065353216;
  dword_140404A6C[19928835] = 0;
  *(_QWORD *)&dword_140404A6C[19928825] = 0;
  v4 = sub_14001B5C0(a1, 393216);
  sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, v4 | (v3 + 1));
  *(float *)&dword_140404A6C[19928789] = a2;
  *(float *)&dword_140404A6C[19928791] = a3;
  *(float *)&dword_140404A6C[19928798] = a2;
  *(float *)&dword_140404A6C[19928834] = a2;
  *(float *)&dword_140404A6C[19928825] = a2;
  *(float *)&dword_140404A6C[19928827] = a3;
  dword_140404A6C[19928790] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928799] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928835] = 0;
  dword_140404A6C[19928826] = 0;
  v5 = sub_14001B5C0(v3, 0x20000);
  return sub_140001F20(
           (__int64)&dword_140404A6C[19928789],
           (__int64)&dword_140404A6C[19928837],
           1,
           1,
           1,
           1,
           v5 | ((((_BYTE)v3 - 1) & 3u) + 1));
}

