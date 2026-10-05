/* Address: 0x1401b4770 | Name: sub_1401B4770 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1401B4770(_QWORD *a1, int a2, int a3)
{
  void *v3; // rsp
  float v5[2048]; // [rsp+10h] [rbp-2000h] BYREF
  int v6; // [rsp+2010h] [rbp+0h] BYREF
  float *v7; // [rsp+2018h] [rbp+8h]
  __int64 v8; // [rsp+2020h] [rbp+10h]

  v3 = alloca(4096);
  v7 = v5;
  sub_1401A8190(a1, v5, 2048, a2, a3);
  sub_1401A8740((__int64)(v7 + 360), (__int64)v7, 1328, 620, &v6);
  v6 = 720 - v6;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v8);
}

