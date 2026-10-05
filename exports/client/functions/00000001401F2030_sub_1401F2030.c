/* Address: 0x1401f2030 | Name: sub_1401F2030 | Size: 135 bytes */
__int64 __fastcall sub_1401F2030(__int64 a1, _BYTE *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  int *v6; // rax
  __int64 v8; // [rsp+50h] [rbp-18h]

  v8 = sub_1401F8020(a1);
  v6 = (int *)sub_1401F8050(a1);
  return sub_1401EB3E0(
           v6,
           a2,
           a3,
           a4,
           (void (__fastcall *)(__int64, _QWORD, _QWORD, int *, int, int, __int64))sub_1401F7EC0,
           a5,
           a6,
           0,
           v8);
}

