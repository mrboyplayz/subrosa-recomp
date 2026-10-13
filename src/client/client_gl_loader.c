#include "shared_client.h"


//----- (00000001400A6700) ----------------------------------------------------
__int64            sub_1400A6700(__int64 (           *a1)(     char *))
{
  unsigned int v2; // edi
  __int64 (           *v3)(_QWORD); // rax

  v2 = 0;
  *(_QWORD *)&dword_140404A68 = 0;
  v3 = (__int64 (           *)(_QWORD))a1("glGetString");
  qword_140302FA8 = v3;
  if ( !v3 || !v3(7938) )
    return 0;
  sub_140091880();
  sub_1400E3BC0(a1);
  if ( dword_140302FF0 )
  {
    qword_140302FF8 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glDrawArrays");
    *(_QWORD *)&flt_140384000[131076] = a1("glDrawElements");
    *(_QWORD *)&flt_140384000[131078] = a1("glPolygonOffset");
    *(_QWORD *)&flt_140384000[131080] = a1("glCopyTexImage1D");
    *(_QWORD *)&flt_140384000[131082] = a1("glCopyTexImage2D");
    *(_QWORD *)&flt_140384000[131084] = a1("glCopyTexSubImage1D");
    *(_QWORD *)&flt_140384000[131086] = a1("glCopyTexSubImage2D");
    *(_QWORD *)&flt_140384000[131088] = a1("glTexSubImage1D");
    *(_QWORD *)&flt_140384000[131090] = a1("glTexSubImage2D");
    qword_140404050 = (double (           *)(_QWORD, _QWORD))a1("glBindTexture");
    unk_140404058 = a1("glDeleteTextures");
    unk_140404060 = (__int64 (           *)(_QWORD, _QWORD))a1("glGenTextures");
    unk_140404068 = a1("glIsTexture");
  }
  if ( dword_140302FF4 )
  {
    unk_140404070 = a1("glDrawRangeElements");
    unk_140404078 = (double (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD))a1("glTexImage3D");
    unk_140404080 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD))a1("glTexSubImage3D");
    unk_140404088 = a1("glCopyTexSubImage3D");
  }
  if ( unk_140404090 )
  {
    unk_140404098 = (double (           *)(_QWORD))a1("glActiveTexture");
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
    qword_140404170 = (double (           *)(_QWORD, _QWORD, _QWORD))a1("glBindBuffer");
    unk_140404178 = a1("glDeleteBuffers");
    unk_140404180 = (__int64 (           *)(_QWORD, _QWORD))a1("glGenBuffers");
    unk_140404188 = a1("glIsBuffer");
    unk_140404190 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glBufferData");
    qword_140404198 = (double (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glBufferSubData");
    unk_1404041A0 = a1("glGetBufferSubData");
    unk_1404041A8 = a1("glMapBuffer");
    unk_1404041B0 = a1("glUnmapBuffer");
    unk_1404041B8 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glGetBufferParameteriv");
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
    unk_1404047B0 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1("glCopyBufferSubData");
    unk_1404047B8 = a1("glGetUniformIndices");
    unk_1404047C0 = a1("glGetActiveUniformsiv");
    unk_1404047C8 = a1("glGetActiveUniformName");
    unk_1404047D0 = a1("glGetUniformBlockIndex");
    unk_1404047D8 = a1("glGetActiveUniformBlockiv");
    unk_1404047E0 = a1("glGetActiveUniformBlockName");
    unk_1404047E8 = a1("glUniformBlockBinding");
    unk_140404528 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1("glBindBufferRange");
    unk_140404530 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glBindBufferBase");
    unk_1404044F8 = a1("glGetIntegeri_v");
  }
  if ( unk_14040478C )
  {
    unk_1404047F0 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glDrawElementsBaseVertex");
    unk_1404047F8 = a1("glDrawRangeElementsBaseVertex");
    unk_140404800 = a1("glDrawElementsInstancedBaseVertex");
    unk_140404808 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))a1(
                                                                                              "glMultiDrawElementsBaseVertex");
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
    unk_140404A60 = (__int64 (           *)(_QWORD, _QWORD))a1("glClipControl");
  if ( dword_140404A68 || dword_140404A6C[0] )
    return 1;
  return v2;
}

// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 140302FF0: using guessed type int dword_140302FF0;
// 140302FF4: using guessed type int dword_140302FF4;
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404018: using guessed type __int64 (*)(void);
// 140404020: using guessed type float;
// 140404028: using guessed type float;
// 140404030: using guessed type float;
// 140404038: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD, _QWORD, _DWORD);
// 140404040: using guessed type float;
// 140404048: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);
// 140404078: using guessed type double (__fastcall *unk_140404078)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404080: using guessed type __int64 (__fastcall *unk_140404080)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404180: using guessed type __int64 (__fastcall *unk_140404180)(_QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041B8: using guessed type __int64 (__fastcall *unk_1404041B8)(_QWORD, _QWORD, _QWORD);
// 140404528: using guessed type __int64 (__fastcall *unk_140404528)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404530: using guessed type __int64 (__fastcall *unk_140404530)(_QWORD, _QWORD, _QWORD);
// 1404047B0: using guessed type __int64 (__fastcall *unk_1404047B0)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 1404047F0: using guessed type __int64 (__fastcall *unk_1404047F0)(_QWORD, _QWORD, _QWORD);
// 140404808: using guessed type __int64 (__fastcall *unk_140404808)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD);
// 140404A60: using guessed type __int64 (__fastcall *unk_140404A60)(_QWORD, _QWORD);
// 140404A68: using guessed type int dword_140404A68;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400E3BC0) ----------------------------------------------------
void            sub_1400E3BC0(__int64 (           *a1)(     char *))
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
    qword_140302F48 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glStencilFunc");
    qword_140302F50 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glStencilOp");
    qword_140302F58 = (double (           *)(_QWORD))a1("glDepthFunc");
    qword_140302F60 = a1("glPixelStoref");
    qword_140302F68 = a1("glPixelStorei");
    qword_140302F70 = (__int64 (           *)(_QWORD))a1("glReadBuffer");
    qword_140302F78 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))a1("glReadPixels");
    qword_140302F80 = a1("glGetBooleanv");
    qword_140302F88 = a1("glGetDoublev");
    qword_140302F90 = a1("glGetError");
    qword_140302F98 = a1("glGetFloatv");
    qword_140302FA0 = (__int64 (           *)(_QWORD, _QWORD))a1("glGetIntegerv");
    qword_140302FA8 = (__int64 (           *)(_QWORD))a1("glGetString");
    qword_140302FB0 = a1("glGetTexImage");
    qword_140302FB8 = a1("glGetTexParameterfv");
    qword_140302FC0 = a1("glGetTexParameteriv");
    qword_140302FC8 = a1("glGetTexLevelParameterfv");
    qword_140302FD0 = a1("glGetTexLevelParameteriv");
    qword_140302FD8 = a1("glIsEnabled");
    qword_140302FE0 = a1("glDepthRange");
    qword_140302FE8 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glViewport");
  }
}

