/* Address: 0x1401989a0 | Name: sub_1401989A0 | Size: 108 bytes */
__int64 __fastcall sub_1401989A0(unsigned int a1, unsigned int a2)
{
  _QWORD *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  char v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !dword_140404A6C[19063857] )
    return 0;
  v5 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  v6 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, &v8, a1, a2);
  v7 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v7 + 48LL))(*v7, v6);
}

