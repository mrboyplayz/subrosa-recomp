/* Address: 0x140033b50 | Name: sub_140033B50 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_140033B50(float *a1, __int64 a2, float *a3, float *a4)
{
  float *v4; // rdi
  float *v6; // rbx
  __int64 v9; // [rsp-20h] [rbp-30B0h] BYREF
  _BYTE v10[6144]; // [rsp+10h] [rbp-3080h] BYREF
  __int64 v11; // [rsp+1810h] [rbp-1880h]
  float *v12; // [rsp+1870h] [rbp-1820h]
  float *v13; // [rsp+1878h] [rbp-1818h]
  int v14; // [rsp+1880h] [rbp-1810h]

  v4 = v12;
  v6 = v13;
  sub_14011BF40((__int64)v10, a2, a3, a4);
  sub_140033BE0(a1, a2, (__int64)v10, v4, v6, v14);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v11);
}

