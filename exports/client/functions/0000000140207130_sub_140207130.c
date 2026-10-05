/* Address: 0x140207130 | Name: sub_140207130 | Size: 259 bytes */
__int64 __fastcall sub_140207130(
        unsigned __int64 *a1,
        struct EHExceptionRecord *a2,
        struct _CONTEXT *a3,
        unsigned __int64 *a4,
        void *a5,
        const struct _s_FuncInfo *a6,
        int a7,
        int a8,
        const struct _s_HandlerType *a9,
        struct _xDISPATCHER_CONTEXT *a10,
        unsigned __int8 a11)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // [rsp+0h] [rbp-C1h] BYREF
  __int64 HistoryTable; // [rsp+28h] [rbp-99h]
  _OWORD ExceptionRecord[10]; // [rsp+30h] [rbp-91h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+Fh]

  ExceptionRecord[0] = unk_140284B00;
  ExceptionRecord[1] = unk_140284B10;
  ExceptionRecord[2] = unk_140284B20;
  memset(&ExceptionRecord[3], 0, 104);
  v11 = *a1;
  *(_QWORD *)&ExceptionRecord[2] = sub_140209C48;
  *(_QWORD *)&ExceptionRecord[3] = a5;
  *((_QWORD *)&ExceptionRecord[3] + 1) = a7;
  *((_QWORD *)&ExceptionRecord[4] + 1) = a6;
  *((_QWORD *)&ExceptionRecord[5] + 1) = a11;
  HistoryTable = *((_QWORD *)a10 + 8);
  v12 = *((_QWORD *)a10 + 5);
  *((_QWORD *)&ExceptionRecord[2] + 1) = a4;
  *(_QWORD *)&ExceptionRecord[4] = a3;
  *(_QWORD *)&ExceptionRecord[5] = a2;
  v13 = *(_QWORD *)a10;
  *(_QWORD *)&ExceptionRecord[6] = 429065504;
  ((void (__fastcall *)(__int64, __int64, _OWORD *, _QWORD, __int64, __int64))RtlUnwindEx)(
    v11,
    v13,
    ExceptionRecord,
    0,
    v12,
    HistoryTable);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v15 ^ v18);
}

