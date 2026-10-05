/* Address: 0x1402080c4 | Name: sub_1402080C4 | Size: 1264 bytes */
__int64 __fastcall sub_1402080C4(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct _s_FuncInfo *a5,
        char a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 *v8; // r12
  char v10; // r13
  int v12; // eax
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rcx
  const struct _s_ESTypeList *v16; // r15
  __int64 v17; // r9
  unsigned int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // r8
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r13
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r8
  const struct _s_ESTypeList *v28; // rdx
  unsigned __int64 *v29; // rax
  __int64 v31; // [rsp+0h] [rbp-100h] BYREF
  struct _s_FuncInfo *v32; // [rsp+28h] [rbp-D8h]
  int v33[2]; // [rsp+40h] [rbp-C0h]
  struct _xDISPATCHER_CONTEXT *v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+50h] [rbp-B0h]
  int v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+64h] [rbp-9Ch]
  struct CMFCToolBarImages *v39; // [rsp+68h] [rbp-98h]
  int *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v42; // [rsp+80h] [rbp-80h]
  int v43[2]; // [rsp+88h] [rbp-78h]
  unsigned __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v47; // [rsp+B0h] [rbp-50h]
  struct _s_FuncInfo *v48; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int128 v50; // [rsp+C8h] [rbp-38h]
  __int128 v51; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int64 v53; // [rsp+F0h] [rbp-10h]
  __int128 pExceptionObject; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v55; // [rsp+108h] [rbp+8h]
  __int64 v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  __int64 v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]

  v8 = a2;
  v39 = a3;
  v42 = a2;
  v10 = 0;
  *(_QWORD *)v43 = a8;
  LOWORD(v37) = 0;
  v12 = sub_14020A738(a2, (struct _xDISPATCHER_CONTEXT *)a4, a5);
  v13 = v12;
  if ( v12 < -1 || v12 >= *((_DWORD *)a5 + 1) )
    goto LABEL_54;
  if ( *(_DWORD *)a1 != -529697949
    || *((_DWORD *)a1 + 6) != 4
    || (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) > 2
    || *((_QWORD *)a1 + 6) )
  {
LABEL_16:
    v49 = *(_QWORD *)(a4 + 8);
    v48 = a5;
    if ( *(_DWORD *)a1 != -529697949 || *((_DWORD *)a1 + 6) != 4 || (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) > 2 )
    {
      if ( *((_DWORD *)a5 + 3) )
      {
        if ( a6 )
          goto LABEL_54;
        sub_140208AC4(
          a1,
          (_DWORD)a5,
          v13,
          a7,
          v43[0],
          v33[0],
          (_DWORD)v34,
          v35,
          v36,
          v37,
          (_DWORD)v39,
          (_DWORD)v40,
          v41,
          (_DWORD)v42,
          v43[0],
          v44,
          v45,
          v46[0],
          v46[1],
          v47,
          (_DWORD)v48,
          v49,
          v50,
          DWORD2(v50),
          v51,
          *((__int64 *)&v51 + 1),
          v52,
          v53,
          pExceptionObject,
          *((__int64 *)&pExceptionObject + 1),
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      goto LABEL_50;
    }
    if ( *((_DWORD *)a5 + 3) )
    {
      LODWORD(v32) = a7;
      sub_140206E54(&v51, (__int64)&v48, v13, a4, a5);
      v50 = v51;
      if ( DWORD2(v51) < (unsigned int)v53 )
      {
        v17 = v51;
        v18 = DWORD2(v50);
        v41 = v51;
        do
        {
          v19 = *(_QWORD *)(v17 + 8);
          v20 = *(int *)(*(_QWORD *)v50 + 16LL) + 20LL * v18;
          v21 = *(__m128i *)(v20 + v19);
          v22 = *(int *)(v20 + v19 + 16);
          v47 = *(_DWORD *)(v20 + v19 + 16);
          *(__m128i *)v46 = v21;
          if ( _mm_cvtsi128_si32(v21) <= v13 && v13 <= SHIDWORD(v46[0]) )
          {
            v23 = *(_QWORD *)(a4 + 8) + v22;
            v24 = 0;
            v25 = HIDWORD(v46[1]);
            v45 = v23;
            if ( HIDWORD(v46[1]) )
            {
              while ( 1 )
              {
                pExceptionObject = *(_OWORD *)(v23 + 20 * v24);
                LODWORD(v55) = *(_DWORD *)(v23 + 20 * v24 + 16);
                v40 = (int *)(*(int *)(*((_QWORD *)a1 + 6) + 12LL) + sub_1402075E0() + 4);
                v38 = *(_DWORD *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL));
                if ( v38 > 0 )
                  break;
LABEL_28:
                v24 = (unsigned int)(v24 + 1);
                if ( (_DWORD)v24 == (_DWORD)v25 )
                {
                  v17 = v41;
                  goto LABEL_32;
                }
                v23 = v45;
              }
              while ( 1 )
              {
                v26 = sub_1402075E0();
                v27 = *((_QWORD *)a1 + 6);
                v44 = *v40 + v26;
                if ( (unsigned int)sub_140208FCC(&pExceptionObject, v44, v27) )
                  break;
                ++v40;
                if ( --v38 <= 0 )
                  goto LABEL_28;
              }
              v10 = 1;
              LOBYTE(v35) = BYTE1(v37);
              LOBYTE(v37) = 1;
              sub_140207F1C(
                a1,
                v42,
                v39,
                (struct _xDISPATCHER_CONTEXT *)a4,
                a5,
                (struct _s_HandlerType *)&pExceptionObject,
                v44,
                (int *)v46,
                a7,
                v43[0],
                v35,
                a6);
              v17 = v41;
            }
            else
            {
LABEL_32:
              v10 = v37;
            }
          }
          ++v18;
        }
        while ( v18 < (unsigned int)v53 );
        if ( v10 )
        {
LABEL_50:
          if ( !*(_QWORD *)(sub_1401FD83C() + 56) )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v56);
LABEL_54:
          abort();
        }
        v8 = v42;
      }
    }
    if ( (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930521
      && (*((_DWORD *)a5 + 8) && *((int *)a5 + 8) + sub_1402075CC()
       || (*((_DWORD *)a5 + 9) & 4) != 0 && !sub_140206C98((struct _xDISPATCHER_CONTEXT *)a4, a5)) )
    {
      if ( (*((_DWORD *)a5 + 9) & 4) != 0 )
      {
        *(_QWORD *)(sub_1401FD83C() + 32) = a1;
        *(_QWORD *)(sub_1401FD83C() + 40) = v39;
        terminate();
      }
      if ( *((_DWORD *)a5 + 8) )
        v28 = (const struct _s_ESTypeList *)(*((int *)a5 + 8) + sub_1402075CC());
      else
        v28 = nullptr;
      if ( !sub_14020A870(a1, v28) )
      {
        v29 = sub_140206D64(v8, (struct _xDISPATCHER_CONTEXT *)a4, a5, &v44);
        sub_140207130(v8, a1, v39, v29, nullptr, a5, -1, -1, nullptr, (struct _xDISPATCHER_CONTEXT *)a4, a6);
      }
    }
    goto LABEL_50;
  }
  if ( *(_QWORD *)(sub_1401FD83C() + 32) )
  {
    a1 = *(struct EHExceptionRecord **)(sub_1401FD83C() + 32);
    v14 = sub_1401FD83C();
    v15 = *((_QWORD *)a1 + 7);
    BYTE1(v37) = 1;
    v39 = *(struct CMFCToolBarImages **)(v14 + 40);
    sub_14020760C(v15);
    if ( *(_DWORD *)a1 == -529697949
      && *((_DWORD *)a1 + 6) == 4
      && (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) <= 2
      && !*((_QWORD *)a1 + 6) )
    {
      goto LABEL_54;
    }
    if ( *(_QWORD *)(sub_1401FD83C() + 56) )
    {
      v16 = *(const struct _s_ESTypeList **)(sub_1401FD83C() + 56);
      *(_QWORD *)(sub_1401FD83C() + 56) = 0;
      if ( !sub_14020A870(a1, v16) )
      {
        if ( sub_14020A95C(v16) )
        {
          sub_1401FD18C((__int64)a1);
          sub_140209928(&pExceptionObject);
          sub_14020B0A4(&pExceptionObject, (_ThrowInfo *)&pThrowInfo);
        }
        terminate();
      }
    }
    goto LABEL_16;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v56);
}

