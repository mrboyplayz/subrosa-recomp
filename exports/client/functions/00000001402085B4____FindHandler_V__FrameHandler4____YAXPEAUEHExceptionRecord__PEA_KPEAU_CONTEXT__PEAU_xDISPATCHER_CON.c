/* Address: 0x1402085b4 | Name: ??$FindHandler@V__FrameHandler4@@@@YAXPEAUEHExceptionRecord@@PEA_KPEAU_CONTEXT@@PEAU_xDISPATCHER_CONTEXT@@PEAUFuncInfo4@FH4@@EH1@Z | Size: 1295 bytes */
__int64 __fastcall FindHandler<__FrameHandler4>(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct FH4::FuncInfo4 *a5,
        char a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 *v8; // r15
  int v12; // edi
  _BYTE *v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  const struct _s_ESTypeList *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r15
  int v21; // r12d
  int v22; // r15d
  __int64 v23; // r12
  _BYTE *v24; // rdx
  __int64 v25; // rcx
  _BYTE *v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  _BYTE *v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  _DWORD *v32; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // [rsp+0h] [rbp-100h] BYREF
  struct FH4::FuncInfo4 *v37; // [rsp+20h] [rbp-E0h]
  struct #94 *v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+60h] [rbp-A0h]
  int v41; // [rsp+64h] [rbp-9Ch]
  int v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+6Ch] [rbp-94h]
  int *v44; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  int pExceptionObject[6]; // [rsp+88h] [rbp-78h] BYREF
  int v48[2]; // [rsp+A0h] [rbp-60h]
  __int128 v49; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v50; // [rsp+C0h] [rbp-40h]
  _OWORD v51[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-18h]
  int v53[12]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v54[6]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v55; // [rsp+138h] [rbp+38h]
  __int128 v56; // [rsp+148h] [rbp+48h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  __int64 v58; // [rsp+170h] [rbp+70h]

  v8 = a2;
  v45 = a2;
  *(_QWORD *)v48 = a8;
  LOWORD(v40) = 0;
  v12 = MEMORY[0x140207820](a5, (struct _xDISPATCHER_CONTEXT *)a4);
  if ( *(_DWORD *)(a4 + 72) )
  {
    if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
      goto LABEL_54;
    v12 = *(_DWORD *)(a4 + 72) - 2;
  }
  else if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
  {
    v12 = *(_DWORD *)(sub_1401FD83C() + 120);
    *(_DWORD *)(sub_1401FD83C() + 120) = -2;
  }
  if ( v12 < -1 )
    goto LABEL_54;
  if ( *((_DWORD *)a5 + 2) )
  {
    v13 = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
    v14 = *(_DWORD *)&v13[-byte_140284A40[*v13 & 0xF] - 4] >> byte_140284A40[(*v13 & 0xF) + 16];
  }
  else
  {
    v14 = 0;
  }
  if ( v12 >= v14 )
    goto LABEL_54;
  if ( *(_DWORD *)a1 != -529697949
    || *((_DWORD *)a1 + 6) != 4
    || (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) > 2
    || *((_QWORD *)a1 + 6) )
  {
LABEL_25:
    MEMORY[0x1402097C4]((FH4::TryBlockMap4 *)v53, a5, *(_QWORD *)(a4 + 8));
    if ( *(_DWORD *)a1 == -529697949 && *((_DWORD *)a1 + 6) == 4 && (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) <= 2 )
    {
      if ( !v53[0] )
        goto LABEL_45;
      LODWORD(v38) = a7;
      v37 = a5;
      sub_140206F94(&v49, v53, v12);
      *(_OWORD *)pExceptionObject = v49;
      if ( DWORD2(v49) >= v50 )
        goto LABEL_45;
      v20 = v49;
      v46 = v49;
      v42 = pExceptionObject[2];
      do
      {
        *(_OWORD *)pExceptionObject = *(_OWORD *)(v20 + 24);
        if ( pExceptionObject[0] <= v12 && v12 <= pExceptionObject[1] )
        {
          sub_14020971C(
            (FH4::HandlerMap4 *)v54,
            (const struct FH4::TryBlockMapEntry4 *)pExceptionObject,
            *(_QWORD *)(a4 + 8),
            **(_DWORD **)(a4 + 16));
          v21 = 0;
          v41 = 0;
          v43 = v54[0];
          if ( v54[0] )
          {
            while ( 1 )
            {
              v51[0] = v55;
              v52 = v57;
              v51[1] = v56;
              v44 = (int *)(*(int *)(*((_QWORD *)a1 + 6) + 12LL) + sub_1402075E0() + 4);
              v22 = *(_DWORD *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL));
              if ( v22 > 0 )
                break;
LABEL_38:
              MEMORY[0x14020A084]((FH4::HandlerMap4 *)v54);
              v41 = ++v21;
              if ( v21 == v43 )
                goto LABEL_41;
            }
            while ( 1 )
            {
              v23 = *v44 + sub_1402075E0();
              if ( (unsigned int)sub_14020910C(v51, v23, *((_QWORD *)a1 + 6)) )
                break;
              ++v44;
              if ( --v22 <= 0 )
              {
                v21 = v41;
                goto LABEL_38;
              }
            }
            LOBYTE(v39) = v40;
            BYTE1(v40) = 1;
            sub_140207FF0(
              a1,
              v45,
              a3,
              (struct _xDISPATCHER_CONTEXT *)a4,
              a5,
              (struct #94 *)v51,
              v23,
              pExceptionObject,
              a7,
              v48[0],
              v39,
              a6);
LABEL_41:
            v20 = v46;
          }
        }
        v24 = *(_BYTE **)(v20 + 8);
        v25 = *v24 & 0xF;
        v26 = &v24[-byte_140284A40[v25]];
        v27 = *((_DWORD *)v26 - 1) >> byte_140284A40[v25 + 16];
        *(_QWORD *)(v20 + 8) = v26;
        *(_DWORD *)(v20 + 24) = v27;
        v28 = *v26 & 0xF;
        v29 = &v26[-byte_140284A40[v28]];
        v30 = *((_DWORD *)v29 - 1) >> byte_140284A40[v28 + 16];
        *(_QWORD *)(v20 + 8) = v29;
        *(_DWORD *)(v20 + 28) = v30;
        v31 = *v29 & 0xF;
        v32 = &v29[-byte_140284A40[v31]];
        *(_DWORD *)(v20 + 32) = *(v32 - 1) >> byte_140284A40[v31 + 16];
        *(_QWORD *)(v20 + 8) = v32;
        *(_DWORD *)(v20 + 36) = *v32;
        LODWORD(v31) = v42 + 1;
        *(_QWORD *)(v20 + 8) = v32 + 1;
        v42 = v31;
      }
      while ( (unsigned int)v31 < v50 );
      if ( !BYTE1(v40) )
      {
LABEL_45:
        if ( (*(_BYTE *)a5 & 0x40) != 0 && !MEMORY[0x140206CC4]((struct _xDISPATCHER_CONTEXT *)a4, a5) )
        {
          *(_QWORD *)(sub_1401FD83C() + 32) = a1;
          *(_QWORD *)(sub_1401FD83C() + 40) = a3;
          terminate(v35, v34);
        }
      }
    }
    else if ( v53[0] )
    {
      if ( a6 )
        goto LABEL_54;
      sub_140208CDC(a1, v8, a5, v12, a7, a8);
    }
    if ( !*(_QWORD *)(sub_1401FD83C() + 56) )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v36 ^ v58);
