/* Address: 0x14018d510 | Name: sub_14018D510 | Size: 197 bytes */
__int64 __fastcall sub_14018D510(_DWORD *a1, int a2, int a3)
{
  unsigned int v6; // r8d
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  sub_140115AE0(&v9, 1);
  if ( v9 )
  {
    sub_140115AE0(&v9, 1);
    if ( v9 )
    {
      return sub_140115AE0(a1, a3);
    }
    else
    {
      sub_140115AE0(&v9, 9);
      v8 = v9;
      if ( (v9 & 0x100) != 0 )
        v8 = v9 | 0xFFFFFE00;
      result = v8 + a2;
      *a1 = result;
    }
  }
  else
  {
    sub_140115AE0(&v9, 4);
    v6 = v9;
    if ( (v9 & 8) != 0 )
      v6 = v9 | 0xFFFFFFF0;
    result = v6 + a2;
    *a1 = result;
  }
  return result;
}

