/* Address: 0x140208ac4 | Name: sub_140208AC4 | Size: 533 bytes */
__int64 __fastcall sub_140208AC4(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  __int64 result; // rax
  __int64 v12; // rbx
  int v13; // r13d
  __int64 v14; // r9
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // r8
  __m128i v18; // xmm0
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  __int64 v21; // r13
  int v22; // [rsp+58h] [rbp-69h]
  _QWORD v23[2]; // [rsp+68h] [rbp-59h] BYREF
  __int128 v24; // [rsp+78h] [rbp-49h]
  __int64 v25[2]; // [rsp+88h] [rbp-39h] BYREF
  int v26; // [rsp+98h] [rbp-29h]
  __int128 v27; // [rsp+A0h] [rbp-21h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp-9h]
  __int64 vars8; // [rsp+100h] [rbp+3Fh] BYREF
  __int64 v30; // [rsp+108h] [rbp+47h]

  result = (__int64)&vars8;
  if ( *(_DWORD *)a1 != -2147483645 )
  {
    if ( !*(_QWORD *)(sub_1401FD83C() + 16)
      || (v12 = ((__int64 (__fastcall *)(_QWORD))EncodePointer)(0), *(_QWORD *)(sub_1401FD83C() + 16) == v12)
      || *(_DWORD *)a1 == -532459699 )
    {
      v13 = a7;
    }
    else
    {
      v13 = a7;
      if ( *(_DWORD *)a1 != -532462766 )
      {
        result = sub_1402068D0((unsigned int *)a1, (__int64)a2, (__int64)a3);
        if ( (_DWORD)result )
          return result;
      }
    }
    v23[1] = *(_QWORD *)(a4 + 8);
    v23[0] = a5;
    if ( !*(_DWORD *)(a5 + 12) )
      abort();
    sub_140206E54(&v27, (__int64)v23, a6, a4, (struct _s_FuncInfo *)a5);
    v24 = v27;
    result = DWORD2(v27);
    if ( DWORD2(v27) < v28 )
    {
      v14 = v27;
      v15 = DWORD2(v24);
      v30 = v27;
      do
      {
        v16 = *(_QWORD *)(v14 + 8);
        v17 = *(int *)(*(_QWORD *)v24 + 16LL) + 20LL * v15;
        v18 = *(__m128i *)(v17 + v16);
        v19 = *(int *)(v17 + v16 + 16);
        v26 = *(_DWORD *)(v17 + v16 + 16);
        result = (unsigned int)_mm_cvtsi128_si32(v18);
        *(__m128i *)v25 = v18;
        if ( (int)result <= a6 )
        {
          result = HIDWORD(v25[0]);
          if ( a6 <= SHIDWORD(v25[0]) )
          {
            v20 = *(_QWORD *)(a4 + 8) + v19 + 20 * (HIDWORD(v25[1]) - 1);
            if ( *(_DWORD *)(v20 + 4) )
            {
              v21 = *(int *)(v20 + 4);
              result = v21 + sub_1402075CC();
              if ( result )
              {
                result = (_DWORD)v21 ? *(int *)(v20 + 4) + sub_1402075CC() : 0LL;
                if ( *(_BYTE *)(result + 16) )
                  goto LABEL_23;
              }
              v13 = a7;
            }
            if ( (*(_BYTE *)v20 & 0x40) == 0 )
            {
              LOBYTE(v22) = 1;
              result = sub_140207F1C(
                         a1,
                         a2,
                         a3,
                         (struct _xDISPATCHER_CONTEXT *)a4,
                         (struct _s_FuncInfo *)a5,
                         (struct _s_HandlerType *)v20,
                         0,
                         (int *)v25,
                         v13,
                         a8,
                         v22,
                         0);
            }
          }
        }
LABEL_23:
        v13 = a7;
        ++v15;
        v14 = v30;
      }
      while ( v15 < v28 );
    }
  }
  return result;
}

