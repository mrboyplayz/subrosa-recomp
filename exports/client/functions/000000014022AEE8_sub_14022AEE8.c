/* Address: 0x14022aee8 | Name: sub_14022AEE8 | Size: 478 bytes */
__int64 __fastcall sub_14022AEE8(int a1, __int64 a2, unsigned __int64 *a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  unsigned __int64 v6; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned __int64 *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  if ( a1 > 5 )
  {
    v8 = a1 - 6;
    if ( !v8 )
    {
      *a3 = 0xFFF8000000000000uLL;
      return 0;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        *a3 = -(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL;
        return 2;
      }
      if ( v10 == 1 )
      {
        *a3 = *a3 & 0x7FF0000000000000LL
            | ((-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FF0000000000000LL)
            & 0xFFF0000000000000uLL;
        return 3;
      }
    }
    else
    {
      *a3 = 0;
    }
    return 1;
  }
  if ( a1 == 5 )
  {
    v6 = *a3 & 0x7FF0000000000000LL
       | ((-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FF0000000000000LL)
       & 0xFFF0000000000001uLL
       | 1;
    goto LABEL_9;
  }
  if ( !a1 )
  {
    v11 = a3;
    v12 = 1;
    return sub_14023023C(a2, &v11);
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    v11 = a3;
    v12 = 1;
    return sub_140231FC0(a2, &v11);
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = -(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL;
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = *a3 & 0x7FF0000000000000LL
       | ((-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FF0000000000000LL)
       & 0xFFF0000000000000uLL;
    goto LABEL_9;
  }
  if ( v5 != 1 )
    return 1;
  v6 = (-(__int64)(*(_BYTE *)(a2 + 776) != 0) & 0x8000000000000000uLL) + 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
  *a3 = v6;
  return 0;
}

