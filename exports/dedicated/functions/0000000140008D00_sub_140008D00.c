/* Address: 0x140008d00 | Name: sub_140008D00 | Size: 2020 bytes */
__int64 __fastcall sub_140008D00(signed int a1, int a2, unsigned int a3, int a4, unsigned int a5, __int16 *a6)
{
  __int64 result; // rax
  __int64 v7; // r12
  unsigned int v8; // edi
  unsigned int v10; // ebp
  unsigned __int64 v11; // r10
  signed int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r11d
  signed int v16; // r9d
  int v17; // r10d
  __int64 v18; // r8
  int *v19; // rbx
  __int64 v20; // r9
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // r15d
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  int i; // r14d
  int j; // ebx
  unsigned int v33; // edi
  unsigned int v34; // ebp
  int v35; // ebx
  int v36; // eax
  int v37; // ecx
  int v38; // edx
  unsigned int v39; // esi
  unsigned int v40; // r14d
  unsigned int v41; // r15d
  int v42; // eax
  int v43; // eax
  unsigned int v44; // [rsp+30h] [rbp-58h]
  unsigned int v45; // [rsp+34h] [rbp-54h]
  __int64 v46; // [rsp+38h] [rbp-50h]
  int v47; // [rsp+38h] [rbp-50h]
  __int64 v48; // [rsp+48h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  unsigned int v50; // [rsp+90h] [rbp+8h]

  result = (__int64)&retaddr;
  v7 = a1;
  v8 = a4;
  v10 = a2;
  if ( (unsigned int)a1 <= 3 && a2 >= 0 && (a3 & 0x80000000) == 0 && a4 >= 0 )
  {
    v11 = 1052016LL * a1;
    v12 = (unsigned int)a2 >> 6;
    v13 = dword_16CDE9ED4[v11 / 4];
    if ( v12 < v13 )
    {
      v14 = a3 >> 6;
      if ( v14 < dword_16CDE9ED8[v11 / 4] )
      {
        v15 = dword_16CDE9EDC[v11 / 4];
        v16 = (unsigned int)a4 >> 6;
        if ( v16 < v15 )
        {
          if ( a5 )
          {
            v17 = *(_DWORD *)(qword_16CDE9EE8[v11 / 8] + 4LL * (v12 + v13 * (v16 + v15 * v14)));
            if ( v17 != -1 || (result = sub_1400094F0((unsigned int)v7), v17 = result, (_DWORD)result != -1) )
            {
              result = (unsigned int)dword_16CDEA410[263004 * v7
                                                   + 513 * v17
                                                   + (int)(((v10 >> 3) & 7) + 8
                                                                            * (((v8 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
              if ( (_DWORD)result != -1
                || (result = sub_14000B980(v7, v17, v10 >> 3, a3 >> 3, v8 >> 3), (_DWORD)result != -1) )
              {
                if ( (a5 & 0xE0000000) == 0x40000000 )
                {
                  v18 = (v10 & 7) + 8 * ((v8 & 7) + 8 * (a3 & 7));
                  v19 = &dword_1661A1EA8[6930 * (int)result + v18];
                  *v19 = ((HIBYTE(a5) & 3) << 24) | 0x4000003F;
                  v20 = 13860LL * (int)result + 8 * v18;
                  word_1661A2EA8[v20] = *a6;
                  if ( *a6 >= 0 )
                    dword_1661A1EA8[6930 * (int)result + v18] |= 0x40u;
                  word_1661A2EAA[v20] = a6[1];
                  if ( a6[1] >= 0 )
                    dword_1661A1EA8[6930 * (int)result + v18] |= 0x80u;
                  word_1661A2EAC[v20] = a6[2];
                  if ( a6[2] >= 0 )
                    dword_1661A1EA8[6930 * (int)result + v18] |= 0x100u;
                  word_1661A2EAE[v20] = a6[3];
                  if ( a6[3] >= 0 )
                    dword_1661A1EA8[6930 * (int)result + v18] |= 0x200u;
                  word_1661A2EB0[v20] = a6[4];
                  if ( a6[4] >= 0 )
                    dword_1661A1EA8[6930 * (int)result + v18] |= 0x400u;
                  word_1661A2EB2[v20] = a6[5];
                  if ( a6[5] >= 0 )
                    dword_1661A1EA8[6930 * (int)result + v18] |= 0x800u;
                  word_1661A2EB4[v20] = a6[6];
                  if ( a6[6] >= 0 )
                    dword_1661A1EA8[6930 * (int)result + v18] |= 0x1000u;
                  word_1661A2EB6[v20] = a6[7];
                  if ( a6[7] >= 0 )
                    dword_1661A1EA8[6930 * (int)result + v18] |= 0x2000u;
                  v21 = sub_14000BE30((unsigned int)v7, v10, a3 - 1, v8);
                  if ( (v21 & 0xE0000000) == 0x40000000 || !a3 )
                  {
                    *v19 &= ~1u;
                    sub_14000DC70(v7, v10, a3 - 1, v8, v21 & 0xFFFFFFDF);
                  }
                  v22 = sub_14000BE30((unsigned int)v7, v10, a3 + 1, v8);
                  if ( (v22 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~0x20u;
                    sub_14000DC70(v7, v10, a3 + 1, v8, v22 & 0xFFFFFFFE);
                  }
                  v23 = sub_14000BE30((unsigned int)v7, v10, a3, v8 + 1);
                  if ( (v23 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~2u;
                    sub_14000DC70(v7, v10, a3, v8 + 1, v23 & 0xFFFFFFF7);
                  }
                  v24 = sub_14000BE30((unsigned int)v7, v10, a3, v8 - 1);
                  if ( (v24 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~8u;
                    sub_14000DC70(v7, v10, a3, v8 - 1, v24 & 0xFFFFFFFD);
                  }
                  v25 = sub_14000BE30((unsigned int)v7, v10 - 1, a3, v8);
                  if ( (v25 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~4u;
                    sub_14000DC70(v7, v10 - 1, a3, v8, v25 & 0xFFFFFFEF);
                  }
                  v26 = sub_14000BE30((unsigned int)v7, v10 + 1, a3, v8);
                  if ( (v26 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~0x10u;
                    sub_14000DC70(v7, v10 + 1, a3, v8, v26 & 0xFFFFFFFB);
                  }
                  return sub_14000D730((unsigned int)v7, v10, a3, v8);
                }
                else if ( (a5 & 0xE0000000) == 0x80000000 )
                {
                  v27 = 0;
                  v28 = (v10 & 7) + 8 * ((v8 & 7) + 8 * (a3 & 7));
                  dword_1661A1EA8[6930 * (int)result + v28] = a5;
                  v48 = v28 + 6930LL * (int)result;
                  v29 = 13860LL * (int)result + 8 * v28;
                  word_1661A2EA8[v29] = *a6;
                  word_1661A2EAA[v29] = a6[1];
                  word_1661A2EAC[v29] = a6[2];
                  word_1661A2EAE[v29] = a6[3];
                  word_1661A2EB0[v29] = a6[4];
                  word_1661A2EB2[v29] = a6[5];
                  word_1661A2EB4[v29] = a6[6];
                  word_1661A2EB6[v29] = a6[7];
                  v30 = 232LL * (unsigned __int16)a5;
                  v46 = v30;
                  if ( *(int *)((char *)dword_15AE31824 + v30) > 0 )
                  {
                    do
                    {
                      for ( i = 0; i < *(int *)((char *)dword_15AE31828 + v30); ++i )
                      {
                        for ( j = 0; j < *(int *)((char *)dword_15AE31820 + v30); ++j )
                        {
                          if ( v27 || i || j )
                          {
                            v33 = i + v8;
                            v34 = j + v10;
                            sub_14000DC70(v7, v34, v27 + a3, v33, j | ((i | (v27 << 8)) << 8) | 0xC0000000);
                            sub_14000D730((unsigned int)v7, v34, v27 + a3, v33);
                            v30 = v46;
                            v10 = a2;
                            v8 = a4;
                          }
                        }
                      }
                      ++v27;
                    }
                    while ( v27 < *(int *)((char *)dword_15AE31824 + v30) );
                  }
                  v35 = 0;
                  v50 = dword_1661A26A8[v48];
                  do
                  {
                    v36 = 0;
                    v37 = 0;
                    v38 = 0;
                    if ( v35 )
                    {
                      switch ( v35 )
                      {
                        case 1:
                          v37 = -1;
                          break;
                        case 2:
                          v38 = -1;
                          break;
                        case 3:
                          v38 = 1;
                          break;
                        case 4:
                          v37 = 1;
                          break;
                        default:
                          v36 = 1;
                          break;
                      }
                    }
                    else
                    {
                      v36 = -1;
                    }
                    v39 = v38 + v8;
                    v40 = v37 + a3;
                    v41 = v36 + v10;
                    v42 = sub_14000BE30((unsigned int)v7, v36 + v10, v37 + a3, v38 + v8);
                    if ( (v42 & 0xE0000000) == 0x80000000 )
                    {
                      v45 = (unsigned __int16)v42;
                      v50 = sub_140011570((unsigned __int16)a5, (unsigned int)v35, v50, (unsigned __int16)v42);
                      v43 = sub_14000C480((unsigned int)v7, v41, v40, v39);
                      v44 = v43 == -1 ? 0 : dword_1661A26A8[6930 * v43 + 64 * (v40 & 7) + 8 * (v39 & 7) + (v41 & 7)];
                      v47 = sub_14000C480((unsigned int)v7, v41, v40, v39);
                      if ( v47 != -1 )
                        dword_1661A26A8[6930 * v47 + 64 * (v40 & 7) + 8 * (v39 & 7) + (v41 & 7)] = sub_140011570(
                                                                                                     v45,
                                                                                                     (unsigned int)(5 - v35),
                                                                                                     v44,
                                                                                                     (unsigned __int16)a5);
                    }
                    ++v35;
                  }
                  while ( v35 < 6 );
                  dword_1661A26A8[v48] = v50;
                  return sub_14000D730((unsigned int)v7, v10, a3, v8);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

