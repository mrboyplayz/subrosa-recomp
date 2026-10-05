/* Address: 0x140198820 | Name: sub_140198820 | Size: 148 bytes */
void __fastcall sub_140198820(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  char *v12; // rax
  __int64 v13; // rdi
  char v14; // cl
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140404A6C[19063857] )
  {
    v8 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    v9 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)*v8 + 32LL))(
                      *v8,
                      v15,
                      a3,
                      a4);
    v10 = *v9;
    *a1 = *v9;
    v11 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
    v12 = (char *)(*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 56LL))(*v11, v10);
    v13 = a2 - (_QWORD)v12;
    do
    {
      v14 = *v12;
      v12[v13] = *v12;
      ++v12;
    }
    while ( v14 );
  }
}

