/* Address: 0x140176f90 | Name: sub_140176F90 | Size: 107 bytes */
__int64 __fastcall sub_140176F90(int a1, int a2, int a3)
{
  unsigned __int8 v3; // bl
  int v4; // r10d
  signed int v5; // r11d
  signed int v6; // ecx
  signed int v7; // eax
  __int64 result; // rax
  bool v9; // cc

  v3 = a1;
  v4 = a1 - a3 + a2 - a3;
  v5 = abs32(a2 - a3);
  v6 = abs32(a1 - a3);
  v7 = abs32(v4);
  if ( v5 <= v6 && v5 <= v7 )
    return v3;
  v9 = v6 <= v7;
  result = (unsigned __int8)a2;
  if ( !v9 )
    return (unsigned __int8)a3;
  return result;
}