LABEL_54:
    abort();
  }
  if ( *(_QWORD *)(sub_1401FD83C() + 32) )
  {
    a1 = *(struct EHExceptionRecord **)(sub_1401FD83C() + 32);
    v15 = sub_1401FD83C();
    v16 = *((_QWORD *)a1 + 7);
    LOBYTE(v40) = 1;
    a3 = *(struct CMFCToolBarImages **)(v15 + 40);
    sub_14020760C(v16);
    if ( *(_DWORD *)a1 == -529697949
      && *((_DWORD *)a1 + 6) == 4
      && (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) <= 2
      && !*((_QWORD *)a1 + 6) )
    {
      goto LABEL_54;
    }
    if ( *(_QWORD *)(sub_1401FD83C() + 56) )
    {
      v17 = *(const struct _s_ESTypeList **)(sub_1401FD83C() + 56);
      *(_QWORD *)(sub_1401FD83C() + 56) = 0;
      if ( !sub_14020A870(a1, v17) )
      {
        if ( sub_14020A95C(v17) )
        {
          sub_1401FD18C((__int64)a1);
          sub_140209928(pExceptionObject);
          sub_14020B0A4(pExceptionObject, (_ThrowInfo *)&pThrowInfo);
        }
        terminate(v19, v18);
      }
      v8 = v45;
    }
    goto LABEL_25;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v36 ^ v58);
}

