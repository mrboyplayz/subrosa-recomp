/* Address: 0x1401fe908 | Name: sub_1401FE908 | Size: 179 bytes */
__int64 __fastcall sub_1401FE908(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char *v6; // rdx

  if ( *(char *)(a1 + 8) > 1 )
    return a1;
  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a1 )
  {
    if ( v4 )
    {
      *(_QWORD *)a1 = v4;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      return a1;
    }
    v5 = *(char *)(a2 + 8);
    goto LABEL_5;
  }
  if ( v4 )
  {
    sub_1401FDD90((__int64 *)a1, v4);
    return a1;
  }
  v5 = *(char *)(a2 + 8);
  if ( (_BYTE)v5 )
  {
    if ( (unsigned __int8)(v5 - 2) <= 1u )
    {
LABEL_5:
      *(_DWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 8) = v5;
      if ( (_BYTE)v5 == 1 )
      {
        *(_QWORD *)a1 = (char *)&off_1402848C0 + 16 * v5;
        if ( !(_UNKNOWN *)((char *)&off_1402848C0 + 16 * v5) )
          *(_BYTE *)(a1 + 8) = 3;
      }
      else
      {
        *(_QWORD *)a1 = 0;
      }
      return a1;
    }
    if ( (unsigned __int8)v5 > 3u )
      v6 = (char *)&off_1402848F0;
    else
      v6 = (char *)&off_1402848C0 + 16 * v5;
    sub_1401FDDF4((__int64 *)a1, (__int64)v6);
  }
  return a1;
}

