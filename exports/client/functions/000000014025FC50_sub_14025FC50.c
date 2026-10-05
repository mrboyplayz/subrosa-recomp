/* Address: 0x14025fc50 | Name: sub_14025FC50 | Size: 37 bytes */
char sub_14025FC50()
{
  *(_QWORD *)&dword_140404A6C[19065843] = ((__int64 (*)(void))GetCommandLineA)();
  *(_QWORD *)&dword_140404A6C[19065845] = ((__int64 (*)(void))GetCommandLineW)();
  return 1;
}

