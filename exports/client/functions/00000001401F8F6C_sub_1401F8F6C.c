/* Address: 0x1401f8f6c | Name: sub_1401F8F6C | Size: 139 bytes */
char __fastcall sub_1401F8F6C(unsigned int a1)
{
  if ( !BYTE1(dword_140404A6C[19064475]) )
  {
    if ( a1 > 1 )
    {
      sub_1401FBFB8(5);
      JUMPOUT(0x1401F8FF6LL);
    }
    if ( !(unsigned int)_acrt_locale_changed() || a1 )
    {
      *(__m128i *)&dword_140404A6C[19064477] = _mm_load_si128((const __m128i *)&xmmword_1402799B0);
      *(_QWORD *)&dword_140404A6C[19064481] = -1;
      *(_OWORD *)&dword_140404A6C[19064483] = *(_OWORD *)&dword_140404A6C[19064477];
      *(_QWORD *)&dword_140404A6C[19064487] = -1;
    }
    else if ( MEMORY[0x1402471D8]((#91 *)&dword_140404A6C[19064477])
           || MEMORY[0x1402471D8]((#91 *)&dword_140404A6C[19064483]) )
    {
      return 0;
    }
    BYTE1(dword_140404A6C[19064475]) = 1;
  }
  return 1;
}

