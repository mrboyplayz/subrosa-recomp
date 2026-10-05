/* Address: 0x1402535f8 | Name: ?write_requires_double_translation_nolock@@YA_NH@Z | Size: 142 bytes */
bool __fastcall write_requires_double_translation_nolock(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  bool result; // al
  __int64 Mode; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  result = isatty(a1)
        && (v2 = v1 & 0x3F,
            v3 = v1 >> 6,
            v4 = 9 * v2,
            *(char *)(*(_QWORD *)&dword_140404A6C[2 * v3 + 19065401] + 72 * v2 + 56) < 0)
        && (*(_QWORD *)(*(_QWORD *)(sub_140255A70() + 144) + 312LL)
         || *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v3 + 19065401] + 8 * v4 + 57))
        && (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64 *))GetConsoleMode)(
                           *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v3 + 19065401] + 8 * v4 + 40),
                           &Mode);
  return result;
}

