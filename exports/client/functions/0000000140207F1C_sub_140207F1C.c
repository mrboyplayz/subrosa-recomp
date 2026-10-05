/* Address: 0x140207f1c | Name: sub_140207F1C | Size: 209 bytes */
__int64 __fastcall sub_140207F1C(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        struct _xDISPATCHER_CONTEXT *a4,
        struct _s_FuncInfo *a5,
        struct _s_HandlerType *a6,
        __int64 a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  const struct _s_FuncInfo *v12; // r13
  __m128i *v16; // rax
  unsigned __int64 *v17; // r14
  struct _s_HandlerType *v18; // rsi
  int v19; // ebx
  int v20; // edi
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+A8h] [rbp+10h] BYREF
  struct CMFCToolBarImages *v24; // [rsp+B0h] [rbp+18h]

  v24 = a3;
  v12 = a5;
  v16 = (__m128i *)sub_140206D64(a2, a4, a5, &v23);
  v17 = (unsigned __int64 *)v16;
  v18 = a6;
  if ( a7 )
    sub_140207D98((__int64)a1, v16, (int *)a6, a7);
  v19 = a8[2];
  v20 = *a8;
  v21 = sub_1402075CC();
  return sub_140207130(a2, a1, v24, v17, (void *)(*((int *)v18 + 3) + v21), v12, v20, v19, v18, a4, a12);
}

