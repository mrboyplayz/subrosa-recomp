/* Address: 0x14011bd10 | Name: sub_14011BD10 | Size: 83 bytes */
__int64 sub_14011BD10(const char *a1, ...)
{
  int v1; // edi
  int v2; // ebx
  _QWORD *v3; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  v1 = (int)a1;
  v2 = MEMORY[0x14020B528](1);
  v3 = (_QWORD *)sub_140001BB0();
  return sub_140224AEC(*v3, v2, v1, 0, (__int64)va);
}

