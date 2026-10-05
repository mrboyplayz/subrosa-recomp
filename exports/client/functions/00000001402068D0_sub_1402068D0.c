/* Address: 0x1402068d0 | Name: sub_1402068D0 | Size: 81 bytes */
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall sub_1402068D0(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD v6[4]; // [rsp+58h] [rbp-20h] BYREF

  v6[0] = a1;
  v6[1] = a3;
  v4 = sub_1401FD83C();
  (*(void (__fastcall **)(_QWORD, _QWORD *))(v4 + 16))(*a1, v6);
  return 0;
}

