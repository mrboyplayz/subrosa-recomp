/* Address: 0x140260a78 | Name: sub_140260A78 | Size: 28 bytes */
bool sub_140260A78()
{
  *(_QWORD *)&dword_140404A6C[19065847] = ((__int64 (*)(void))GetProcessHeap)();
  return *(_QWORD *)&dword_140404A6C[19065847] != 0;
}

