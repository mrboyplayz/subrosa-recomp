/* Address: 0x140198790 | Name: sub_140198790 | Size: 58 bytes */
void __fastcall sub_140198790(__int64 a1)
{
  _QWORD *v2; // rax

  if ( dword_140404A6C[19063857] )
  {
    v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 224LL))(*v2, a1);
  }
}

