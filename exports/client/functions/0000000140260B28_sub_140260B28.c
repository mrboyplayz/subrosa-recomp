/* Address: 0x140260b28 | Name: sub_140260B28 | Size: 60 bytes */
char __fastcall sub_140260B28(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  void (__fastcall *v4)(_QWORD); // rax

  for ( i = a2; i != a1; i -= 16 )
  {
    v4 = *(void (__fastcall **)(_QWORD))(i - 8);
    if ( v4 )
      v4(0);
  }
  return 1;
}

