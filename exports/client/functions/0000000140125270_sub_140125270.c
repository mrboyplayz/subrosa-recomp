/* Address: 0x140125270 | Name: sub_140125270 | Size: 323 bytes */
__int64 __fastcall sub_140125270(int a1, unsigned int *a2, _DWORD *a3, __int64 a4, float a5)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r8

  v5 = a1;
  sub_14007B990(a2, a3);
  sub_14007B6F0(a5, a5, a5);
  unk_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v5 + 283790166] + 283793813], v6);
  unk_140404238(0);
  unk_1404044A8(0, 3, 5126);
  qword_140302FF8(4, 0, 3 * dword_140404A6C[908 * v5 + 178527465]);
  unk_140404230(0);
  unk_140404170(34962, 0, v7);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

