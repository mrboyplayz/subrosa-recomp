/* Address: 0x140198a50 | Name: sub_140198A50 | Size: 148 bytes */
__int64 __fastcall sub_140198A50(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( !dword_140404A6C[19063857] )
    return 0;
  v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E58);
  v3 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v2 + 160LL))(*v2, &v6);
  v4 = (_QWORD *)SteamInternal_ContextInit(&off_140301E10);
  if ( *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v4 + 16LL))(*v4, &v6) == v3 )
  {
    *a1 = v3;
    return 1;
  }
  else
  {
    dword_140404A6C[19063857] = 0;
    dword_140404A6C[19063858] = 1;
    return 0;
  }
}