// 140302F40: using guessed type __int64 qword_140302F40;
// 140302F48: using guessed type __int64 (__fastcall *qword_140302F48)(_QWORD, _QWORD, _QWORD);
// 140302F50: using guessed type __int64 (__fastcall *qword_140302F50)(_QWORD, _QWORD, _QWORD);
// 140302F58: using guessed type double (__fastcall *qword_140302F58)(_QWORD);
// 140302F60: using guessed type __int64 qword_140302F60;
// 140302F68: using guessed type __int64 qword_140302F68;
// 140302F70: using guessed type __int64 (__fastcall *qword_140302F70)(_QWORD);
// 140302F78: using guessed type __int64 (__fastcall *qword_140302F78)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD);
// 140302F80: using guessed type __int64 qword_140302F80;
// 140302F88: using guessed type __int64 qword_140302F88;
// 140302F90: using guessed type __int64 qword_140302F90;
// 140302F98: using guessed type __int64 qword_140302F98;
// 140302FA0: using guessed type __int64 (__fastcall *qword_140302FA0)(_QWORD, _QWORD);
// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 140302FB0: using guessed type __int64 qword_140302FB0;
// 140302FB8: using guessed type __int64 qword_140302FB8;
// 140302FC0: using guessed type __int64 qword_140302FC0;
// 140302FC8: using guessed type __int64 qword_140302FC8;
// 140302FD0: using guessed type __int64 qword_140302FD0;
// 140302FD8: using guessed type __int64 qword_140302FD8;
// 140302FE0: using guessed type __int64 qword_140302FE0;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CB8: using guessed type unsigned int;
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980CC8: using guessed type unsigned int;
// 144980CD0: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD);
// 144980CD8: using guessed type unsigned int;
// 144980CE0: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD);
// 144980CE8: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980CF8: using guessed type unsigned int;
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D08: using guessed type unsigned int;
// 144980D10: using guessed type unsigned int;
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 144980D20: using guessed type unsigned int;
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980D38: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D40: using guessed type __int64 (*)(void);
// 144980D48: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D70: using guessed type unsigned int;
// 144980D78: using guessed type unsigned int;
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (00000001400E3EE0) ----------------------------------------------------
void            sub_1400E3EE0(__int64 (           *a1)(     char *))
{
  if ( dword_140302FF0 )
  {
    qword_140302FF8 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glDrawArrays");
    *(_QWORD *)&flt_140384000[131076] = a1("glDrawElements");
    *(_QWORD *)&flt_140384000[131078] = a1("glPolygonOffset");
    *(_QWORD *)&flt_140384000[131080] = a1("glCopyTexImage1D");
    *(_QWORD *)&flt_140384000[131082] = a1("glCopyTexImage2D");
    *(_QWORD *)&flt_140384000[131084] = a1("glCopyTexSubImage1D");
    *(_QWORD *)&flt_140384000[131086] = a1("glCopyTexSubImage2D");
    *(_QWORD *)&flt_140384000[131088] = a1("glTexSubImage1D");
    *(_QWORD *)&flt_140384000[131090] = a1("glTexSubImage2D");
    qword_140404050 = (double (           *)(_QWORD, _QWORD))a1("glBindTexture");
    unk_140404058 = a1("glDeleteTextures");
    unk_140404060 = (__int64 (           *)(_QWORD, _QWORD))a1("glGenTextures");
    unk_140404068 = a1("glIsTexture");
  }
}

// 140302FF0: using guessed type int dword_140302FF0;
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404018: using guessed type __int64 (*)(void);
// 140404020: using guessed type float;
// 140404028: using guessed type float;
// 140404030: using guessed type float;
// 140404038: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD, _QWORD, _DWORD);
// 140404040: using guessed type float;
// 140404048: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);

//----- (00000001400E3FD0) ----------------------------------------------------
void            sub_1400E3FD0(__int64 (           *a1)(     char *))
{
  if ( dword_140302FF4 )
  {
    unk_140404070 = a1("glDrawRangeElements");
    unk_140404078 = (double (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD))a1("glTexImage3D");
    unk_140404080 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD))a1("glTexSubImage3D");
    unk_140404088 = a1("glCopyTexSubImage3D");
  }
}

// 140302FF4: using guessed type int dword_140302FF4;
// 140404078: using guessed type double (__fastcall *unk_140404078)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404080: using guessed type __int64 (__fastcall *unk_140404080)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);

//----- (00000001400E4030) ----------------------------------------------------
void            sub_1400E4030(__int64 (           *a1)(     char *))
{
  if ( unk_140404090 )
  {
    unk_140404098 = (double (           *)(_QWORD))a1("glActiveTexture");
    unk_1404040A0 = a1("glSampleCoverage");
    unk_1404040A8 = a1("glCompressedTexImage3D");
    unk_1404040B0 = a1("glCompressedTexImage2D");
    unk_1404040B8 = a1("glCompressedTexImage1D");
    unk_1404040C0 = a1("glCompressedTexSubImage3D");
    unk_1404040C8 = a1("glCompressedTexSubImage2D");
    unk_1404040D0 = a1("glCompressedTexSubImage1D");
    unk_1404040D8 = a1("glGetCompressedTexImage");
  }
}

// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);

//----- (00000001400E40E0) ----------------------------------------------------
void            sub_1400E40E0(__int64 (           *a1)(     char *))
{
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
}


//----- (00000001400E4190) ----------------------------------------------------
void            sub_1400E4190(__int64 (           *a1)(     char *))
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
    qword_140404170 = (double (           *)(_QWORD, _QWORD, _QWORD))a1("glBindBuffer");
    unk_140404178 = a1("glDeleteBuffers");
    unk_140404180 = (__int64 (           *)(_QWORD, _QWORD))a1("glGenBuffers");
    unk_140404188 = a1("glIsBuffer");
    unk_140404190 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glBufferData");
    qword_140404198 = (double (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glBufferSubData");
    unk_1404041A0 = a1("glGetBufferSubData");
    unk_1404041A8 = a1("glMapBuffer");
    unk_1404041B0 = a1("glUnmapBuffer");
    unk_1404041B8 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glGetBufferParameteriv");
    unk_1404041C0 = a1("glGetBufferPointerv");
  }
}

// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404180: using guessed type __int64 (__fastcall *unk_140404180)(_QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041B8: using guessed type __int64 (__fastcall *unk_1404041B8)(_QWORD, _QWORD, _QWORD);

