/* Address: 0x14004a130 | Name: sub_14004A130 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14004A130(float *a1, __int64 a2, float *a3, float *a4)
{
  float *v4; // rdi
  float *v6; // rbx
  __int64 v9; // [rsp-20h] [rbp-60B0h] BYREF
  _BYTE v10[6144]; // [rsp+10h] [rbp-6080h] BYREF
  _BYTE v11[6144]; // [rsp+1810h] [rbp-4880h] BYREF
  __int64 v12; // [rsp+3010h] [rbp-3080h]
  float *v13; // [rsp+3070h] [rbp-3020h]
  float *v14; // [rsp+3078h] [rbp-3018h]

  v4 = v13;
  v6 = v14;
  sub_14004A480((__int64)v11, (__int64)v10, a2, a3, a4);
  sub_14004A1D0(a1, a2, (__int64)v11, (__int64)v10, v4, v6);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v12);
}

