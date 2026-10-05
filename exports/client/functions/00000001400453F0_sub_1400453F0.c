/* Address: 0x1400453f0 | Name: sub_1400453F0 | Size: 38 bytes */
__int64 sub_1400453F0()
{
  __int64 result; // rax

  if ( *(_QWORD *)&dword_140404A6C[18215111] )
  {
    result = ((__int64 (*)(void))FreeLibrary)();
    *(_QWORD *)&dword_140404A6C[18215111] = 0;
  }
  return result;
}

