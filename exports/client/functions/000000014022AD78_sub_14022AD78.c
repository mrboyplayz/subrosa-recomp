/* Address: 0x14022ad78 | Name: sub_14022AD78 | Size: 367 bytes */
__int64 __fastcall sub_14022AD78(int a1, __int64 a2, unsigned int *a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  if ( a1 > 5 )
  {
    v8 = a1 - 6;
    if ( !v8 )
    {
      *a3 = -4194304;
      return 0;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        *a3 = *(_BYTE *)(a2 + 776) != 0 ? 0x80000000 : 0;
        return 2;
      }
      if ( v10 == 1 )
      {
        *a3 = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) != 0 ? -8388608 : 2139095040) & 0xFF800000;
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
    v6 = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) != 0 ? -8388608 : 2139095040) & 0xFF800001 | 1;
    goto LABEL_9;
  }
  if ( !a1 )
  {
    v11 = a3;
    v12 = 0;
    return sub_14023023C(a2, &v11);
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    v11 = a3;
    v12 = 0;
    return sub_140231FC0(a2, &v11);
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = *(_BYTE *)(a2 + 776) != 0 ? 0x80000000 : 0;
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = *a3 & 0x7F800000 | (*(_BYTE *)(a2 + 776) != 0 ? -8388608 : 2139095040) & 0xFF800000;
    goto LABEL_9;
  }
  if ( v5 != 1 )
    return 1;
  v6 = *(_BYTE *)(a2 + 776) != 0 ? -1 : 0x7FFFFFFF;
LABEL_9:
  *a3 = v6;
  return 0;
}