//----- (00000001400E42E0) ----------------------------------------------------
void            sub_1400E42E0(__int64 (           *a1)(     char *))
{
  if ( unk_14040412C )
  {
    unk_1404041C8 = a1("glBlendEquationSeparate");
    unk_1404041D0 = a1("glDrawBuffers");
    unk_1404041D8 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glStencilOpSeparate");
    unk_1404041E0 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glStencilFuncSeparate");
    unk_1404041E8 = (__int64 (           *)(_QWORD, _QWORD))a1("glStencilMaskSeparate");
    unk_1404041F0 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glAttachShader");
    unk_1404041F8 = a1("glBindAttribLocation");
    unk_140404200 = (__int64 (           *)(_QWORD, _QWORD))a1("glCompileShader");
    unk_140404208 = (__int64 (*)(void))a1("glCreateProgram");
    unk_140404210 = (__int64 (           *)(_QWORD))a1("glCreateShader");
    unk_140404218 = a1("glDeleteProgram");
    unk_140404220 = a1("glDeleteShader");
    unk_140404228 = a1("glDetachShader");
    qword_140404230 = (double (           *)(_QWORD))a1("glDisableVertexAttribArray");
    qword_140404238 = (__int64 (           *)(_QWORD))a1("glEnableVertexAttribArray");
    unk_140404240 = a1("glGetActiveAttrib");
    unk_140404248 = a1("glGetActiveUniform");
    unk_140404250 = a1("glGetAttachedShaders");
    unk_140404258 = a1("glGetAttribLocation");
    unk_140404260 = a1("glGetProgramiv");
    unk_140404268 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glGetProgramInfoLog");
    unk_140404270 = a1("glGetShaderiv");
    unk_140404278 = a1("glGetShaderInfoLog");
    unk_140404280 = a1("glGetShaderSource");
    unk_140404288 = (__int64 (           *)(_QWORD, _QWORD))a1("glGetUniformLocation");
    unk_140404290 = a1("glGetUniformfv");
    unk_140404298 = a1("glGetUniformiv");
    unk_1404042A0 = a1("glGetVertexAttribdv");
    unk_1404042A8 = a1("glGetVertexAttribfv");
    unk_1404042B0 = a1("glGetVertexAttribiv");
    unk_1404042B8 = a1("glGetVertexAttribPointerv");
    unk_1404042C0 = a1("glIsProgram");
    unk_1404042C8 = a1("glIsShader");
    unk_1404042D0 = (__int64 (           *)(_QWORD))a1("glLinkProgram");
    unk_1404042D8 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glShaderSource");
    qword_1404042E0 = (double (           *)(_QWORD))a1("glUseProgram");
    unk_1404042E8 = (__int64 (           *)(_QWORD))a1("glUniform1f");
    unk_1404042F0 = a1("glUniform2f");
    unk_1404042F8 = a1("glUniform3f");
    unk_140404300 = a1("glUniform4f");
    qword_140404308 = (__int64 (           *)(_QWORD, _QWORD))a1("glUniform1i");
    unk_140404310 = a1("glUniform2i");
    unk_140404318 = a1("glUniform3i");
    unk_140404320 = a1("glUniform4i");
    unk_140404328 = a1("glUniform1fv");
    unk_140404330 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glUniform2fv");
    qword_140404338 = (double (           *)(_QWORD, _QWORD, _QWORD))a1("glUniform3fv");
    unk_140404340 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glUniform4fv");
    unk_140404348 = a1("glUniform1iv");
    unk_140404350 = a1("glUniform2iv");
    unk_140404358 = a1("glUniform3iv");
    unk_140404360 = a1("glUniform4iv");
    unk_140404368 = a1("glUniformMatrix2fv");
    unk_140404370 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glUniformMatrix3fv");
    qword_140404378 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glUniformMatrix4fv");
    unk_140404380 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glValidateProgram");
    unk_140404388 = a1("glVertexAttrib1d");
    unk_140404390 = a1("glVertexAttrib1dv");
    unk_140404398 = a1("glVertexAttrib1f");
    unk_1404043A0 = a1("glVertexAttrib1fv");
    unk_1404043A8 = a1("glVertexAttrib1s");
    unk_1404043B0 = a1("glVertexAttrib1sv");
    unk_1404043B8 = a1("glVertexAttrib2d");
    unk_1404043C0 = a1("glVertexAttrib2dv");
    unk_1404043C8 = (__int64 (           *)(_QWORD))a1("glVertexAttrib2f");
    unk_1404043D0 = a1("glVertexAttrib2fv");
    unk_1404043D8 = a1("glVertexAttrib2s");
    unk_1404043E0 = a1("glVertexAttrib2sv");
    unk_1404043E8 = a1("glVertexAttrib3d");
    unk_1404043F0 = a1("glVertexAttrib3dv");
    unk_1404043F8 = (double (           *)(_QWORD))a1("glVertexAttrib3f");
    unk_140404400 = (double (           *)(_QWORD, _QWORD))a1("glVertexAttrib3fv");
    unk_140404408 = a1("glVertexAttrib3s");
    unk_140404410 = a1("glVertexAttrib3sv");
    unk_140404418 = a1("glVertexAttrib4Nbv");
    unk_140404420 = a1("glVertexAttrib4Niv");
    unk_140404428 = a1("glVertexAttrib4Nsv");
    unk_140404430 = a1("glVertexAttrib4Nub");
    unk_140404438 = a1("glVertexAttrib4Nubv");
    unk_140404440 = a1("glVertexAttrib4Nuiv");
    unk_140404448 = a1("glVertexAttrib4Nusv");
    unk_140404450 = a1("glVertexAttrib4bv");
    unk_140404458 = a1("glVertexAttrib4d");
    unk_140404460 = a1("glVertexAttrib4dv");
    unk_140404468 = (double (           *)(_QWORD))a1("glVertexAttrib4f");
    unk_140404470 = (__int64 (           *)(_QWORD, _QWORD))a1("glVertexAttrib4fv");
    unk_140404478 = a1("glVertexAttrib4iv");
    unk_140404480 = a1("glVertexAttrib4s");
    unk_140404488 = a1("glVertexAttrib4sv");
    unk_140404490 = a1("glVertexAttrib4ubv");
    unk_140404498 = a1("glVertexAttrib4uiv");
    unk_1404044A0 = a1("glVertexAttrib4usv");
    qword_1404044A8 = (double (           *)(_QWORD, _QWORD, _QWORD))a1("glVertexAttribPointer");
  }
}

