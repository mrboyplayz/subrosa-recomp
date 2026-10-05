/* Address: 0x140158ab0 | Name: sub_140158AB0 | Size: 93 bytes */
void sub_140158AB0(__int64 a1, const char *a2, ...)
{
  _QWORD *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = (_QWORD *)sub_140001BB0();
  sub_1402250AC(*v4 | 1LL, a1, -1, a2, 0, (__int64 *)va);
}

