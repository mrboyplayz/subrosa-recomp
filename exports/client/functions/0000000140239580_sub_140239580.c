/* Address: 0x140239580 | Name: sub_140239580 | Size: 142 bytes */
__int64 __fastcall sub_140239580(_DWORD *a1)
{
  __int64 v2; // [rsp+0h] [rbp-78h] BYREF
  _WORD LocalTime[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 SystemTime; // [rsp+50h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp-18h]

  if ( (*a1 || a1[1])
    && (unsigned int)((__int64 (__fastcall *)(_DWORD *, __int128 *))FileTimeToSystemTime)(a1, &SystemTime)
    && (unsigned int)((__int64 (__fastcall *)(_QWORD, __int128 *, _WORD *))SystemTimeToTzSpecificLocalTime)(
                       0,
                       &SystemTime,
                       LocalTime) )
  {
    _loctotime32_t(LocalTime[0], LocalTime[1], LocalTime[3], LocalTime[4], LocalTime[5], LocalTime[6], -1);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v2 ^ v5);
}

