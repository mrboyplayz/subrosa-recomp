/* Address: 0x140028790 | Name: sub_140028790 | Size: 1078 bytes */
__int64 __fastcall sub_140028790(const char *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned int *v7; // rsi
  __int64 v8; // r12
  unsigned int *v9; // r14
  signed int v10; // ebp
  __int64 v11; // rdi
  signed int v12; // ebp
  __int64 v13; // rdi
  signed int v14; // ebp
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-D8h] BYREF
  int v19; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-B0h]
  __int64 v21; // [rsp+30h] [rbp-A8h]
  __int64 v22; // [rsp+38h] [rbp-A0h]
  unsigned int *v23; // [rsp+40h] [rbp-98h]
  _BYTE v24[64]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v25; // [rsp+90h] [rbp-48h]

  v2 = a2;
  sub_140158AB0(v24, "buildblock/%s.sbl", a1);
  v3 = MEMORY[0x14020B8D8](v24, "wb");
  v4 = v3;
  if ( v3 )
  {
    v19 = 1;
    (*(void (__fastcall **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250405])(&v19, 4, 1, v3);
    v5 = 12352 * v2;
    v6 = 0;
    v21 = 0;
    v20 = 0;
    v22 = 16;
    v7 = &dword_140404A6C[3088 * v2 + 451024002];
    v8 = 3088 * v2;
    do
    {
      v9 = &dword_140404A6C[v8 + 451024083];
      v23 = v9;
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 94,
        4,
        1,
        v4,
        v19);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 93,
        4,
        1,
        v4,
        v19);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 92,
        4,
        1,
        v4,
        v19);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 91,
        4,
        1,
        v4,
        v19);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 90,
        4,
        1,
        v4,
        v19);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 88,
        4,
        1,
        v4,
        v19);
      v10 = 0;
      if ( (int)*(v7 - 7) > 0 )
      {
        do
        {
          v11 = v5 + 12 * (v6 + v10);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451023996] + v11,
            4,
            1,
            v4,
            v19);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451023997] + v11,
            4,
            1,
            v4,
            v19);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451023998] + v11,
            4,
            1,
            v4,
            v19);
          ++v10;
        }
        while ( v10 < (int)*(v7 - 7) );
        v9 = v23;
      }
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 81,
        4,
        1,
        v4,
        v19);
      v12 = 0;
      if ( (int)*v7 > 0 )
      {
        do
        {
          v13 = v8 * 4 + 20LL * v12;
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024003] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024004] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024005] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024006] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024007] + v13,
            4,
            1,
            v4,
            v19);
          ++v12;
        }
        while ( v12 < (int)*v7 );
        v6 = v20;
      }
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9,
        4,
        1,
        v4,
        v19);
      v14 = 0;
      if ( (int)v7[81] > 0 )
      {
        v15 = v21;
        do
        {
          v16 = v5 + 24 * (v15 + v14);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024084] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024086] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024087] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024088] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (__fastcall **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024089] + v16,
            4,
            1,
            v4,
            v19);
          ++v14;
        }
        while ( v14 < (int)v7[81] );
        v6 = v20;
      }
      v21 += 32;
      v6 += 64;
      v8 += 192;
      v7 += 192;
      v20 = v6;
      --v22;
    }
    while ( v22 );
    sub_14020B9E8(v4);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v18 ^ v25);
}

