/* Address: 0x1400a6700 | Name: sub_1400A6700 | Size: 1772 bytes */
__int64 __fastcall sub_1400A6700(__int64 (__fastcall *a1)(const char *))
{
  unsigned int v2; // edi
  __int64 (__fastcall *v3)(__int64); // rax

  v2 = 0;
  dword_140404A68 = 0;
  v3 = (__int64 (__fastcall *)(__int64))a1("glGetString");
  qword_140302FA8 = (__int64)v3;
  if ( !v3 || !v3(7938) )
    return 0;
  sub_140091880();
  sub_1400E3BC0(a1);
  if ( dword_140302FF0 )
  {
    qword_140302FF8 = a1("glDrawArrays");
    MEMORY[0x140404010] = a1("glDrawElements");
    MEMORY[0x140404018] = a1("glPolygonOffset");
    MEMORY[0x140404020] = a1("glCopyTexImage1D");
    MEMORY[0x140404028] = a1("glCopyTexImage2D");
    MEMORY[0x140404030] = a1("glCopyTexSubImage1D");
    MEMORY[0x140404038] = a1("glCopyTexSubImage2D");
    MEMORY[0x140404040] = a1("glTexSubImage1D");
    MEMORY[0x140404048] = a1("glTexSubImage2D");
    unk_140404050 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1("glBindTexture");
    unk_140404058 = a1("glDeleteTextures");
    unk_140404060 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1("glGenTextures");
    unk_140404068 = a1("glIsTexture");
  }
  if ( dword_140302FF4 )
  {
    unk_140404070 = a1("glDrawRangeElements");
    unk_140404078 = a1("glTexImage3D");
    unk_140404080 = a1("glTexSubImage3D");
    unk_140404088 = a1("glCopyTexSubImage3D");
  }
  if ( unk_140404090 )
  {
    unk_140404098 = a1("glActiveTexture");
    unk_1404040A0 = a1("glSampleCoverage");
    unk_1404040A8 = a1("glCompressedTexImage3D");
    unk_1404040B0 = a1("glCompressedTexImage2D");
    unk_1404040B8 = a1("glCompressedTexImage1D");
    unk_1404040C0 = a1("glCompressedTexSubImage3D");
    unk_1404040C8 = a1("glCompressedTexSubImage2D");
    unk_1404040D0 = a1("glCompressedTexSubImage1D");
    unk_1404040D8 = a1("glGetCompressedTexImage");
  }
  if ( unk_140404094 )
  {
    unk_1404040E0 = a1("glBlendFuncSeparate");
    unk_1404040E8 = a1("glMultiDrawArrays");
    unk_1404040F0 = a1("glMultiDrawElements");
    unk_1404040F8 = a1("glPointParameterf");
    unk_140404100 = a1("glPointParameterfv");
    unk_140404108 = a1("glPointParameteri");
    unk_140404110 = a1("glPointParameteriv");
    unk_140404118 = a1("glBlendColor");
    unk_140404120 = a1("glBlendEquation");
  }
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
  sub_1400E42E0(a1);
  if ( unk_1404044B0 )
  {
    unk_1404044B8 = a1("glUniformMatrix2x3fv");
    unk_1404044C0 = a1("glUniformMatrix3x2fv");
    unk_1404044C8 = a1("glUniformMatrix2x4fv");
    unk_1404044D0 = a1("glUniformMatrix4x2fv");
    unk_1404044D8 = a1("glUniformMatrix3x4fv");
    unk_1404044E0 = a1("glUniformMatrix4x3fv");
  }
  sub_1400E4950(a1);
  if ( unk_140404788 )
  {
    unk_140404790 = a1("glDrawArraysInstanced");
    unk_140404798 = a1("glDrawElementsInstanced");
    unk_1404047A0 = a1("glTexBuffer");
    unk_1404047A8 = a1("glPrimitiveRestartIndex");
    unk_1404047B0 = a1("glCopyBufferSubData");
    unk_1404047B8 = a1("glGetUniformIndices");
    unk_1404047C0 = a1("glGetActiveUniformsiv");
    unk_1404047C8 = a1("glGetActiveUniformName");
    unk_1404047D0 = a1("glGetUniformBlockIndex");
    unk_1404047D8 = a1("glGetActiveUniformBlockiv");
    unk_1404047E0 = a1("glGetActiveUniformBlockName");
    unk_1404047E8 = a1("glUniformBlockBinding");
    unk_140404528 = a1("glBindBufferRange");
    unk_140404530 = a1("glBindBufferBase");
    unk_1404044F8 = a1("glGetIntegeri_v");
  }
  if ( unk_14040478C )
  {
    unk_1404047F0 = a1("glDrawElementsBaseVertex");
    unk_1404047F8 = a1("glDrawRangeElementsBaseVertex");
    unk_140404800 = a1("glDrawElementsInstancedBaseVertex");
    unk_140404808 = a1("glMultiDrawElementsBaseVertex");
    unk_140404810 = a1("glProvokingVertex");
    unk_140404818 = a1("glFenceSync");
    unk_140404820 = a1("glIsSync");
    unk_140404828 = a1("glDeleteSync");
    unk_140404830 = a1("glClientWaitSync");
    unk_140404838 = a1("glWaitSync");
    unk_140404840 = a1("glGetInteger64v");
    unk_140404848 = a1("glGetSynciv");
    unk_140404850 = a1("glGetInteger64i_v");
    unk_140404858 = a1("glGetBufferParameteri64v");
    unk_140404860 = a1("glFramebufferTexture");
    unk_140404868 = a1("glTexImage2DMultisample");
    unk_140404870 = a1("glTexImage3DMultisample");
    unk_140404878 = a1("glGetMultisamplefv");
    unk_140404880 = a1("glSampleMaski");
  }
  sub_1400E5110(a1);
  if ( !(unsigned int)sub_140091BA0() )
    return 0;
  if ( unk_14040488C )
    unk_140404A60 = a1("glClipControl");
  if ( dword_140404A68 )
    return 1;
  return v2;
}

