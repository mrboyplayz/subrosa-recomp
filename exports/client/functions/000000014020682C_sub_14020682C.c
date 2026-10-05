/* Address: 0x14020682c | Name: sub_14020682C | Size: 164 bytes */
__int64 __fastcall sub_14020682C(
        struct EHExceptionRecord **a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        struct FH4::FuncInfo4 *a6,
        int a7,
        _DWORD *a8)
{
  __int64 v10; // rbx

  *(_QWORD *)(sub_1401FD83C() + 112) = a2;
  v10 = *((_QWORD *)*a1 + 7);
  *(_QWORD *)(sub_1401FD83C() + 104) = v10;
  *(_DWORD *)(sub_1401FD83C() + 120) = a7;
  sub_140209488(*a1, a3, a6, 0, 0, 1);
  *(_QWORD *)(sub_1401FD83C() + 112) = 0;
  *a8 = 1;
  return 1;
}

