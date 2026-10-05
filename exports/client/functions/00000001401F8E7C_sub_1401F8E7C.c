/* Address: 0x1401f8e7c | Name: sub_1401F8E7C | Size: 96 bytes */
void __fastcall sub_1401F8E7C(
        __int64 a1,
        int a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, _QWORD, __int64),
        unsigned int ExceptionNum,
        struct #67 *ExceptionPtr)
{
  if ( !(unsigned int)_acrt_locale_changed() && a2 == 1 )
    a4(a1, 0, a3);
  JUMPOUT(0x140245018LL);
}

