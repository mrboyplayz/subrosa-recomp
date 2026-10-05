/* Address: 0x14000f830 | Name: sub_14000F830 | Size: 2020 bytes */
__int64 __fastcall sub_14000F830(signed int a1, int a2, unsigned int a3, int a4, unsigned int a5, _WORD *a6)
{
  __int64 result; // rax
  __int64 v7; // r12
  unsigned int v8; // edi
  unsigned int v10; // ebp
  __int64 v11; // r10
  signed int v12; // edx
  signed int v13; // ecx
  signed int v14; // r8d
  signed int v15; // r11d
  signed int v16; // r9d
  int v17; // r10d
  __int64 v18; // r8
  unsigned int *v19; // rbx
  __int64 v20; // r9
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  signed int v27; // r15d
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  signed int i; // r14d
  signed int j; // ebx
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
    v11 = 263004LL * a1;
    v12 = (unsigned int)a2 >> 6;
    v13 = dword_140404A6C[v11 + 111579650];
    if ( v12 < v13 )
    {
      v14 = a3 >> 6;
      if ( v14 < (int)dword_140404A6C[v11 + 111579651] )
      {
        v15 = dword_140404A6C[v11 + 111579652];
        v16 = (unsigned int)a4 >> 6;
        if ( v16 < v15 )
        {
          if ( a5 )
          {
            v17 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v11 + 111579655] + 4LL * (v12 + v13 * (v16 + v15 * v14)));
            if ( v17 != -1 || (result = sub_140010020((unsigned int)v7), v17 = result, (_DWORD)result != -1) )
            {
              result = dword_140404A6C[263004 * v7
                                     + 111579985
                                     + 513 * v17
                                     + (int)(((v10 >> 3) & 7) + 8 * (((v8 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
              if ( (_DWORD)result != -1
                || (result = sub_140012490(v7, v17, v10 >> 3, a3 >> 3, v8 >> 3), (_DWORD)result != -1) )
              {
                if ( (a5 & 0xE0000000) == 0x40000000 )
                {
                  v18 = (v10 & 7) + 8 * ((v8 & 7) + 8 * (a3 & 7));
                  v19 = &dword_140404A6C[6930 * (int)result + 83194359 + v18];
                  *v19 = ((HIBYTE(a5) & 3) << 24) | 0x4000003F;
                  v20 = 13860LL * (int)result + 8 * v18;
                  *((_WORD *)&dword_140404A6C[83195383] + v20) = *a6;
                  if ( (__int16)*a6 >= 0 )
                    dword_140404A6C[6930 * (int)result + 83194359 + v18] |= 0x40u;
                  *((_WORD *)&dword_140404A6C[83195383] + v20 + 1) = a6[1];
                  if ( (__int16)a6[1] >= 0 )
                    dword_140404A6C[6930 * (int)result + 83194359 + v18] |= 0x80u;
                  *((_WORD *)&dword_140404A6C[83195384] + v20) = a6[2];
                  if ( (__int16)a6[2] >= 0 )
                    dword_140404A6C[6930 * (int)result + 83194359 + v18] |= 0x100u;
                  *((_WORD *)&dword_140404A6C[83195384] + v20 + 1) = a6[3];
                  if ( (__int16)a6[3] >= 0 )
                    dword_140404A6C[6930 * (int)result + 83194359 + v18] |= 0x200u;
                  *((_WORD *)&dword_140404A6C[83195385] + v20) = a6[4];
                  if ( (__int16)a6[4] >= 0 )
                    dword_140404A6C[6930 * (int)result + 83194359 + v18] |= 0x400u;
                  *((_WORD *)&dword_140404A6C[83195385] + v20 + 1) = a6[5];
                  if ( (__int16)a6[5] >= 0 )
                    dword_140404A6C[6930 * (int)result + 83194359 + v18] |= 0x800u;
                  *((_WORD *)&dword_140404A6C[83195386] + v20) = a6[6];
                  if ( (__int16)a6[6] >= 0 )
                    dword_140404A6C[6930 * (int)result + 83194359 + v18] |= 0x1000u;
                  *((_WORD *)&dword_140404A6C[83195386] + v20 + 1) = a6[7];
                  if ( (__int16)a6[7] >= 0 )
                    dword_140404A6C[6930 * (int)result + 83194359 + v18] |= 0x2000u;
                  v21 = sub_1400129D0((unsigned int)v7, v10, a3 - 1, v8);
                  if ( (v21 & 0xE0000000) == 0x40000000 || !a3 )
                  {
                    *v19 &= ~1u;
                    sub_140017AC0(v7, v10, a3 - 1, v8, v21 & 0xFFFFFFDF);
                  }
                  v22 = sub_1400129D0((unsigned int)v7, v10, a3 + 1, v8);
                  if ( (v22 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~0x20u;
                    sub_140017AC0(v7, v10, a3 + 1, v8, v22 & 0xFFFFFFFE);
                  }
                  v23 = sub_1400129D0((unsigned int)v7, v10, a3, v8 + 1);
                  if ( (v23 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~2u;
                    sub_140017AC0(v7, v10, a3, v8 + 1, v23 & 0xFFFFFFF7);
                  }
                  v24 = sub_1400129D0((unsigned int)v7, v10, a3, v8 - 1);
                  if ( (v24 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~8u;
                    sub_140017AC0(v7, v10, a3, v8 - 1, v24 & 0xFFFFFFFD);
                  }
                  v25 = sub_1400129D0((unsigned int)v7, v10 - 1, a3, v8);
                  if ( (v25 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~4u;
                    sub_140017AC0(v7, v10 - 1, a3, v8, v25 & 0xFFFFFFEF);
                  }
                  v26 = sub_1400129D0((unsigned int)v7, v10 + 1, a3, v8);
                  if ( (v26 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~0x10u;
                    sub_140017AC0(v7, v10 + 1, a3, v8, v26 & 0xFFFFFFFB);
                  }
                  return sub_1400173C0((unsigned int)v7, v10, a3, v8);
                }
                else if ( (a5 & 0xE0000000) == 0x80000000 )
                {
                  v27 = 0;
                  v28 = (v10 & 7) + 8 * ((v8 & 7) + 8 * (a3 & 7));
                  dword_140404A6C[6930 * (int)result + 83194359 + v28] = a5;
                  v48 = v28 + 6930LL * (int)result;
                  v29 = 13860LL * (int)result + 8 * v28;
                  *((_WORD *)&dword_140404A6C[83195383] + v29) = *a6;
                  *((_WORD *)&dword_140404A6C[83195383] + v29 + 1) = a6[1];
                  *((_WORD *)&dword_140404A6C[83195384] + v29) = a6[2];
                  *((_WORD *)&dword_140404A6C[83195384] + v29 + 1) = a6[3];
                  *((_WORD *)&dword_140404A6C[83195385] + v29) = a6[4];
                  *((_WORD *)&dword_140404A6C[83195385] + v29 + 1) = a6[5];
                  *((_WORD *)&dword_140404A6C[83195386] + v29) = a6[6];
                  *((_WORD *)&dword_140404A6C[83195386] + v29 + 1) = a6[7];
                  v30 = 232LL * (unsigned __int16)a5;
                  v46 = v30;
                  if ( *(int *)((char *)&dword_140404A6C[20074646] + v30) > 0 )
                  {
                    do
                    {
                      for ( i = 0; i < *(int *)((char *)&dword_140404A6C[20074647] + v30); ++i )
                      {
                        for ( j = 0; j < *(int *)((char *)&dword_140404A6C[20074645] + v30); ++j )
                        {
                          if ( v27 || i || j )
                          {
                            v33 = i + v8;
                            v34 = j + v10;
                            sub_140017AC0(v7, v34, v27 + a3, v33, j | ((i | (v27 << 8)) << 8) | 0xC0000000);
                            sub_1400173C0((unsigned int)v7, v34, v27 + a3, v33);
                            v30 = v46;
                            v10 = a2;
                            v8 = a4;
                          }
                        }
                      }
                      ++v27;
                    }
                    while ( v27 < *(int *)((char *)&dword_140404A6C[20074646] + v30) );
                  }
                  v35 = 0;
                  v50 = dword_140404A6C[v48 + 83194871];
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
                    v42 = sub_1400129D0((unsigned int)v7, v36 + v10, v37 + a3, v38 + v8);
                    if ( (v42 & 0xE0000000) == 0x80000000 )
                    {
                      v45 = (unsigned __int16)v42;
                      v50 = sub_14001B390((unsigned __int16)a5, (unsigned int)v35, v50, (unsigned __int16)v42);
                      v43 = sub_140013020((unsigned int)v7, v41, v40, v39);
                      v44 = v43 == -1
                          ? 0
                          : dword_140404A6C[6930 * v43 + 83194871 + 64 * (v40 & 7) + 8 * (v39 & 7) + (v41 & 7)];
                      v47 = sub_140013020((unsigned int)v7, v41, v40, v39);
                      if ( v47 != -1 )
                        dword_140404A6C[6930 * v47 + 83194871 + 64 * (v40 & 7) + 8 * (v39 & 7) + (v41 & 7)] = sub_14001B390(v45, (unsigned int)(5 - v35), v44, (unsigned __int16)a5);
                    }
                    ++v35;
                  }
                  while ( v35 < 6 );
                  dword_140404A6C[v48 + 83194871] = v50;
                  return sub_1400173C0((unsigned int)v7, v10, a3, v8);
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

