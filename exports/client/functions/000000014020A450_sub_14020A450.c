/* Address: 0x14020a450 | Name: sub_14020A450 | Size: 742 bytes */
__int64 __fastcall sub_14020A450(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
        struct FH4::FuncInfo4 *a3,
        int a4)
{
  __int64 v8; // r13
  int v9; // esi
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // rcx
  #95 *v13; // rdx
  #95 *v14; // r14
  #95 *v15; // rbx
  __int128 v16; // xmm6
  int v17; // r9d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // [rsp+0h] [rbp-128h] BYREF
  #95 *v23[2]; // [rsp+30h] [rbp-F8h] BYREF
  int v24; // [rsp+40h] [rbp-E8h]
  int v25; // [rsp+44h] [rbp-E4h]
  int v26; // [rsp+48h] [rbp-E0h]
  int *v27; // [rsp+50h] [rbp-D8h] BYREF
  #95 *v28; // [rsp+58h] [rbp-D0h]
  unsigned __int64 *v29; // [rsp+60h] [rbp-C8h]
  __int64 v30; // [rsp+68h] [rbp-C0h]
  unsigned __int64 *v31; // [rsp+70h] [rbp-B8h]
  struct _xDISPATCHER_CONTEXT *v32; // [rsp+78h] [rbp-B0h]
  __int128 v33; // [rsp+80h] [rbp-A8h]
  int *v34; // [rsp+90h] [rbp-98h]
  #95 *v35; // [rsp+98h] [rbp-90h]
  __int128 v36; // [rsp+A0h] [rbp-88h] BYREF
  int v37; // [rsp+B0h] [rbp-78h] BYREF
  #95 *v38; // [rsp+B8h] [rbp-70h]
  __int64 v39; // [rsp+D0h] [rbp-58h]

  v31 = a1;
  v29 = a1;
  v32 = a2;
  v26 = a4;
  v8 = sub_1402075CC();
  v30 = v8;
  v9 = MEMORY[0x140207820](a3, a2);
  if ( *((_DWORD *)a2 + 18) )
  {
    if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
      abort();
    v9 = *((_DWORD *)a2 + 18) - 2;
  }
  else if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
  {
    v9 = *(_DWORD *)(sub_1401FD83C() + 120);
    *(_DWORD *)(sub_1401FD83C() + 120) = -2;
  }
  v10 = sub_1401FD83C();
  ++*(_DWORD *)(v10 + 48);
  if ( *((_DWORD *)a3 + 2) )
  {
    v11 = (_BYTE *)(*((_QWORD *)a2 + 1) + *((int *)a3 + 2));
    v12 = *v11 & 0xF;
    v13 = (#95 *)&v11[-byte_140284A40[v12]];
    v37 = *((_DWORD *)v13 - 1) >> byte_140284A40[v12 + 16];
    v38 = v13;
  }
  else
  {
    v37 = 0;
    v13 = v38;
  }
  v23[0] = (#95 *)&v37;
  v23[1] = v13;
  v27 = &v37;
  v28 = v13;
  sub_14020AC30((FH4::UWMap4 *)&v37, v9, a4, (struct FH4::UWMap4::iterator *)v23, (struct FH4::UWMap4::iterator *)&v27);
  while ( 1 )
  {
    v34 = &v37;
    v35 = v38;
    v14 = v23[1];
    if ( v23[1] < v38 || v23[1] <= v28 )
      break;
    MEMORY[0x14020A9E4](v23[0], (unsigned __int8 **)&v23[1]);
    v23[1] = v14;
    v15 = v23[0];
    v33 = *((_OWORD *)v23[0] + 1);
    v16 = v33;
    v36 = *(_OWORD *)v23;
    MEMORY[0x14020A9E4](v23[0], (unsigned __int8 **)&v23[1]);
    v23[1] = (#95 *)((char *)v14 - *((unsigned int *)v15 + 4));
    v9 = sub_14020AD00(
           (const struct FH4::UWMap4::iterator *)&v27,
           a4,
           (const struct FH4::UWMap4::iterator *)&v36,
           v9,
           (const struct FH4::UWMap4::iterator *)v23);
    v25 = v9;
    v24 = 0;
    v17 = 0;
    if ( DWORD1(v16) )
      v17 = DWORD2(v16);
    v24 = v17;
    if ( v17 )
    {
      *((_DWORD *)a2 + 18) = v9 + 2;
      if ( (unsigned int)(DWORD1(v16) - 1) <= 1 )
      {
        v18 = *v29;
        if ( DWORD1(v16) == 2 )
          v19 = *(_QWORD *)(HIDWORD(v33) + v18);
        else
          v19 = v18 + HIDWORD(v33);
        sub_14020AF40(*((_QWORD *)a2 + 1) + v17, v18, v19, 259);
      }
      else
      {
        sub_14020AE90(*((_QWORD *)a2 + 1) + v17, a1, 259);
      }
      sub_1402075F4(v8);
    }
  }
  if ( *(int *)(sub_1401FD83C() + 48) > 0 )
  {
    v20 = sub_1401FD83C();
    --*(_DWORD *)(v20 + 48);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v22 ^ v39);
}

