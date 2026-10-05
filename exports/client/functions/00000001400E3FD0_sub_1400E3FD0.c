/* Address: 0x1400e3fd0 | Name: sub_1400E3FD0 | Size: 88 bytes */
void __fastcall sub_1400E3FD0(__int64 (__fastcall *a1)(const char *))
{
  if ( dword_140302FF4 )
  {
    unk_140404070 = a1("glDrawRangeElements");
    unk_140404078 = (double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD))a1("glTexImage3D");
    unk_140404080 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD))a1("glTexSubImage3D");
    unk_140404088 = a1("glCopyTexSubImage3D");
  }
}

