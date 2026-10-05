/* Address: 0x1400d4740 | Name: sub_1400D4740 | Size: 54 bytes */
__int64 __fastcall sub_1400D4740(__int64 a1)
{
  return ((__int64 (__fastcall *)(_QWORD, const char *, __int64, char *, const char *, int))ShellExecuteA)(
           0,
           "open",
           a1,
           Parameters,
           "c:\\",
           1);
}

