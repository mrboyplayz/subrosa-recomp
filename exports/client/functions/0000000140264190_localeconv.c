/* Address: 0x140264190 | Name: localeconv | Size: 51 bytes */
struct lconv *__cdecl localeconv()
{
  __int64 v0; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_140255A70();
  v2 = *(_QWORD *)(v0 + 144);
  sub_140255D2C(v0, &v2);
  return *(struct lconv **)(v2 + 248);
}

