/* Address: 0x1401982c0 | Name: sub_1401982C0 | Size: 51 bytes */
__int64 __fastcall sub_1401982C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax

  v2 = *a2;
  *(_QWORD *)(*(_QWORD *)&dword_140404A6C[19063859] + 16LL) = *a2;
  v3 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 24LL))(*v3, v2);
}