// 1404041D8: using guessed type __int64 (__fastcall *unk_1404041D8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041E0: using guessed type __int64 (__fastcall *unk_1404041E0)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041E8: using guessed type __int64 (__fastcall *unk_1404041E8)(_QWORD, _QWORD);
// 1404041F0: using guessed type __int64 (__fastcall *unk_1404041F0)(_QWORD, _QWORD, _QWORD);
// 140404200: using guessed type __int64 (__fastcall *unk_140404200)(_QWORD, _QWORD);
// 140404208: using guessed type __int64 (*unk_140404208)(void);
// 140404210: using guessed type __int64 (__fastcall *unk_140404210)(_QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 140404268: using guessed type __int64 (__fastcall *unk_140404268)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404288: using guessed type __int64 (__fastcall *unk_140404288)(_QWORD, _QWORD);
// 1404042D0: using guessed type __int64 (__fastcall *unk_1404042D0)(_QWORD);
// 1404042D8: using guessed type __int64 (__fastcall *unk_1404042D8)(_QWORD, _QWORD, _QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 1404042E8: using guessed type __int64 (__fastcall *unk_1404042E8)(_QWORD);
// 140404308: using guessed type __int64 (__fastcall *qword_140404308)(_QWORD, _QWORD);
// 140404330: using guessed type __int64 (__fastcall *unk_140404330)(_QWORD, _QWORD, _QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404340: using guessed type __int64 (__fastcall *unk_140404340)(_QWORD, _QWORD, _QWORD);
// 140404370: using guessed type __int64 (__fastcall *unk_140404370)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404380: using guessed type __int64 (__fastcall *unk_140404380)(_QWORD, _QWORD, _QWORD);
// 1404043C8: using guessed type __int64 (__fastcall *unk_1404043C8)(_QWORD);
// 1404043F8: using guessed type double (__fastcall *unk_1404043F8)(_QWORD);
// 140404400: using guessed type double (__fastcall *unk_140404400)(_QWORD, _QWORD);
// 140404468: using guessed type double (__fastcall *unk_140404468)(_QWORD);
// 140404470: using guessed type __int64 (__fastcall *unk_140404470)(_QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);

//----- (00000001400E48D0) ----------------------------------------------------
void            sub_1400E48D0(__int64 (           *a1)(     char *))
{
  if ( unk_1404044B0 )
  {
    unk_1404044B8 = a1("glUniformMatrix2x3fv");
    unk_1404044C0 = a1("glUniformMatrix3x2fv");
    unk_1404044C8 = a1("glUniformMatrix2x4fv");
    unk_1404044D0 = a1("glUniformMatrix4x2fv");
    unk_1404044D8 = a1("glUniformMatrix3x4fv");
    unk_1404044E0 = a1("glUniformMatrix4x3fv");
  }
}


//----- (00000001400E4950) ----------------------------------------------------
void            sub_1400E4950(__int64 (           *a1)(     char *))
{
  if ( unk_1404044B4 )
  {
    unk_1404044E8 = a1("glColorMaski");
    unk_1404044F0 = a1("glGetBooleani_v");
    unk_1404044F8 = a1("glGetIntegeri_v");
    unk_140404500 = a1("glEnablei");
    unk_140404508 = a1("glDisablei");
    unk_140404510 = a1("glIsEnabledi");
    unk_140404518 = (__int64 (           *)(_QWORD))a1("glBeginTransformFeedback");
    unk_140404520 = (__int64 (           *)(_QWORD, _QWORD))a1("glEndTransformFeedback");
    unk_140404528 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1("glBindBufferRange");
    unk_140404530 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glBindBufferBase");
    unk_140404538 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glTransformFeedbackVaryings");
    unk_140404540 = a1("glGetTransformFeedbackVarying");
    unk_140404548 = a1("glClampColor");
    unk_140404550 = a1("glBeginConditionalRender");
    unk_140404558 = a1("glEndConditionalRender");
    unk_140404560 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1("glVertexAttribIPointer");
    unk_140404568 = a1("glGetVertexAttribIiv");
    unk_140404570 = a1("glGetVertexAttribIuiv");
    unk_140404578 = a1("glVertexAttribI1i");
    unk_140404580 = a1("glVertexAttribI2i");
    unk_140404588 = a1("glVertexAttribI3i");
    unk_140404590 = a1("glVertexAttribI4i");
    unk_140404598 = a1("glVertexAttribI1ui");
    unk_1404045A0 = a1("glVertexAttribI2ui");
    unk_1404045A8 = a1("glVertexAttribI3ui");
    unk_1404045B0 = a1("glVertexAttribI4ui");
    unk_1404045B8 = a1("glVertexAttribI1iv");
    unk_1404045C0 = a1("glVertexAttribI2iv");
    unk_1404045C8 = a1("glVertexAttribI3iv");
    unk_1404045D0 = a1("glVertexAttribI4iv");
    unk_1404045D8 = a1("glVertexAttribI1uiv");
    unk_1404045E0 = a1("glVertexAttribI2uiv");
    unk_1404045E8 = a1("glVertexAttribI3uiv");
    unk_1404045F0 = a1("glVertexAttribI4uiv");
    unk_1404045F8 = a1("glVertexAttribI4bv");
    unk_140404600 = a1("glVertexAttribI4sv");
    unk_140404608 = a1("glVertexAttribI4ubv");
    unk_140404610 = a1("glVertexAttribI4usv");
    unk_140404618 = a1("glGetUniformuiv");
    unk_140404620 = a1("glBindFragDataLocation");
    unk_140404628 = a1("glGetFragDataLocation");
    unk_140404630 = a1("glUniform1ui");
    unk_140404638 = a1("glUniform2ui");
    unk_140404640 = a1("glUniform3ui");
    unk_140404648 = a1("glUniform4ui");
    unk_140404650 = a1("glUniform1uiv");
    unk_140404658 = a1("glUniform2uiv");
    unk_140404660 = a1("glUniform3uiv");
    unk_140404668 = a1("glUniform4uiv");
    unk_140404670 = a1("glTexParameterIiv");
    unk_140404678 = a1("glTexParameterIuiv");
    unk_140404680 = a1("glGetTexParameterIiv");
    unk_140404688 = a1("glGetTexParameterIuiv");
    unk_140404690 = a1("glClearBufferiv");
    unk_140404698 = a1("glClearBufferuiv");
    unk_1404046A0 = a1("glClearBufferfv");
    unk_1404046A8 = a1("glClearBufferfi");
    unk_1404046B0 = (__int64 (           *)(_QWORD, _QWORD))a1("glGetStringi");
    unk_1404046B8 = a1("glIsRenderbuffer");
    unk_1404046C0 = (__int64 (           *)(_QWORD, _QWORD))a1("glBindRenderbuffer");
    unk_1404046C8 = a1("glDeleteRenderbuffers");
    unk_1404046D0 = (__int64 (           *)(_QWORD, _QWORD))a1("glGenRenderbuffers");
    unk_1404046D8 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glRenderbufferStorage");
    unk_1404046E0 = a1("glGetRenderbufferParameteriv");
    unk_1404046E8 = a1("glIsFramebuffer");
    unk_1404046F0 = (double (           *)(_QWORD, _QWORD))a1("glBindFramebuffer");
    unk_1404046F8 = a1("glDeleteFramebuffers");
    unk_140404700 = (__int64 (           *)(_QWORD, _QWORD))a1("glGenFramebuffers");
    unk_140404708 = (__int64 (           *)(_QWORD))a1("glCheckFramebufferStatus");
    unk_140404710 = a1("glFramebufferTexture1D");
    unk_140404718 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))a1("glFramebufferTexture2D");
    unk_140404720 = a1("glFramebufferTexture3D");
    unk_140404728 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glFramebufferRenderbuffer");
    unk_140404730 = a1("glGetFramebufferAttachmentParameteriv");
    unk_140404738 = (double (           *)(_QWORD))a1("glGenerateMipmap");
    unk_140404740 = (__int64 (           *)(_QWORD, _QWORD))a1("glBlitFramebuffer");
    unk_140404748 = a1("glRenderbufferStorageMultisample");
    unk_140404750 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))a1("glFramebufferTextureLayer");
    unk_140404758 = a1("glMapBufferRange");
    unk_140404760 = a1("glFlushMappedBufferRange");
    unk_140404768 = (__int64 (           *)(_QWORD))a1("glBindVertexArray");
    unk_140404770 = a1("glDeleteVertexArrays");
    unk_140404778 = (__int64 (           *)(_QWORD, _QWORD))a1("glGenVertexArrays");
    unk_140404780 = a1("glIsVertexArray");
  }
}

