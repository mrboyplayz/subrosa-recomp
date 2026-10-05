/* Address: 0x140198c60 | Name: sub_140198C60 | Size: 192 bytes */
__int64 __fastcall sub_140198C60(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  unsigned __int8 v12; // al
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF

  HIWORD(v13) = BYTE6(v13) & 0xF;
  v4 = 0;
  v13 &= 0xFFF0000000000000uLL;
  if ( !dword_140404A6C[19063857] )
    return 0;
  v10 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v10 + 8LL))(*v10, a3, 0) )
  {
    v11 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64 *, _DWORD))(*(_QWORD *)*v11 + 16LL))(
            *v11,
            a2,
            a4,
            a3,
            &v13,
            0);
    v4 = v12;
    if ( v12 )
      *a1 = v13;
  }
  return v4;
}

