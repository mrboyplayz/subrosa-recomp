/* Address: 0x140125670 | Name: sub_140125670 | Size: 481 bytes */
__int64 __fastcall sub_140125670(unsigned int *a1, float a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8

  v3 = a3;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  if ( a1 )
  {
    dword_140404A6C[431564529] = *a1;
    dword_140404A6C[431564530] = a1[1];
    dword_140404A6C[431564531] = a1[2];
  }
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  sub_14007B6F0(a2, a2, a2);
  unk_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
  v4 = 5 * v3;
  unk_140404170(34962, dword_140404A6C[2 * v4 + 159842277], v5);
  unk_140404170(34963, dword_140404A6C[2 * v4 + 159842278], v6);
  unk_140404238(0);
  unk_1404044A8(0, 3, 5126);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))&flt_140384000[131076])(
    4,
    3 * dword_140404A6C[2 * v4 + 159842283],
    5125);
  unk_140404230(0);
  unk_140404170(34963, 0, v7);
  unk_140404170(34962, 0, v8);
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

