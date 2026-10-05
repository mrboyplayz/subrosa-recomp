/* Address: 0x1401987e0 | Name: sub_1401987E0 | Size: 59 bytes */
void __fastcall sub_1401987E0(unsigned int a1)
{
  _QWORD *v2; // rax

  if ( dword_140404A6C[19063857] )
  {
    v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E40);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v2 + 104LL))(*v2, 2, a1);
  }
}

