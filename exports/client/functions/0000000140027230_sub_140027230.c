/* Address: 0x140027230 | Name: sub_140027230 | Size: 1108 bytes */
__int64 __fastcall sub_140027230(const char *a1, int a2)
{
  __int64 v2; // rsi
  const char *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  char *v7; // rcx
  char v8; // al
  __int64 v9; // r13
  __int64 v10; // r15
  unsigned int *v11; // rbp
  unsigned int *v12; // r14
  signed int v13; // esi
  __int64 v14; // rdi
  signed int v15; // esi
  char *v16; // rdi
  signed int v17; // esi
  __int64 v18; // rdi
  __int64 v20; // [rsp+0h] [rbp-C8h] BYREF
  int v21; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-A0h]
  __int64 v23; // [rsp+30h] [rbp-98h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  _BYTE v25[64]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v26; // [rsp+80h] [rbp-48h]

  v2 = a2;
  v3 = a1;
  sub_140158AB0(v25, "buildblock/%s.sbl", a1);
  v4 = MEMORY[0x14020B8D8](v25, "rb");
  v5 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(&v21, 4, 1, v4);
    if ( v21 == 1 )
    {
      v6 = 3088 * v2;
      v7 = (char *)&dword_140404A6C[451023973] + 12352 * v2 - (_QWORD)v3;
      do
      {
        v8 = *v3;
        v3[(_QWORD)v7] = *v3;
        ++v3;
      }
      while ( v8 );
      v9 = 0;
      v24 = 16;
      v10 = 0;
      v23 = 0;
      v22 = 0;
      v11 = &dword_140404A6C[v6 + 451024002];
      v12 = &dword_140404A6C[v6 + 451024083];
      do
      {
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 94,
          4,
          1,
          v5);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 93,
          4,
          1,
          v5);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 92,
          4,
          1,
          v5);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 91,
          4,
          1,
          v5);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 90,
          4,
          1,
          v5);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 88,
          4,
          1,
          v5);
        v13 = 0;
        if ( (int)*(v11 - 7) > 0 )
        {
          do
          {
            v14 = v6 * 4 + 12 * (v10 + v13);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451023996] + v14,
              4,
              1,
              v5);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451023997] + v14,
              4,
              1,
              v5);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451023998] + v14,
              4,
              1,
              v5);
            ++v13;
          }
          while ( v13 < (int)*(v11 - 7) );
          v9 = v23;
        }
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 81,
          4,
          1,
          v5);
        v15 = 0;
        if ( (int)*v11 > 0 )
        {
          do
          {
            v16 = (char *)v12 + 20LL * v15 - (_QWORD)&dword_140404A6C[451024083];
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024003] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024004] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024005] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024006] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024007] + (_QWORD)v16,
              4,
              1,
              v5);
            ++v15;
          }
          while ( v15 < (int)*v11 );
          v10 = v22;
          v9 = v23;
        }
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(v12, 4, 1, v5);
        v17 = 0;
        if ( (int)v11[81] > 0 )
        {
          do
          {
            v18 = v6 * 4 + 24 * (v9 + v17);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024084] + v18,
              4,
              1,
              v5);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024086] + v18,
              4,
              1,
              v5);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024087] + v18,
              4,
              1,
              v5);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024088] + v18,
              4,
              1,
              v5);
            (*(void (__fastcall **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024089] + v18,
              4,
              1,
              v5);
            ++v17;
          }
          while ( v17 < (int)v11[81] );
          v10 = v22;
        }
        v10 += 64;
        v9 += 32;
        v12 += 192;
        v22 = v10;
        v11 += 192;
        v23 = v9;
        --v24;
      }
      while ( v24 );
    }
    sub_14020B9E8(v5);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v26);
}

