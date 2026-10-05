/* Address: 0x140198a10 | Name: sub_140198A10 | Size: 57 bytes */
__int64 __fastcall sub_140198A10(__int64 a1)
{
  _QWORD *v3; // rax

  if ( !dword_140404A6C[19063857] )
    return 0;
  v3 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 48LL))(*v3, a1);
}

