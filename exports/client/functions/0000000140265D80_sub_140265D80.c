/* Address: 0x140265d80 | Name: sub_140265D80 | Size: 55 bytes */
__int64 __fastcall sub_140265D80(__int64 a1, __int64 a2, unsigned int *a3)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, unsigned int, unsigned int, _QWORD))CreateFileW)(
           a1,
           a3[1],
           a3[3],
           a2,
           a3[2],
           a3[4] | a3[5],
           0);
}