// 140404518: using guessed type __int64 (__fastcall *unk_140404518)(_QWORD);
// 140404520: using guessed type __int64 (__fastcall *unk_140404520)(_QWORD, _QWORD);
// 140404528: using guessed type __int64 (__fastcall *unk_140404528)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404530: using guessed type __int64 (__fastcall *unk_140404530)(_QWORD, _QWORD, _QWORD);
// 140404538: using guessed type __int64 (__fastcall *unk_140404538)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404560: using guessed type __int64 (__fastcall *unk_140404560)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 1404046B0: using guessed type __int64 (__fastcall *unk_1404046B0)(_QWORD, _QWORD);
// 1404046C0: using guessed type __int64 (__fastcall *unk_1404046C0)(_QWORD, _QWORD);
// 1404046D0: using guessed type __int64 (__fastcall *unk_1404046D0)(_QWORD, _QWORD);
// 1404046D8: using guessed type __int64 (__fastcall *unk_1404046D8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404700: using guessed type __int64 (__fastcall *unk_140404700)(_QWORD, _QWORD);
// 140404708: using guessed type __int64 (__fastcall *unk_140404708)(_QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404728: using guessed type __int64 (__fastcall *unk_140404728)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404738: using guessed type double (__fastcall *unk_140404738)(_QWORD);
// 140404740: using guessed type __int64 (__fastcall *unk_140404740)(_QWORD, _QWORD);
// 140404750: using guessed type __int64 (__fastcall *unk_140404750)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404768: using guessed type __int64 (__fastcall *unk_140404768)(_QWORD);
// 140404778: using guessed type __int64 (__fastcall *unk_140404778)(_QWORD, _QWORD);

//----- (00000001400E4EB0) ----------------------------------------------------
void            sub_1400E4EB0(__int64 (           *a1)(     char *))
{
  if ( unk_140404788 )
  {
    unk_140404790 = a1("glDrawArraysInstanced");
    unk_140404798 = a1("glDrawElementsInstanced");
    unk_1404047A0 = a1("glTexBuffer");
    unk_1404047A8 = a1("glPrimitiveRestartIndex");
    unk_1404047B0 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1("glCopyBufferSubData");
    unk_1404047B8 = a1("glGetUniformIndices");
    unk_1404047C0 = a1("glGetActiveUniformsiv");
    unk_1404047C8 = a1("glGetActiveUniformName");
    unk_1404047D0 = a1("glGetUniformBlockIndex");
    unk_1404047D8 = a1("glGetActiveUniformBlockiv");
    unk_1404047E0 = a1("glGetActiveUniformBlockName");
    unk_1404047E8 = a1("glUniformBlockBinding");
    unk_140404528 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1("glBindBufferRange");
    unk_140404530 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glBindBufferBase");
    unk_1404044F8 = a1("glGetIntegeri_v");
  }
}

// 140404528: using guessed type __int64 (__fastcall *unk_140404528)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404530: using guessed type __int64 (__fastcall *unk_140404530)(_QWORD, _QWORD, _QWORD);
// 1404047B0: using guessed type __int64 (__fastcall *unk_1404047B0)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

//----- (00000001400E4FC0) ----------------------------------------------------
void            sub_1400E4FC0(__int64 (           *a1)(     char *))
{
  if ( unk_14040478C )
  {
    unk_1404047F0 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glDrawElementsBaseVertex");
    unk_1404047F8 = a1("glDrawRangeElementsBaseVertex");
    unk_140404800 = a1("glDrawElementsInstancedBaseVertex");
    unk_140404808 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))a1(
                                                                                              "glMultiDrawElementsBaseVertex");
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
}

// 1404047F0: using guessed type __int64 (__fastcall *unk_1404047F0)(_QWORD, _QWORD, _QWORD);
// 140404808: using guessed type __int64 (__fastcall *unk_140404808)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD);

//----- (00000001400E5110) ----------------------------------------------------
void            sub_1400E5110(__int64 (           *a1)(     char *))
{
  if ( unk_140404888 )
  {
    unk_140404890 = a1("glBindFragDataLocationIndexed");
    unk_140404898 = a1("glGetFragDataIndex");
    unk_1404048A0 = a1("glGenSamplers");
    unk_1404048A8 = a1("glDeleteSamplers");
    unk_1404048B0 = a1("glIsSampler");
    unk_1404048B8 = a1("glBindSampler");
    unk_1404048C0 = a1("glSamplerParameteri");
    unk_1404048C8 = a1("glSamplerParameteriv");
    unk_1404048D0 = a1("glSamplerParameterf");
    unk_1404048D8 = a1("glSamplerParameterfv");
    unk_1404048E0 = a1("glSamplerParameterIiv");
    unk_1404048E8 = a1("glSamplerParameterIuiv");
    unk_1404048F0 = a1("glGetSamplerParameteriv");
    unk_1404048F8 = a1("glGetSamplerParameterIiv");
    unk_140404900 = a1("glGetSamplerParameterfv");
    unk_140404908 = a1("glGetSamplerParameterIuiv");
    unk_140404910 = a1("glQueryCounter");
    unk_140404918 = a1("glGetQueryObjecti64v");
    unk_140404920 = a1("glGetQueryObjectui64v");
    unk_140404928 = a1("glVertexAttribDivisor");
    unk_140404930 = a1("glVertexAttribP1ui");
    unk_140404938 = a1("glVertexAttribP1uiv");
    unk_140404940 = a1("glVertexAttribP2ui");
    unk_140404948 = a1("glVertexAttribP2uiv");
    unk_140404950 = a1("glVertexAttribP3ui");
    unk_140404958 = a1("glVertexAttribP3uiv");
    unk_140404960 = a1("glVertexAttribP4ui");
    unk_140404968 = a1("glVertexAttribP4uiv");
    unk_140404970 = a1("glVertexP2ui");
    unk_140404978 = a1("glVertexP2uiv");
    unk_140404980 = a1("glVertexP3ui");
    unk_140404988 = a1("glVertexP3uiv");
    unk_140404990 = a1("glVertexP4ui");
    unk_140404998 = a1("glVertexP4uiv");
    unk_1404049A0 = a1("glTexCoordP1ui");
    unk_1404049A8 = a1("glTexCoordP1uiv");
    unk_1404049B0 = a1("glTexCoordP2ui");
    unk_1404049B8 = a1("glTexCoordP2uiv");
    unk_1404049C0 = a1("glTexCoordP3ui");
    unk_1404049C8 = a1("glTexCoordP3uiv");
    unk_1404049D0 = a1("glTexCoordP4ui");
    unk_1404049D8 = a1("glTexCoordP4uiv");
    unk_1404049E0 = a1("glMultiTexCoordP1ui");
    unk_1404049E8 = a1("glMultiTexCoordP1uiv");
    unk_1404049F0 = a1("glMultiTexCoordP2ui");
    unk_1404049F8 = a1("glMultiTexCoordP2uiv");
    unk_140404A00 = a1("glMultiTexCoordP3ui");
    unk_140404A08 = a1("glMultiTexCoordP3uiv");
    unk_140404A10 = a1("glMultiTexCoordP4ui");
    unk_140404A18 = a1("glMultiTexCoordP4uiv");
    unk_140404A20 = a1("glNormalP3ui");
    unk_140404A28 = a1("glNormalP3uiv");
    unk_140404A30 = a1("glColorP3ui");
    unk_140404A38 = a1("glColorP3uiv");
    unk_140404A40 = a1("glColorP4ui");
    unk_140404A48 = a1("glColorP4uiv");
    unk_140404A50 = a1("glSecondaryColorP3ui");
    unk_140404A58 = a1("glSecondaryColorP3uiv");
  }
}



