/* Address: 0x14017fa30 | Name: sub_14017FA30 | Size: 240 bytes */
__int64 __fastcall sub_14017FA30(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int16 a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // r10d
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v15; // rcx

  v10 = a2;
  if ( a4 )
  {
    if ( a3 )
    {
      v12 = 14LL * a2;
      *(_WORD *)(v12 + a1) = (a7 + a9) >> 1;
      *(_BYTE *)(v12 + a1 + 12) = 3;
      *(_WORD *)(v12 + a1 + 4) = a9;
      *(_WORD *)(v12 + a1 + 6) = a10;
      *(_WORD *)(v12 + a1 + 2) = (a8 + a10) >> 1;
      v10 = a2 + 1;
    }
    v13 = 14LL * v10;
    *(_WORD *)(v13 + a1) = a5;
    *(_WORD *)(v13 + a1 + 2) = a6;
    *(_WORD *)(v13 + a1 + 4) = a7;
    *(_BYTE *)(v13 + a1 + 12) = 3;
    *(_WORD *)(v13 + a1 + 6) = a8;
    return (unsigned int)(v10 + 1);
  }
  else
  {
    v15 = 14LL * a2;
    *(_WORD *)(v15 + a1) = a5;
    *(_WORD *)(v15 + a1 + 2) = a6;
    if ( a3 )
    {
      *(_WORD *)(v15 + a1 + 4) = a9;
      *(_WORD *)(v15 + a1 + 6) = a10;
      *(_BYTE *)(v15 + a1 + 12) = 3;
    }
    else
    {
      *(_BYTE *)(v15 + a1 + 12) = 2;
      *(_DWORD *)(v15 + a1 + 4) = 0;
    }
    return (unsigned int)(a2 + 1);
  }
}

