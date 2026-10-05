/* Address: 0x14026d13f | Name: sub_14026D13F | Size: 159 bytes */
__int64 __fastcall sub_14026D13F(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  *(_QWORD *)(a2 + 80) = a1;
  *(_QWORD *)(a2 + 72) = a1;
  *(_QWORD *)(sub_1401FD83C() + 112) = *(_QWORD *)(a2 + 128);
  v3 = *(_QWORD *)(**(_QWORD **)(a2 + 72) + 56LL);
  *(_QWORD *)(sub_1401FD83C() + 104) = v3;
  *(_DWORD *)(sub_1401FD83C() + 120) = *(_DWORD *)(a2 + 184);
  sub_140209488(
    **(struct EHExceptionRecord ***)(a2 + 72),
    *(unsigned __int64 **)(a2 + 136),
    *(struct CMFCToolBarImages **)(a2 + 144),
    *(_QWORD *)(a2 + 152),
    *(struct FH4::FuncInfo4 **)(a2 + 160),
    0,
    0,
    1u);
  *(_QWORD *)(sub_1401FD83C() + 112) = 0;
  *(_DWORD *)(a2 + 64) = 1;
  return 1;
}

