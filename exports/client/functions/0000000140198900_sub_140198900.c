/* Address: 0x140198900 | Name: sub_140198900 | Size: 147 bytes */
void __fastcall sub_140198900(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  char *v11; // rax
  __int64 v12; // rdi
  char v13; // cl
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140404A6C[19063857] )
  {
    v8 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    v9 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)*v8 + 32LL))(
                      *v8,
                      v14,
                      a2,
                      a3);
    v10 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    v11 = (char *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v10 + 360LL))(*v10, v9, a4);
    v12 = a1 - (_QWORD)v11;
    do
    {
      v13 = *v11;
      v11[v12] = *v11;
      ++v11;
    }
    while ( v13 );
  }
}

