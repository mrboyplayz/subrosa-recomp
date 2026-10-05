/* Address: 0x140207ff0 | Name: sub_140207FF0 | Size: 209 bytes */
__int64 __fastcall sub_140207FF0(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        struct _xDISPATCHER_CONTEXT *a4,
        struct FH4::FuncInfo4 *a5,
        struct #94 *a6,
        __int64 a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  struct FH4::FuncInfo4 *v12; // r13
  __m128i *v16; // rax
  unsigned __int64 *v17; // r14
  struct #94 *v18; // rsi
  int v19; // ebx
  int v20; // edi
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+A8h] [rbp+10h] BYREF
  struct CMFCToolBarImages *v24; // [rsp+B0h] [rbp+18h]

  v24 = a3;
  v12 = a5;
  v16 = (__m128i *)MEMORY[0x140206E30](a2, a4, a5, &v23);
  v17 = (unsigned __int64 *)v16;
  v18 = a6;
  if ( a7 )
    sub_140207E58((__int64)a1, v16, (__int64)a6, a7);
  v19 = a8[2];
  v20 = *a8;
  v21 = sub_1402075CC();
  return sub_140207234(a2, a1, v24, v17, (void *)(*((int *)v18 + 4) + v21), v12, v20, v19, v18, a4, a12);
}

