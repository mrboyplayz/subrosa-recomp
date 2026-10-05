/* Address: 0x1401988c0 | Name: sub_1401988C0 | Size: 55 bytes */
__int64 __fastcall sub_1401988C0(unsigned int a1)
{
  _QWORD *v3; // rax

  if ( !dword_140404A6C[19063857] )
    return 0;
  v3 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 24LL))(*v3, a1);
}

