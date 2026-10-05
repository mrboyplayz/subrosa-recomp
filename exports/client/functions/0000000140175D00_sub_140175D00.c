/* Address: 0x140175d00 | Name: sub_140175D00 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_140175D00(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp-20h] [rbp-2070h] BYREF
  _QWORD v6[6]; // [rsp+0h] [rbp-2050h] BYREF
  int v7; // [rsp+30h] [rbp-2020h]
  __int64 v8; // [rsp+1000h] [rbp-1050h]

  v6[4] = a1;
  v6[1] = a3 + a4;
  v6[3] = a1;
  v6[5] = a1 + a2;
  v6[0] = a3;
  v7 = 0;
  sub_140168E00((__int64)v6, 0);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v8);
}

