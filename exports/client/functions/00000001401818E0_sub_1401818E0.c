/* Address: 0x1401818e0 | Name: sub_1401818E0 | Size: 584 bytes */
__int64 __fastcall sub_1401818E0(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // esi
  unsigned __int8 *v7; // r11
  int v9; // r12d
  int v10; // r8d
  __int64 v11; // r10
  __int64 v12; // rbx
  int v13; // r14d
  int v14; // edi
  int v15; // r15d
  __int64 v16; // r13
  int v17; // eax
  int v18; // edx
  int v20; // [rsp+20h] [rbp-48h]
  unsigned int v22; // [rsp+78h] [rbp+10h]

  v22 = a2;
  v6 = 0;
  v7 = (unsigned __int8 *)(a1 + a2);
  v9 = v7[3] + (v7[2] << 8);
  v10 = a2 + (v7[4] << 8) + v7[5];
  v20 = v10;
  if ( !v9 )
    return 0;
  v11 = a1;
  while ( 1 )
  {
    v12 = a2 + 12 * v6 + 6;
    if ( *(unsigned __int8 *)(v12 + v11 + 7) + (*(unsigned __int8 *)(v12 + v11 + 6) << 8) != a5 )
      goto LABEL_21;
    v13 = *(unsigned __int8 *)(v12 + v11 + 1) + (*(unsigned __int8 *)(v12 + v11) << 8);
    v14 = *(unsigned __int8 *)(v12 + v11 + 3) + (*(unsigned __int8 *)(v12 + v11 + 2) << 8);
    v15 = *(unsigned __int8 *)(v12 + v11 + 5) + (*(unsigned __int8 *)(v12 + v11 + 4) << 8);
    if ( v13 )
    {
      if ( v13 != 3 || v14 != 1 && v14 != 10 )
        goto LABEL_21;
    }
    v16 = v10;
    v17 = sub_14017D6B0(
            a3,
            a4,
            (unsigned __int8 *)(v11
                              + v10
                              + ((unsigned __int64)*(unsigned __int8 *)(v12 + v11 + 10) << 8)
                              + *(unsigned __int8 *)(v12 + v11 + 11)),
            (*(unsigned __int8 *)(v12 + v11 + 8) << 8) + (unsigned int)*(unsigned __int8 *)(v12 + v11 + 9));
    v11 = a1;
    if ( v17 >= 0 )
    {
      if ( v6 + 1 < v9
        && *(unsigned __int8 *)(v12 + a1 + 19) + (*(unsigned __int8 *)(v12 + a1 + 18) << 8) == a6
        && *(unsigned __int8 *)(v12 + a1 + 13) + (*(unsigned __int8 *)(v12 + a1 + 12) << 8) == v13
        && *(unsigned __int8 *)(v12 + a1 + 15) + (*(unsigned __int8 *)(v12 + a1 + 14) << 8) == v14
        && *(unsigned __int8 *)(v12 + a1 + 17) + (*(unsigned __int8 *)(v12 + a1 + 16) << 8) == v15 )
      {
        v18 = *(unsigned __int8 *)(v12 + a1 + 21) + (*(unsigned __int8 *)(v12 + a1 + 20) << 8);
        if ( v18 )
        {
          if ( v17 < a4 && *(_BYTE *)(v17 + a3) == 32 )
          {
            if ( a4 - (v17 + 1) == (unsigned int)sub_14017D6B0(
                                                   a3 + v17 + 1,
                                                   a4 - (v17 + 1),
                                                   (unsigned __int8 *)(a1
                                                                     + v16
                                                                     + ((unsigned __int64)*(unsigned __int8 *)(v12 + a1 + 22) << 8)
                                                                     + *(unsigned __int8 *)(v12 + a1 + 23)),
                                                   v18) )
              return 1;
            v11 = a1;
          }
          goto LABEL_20;
        }
      }
      if ( v17 == a4 )
        return 1;
    }
LABEL_20:
    v10 = v20;
    a2 = v22;
LABEL_21:
    if ( ++v6 >= v9 )
      return 0;
  }
}

