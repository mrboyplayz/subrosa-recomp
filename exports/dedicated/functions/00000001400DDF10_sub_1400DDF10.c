/* Address: 0x1400ddf10 | Name: sub_1400DDF10 | Size: 123 bytes */
__int64 __fastcall sub_1400DDF10(
        void (__fastcall *a1)(__int64, __int64, _QWORD),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 result; // rax
  void *v10; // rbx
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  result = sub_1400DDF90(a6, a7, a3, a4, a5, v11);
  v10 = (void *)result;
  if ( result )
  {
    a1(a2, result, v11[0]);
    free(v10);
    return 1;
  }
  return result;
}

