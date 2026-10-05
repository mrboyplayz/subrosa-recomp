/* Address: 0x1400e4190 | Name: sub_1400E4190 | Size: 332 bytes */
void __fastcall sub_1400E4190(__int64 (__fastcall *a1)(const char *))
{
  if ( unk_140404128 )
  {
    unk_140404130 = a1("glGenQueries");
    unk_140404138 = a1("glDeleteQueries");
    unk_140404140 = a1("glIsQuery");
    unk_140404148 = a1("glBeginQuery");
    unk_140404150 = a1("glEndQuery");
    unk_140404158 = a1("glGetQueryiv");
    unk_140404160 = a1("glGetQueryObjectiv");
    unk_140404168 = a1("glGetQueryObjectuiv");
    unk_140404170 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a1("glBindBuffer");
    unk_140404178 = a1("glDeleteBuffers");
    unk_140404180 = a1("glGenBuffers");
    unk_140404188 = a1("glIsBuffer");
    unk_140404190 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glBufferData");
    unk_140404198 = a1("glBufferSubData");
    unk_1404041A0 = a1("glGetBufferSubData");
    unk_1404041A8 = a1("glMapBuffer");
    unk_1404041B0 = a1("glUnmapBuffer");
    unk_1404041B8 = a1("glGetBufferParameteriv");
    unk_1404041C0 = a1("glGetBufferPointerv");
  }
}