//----- (00000001400453F0) ----------------------------------------------------
__int64 sub_1400453F0()
{
  __int64 result; // rax

  if ( *(_QWORD *)&dword_140404A6C[18215111] )
  {
    result = ((__int64 (*)(void))FreeLibrary)();
    *(_QWORD *)&dword_140404A6C[18215111] = 0;
  }
  return result;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140091880) ----------------------------------------------------
__int64 sub_140091880()
{
  int v0; // ebp
       char *v1; // rdi
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140091880[96];
#define v17 (*(__int64 (*))(void *)(sr_frame_140091880 + 0)) /* [rsp+0h] */
#define v18 (*(int (*))(void *)(sr_frame_140091880 + 32)) /* [rsp+20h] */
#define v19 (*(int (*))(void *)(sr_frame_140091880 + 36)) /* [rsp+24h] */
#define v20 (*(char * (*))(void *)(sr_frame_140091880 + 40)) /* [rsp+28h] */
#define v21 (*(_QWORD (*)[5])(void *)(sr_frame_140091880 + 48)) /* [rsp+30h] */

  v0 = 0;
  v21[0] = (uint64)(uintptr_t)("OpenGL ES-CL ");
  v1 = "OpenGL ES-CM ";
  v20 = "OpenGL ES-CM ";
  v21[1] = (uint64)(uintptr_t)("OpenGL ES ");
  v21[2] = 0;
  v2 = qword_140302FA8(7938);
  if ( !v2 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( v1[v4] );
    if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v2), (const char *)(uintptr_t)(v1), v4) )
      break;
    v1 = (     char *)v21[v3++];
    if ( !v1 )
      goto LABEL_9;
  }
  v2 += v4;
