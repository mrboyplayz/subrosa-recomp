/* Address: 0x1400946d0 | Name: sub_1400946D0 | Size: 948 bytes */
__int64 sub_1400946D0()
{
  __int64 v0; // r8
  __int64 v1; // r8
  signed int v2; // eax
  int v3; // r14d
  signed int v4; // r12d
  unsigned int *v5; // r15
  __int64 v6; // rbp
  unsigned int *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // eax
  unsigned int *v16; // rbx
  int v17; // esi
  unsigned int *v18; // rdi
  int v19; // r10d
  int v20; // r10d
  int v22; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+28h] [rbp-30h]

  sub_14011C950();
  unk_1404042E0(dword_140404A6C[71738225]);
  unk_140404378(dword_140404A6C[71738230], 1, 0, &dword_140404A6C[431564517]);
  unk_140404378(dword_140404A6C[71738231], 1, 0, &dword_140404A6C[431564565]);
  unk_140404378(dword_140404A6C[71738234], 1, 0, &dword_140404A6C[431564485]);
  unk_140404378(dword_140404A6C[71738235], 1, 0, &dword_140404A6C[431564501]);
  unk_140404338(dword_140404A6C[71738232], 1, &dword_140404A6C[284550403]);
  unk_1404042E8(dword_140404A6C[71738233]);
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791462] + 283793813], v0);
  unk_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791467] + 283793813], v1);
  unk_140404238(0);
  v2 = dword_140404A6C[70074733];
  v3 = 0;
  v4 = 0;
  if ( (int)dword_140404A6C[70074733] > 0 )
  {
    v5 = &dword_140404A6C[70074734];
    do
    {
      if ( !dword_140404A6C[312324428] && !dword_140404A6C[328554868] )
      {
        v6 = 4;
        v7 = &dword_140404A6C[6930 * *v5 + 83200503];
        do
        {
          if ( v7[780] )
          {
            v8 = (int)*v7;
            if ( (int)v8 >= 0 )
            {
              v9 = 3 * v8;
              v10 = (int)*v7;
              v11 = (int)dword_140404A6C[6 * v8 + 312226123];
              if ( (_DWORD)v11 != -1 )
              {
                v23 = (int)(dword_140404A6C[309078344] * v11
                          + dword_140404A6C[3074 * v11 + 309078348 + 3 * (int)dword_140404A6C[6 * v8 + 312226124]]);
                v22 = 64;
                unk_1404044A8(0, 3, 5126);
                if ( dword_140404A6C[2 * v9 + 328456563] != -1 )
                  (*(void (__fastcall **)(__int64, _QWORD, __int64))&flt_140384000[131076])(
                    12,
                    6 * dword_140404A6C[8969 * v10 + 73991665],
                    5125);
              }
            }
          }
          ++v7;
          --v6;
        }
        while ( v6 );
        v2 = dword_140404A6C[70074733];
      }
      ++v4;
      ++v5;
    }
    while ( v4 < v2 );
  }
  unk_140404230(0);
  unk_140404170(34963, 0, v12);
  unk_140404170(34962, 0, v13);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(32823);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  if ( !dword_140404A6C[179668287] )
  {
    v15 = dword_140404A6C[284550610];
    v16 = &dword_140404A6C[284554707];
    v17 = 0;
    if ( (int)dword_140404A6C[284550610] > 0 )
    {
      v18 = &dword_140404A6C[284554707];
      do
      {
        if ( (v18[3] & 1) != 0 )
        {
          v19 = *v18;
          if ( (int)*v18 >= (int)dword_140404A6C[283827286] && v19 <= (int)dword_140404A6C[283827541] )
          {
            sub_140124FE0(
              (unsigned int)v19,
              v18[1],
              &dword_140404A6C[30 * v17 + 284554715],
              &dword_140404A6C[30 * v17 + 284554718],
              v22,
              v23);
            v15 = dword_140404A6C[284550610];
          }
        }
        ++v17;
        v18 += 30;
      }
      while ( v17 < v15 );
      if ( v15 > 0 )
      {
        do
        {
          if ( (v16[3] & 1) != 0 )
          {
            v20 = *v16;
            if ( (int)*v16 < (int)dword_140404A6C[283827286] || v20 > (int)dword_140404A6C[283827541] )
            {
              sub_140124FE0(
                (unsigned int)v20,
                v16[1],
                &dword_140404A6C[30 * v3 + 284554715],
                &dword_140404A6C[30 * v3 + 284554718],
                v22,
                v23);
              v15 = dword_140404A6C[284550610];
            }
          }
          ++v3;
          v16 += 30;
        }
        while ( v3 < v15 );
      }
    }
    unk_140404170(34962, 0, v14);
  }
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(32823);
  return unk_1404042E0(0);
}

