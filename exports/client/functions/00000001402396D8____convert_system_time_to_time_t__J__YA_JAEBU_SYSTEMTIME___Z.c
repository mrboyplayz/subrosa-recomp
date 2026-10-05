/* Address: 0x1402396d8 | Name: ??$convert_system_time_to_time_t@_J@@YA_JAEBU_SYSTEMTIME@@@Z | Size: 54 bytes */
__int64 __fastcall convert_system_time_to_time_t<__int64>(unsigned __int16 *a1)
{
  return _loctotime64_t(*a1, a1[1], a1[3], a1[4], a1[5], a1[6], -1);
}