LABEL_9:
  sub_14015B0D0(v2, "%d.%d", (__int64)(uintptr_t)&v18, (__int64)(uintptr_t)&v19);
  dword_140404A68 = v18;
  dword_140404A6C[0] = v19;
  dword_140404A6C[18215115] = v18;
  dword_140404A6C[18215116] = v19;
  if ( v18 == 1 )
  {
    if ( v19 >= 0 )
    {
LABEL_11:
      v5 = 1;
      goto LABEL_12;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_11;
  }
  v5 = 0;
LABEL_12:
  dword_140404A6C[18215057] = v5;
  if ( v18 == 1 )
  {
    if ( v19 >= 1 )
    {
LABEL_14:
      v6 = 1;
      goto LABEL_15;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_14;
  }
  v6 = 0;
LABEL_15:
  dword_140302FF0 = v6;
  if ( v18 == 1 )
  {
    if ( v19 >= 2 )
    {
LABEL_17:
      v7 = 1;
      goto LABEL_18;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_17;
  }
  v7 = 0;
LABEL_18:
  dword_140302FF4 = v7;
  if ( v18 == 1 )
  {
    if ( v19 >= 3 )
    {
LABEL_20:
      v8 = 1;
      goto LABEL_21;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_20;
  }
  v8 = 0;
LABEL_21:
  unk_140404090 = v8;
  if ( v18 == 1 )
  {
    if ( v19 >= 4 )
    {
LABEL_23:
      v9 = 1;
      goto LABEL_24;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_23;
  }
  v9 = 0;
LABEL_24:
  unk_140404094 = v9;
  if ( v18 == 1 )
  {
    if ( v19 >= 5 )
    {
LABEL_26:
      v10 = 1;
      goto LABEL_27;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_26;
  }
  v10 = 0;
LABEL_27:
  unk_140404128 = v10;
  if ( v18 == 2 )
  {
    if ( v19 >= 0 )
    {
LABEL_29:
      v11 = 1;
      goto LABEL_30;
    }
  }
  else if ( v18 > 2 )
  {
    goto LABEL_29;
  }
  v11 = 0;
LABEL_30:
  unk_14040412C = v11;
  if ( v18 == 2 )
  {
    if ( v19 >= 1 )
    {
LABEL_32:
      v12 = 1;
      goto LABEL_33;
    }
  }
  else if ( v18 > 2 )
  {
    goto LABEL_32;
  }
  v12 = 0;
LABEL_33:
  unk_1404044B0 = v12;
  if ( v18 == 3 )
  {
    if ( v19 >= 0 )
    {
LABEL_35:
      v13 = 1;
      goto LABEL_36;
    }
  }
  else if ( v18 > 3 )
  {
    goto LABEL_35;
  }
  v13 = 0;
LABEL_36:
  unk_1404044B4 = v13;
  if ( v18 == 3 )
  {
    if ( v19 >= 1 )
    {
LABEL_38:
      v14 = 1;
      goto LABEL_39;
    }
  }
  else if ( v18 > 3 )
  {
    goto LABEL_38;
  }
  v14 = 0;
LABEL_39:
  unk_140404788 = v14;
  if ( v18 == 3 )
  {
    if ( v19 >= 2 )
    {
LABEL_41:
      v15 = 1;
      goto LABEL_42;
    }
  }
  else if ( v18 > 3 )
  {
    goto LABEL_41;
  }
  v15 = 0;
LABEL_42:
  unk_14040478C = v15;
  if ( v18 == 3 )
  {
    if ( v19 < 3 )
      goto LABEL_69;
    goto LABEL_68;
  }
  if ( v18 > 3 )
LABEL_68:
    v0 = 1;
LABEL_69:
  unk_140404888 = v0;
  if ( v18 > 3 || v18 >= 3 && v19 >= 3 )
  {
    dword_140404A6C[18215115] = 3;
    dword_140404A6C[18215116] = 3;
  }
  return (unsigned int)v18;
}
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);
// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 140302FF0: using guessed type int dword_140302FF0;
// 140302FF4: using guessed type int dword_140302FF4;
// 140404A68: using guessed type int dword_140404A68;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CB0: using guessed type unsigned int;
// 144980D98: using guessed type unsigned int;
// 144980D9C: using guessed type unsigned int;

//----- (0000000140091BA0) ----------------------------------------------------
__int64 sub_140091BA0()
{
  __int64 v0; // rax
  int v1; // edi
       __m128i *v2; // rsi
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
       __m128i *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v11; // rbp
  __m128i *v12; // rax
  __m128i *v13; // rdi
       __m128i *v14; // rax
       __m128i *v15; // rcx
  int v16; // eax
  int v17; // esi
       char **v18; // r14
  int v19; // esi
  __int64 v20; // rdi

  if ( (int)dword_140404A6C[18215115] < 3 )
  {
    v0 = qword_140302FA8(7939);
    v1 = dword_140404A6C[18215119];
    v2 = (     __m128i *)v0;
    v3 = *(char **)&dword_140404A6C[18215121];
    *(_QWORD *)&dword_140404A6C[18215117] = v0;
    goto LABEL_16;
  }
  dword_140404A6C[18215119] = 0;
  qword_140302FA0(33309, &dword_140404A6C[18215119]);
  v1 = dword_140404A6C[18215119];
  if ( (int)dword_140404A6C[18215119] <= 0 )
  {
    v3 = *(char **)&dword_140404A6C[18215121];
  }
  else
  {
    v4 = j__realloc_base_sr(*(_QWORD *)&dword_140404A6C[18215121], 8LL * (int)dword_140404A6C[18215119]);
    v3 = (char *)v4;
    if ( !v4 )
      return 0;
    v1 = dword_140404A6C[18215119];
    *(_QWORD *)&dword_140404A6C[18215121] = v4;
  }
  if ( !v3 )
    return 0;
  v6 = 0;
  if ( v1 )
  {
    do
    {
      v7 = unk_1404046B0(7939, (unsigned int)v6);
      v8 = (     __m128i *)v7;
      v9 = -1;
      while ( *(_BYTE *)(v7 + v9++ + 1) != 0 )
        ;
      v11 = v9 + 1;
      v12 = (__m128i *)sr_path_malloc(v9 + 1);
      v13 = v12;
      if ( v12 )
        sub_1401FC920(v12, v8, v11);
      v3 = *(char **)&dword_140404A6C[18215121];
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[18215121] + 8 * v6) = (uint64)(uintptr_t)(v13);
      v6 = (unsigned int)(v6 + 1);
      v1 = dword_140404A6C[18215119];
    }
    while ( (unsigned int)v6 < dword_140404A6C[18215119] );
  }
  v2 = *(     __m128i **)&dword_140404A6C[18215117];
LABEL_16:
  if ( (int)dword_140404A6C[18215115] < 3 )
  {
    if ( v2 )
    {
      v14 = sub_1401FC614(v2, (     __m128i *)"GL_ARB_clip_control");
      if ( v14 )
      {
        while ( 1 )
        {
          v15 = (     __m128i *)((char *)v14 + 19);
          if ( (v14 == v2 || SR_VEC_LANES(128, v14[-1], i8)[15] == 32) && (SR_VEC_PTR_LANES(128, v15, i8)[0] & 0xDF) == 0 )
            break;
          v2 = (     __m128i *)((char *)v14 + 19);
          v14 = sub_1401FC614(v15, (     __m128i *)"GL_ARB_clip_control");
          if ( !v14 )
            goto LABEL_23;
        }
        v1 = dword_140404A6C[18215119];
        v16 = 1;
        v3 = *(char **)&dword_140404A6C[18215121];
      }
      else
      {
LABEL_23:
        v1 = dword_140404A6C[18215119];
        v16 = 0;
        v3 = *(char **)&dword_140404A6C[18215121];
      }
    }
    else
    {
      v16 = 0;
    }
LABEL_34:
    unk_14040488C = v16;
    if ( v3 )
    {
      v19 = 0;
      if ( v1 > 0 )
      {
        v20 = 0;
        do
        {
          free(*(void **)&v3[v20]);
          v3 = *(char **)&dword_140404A6C[18215121];
          v20 += 8;
          ++v19;
        }
        while ( v19 < (int)dword_140404A6C[18215119] );
      }
      free(v3);
      *(_QWORD *)&dword_140404A6C[18215121] = 0;
    }
    return 1;
  }
  if ( v3 )
  {
    v17 = 0;
    if ( v1 <= 0 )
    {
LABEL_33:
      v16 = 0;
    }
    else
    {
      v18 = (     char **)v3;
      while ( !*v18 || strcmp_sr(*v18, "GL_ARB_clip_control") )
      {
        ++v17;
        ++v18;
        if ( v17 >= v1 )
          goto LABEL_33;
      }
      v16 = 1;
    }
    goto LABEL_34;
  }
  unk_14040488C = 0;
  return 1;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 140302FA0: using guessed type __int64 (__fastcall *qword_140302FA0)(_QWORD, _QWORD);
// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 1404046B0: using guessed type __int64 (__fastcall *unk_1404046B0)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980DA0: using guessed type unsigned int;
// 144980DA8: using guessed type unsigned int;

//----- (0000000140095910) ----------------------------------------------------
void sub_140095910()
{
  char *v0; // rcx
  int v1; // ebx
  __int64 v2; // rdi

  v0 = *(char **)&dword_140404A6C[18215121];
  if ( *(_QWORD *)&dword_140404A6C[18215121] )
  {
    v1 = 0;
    if ( (int)dword_140404A6C[18215119] > 0 )
    {
      v2 = 0;
      do
      {
        free(*(void **)&v0[v2]);
        v0 = *(char **)&dword_140404A6C[18215121];
        v2 += 8;
        ++v1;
      }
      while ( v1 < (int)dword_140404A6C[18215119] );
    }
    free(v0);
    *(_QWORD *)&dword_140404A6C[18215121] = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014009E070) ----------------------------------------------------
__int64 sub_14009E070()
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
       __m128i *v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v9; // rbp
  __m128i *v10; // rax
  __m128i *v11; // rsi

  if ( (int)dword_140404A6C[18215115] < 3 )
  {
    *(_QWORD *)&dword_140404A6C[18215117] = qword_140302FA8(7939);
    return 1;
  }
  v1 = 0;
  dword_140404A6C[18215119] = 0;
  qword_140302FA0(33309, &dword_140404A6C[18215119]);
  v2 = dword_140404A6C[18215119];
  v3 = *(_QWORD *)&dword_140404A6C[18215121];
  if ( (int)dword_140404A6C[18215119] > 0 )
  {
    v4 = j__realloc_base_sr(*(_QWORD *)&dword_140404A6C[18215121], 8LL * (int)dword_140404A6C[18215119]);
    v3 = v4;
    if ( !v4 )
      return 0;
    *(_QWORD *)&dword_140404A6C[18215121] = v4;
    v2 = dword_140404A6C[18215119];
  }
  if ( !v3 )
    return 0;
  if ( v2 )
  {
    do
    {
      v5 = unk_1404046B0(7939, (unsigned int)v1);
      v6 = (     __m128i *)v5;
      v7 = -1;
      while ( *(_BYTE *)(v5 + v7++ + 1) != 0 )
        ;
      v9 = v7 + 1;
      v10 = (__m128i *)sr_path_malloc(v7 + 1);
      v11 = v10;
      if ( v10 )
        sub_1401FC920(v10, v6, v9);
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[18215121] + 8 * v1) = (uint64)(uintptr_t)(v11);
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < dword_140404A6C[18215119] );
  }
  return 1;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 140302FA0: using guessed type __int64 (__fastcall *qword_140302FA0)(_QWORD, _QWORD);
// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 1404046B0: using guessed type __int64 (__fastcall *unk_1404046B0)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980DA0: using guessed type unsigned int;
// 144980DA8: using guessed type unsigned int;

//----- (000000014009E190) ----------------------------------------------------
__int64            sub_14009E190(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)&dword_140404A6C[18215111];
  if ( !*(_QWORD *)&dword_140404A6C[18215111] )
    return 0;
  if ( *(_QWORD *)&dword_140404A6C[18215113] )
  {
    result = (*(__int64 (           **)(__int64))&dword_140404A6C[18215113])(a1);
    if ( result )
      return result;
    v2 = *(_QWORD *)&dword_140404A6C[18215111];
  }
  return ((__int64 (           *)(__int64, __int64))GetProcAddress)(v2, a1);
}

// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D90: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (00000001400A6670) ----------------------------------------------------
__int64 sub_1400A6670()
{
  __int64 v0; // rax
  __int64 result; // rax
  unsigned int v2; // ebx

  v0 = ((__int64 (           *)(     __int16 *))LoadLibraryW)(L"opengl32.dll");
  *(_QWORD *)&dword_140404A6C[18215111] = v0;
  if ( !v0 )
    return 0;
  *(_QWORD *)&dword_140404A6C[18215113] = ((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                            v0,
                                            "wglGetProcAddress");
  if ( !*(_QWORD *)&dword_140404A6C[18215113] )
    return 0;
  result = sub_1400A6700((__int64 (           *)(     char *))sub_14009E190);
  v2 = result;
  if ( *(_QWORD *)&dword_140404A6C[18215111] )
  {
    ((void (*)(void))FreeLibrary)();
    result = v2;
    *(_QWORD *)&dword_140404A6C[18215111] = 0;
  }
  return result;
}

// 14026E2F8: invalid function type 'HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 140270438: using guessed type __int16 LibFileName[13];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D90: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (00000001400A7620) ----------------------------------------------------
__int64            sub_1400A7620(     __m128i *a1)
{
       __m128i *v2; // rdi
       __m128i *v3; // rax
  __int64 v4; // rcx
       __m128i *v5; // rcx
  char **v7; // r9
  int v8; // r10d
  char *v9; // rax
  char *v10; // r8
  int v11; // ecx
  int v12; // edx

  if ( (int)dword_140404A6C[18215115] >= 3 )
  {
    v7 = *(char ***)&dword_140404A6C[18215121];
    if ( *(_QWORD *)&dword_140404A6C[18215121] )
    {
      v8 = 0;
      if ( (int)dword_140404A6C[18215119] > 0 )
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            v10 = (char *)((char *)a1 - v9);
            do
            {
              v11 = (unsigned __int8)v10[(_QWORD)v9];
              v12 = (unsigned __int8)*v9 - v11;
              if ( v12 )
                break;
              ++v9;
            }
            while ( v11 );
            if ( !v12 )
              break;
          }
          ++v8;
          ++v7;
          if ( v8 >= (int)dword_140404A6C[18215119] )
            return 0;
        }
        return 1;
      }
    }
    return 0;
  }
  v2 = *(     __m128i **)&dword_140404A6C[18215117];
  if ( !*(_QWORD *)&dword_140404A6C[18215117] )
    return 0;
  if ( !a1 )
    return 0;
  v3 = sub_1401FC614(*(     __m128i **)&dword_140404A6C[18215117], a1);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( SR_VEC_PTR_LANES(128, a1, i8)[v4] );
    v5 = (     __m128i *)((char *)v3 + v4);
    if ( (v3 == v2 || SR_VEC_LANES(128, v3[-1], i8)[15] == 32) && (SR_VEC_PTR_LANES(128, v5, i8)[0] & 0xDF) == 0 )
      break;
    v2 = v5;
    v3 = sub_1401FC614(v5, a1);
    if ( !v3 )
      return 0;
  }
  return 1;
}

