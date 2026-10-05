/* Address: 0x140237544 | Name: sub_140237544 | Size: 754 bytes */
__int64 __fastcall sub_140237544(struct tm *const a1)
{
  unsigned int v2; // edi
  int v3; // esi
  int v4; // r14d
  int v5; // r15d
  int v6; // r12d
  int v7; // r13d
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  int v17; // ecx
  int v18; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  v18 = 0;
  if ( (unsigned int)sub_140237138(&v18) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140237835LL);
  }
  if ( !v18 )
    return 0;
  v3 = *((_DWORD *)a1 + 5);
  if ( v3 != dword_140302280 || v3 != dword_140302290 )
  {
    if ( dword_140404A6C[19064605] )
    {
      if ( LOWORD(dword_140404A6C[19064647]) )
      {
        v4 = HIWORD(dword_140404A6C[19064650]);
        v5 = LOWORD(dword_140404A6C[19064650]);
        v6 = HIWORD(dword_140404A6C[19064649]);
        v7 = LOWORD(dword_140404A6C[19064649]);
        v8 = HIWORD(dword_140404A6C[19064647]);
        if ( (unsigned __int8)sub_1402374E4((unsigned int)v3) )
          v9 = dword_14028BF4C[v8];
        else
          v9 = dword_14028BF14[v8];
        dword_140302280 = v3;
        dword_140302284 = v9 + HIWORD(dword_140404A6C[19064648]);
        dword_140302288 = v4 + 1000 * (v5 + 60 * (v6 + 60 * v7));
      }
      else
      {
        sub_140237880(
          0,
          1,
          (unsigned int)v3,
          HIWORD(dword_140404A6C[19064647]),
          HIWORD(dword_140404A6C[19064648]),
          LOWORD(dword_140404A6C[19064648]),
          0,
          LOWORD(dword_140404A6C[19064649]),
          HIWORD(dword_140404A6C[19064649]),
          LOWORD(dword_140404A6C[19064650]),
          HIWORD(dword_140404A6C[19064650]));
      }
      if ( LOWORD(dword_140404A6C[19064626]) )
      {
        v13 = HIWORD(dword_140404A6C[19064627]);
        v11 = 0;
        v10 = 0;
        v12 = 0;
      }
      else
      {
        v10 = HIWORD(dword_140404A6C[19064627]);
        v11 = 1;
        v12 = LOWORD(dword_140404A6C[19064627]);
        v13 = 0;
      }
      sub_140237880(
        1,
        v11,
        *((unsigned int *)a1 + 5),
        HIWORD(dword_140404A6C[19064626]),
        v10,
        v12,
        v13,
        LOWORD(dword_140404A6C[19064628]),
        HIWORD(dword_140404A6C[19064628]),
        LOWORD(dword_140404A6C[19064629]),
        HIWORD(dword_140404A6C[19064629]));
    }
    else
    {
      sub_140237880(0, 1, (unsigned int)v3, (unsigned int)(v3 < 107) + 3, (v3 >= 107) + 1, 0, 0, 2, 0, 0, 0);
      v14 = 5;
      if ( v3 >= 107 )
        v14 = 1;
      sub_140237880(1, 1, *((unsigned int *)a1 + 5), (unsigned int)(v3 >= 107) + 10, v14, 0, 0, 2, 0, 0, 0);
    }
  }
  v15 = *((_DWORD *)a1 + 7);
  if ( dword_140302284 >= dword_140302294 )
  {
    if ( v15 < dword_140302294 || v15 > dword_140302284 )
      return 1;
    if ( v15 <= dword_140302294 || v15 >= dword_140302284 )
      goto LABEL_29;
    return 0;
  }
  if ( v15 < dword_140302284 || v15 > dword_140302294 )
    return 0;
  if ( v15 > dword_140302284 && v15 < dword_140302294 )
    return 1;
LABEL_29:
  v17 = 1000 * (*(_DWORD *)a1 + 60 * (*((_DWORD *)a1 + 1) + 60 * *((_DWORD *)a1 + 2)));
  if ( v15 == dword_140302284 )
    LOBYTE(v2) = v17 >= dword_140302288;
  else
    LOBYTE(v2) = v17 < dword_140302298;
  return v2;
}

