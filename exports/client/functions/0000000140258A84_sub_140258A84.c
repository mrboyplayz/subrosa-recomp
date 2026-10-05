/* Address: 0x140258a84 | Name: sub_140258A84 | Size: 150 bytes */
__int64 __fastcall sub_140258A84(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v9; // eax
  int v10; // ecx
  bool v11; // zf

  if ( a1 <= 0xC435 )
  {
    v9 = a1 - 50220;
    if ( a1 - 50220 <= 9 )
    {
      v10 = 679;
      if ( _bittest(&v10, v9) )
        goto LABEL_12;
    }
    v11 = a1 == 42;
    goto LABEL_10;
  }
  if ( a1 == 54936 )
    goto LABEL_12;
  if ( a1 > 0xDEA9 )
  {
    if ( a1 <= 0xDEB3 || a1 == 65000 )
      goto LABEL_12;
    v11 = a1 == 65001;
LABEL_10:
    if ( !v11 )
      goto LABEL_11;
LABEL_12:
    a2 = 0;
    return ((__int64 (__fastcall *)(_QWORD, __int64))WideCharToMultiByte)(a1, a2);
  }
LABEL_11:
  LODWORD(a2) = a2 & 0xFFFFFF7F;
  return ((__int64 (__fastcall *)(_QWORD, __int64))WideCharToMultiByte)(a1, a2);
}

