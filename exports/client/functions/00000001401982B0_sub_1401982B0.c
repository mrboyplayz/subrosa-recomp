/* Address: 0x1401982b0 | Name: sub_1401982B0 | Size: 14 bytes */
__int64 __fastcall sub_1401982B0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19063859];
  **(_QWORD **)&dword_140404A6C[19063859] = *a2;
  return result;
}

