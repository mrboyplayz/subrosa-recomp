/* Address: 0x140006fa0 | Name: sub_140006FA0 | Size: 613 bytes */
__int64 __fastcall sub_140006FA0(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // rdi
  int v11; // eax
  int v12; // r8d
  int v13; // xmm0_4
  __int64 v14; // rcx
  int v15; // xmm1_4
  unsigned __int64 v16; // rdx
  int v17; // ebp
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8

  v8 = (int)a1;
  if ( a1 > 3 || (a2 & 0x80000000) != 0 || (a5 & 0xE0000000) != 0x80000000 || (a6 & 0x10000) == 0 )
    return 0;
  if ( dword_163D75B60 )
  {
    v11 = dword_191541414;
    v12 = dword_196199564;
    v13 = 0;
    v14 = (__int64)dword_196199564 << 7;
    *(_DWORD *)((char *)&unk_195999560 + v14) = 16;
    *(_DWORD *)((char *)&unk_195999564 + v14) = v11;
    *(int *)((char *)&dword_195999580 + v14) = v8 + (a2 << 16);
    *(int *)((char *)&dword_195999584 + v14) = a3 + (a4 << 16);
    *(int *)((char *)&dword_195999588 + v14) = a5;
    *(_DWORD *)((char *)&unk_19599958C + v14) = (unsigned __int16)a6;
    if ( a7 )
    {
      *(_DWORD *)((char *)&qword_195999568 + v14) = *a7;
      *(_DWORD *)((char *)&qword_195999568 + v14 + 4) = a7[1];
      v15 = a7[2];
    }
    else
    {
      *(__int64 *)((char *)&qword_195999568 + v14) = 0;
      v15 = 0;
    }
    *(int *)((char *)&dword_195999570 + v14) = v15;
    if ( a8 )
    {
      *(_DWORD *)((char *)&qword_195999574 + v14) = *a8;
      *(_DWORD *)((char *)&qword_195999574 + v14 + 4) = a8[1];
      v13 = a8[2];
    }
    else
    {
      *(__int64 *)((char *)&qword_195999574 + v14) = 0;
    }
    *(int *)((char *)&dword_19599957C + v14) = v13;
    dword_196199564 = v12 + 1;
    HIWORD(dword_196199564) = 0;
  }
  if ( (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v16 = 1052016 * v8;
    v17 = dword_16CDE9ED4[263004 * v8];
    if ( (int)(a2 >> 6) < v17 && (int)(a3 >> 6) < dword_16CDE9ED8[v16 / 4] )
    {
      v18 = dword_16CDE9EDC[v16 / 4];
      if ( (int)(a4 >> 6) < v18 )
      {
        v19 = *(int *)(qword_16CDE9EE8[v16 / 8] + 4LL * (int)((a2 >> 6) + v17 * ((a4 >> 6) + (a3 >> 6) * v18)));
        if ( (_DWORD)v19 != -1 )
        {
          v20 = dword_16CDEA410[263004 * v8
                              + 513 * v19
                              + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v20 != -1 )
            dword_1661A4EA8[6930 * v20 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5 | (0x10000 << a6);
        }
      }
    }
  }
  return 1;
}

