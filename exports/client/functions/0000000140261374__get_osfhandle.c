/* Address: 0x140261374 | Name: _get_osfhandle | Size: 117 bytes */
__int64 __fastcall get_osfhandle(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( a1 == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 9;
  }
  else
  {
    if ( a1 >= 0 && a1 < dword_140404A6C[19065657] )
    {
      v1 = a1;
      v2 = a1 & 0x3F;
      v3 = *(_QWORD *)&dword_140404A6C[2 * (v1 >> 6) + 19065401];
      if ( (*(_BYTE *)(v3 + 72 * v2 + 56) & 1) != 0 )
        return *(_QWORD *)(v3 + 72 * v2 + 40);
    }
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 9;
    sub_14024CF6C();
  }
  return -1;
}

