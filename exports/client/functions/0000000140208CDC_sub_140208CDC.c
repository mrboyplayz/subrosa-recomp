/* Address: 0x140208cdc | Name: sub_140208CDC | Size: 751 bytes */
__int64 __fastcall sub_140208CDC(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct FH4::FuncInfo4 *a5,
        int a6,
        int a7,
        __int64 a8)
{
  bool v8; // zf
  __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rbx
  __int64 v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  _BYTE *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  _DWORD *v25; // rdx
  __int64 v27; // [rsp+0h] [rbp-100h] BYREF
  struct FH4::FuncInfo4 *v28; // [rsp+20h] [rbp-E0h]
  struct #94 *v29; // [rsp+28h] [rbp-D8h]
  __int64 v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+38h] [rbp-C8h]
  int v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  struct CMFCToolBarImages *v36; // [rsp+78h] [rbp-88h]
  __int64 v37[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v38; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  _BYTE v43[8]; // [rsp+C8h] [rbp-38h] BYREF
  int v44; // [rsp+D0h] [rbp-30h]
  int v45[10]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v46; // [rsp+128h] [rbp+28h]

  v8 = *(_DWORD *)a1 == -2147483645;
  v35 = a8;
  v36 = a3;
  if ( !v8 )
  {
    if ( !*(_QWORD *)(sub_1401FD83C() + 16)
      || (v12 = ((__int64 (__fastcall *)(_QWORD))EncodePointer)(0), *(_QWORD *)(sub_1401FD83C() + 16) == v12)
      || *(_DWORD *)a1 == -532459699
      || *(_DWORD *)a1 == -532462766
      || (LODWORD(v31) = a6,
          v30 = v35,
          LODWORD(v29) = a7,
          v28 = a5,
          !(unsigned int)sub_140206924((unsigned int *)a1, (__int64)a2, (__int64)v36)) )
    {
      MEMORY[0x1402097C4]((FH4::TryBlockMap4 *)v45, a5, *(_QWORD *)(a4 + 8));
      if ( !v45[0] )
        abort();
      LODWORD(v29) = a7;
      v28 = a5;
      sub_140206F94(&v38, v45, a6);
      *(_OWORD *)v37 = v38;
      if ( DWORD2(v38) < v39 )
      {
        v13 = v38;
        v34 = v38;
        v33 = v37[1];
        do
        {
          *(_OWORD *)v37 = *(_OWORD *)(v13 + 24);
          if ( SLODWORD(v37[0]) <= a6 && a6 <= SHIDWORD(v37[0]) )
          {
            sub_14020971C(
              (FH4::HandlerMap4 *)&v40,
              (const struct FH4::TryBlockMapEntry4 *)v37,
              *(_QWORD *)(a4 + 8),
              **(_DWORD **)(a4 + 16));
            v41 = v42;
            MEMORY[0x14020A084]((FH4::HandlerMap4 *)&v40);
            v14 = v40;
            v41 = v42;
            MEMORY[0x14020A084]((FH4::HandlerMap4 *)&v40);
            v15 = (unsigned int)(v14 - 1);
            if ( (_DWORD)v15 )
            {
              do
              {
                MEMORY[0x14020A084]((FH4::HandlerMap4 *)&v40);
                --v15;
              }
              while ( v15 );
            }
            if ( !v44
              || !(v44 + sub_1402075CC())
              || (!v44 ? (v16 = 0) : (v16 = v44 + sub_1402075CC()), !*(_BYTE *)(v16 + 16)) )
            {
              if ( (v43[4] & 0x40) == 0 )
              {
                LOBYTE(v32) = 1;
                sub_140207FF0(
                  a1,
                  a2,
                  v36,
                  (struct _xDISPATCHER_CONTEXT *)a4,
                  a5,
                  (struct #94 *)v43,
                  0,
                  (int *)v37,
                  a7,
                  v35,
                  v32,
                  0);
              }
            }
            v13 = v34;
          }
          v17 = *(_BYTE **)(v13 + 8);
          v18 = *v17 & 0xF;
          v19 = &v17[-byte_140284A40[v18]];
          v20 = *((_DWORD *)v19 - 1) >> byte_140284A40[v18 + 16];
          *(_QWORD *)(v13 + 8) = v19;
          *(_DWORD *)(v13 + 24) = v20;
          v21 = *v19 & 0xF;
          v22 = &v19[-byte_140284A40[v21]];
          v23 = *((_DWORD *)v22 - 1) >> byte_140284A40[v21 + 16];
          *(_QWORD *)(v13 + 8) = v22;
          *(_DWORD *)(v13 + 28) = v23;
          v24 = *v22 & 0xF;
          v25 = &v22[-byte_140284A40[v24]];
          *(_DWORD *)(v13 + 32) = *(v25 - 1) >> byte_140284A40[v24 + 16];
          *(_QWORD *)(v13 + 8) = v25;
          *(_DWORD *)(v13 + 36) = *v25;
          LODWORD(v24) = v33 + 1;
          *(_QWORD *)(v13 + 8) = v25 + 1;
          v33 = v24;
        }
        while ( (unsigned int)v24 < v39 );
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v27 ^ v46);
}