// 1400A77FB: variable 'a3' is possibly undefined
// 1400A7804: variable 'a2' is possibly undefined
// 1400A78E5: variable 'a2' is possibly undefined
// 1400A78E5: variable 'a3' is possibly undefined
// 1400A7956: variable 'v20' is possibly undefined
// 1400A7956: variable 'v21' is possibly undefined
// 1400A79D2: variable 'v28' is possibly undefined
// 1400A79D2: variable 'v29' is possibly undefined
// 1400A7A30: variable 'v37' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;

//----- (00000001400E3B90) ----------------------------------------------------
__int64 (           *           sub_1400E3B90(__int64 (           *a1)(_QWORD)))(_QWORD, _QWORD)
{
  __int64 (           *result)(_QWORD, _QWORD); // rax

  result = (__int64 (           *)(_QWORD, _QWORD))a1;
  if ( unk_14040488C )
  {
    result = (__int64 (           *)(_QWORD, _QWORD))a1("glClipControl");
    unk_140404A60 = result;
  }
  return result;
}

// 140404A60: using guessed type __int64 (__fastcall *unk_140404A60)(_QWORD, _QWORD);

//----- (000000014010E030) ----------------------------------------------------
__int64 sub_14010E030()
{
  __int64 result; // rax

  result = ((__int64 (           *)(     __int16 *))LoadLibraryW)(L"opengl32.dll");
  *(_QWORD *)&dword_140404A6C[18215111] = result;
  if ( result )
  {
    *(_QWORD *)&dword_140404A6C[18215113] = ((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                              result,
                                              "wglGetProcAddress");
    return *(_QWORD *)&dword_140404A6C[18215113] != 0;
  }
  return result;
}

// 14026E2F8: invalid function type 'HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 140270438: using guessed type __int16 LibFileName[13];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D90: using guessed type __int64 (__fastcall *)(_QWORD);

