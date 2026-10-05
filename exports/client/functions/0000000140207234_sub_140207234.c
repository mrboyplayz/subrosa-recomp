/* Address: 0x140207234 | Name: sub_140207234 | Size: 287 bytes */
__int64 __fastcall sub_140207234(
        unsigned __int64 *a1,
        struct EHExceptionRecord *a2,
        struct _CONTEXT *a3,
        unsigned __int64 *a4,
        void *a5,
        struct FH4::FuncInfo4 *a6,
        int a7,
        int a8,
        struct FH4::HandlerType4 *a9,
        struct _xDISPATCHER_CONTEXT *a10,
        unsigned __int8 a11)
{
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v18; // [rsp+0h] [rbp-C1h] BYREF
  __int64 HistoryTable; // [rsp+28h] [rbp-99h]
  _OWORD ExceptionRecord[10]; // [rsp+30h] [rbp-91h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+Fh]

  ExceptionRecord[0] = unk_140284A60;
  ExceptionRecord[1] = unk_140284A70;
  *((_QWORD *)&ExceptionRecord[2] + 1) = unk_140284A88;
  *((_QWORD *)&ExceptionRecord[4] + 1) = unk_140284AA8;
  *(_QWORD *)&ExceptionRecord[5] = unk_140284AB0;
  memset(&ExceptionRecord[6], 0, 56);
  *(_QWORD *)&ExceptionRecord[2] = sub_140209E34;
  *(_QWORD *)&ExceptionRecord[3] = a5;
  *(_QWORD *)&ExceptionRecord[4] = a3;
  *((_QWORD *)&ExceptionRecord[3] + 1) = a7;
  *((_QWORD *)&ExceptionRecord[5] + 1) = a11;
  v12 = *((_QWORD *)a10 + 1) + *((_QWORD *)a9 + 3);
  v13 = *((_QWORD *)a10 + 1) + *((_QWORD *)a9 + 4);
  *((_QWORD *)&ExceptionRecord[7] + 1) = a8;
  HistoryTable = *((_QWORD *)a10 + 8);
  v14 = *((_QWORD *)a10 + 5);
  *((_QWORD *)&ExceptionRecord[2] + 1) = a4;
  *((_QWORD *)&ExceptionRecord[4] + 1) = v12;
  v15 = *a1;
  *(_QWORD *)&ExceptionRecord[5] = a2;
  v16 = *(_QWORD *)a10;
  *((_QWORD *)&ExceptionRecord[6] + 1) = v13;
  *(_QWORD *)&ExceptionRecord[6] = 429065504;
  ((void (__fastcall *)(__int64, __int64, _OWORD *, _QWORD, __int64, __int64))RtlUnwindEx)(
    v15,
    v16,
    ExceptionRecord,
    0,
    v14,
    HistoryTable);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v18 ^ v21);
}

