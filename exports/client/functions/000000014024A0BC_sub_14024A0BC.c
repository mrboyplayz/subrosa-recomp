/* Address: 0x14024a0bc | Name: sub_14024A0BC | Size: 34 bytes */
void (__cdecl __noreturn *sub_14024A0BC())()
{
  __int64 v0; // rax
  void (__cdecl __noreturn *v1)(); // rcx

  v0 = sub_140255A70();
  v1 = abort;
  if ( *(_QWORD *)(v0 + 24) )
    return *(void (__cdecl __noreturn **)())(v0 + 24);
  return v1;
}

