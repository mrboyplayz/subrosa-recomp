/* Address: 0x1400e3bc0 | Name: sub_1400E3BC0 | Size: 796 bytes */
void __fastcall sub_1400E3BC0(__int64 (__fastcall *a1)(const char *))
{
  if ( dword_140404A6C[18215057] )
  {
    *(_QWORD *)&dword_140404A6C[18215059] = a1("glCullFace");
    *(_QWORD *)&dword_140404A6C[18215061] = a1("glFrontFace");
    *(_QWORD *)&dword_140404A6C[18215063] = a1("glHint");
    *(_QWORD *)&dword_140404A6C[18215065] = a1("glLineWidth");
    *(_QWORD *)&dword_140404A6C[18215067] = a1("glPointSize");
    *(_QWORD *)&dword_140404A6C[18215069] = a1("glPolygonMode");
    *(_QWORD *)&dword_140404A6C[18215071] = a1("glScissor");
    *(_QWORD *)&dword_140404A6C[18215073] = a1("glTexParameterf");
    *(_QWORD *)&dword_140404A6C[18215075] = a1("glTexParameterfv");
    *(_QWORD *)&dword_140404A6C[18215077] = a1("glTexParameteri");
    *(_QWORD *)&dword_140404A6C[18215079] = a1("glTexParameteriv");
    *(_QWORD *)&dword_140404A6C[18215081] = a1("glTexImage1D");
    *(_QWORD *)&dword_140404A6C[18215083] = a1("glTexImage2D");
    *(_QWORD *)&dword_140404A6C[18215085] = a1("glDrawBuffer");
    *(_QWORD *)&dword_140404A6C[18215087] = a1("glClear");
    *(_QWORD *)&dword_140404A6C[18215089] = a1("glClearColor");
    *(_QWORD *)&dword_140404A6C[18215091] = a1("glClearStencil");
    *(_QWORD *)&dword_140404A6C[18215093] = a1("glClearDepth");
    *(_QWORD *)&dword_140404A6C[18215095] = a1("glStencilMask");
    *(_QWORD *)&dword_140404A6C[18215097] = a1("glColorMask");
    *(_QWORD *)&dword_140404A6C[18215099] = a1("glDepthMask");
    *(_QWORD *)&dword_140404A6C[18215101] = a1("glDisable");
    *(_QWORD *)&dword_140404A6C[18215103] = a1("glEnable");
    *(_QWORD *)&dword_140404A6C[18215105] = a1("glFinish");
    *(_QWORD *)&dword_140404A6C[18215107] = a1("glFlush");
    *(_QWORD *)&dword_140404A6C[18215109] = a1("glBlendFunc");
    qword_140302F40 = a1("glLogicOp");
    qword_140302F48 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a1("glStencilFunc");
    qword_140302F50 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a1("glStencilOp");
    qword_140302F58 = (__int64 (__fastcall *)(_QWORD))a1("glDepthFunc");
    qword_140302F60 = a1("glPixelStoref");
    qword_140302F68 = a1("glPixelStorei");
    qword_140302F70 = a1("glReadBuffer");
    qword_140302F78 = a1("glReadPixels");
    qword_140302F80 = a1("glGetBooleanv");
    qword_140302F88 = a1("glGetDoublev");
    qword_140302F90 = a1("glGetError");
    qword_140302F98 = a1("glGetFloatv");
    qword_140302FA0 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1("glGetIntegerv");
    qword_140302FA8 = (__int64 (__fastcall *)(_QWORD))a1("glGetString");
    qword_140302FB0 = a1("glGetTexImage");
    qword_140302FB8 = a1("glGetTexParameterfv");
    qword_140302FC0 = a1("glGetTexParameteriv");
    qword_140302FC8 = a1("glGetTexLevelParameterfv");
    qword_140302FD0 = a1("glGetTexLevelParameteriv");
    qword_140302FD8 = a1("glIsEnabled");
    qword_140302FE0 = a1("glDepthRange");
    qword_140302FE8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glViewport");
  }
}

