/* Address: 0x140198d20 | Name: sub_140198D20 | Size: 155 bytes */
void __fastcall sub_140198D20(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rbx

  if ( dword_140404A6C[19063857] )
  {
    *(_QWORD *)&dword_140404A6C[19064119] = a1;
    v1 = (_QWORD *)SteamInternal_ContextInit(&off_140301E10);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v1 + 160LL))(*v1, 0, 0);
    if ( qword_140301EA0 )
      SteamAPI_UnregisterCallResult(&off_140301E90);
    qword_140301EA0 = v2;
    qword_140301EB0 = (__int64)sub_140198300;
    qword_140301EA8 = (__int64)&off_140301E90;
    if ( v2 )
      SteamAPI_RegisterCallResult(&off_140301E90, v2);
  }
}

