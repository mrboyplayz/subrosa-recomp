/* Address: 0x14026d0ae | Name: sub_14026D0AE | Size: 145 bytes */
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall sub_14026D0AE(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  *(_QWORD *)(a2 + 80) = a1;
  *(_QWORD *)(a2 + 72) = a1;
  *(_QWORD *)(sub_1401FD83C() + 112) = *(_QWORD *)(a2 + 128);
  v3 = *(_QWORD *)(**(_QWORD **)(a2 + 72) + 56LL);
  *(_QWORD *)(sub_1401FD83C() + 104) = v3;
  sub_140209250(
    **(struct EHExceptionRecord ***)(a2 + 72),
    *(unsigned __int64 **)(a2 + 136),
    *(struct CMFCToolBarImages **)(a2 + 144),
    *(_QWORD *)(a2 + 152),
    *(struct _s_FuncInfo **)(a2 + 160),
    0,
    0,
    1u);
  *(_QWORD *)(sub_1401FD83C() + 112) = 0;
  *(_DWORD *)(a2 + 64) = 1;
  return 1;
}

