/* Address: 0x1400498b0 | Name: sub_1400498B0 | Size: 101 bytes */
__int64 __fastcall sub_1400498B0(void *Src, int a2, int a3)
{
  int v3; // eax
  int v5; // ebx

  v3 = qword_197BC725C;
  if ( qword_197BC725C >= 0x10000 )
    return 0;
  if ( *(&qword_197BC725C + 1) > 0 )
  {
    v3 = ++qword_197BC725C;
    *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
  }
  v5 = a3 * a2;
  memcpy(&dword_197BC7264[v3], Src, a3 * a2);
  qword_197BC725C += v5;
  return 1;
}

