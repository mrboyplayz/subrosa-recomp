/* Address: 0x1400920f0 | Name: sub_1400920F0 | Size: 68 bytes */
__int64 sub_1400920F0(int a1, const char *a2, ...)
{
  int v2; // edi
  _QWORD *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v2 = (int)a2;
  v4 = (_QWORD *)sub_140001BB0();
  return sub_140224AEC(*v4, a1, v2, 0, (__int64)va);
}

