/* Address: 0x140198dc0 | Name: sub_140198DC0 | Size: 89 bytes */
void __fastcall sub_140198DC0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  if ( dword_140404A6C[19063857] )
  {
    v6 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
    (**(void (__fastcall ***)(_QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD))*v6)(*v6, a1, a2, a3, 0, 0);
  }
}

