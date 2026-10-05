/* Address: 0x14024a0e0 | Name: set_terminate | Size: 44 bytes */
void (__cdecl __noreturn *__fastcall set_terminate(__int64 a1))()
{
  __int64 v2; // rdx
  void (__cdecl __noreturn *result)(); // rax

  v2 = sub_140255A70();
  result = abort;
  if ( *(_QWORD *)(v2 + 24) )
    result = *(void (__cdecl __noreturn **)())(v2 + 24);
  *(_QWORD *)(v2 + 24) = a1;
  return result;
}

