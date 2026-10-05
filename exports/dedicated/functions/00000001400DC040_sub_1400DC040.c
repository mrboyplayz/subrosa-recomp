/* Address: 0x1400dc040 | Name: sub_1400DC040 | Size: 71 bytes */
__int64 __fastcall sub_1400DC040(_QWORD *a1, const char *a2)
{
  errno_t v3; // eax
  FILE *v4; // rdx
  unsigned int v5; // r8d
  FILE *Stream; // [rsp+30h] [rbp+8h] BYREF

  v3 = fopen_s(&Stream, a2, "wb");
  v4 = Stream;
  v5 = 0;
  *a1 = sub_1400DC090;
  if ( v3 )
    v4 = nullptr;
  a1[1] = v4;
  LOBYTE(v5) = v4 != nullptr;
  return v5;
}

