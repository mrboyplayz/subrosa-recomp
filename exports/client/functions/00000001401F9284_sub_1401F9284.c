/* Address: 0x1401f9284 | Name: sub_1401F9284 | Size: 369 bytes */
__int64 __fastcall sub_1401F9284()
{
  unsigned int v0; // ebx
  char v1; // di
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  void (__fastcall **v6)(_QWORD, __int64); // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // [rsp+20h] [rbp-18h]

  if ( !sub_1401F8F20(1) )
  {
    sub_1401FBFB8(7);
    goto LABEL_19;
  }
  v1 = 0;
  v13 = 0;
  LOBYTE(v0) = sub_1401F8DB4();
  if ( dword_140404A6C[19064471] == 1 )
  {
LABEL_19:
    sub_1401FBFB8(7);
    goto LABEL_20;
  }
  if ( dword_140404A6C[19064471] )
  {
    v1 = 1;
    v13 = 1;
  }
  else
  {
    dword_140404A6C[19064471] = 1;
    if ( sub_140247A64((_PIFV *)&First, (_PIFV *)&Last) )
      return 255;
    sub_140247A00((#92 *)&unk_14026E6B0, (#92 *)&unk_14026E6C8);
    dword_140404A6C[19064471] = 2;
  }
  sub_1401F9090(v0);
  v4 = (_QWORD *)sub_1401FC3B8(v3);
  v6 = (void (__fastcall **)(_QWORD, __int64))v4;
  if ( *v4 && sub_1401F8FF8((__int64)v4) )
    (*v6)(0, 2);
  v7 = (_QWORD *)sub_1401FC3C0(v5);
  v9 = v7;
  if ( *v7 && sub_1401F8FF8((__int64)v7) )
    sub_140245614(*v9);
  v10 = (unsigned __int16)sub_1401FC104(v8);
  v12 = unknown_libname_785(v11);
  v0 = WinMain(0x140000000uLL, 0, v12, v10, v13);
  if ( !is_managed_app() )
LABEL_20:
    exit(v0);
  if ( !v1 )
    MEMORY[0x1402455F0]();
  sub_1401F90B4(1, 0);
  return v0;
}

