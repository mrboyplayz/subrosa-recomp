/* Address: 0x1400e3ee0 | Name: sub_1400E3EE0 | Size: 236 bytes */
void __fastcall sub_1400E3EE0(__int64 (__fastcall *a1)(const char *))
{
  if ( dword_140302FF0 )
  {
    qword_140302FF8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a1("glDrawArrays");
    *(_QWORD *)&flt_140384000[131076] = a1("glDrawElements");
    *(_QWORD *)&flt_140384000[131078] = a1("glPolygonOffset");
    *(_QWORD *)&flt_140384000[131080] = a1("glCopyTexImage1D");
    *(_QWORD *)&flt_140384000[131082] = a1("glCopyTexImage2D");
    *(_QWORD *)&flt_140384000[131084] = a1("glCopyTexSubImage1D");
    *(_QWORD *)&flt_140384000[131086] = a1("glCopyTexSubImage2D");
    *(_QWORD *)&flt_140384000[131088] = a1("glTexSubImage1D");
    *(_QWORD *)&flt_140384000[131090] = a1("glTexSubImage2D");
    unk_140404050 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1("glBindTexture");
    unk_140404058 = a1("glDeleteTextures");
    unk_140404060 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1("glGenTextures");
    unk_140404068 = a1("glIsTexture");
  }
}

