/* Address: 0x140198300 | Name: sub_140198300 | Size: 96 bytes */
void __fastcall sub_140198300(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // rax

  if ( a2 && *a2 == 1 )
  {
    v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E10);
    (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, unsigned int *))(*(_QWORD *)*v2 + 168LL))(
      *v2,
      &dword_140404A6C[19063861],
      1024,
      &dword_140404A6C[19064117]);
    if ( *(_QWORD *)&dword_140404A6C[19064119] )
      (*(void (__fastcall **)(unsigned int *, _QWORD))&dword_140404A6C[19064119])(
        &dword_140404A6C[19063861],
        dword_140404A6C[19064117]);
  }
}

