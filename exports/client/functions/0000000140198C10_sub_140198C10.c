/* Address: 0x140198c10 | Name: sub_140198C10 | Size: 65 bytes */
void __fastcall sub_140198C10(__int64 a1)
{
  _QWORD *v2; // rax

  if ( dword_140404A6C[19063857] )
  {
    v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    (*(void (__fastcall **)(_QWORD, __int64, const char *))(*(_QWORD *)*v2 + 392LL))(*v2, a1, "join it");
  }
}

