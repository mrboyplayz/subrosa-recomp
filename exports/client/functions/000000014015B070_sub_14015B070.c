/* Address: 0x14015b070 | Name: sub_14015B070 | Size: 81 bytes */
__int64 sub_14015B070(int a1, const char *a2, ...)
{
  int v2; // ebx
  _QWORD *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v2 = (int)a2;
  v4 = (_QWORD *)sub_140001BC0();
  return sub_140236BF4(*v4, a1, -1, v2, 0, (__int64)va);
}

