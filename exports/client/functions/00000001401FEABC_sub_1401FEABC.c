/* Address: 0x1401feabc | Name: sub_1401FEABC | Size: 107 bytes */
__int64 __fastcall sub_1401FEABC(__int64 a1, unsigned int a2)
{
  char *v3; // rdx
  _UNKNOWN ***v4; // rax

  if ( *(char *)(a1 + 8) <= 1 )
  {
    if ( *(_QWORD *)a1 && a2 - 2 > 1 )
    {
      if ( a2 )
      {
        if ( a2 > 3 )
          v3 = (char *)&off_1402848F0;
        else
          v3 = (char *)&off_1402848C0 + 16 * (int)a2;
        sub_1401FDDF4((__int64 *)a1, (__int64)v3);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
      v4 = &off_1402848D0;
      *(_BYTE *)(a1 + 8) = a2;
      if ( a2 != 1 )
        v4 = nullptr;
      *(_QWORD *)a1 = v4;
    }
  }
  return a1;
}

