#include "shared_client.h"

//----- (00000001400A6700) ----------------------------------------------------
__int64            sub_1400A6700(__int64 (           *a1)(     char *))
{
  unsigned int v2;
  __int64 (           *v3)(_QWORD);

  v2 = 0;
  *(_QWORD *)&dword_140404A68 = 0;
  v3 = (__int64 (           *)(_QWORD))a1("glGetString");
  glGetString = v3;
  if ( !v3 || !v3(7938) )
    return 0;
  sub_140091880();
  sub_1400E3BC0(a1);
  if ( dword_140302FF0 )
  {
    glDrawArrays = (PFNGLDRAWARRAYSPROC)a1("glDrawArrays");
    *(_QWORD *)&flt_140384000[131076] = a1("glDrawElements");
    *(_QWORD *)&flt_140384000[131078] = a1("glPolygonOffset");
    *(_QWORD *)&flt_140384000[131080] = a1("glCopyTexImage1D");
    *(_QWORD *)&flt_140384000[131082] = a1("glCopyTexImage2D");
    *(_QWORD *)&flt_140384000[131084] = a1("glCopyTexSubImage1D");
    *(_QWORD *)&flt_140384000[131086] = a1("glCopyTexSubImage2D");
    *(_QWORD *)&flt_140384000[131088] = a1("glTexSubImage1D");
    *(_QWORD *)&flt_140384000[131090] = a1("glTexSubImage2D");
    glBindTexture = (PFNGLBINDTEXTUREPROC)a1("glBindTexture");
    glDeleteTextures = (PFNGLDELETETEXTURESPROC)a1("glDeleteTextures");
    glGenTextures = (PFNGLGENTEXTURESPROC)a1("glGenTextures");
    glIsTexture = (PFNGLISTEXTUREPROC)a1("glIsTexture");
  }
  if ( dword_140302FF4 )
  {
    glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)a1("glDrawRangeElements");
    glTexImage3D = (PFNGLTEXIMAGE3DPROC)a1("glTexImage3D");
    glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)a1("glTexSubImage3D");
    glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)a1("glCopyTexSubImage3D");
  }
  if ( unk_140404090 )
  {
    glActiveTexture = (PFNGLACTIVETEXTUREPROC)a1("glActiveTexture");
    glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)a1("glSampleCoverage");
    glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)a1("glCompressedTexImage3D");
    glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)a1("glCompressedTexImage2D");
    glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)a1("glCompressedTexImage1D");
    glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)a1("glCompressedTexSubImage3D");
    glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)a1("glCompressedTexSubImage2D");
    glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)a1("glCompressedTexSubImage1D");
    glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)a1("glGetCompressedTexImage");
  }
  if ( unk_140404094 )
  {
    glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)a1("glBlendFuncSeparate");
    glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)a1("glMultiDrawArrays");
    glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)a1("glMultiDrawElements");
    glPointParameterf = (PFNGLPOINTPARAMETERFPROC)a1("glPointParameterf");
    glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)a1("glPointParameterfv");
    glPointParameteri = (PFNGLPOINTPARAMETERIPROC)a1("glPointParameteri");
    glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)a1("glPointParameteriv");
    glBlendColor = (PFNGLBLENDCOLORPROC)a1("glBlendColor");
    glBlendEquation = (PFNGLBLENDEQUATIONPROC)a1("glBlendEquation");
  }
  if ( unk_140404128 )
  {
    glGenQueries = (PFNGLGENQUERIESPROC)a1("glGenQueries");
    glDeleteQueries = (PFNGLDELETEQUERIESPROC)a1("glDeleteQueries");
    glIsQuery = (PFNGLISQUERYPROC)a1("glIsQuery");
    glBeginQuery = (PFNGLBEGINQUERYPROC)a1("glBeginQuery");
    glEndQuery = (PFNGLENDQUERYPROC)a1("glEndQuery");
    glGetQueryiv = (PFNGLGETQUERYIVPROC)a1("glGetQueryiv");
    glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)a1("glGetQueryObjectiv");
    glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)a1("glGetQueryObjectuiv");
    glBindBuffer = (PFNGLBINDBUFFERPROC)a1("glBindBuffer");
    glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)a1("glDeleteBuffers");
    glGenBuffers = (PFNGLGENBUFFERSPROC)a1("glGenBuffers");
    glIsBuffer = (PFNGLISBUFFERPROC)a1("glIsBuffer");
    glBufferData = (PFNGLBUFFERDATAPROC)a1("glBufferData");
    glBufferSubData = (PFNGLBUFFERSUBDATAPROC)a1("glBufferSubData");
    glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)a1("glGetBufferSubData");
    glMapBuffer = (PFNGLMAPBUFFERPROC)a1("glMapBuffer");
    glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)a1("glUnmapBuffer");
    glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)a1("glGetBufferParameteriv");
    glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)a1("glGetBufferPointerv");
  }
  sub_1400E42E0(a1);
  if ( unk_1404044B0 )
  {
    glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)a1("glUniformMatrix2x3fv");
    glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)a1("glUniformMatrix3x2fv");
    glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)a1("glUniformMatrix2x4fv");
    glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)a1("glUniformMatrix4x2fv");
    glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)a1("glUniformMatrix3x4fv");
    glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)a1("glUniformMatrix4x3fv");
  }
  sub_1400E4950(a1);
  if ( unk_140404788 )
  {
    glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)a1("glDrawArraysInstanced");
    glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)a1("glDrawElementsInstanced");
    glTexBuffer = (PFNGLTEXBUFFERPROC)a1("glTexBuffer");
    glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)a1("glPrimitiveRestartIndex");
    glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)a1("glCopyBufferSubData");
    glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)a1("glGetUniformIndices");
    glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)a1("glGetActiveUniformsiv");
    glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)a1("glGetActiveUniformName");
    glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)a1("glGetUniformBlockIndex");
    glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)a1("glGetActiveUniformBlockiv");
    glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)a1("glGetActiveUniformBlockName");
    glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)a1("glUniformBlockBinding");
    glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)a1("glBindBufferRange");
    glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)a1("glBindBufferBase");
    glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)a1("glGetIntegeri_v");
  }
  if ( unk_14040478C )
  {
    glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)a1("glDrawElementsBaseVertex");
    glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)a1("glDrawRangeElementsBaseVertex");
    glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)a1("glDrawElementsInstancedBaseVertex");
    unk_140404808 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))a1(
                                                                                              "glMultiDrawElementsBaseVertex");
    glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)a1("glProvokingVertex");
    glFenceSync = (PFNGLFENCESYNCPROC)a1("glFenceSync");
    glIsSync = (PFNGLISSYNCPROC)a1("glIsSync");
    glDeleteSync = (PFNGLDELETESYNCPROC)a1("glDeleteSync");
    glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)a1("glClientWaitSync");
    glWaitSync = (PFNGLWAITSYNCPROC)a1("glWaitSync");
    glGetInteger64v = (PFNGLGETINTEGER64VPROC)a1("glGetInteger64v");
    glGetSynciv = (PFNGLGETSYNCIVPROC)a1("glGetSynciv");
    glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)a1("glGetInteger64i_v");
    glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)a1("glGetBufferParameteri64v");
    glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)a1("glFramebufferTexture");
    glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)a1("glTexImage2DMultisample");
    glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)a1("glTexImage3DMultisample");
    glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)a1("glGetMultisamplefv");
    glSampleMaski = (PFNGLSAMPLEMASKIPROC)a1("glSampleMaski");
  }
  sub_1400E5110(a1);
  if ( !(unsigned int)sub_140091BA0() )
    return 0;
  if ( unk_14040488C )
    glClipControl = (PFNGLCLIPCONTROLPROC)a1("glClipControl");
  if ( dword_140404A68 || g_140404A6C )
    return 1;
  return v2;
}

//----- (00000001400E3BC0) ----------------------------------------------------
void            sub_1400E3BC0(__int64 (           *a1)(     char *))
{
  if ( g_144980CB0 )
  {
    glCullFace = (PFNGLCULLFACEPROC)a1("glCullFace");
    glFrontFace = (PFNGLFRONTFACEPROC)a1("glFrontFace");
    glHint = (PFNGLHINTPROC)a1("glHint");
    glLineWidth = (PFNGLLINEWIDTHPROC)a1("glLineWidth");
    glPointSize = (PFNGLPOINTSIZEPROC)a1("glPointSize");
    glPolygonMode = (PFNGLPOLYGONMODEPROC)a1("glPolygonMode");
    glScissor = (PFNGLSCISSORPROC)a1("glScissor");
    glTexParameterf = (PFNGLTEXPARAMETERFPROC)a1("glTexParameterf");
    glTexParameterfv = (PFNGLTEXPARAMETERFVPROC)a1("glTexParameterfv");
    glTexParameteri = (PFNGLTEXPARAMETERIPROC)a1("glTexParameteri");
    glTexParameteriv = (PFNGLTEXPARAMETERIVPROC)a1("glTexParameteriv");
    glTexImage1D = (PFNGLTEXIMAGE1DPROC)a1("glTexImage1D");
    glTexImage2D = (PFNGLTEXIMAGE2DPROC)a1("glTexImage2D");
    glDrawBuffer = (PFNGLDRAWBUFFERPROC)a1("glDrawBuffer");
    glClear = (PFNGLCLEARPROC)a1("glClear");
    glClearColor = (PFNGLCLEARCOLORPROC)a1("glClearColor");
    glClearStencil = (PFNGLCLEARSTENCILPROC)a1("glClearStencil");
    glClearDepth = (PFNGLCLEARDEPTHPROC)a1("glClearDepth");
    glStencilMask = (PFNGLSTENCILMASKPROC)a1("glStencilMask");
    glColorMask = (PFNGLCOLORMASKPROC)a1("glColorMask");
    glDepthMask = (PFNGLDEPTHMASKPROC)a1("glDepthMask");
    glDisable = (PFNGLDISABLEPROC)a1("glDisable");
    glEnable = (PFNGLENABLEPROC)a1("glEnable");
    glFinish = (PFNGLFINISHPROC)a1("glFinish");
    glFlush = (PFNGLFLUSHPROC)a1("glFlush");
    glBlendFunc = (PFNGLBLENDFUNCPROC)a1("glBlendFunc");
    glLogicOp = (PFNGLLOGICOPPROC)a1("glLogicOp");
    glStencilFunc = (PFNGLSTENCILFUNCPROC)a1("glStencilFunc");
    glStencilOp = (PFNGLSTENCILOPPROC)a1("glStencilOp");
    glDepthFunc = (PFNGLDEPTHFUNCPROC)a1("glDepthFunc");
    glPixelStoref = (PFNGLPIXELSTOREFPROC)a1("glPixelStoref");
    glPixelStorei = (PFNGLPIXELSTOREIPROC)a1("glPixelStorei");
    glReadBuffer = (PFNGLREADBUFFERPROC)a1("glReadBuffer");
    glReadPixels = (PFNGLREADPIXELSPROC)a1("glReadPixels");
    glGetBooleanv = (PFNGLGETBOOLEANVPROC)a1("glGetBooleanv");
    glGetDoublev = (PFNGLGETDOUBLEVPROC)a1("glGetDoublev");
    glGetError = (PFNGLGETERRORPROC)a1("glGetError");
    glGetFloatv = (PFNGLGETFLOATVPROC)a1("glGetFloatv");
    glGetIntegerv = (PFNGLGETINTEGERVPROC)a1("glGetIntegerv");
    glGetString = (PFNGLGETSTRINGPROC)a1("glGetString");
    glGetTexImage = (PFNGLGETTEXIMAGEPROC)a1("glGetTexImage");
    glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC)a1("glGetTexParameterfv");
    glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC)a1("glGetTexParameteriv");
    glGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC)a1("glGetTexLevelParameterfv");
    glGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC)a1("glGetTexLevelParameteriv");
    glIsEnabled = (PFNGLISENABLEDPROC)a1("glIsEnabled");
    glDepthRange = (PFNGLDEPTHRANGEPROC)a1("glDepthRange");
    glViewport = (PFNGLVIEWPORTPROC)a1("glViewport");
  }
}

//----- (00000001400E3EE0) ----------------------------------------------------
void            sub_1400E3EE0(__int64 (           *a1)(     char *))
{
  if ( dword_140302FF0 )
  {
    glDrawArrays = (PFNGLDRAWARRAYSPROC)a1("glDrawArrays");
    *(_QWORD *)&flt_140384000[131076] = a1("glDrawElements");
    *(_QWORD *)&flt_140384000[131078] = a1("glPolygonOffset");
    *(_QWORD *)&flt_140384000[131080] = a1("glCopyTexImage1D");
    *(_QWORD *)&flt_140384000[131082] = a1("glCopyTexImage2D");
    *(_QWORD *)&flt_140384000[131084] = a1("glCopyTexSubImage1D");
    *(_QWORD *)&flt_140384000[131086] = a1("glCopyTexSubImage2D");
    *(_QWORD *)&flt_140384000[131088] = a1("glTexSubImage1D");
    *(_QWORD *)&flt_140384000[131090] = a1("glTexSubImage2D");
    glBindTexture = (PFNGLBINDTEXTUREPROC)a1("glBindTexture");
    glDeleteTextures = (PFNGLDELETETEXTURESPROC)a1("glDeleteTextures");
    glGenTextures = (PFNGLGENTEXTURESPROC)a1("glGenTextures");
    glIsTexture = (PFNGLISTEXTUREPROC)a1("glIsTexture");
  }
}

//----- (00000001400E3FD0) ----------------------------------------------------
void            sub_1400E3FD0(__int64 (           *a1)(     char *))
{
  if ( dword_140302FF4 )
  {
    glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)a1("glDrawRangeElements");
    glTexImage3D = (PFNGLTEXIMAGE3DPROC)a1("glTexImage3D");
    glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)a1("glTexSubImage3D");
    glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)a1("glCopyTexSubImage3D");
  }
}

//----- (00000001400E4030) ----------------------------------------------------
void            sub_1400E4030(__int64 (           *a1)(     char *))
{
  if ( unk_140404090 )
  {
    glActiveTexture = (PFNGLACTIVETEXTUREPROC)a1("glActiveTexture");
    glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)a1("glSampleCoverage");
    glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)a1("glCompressedTexImage3D");
    glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)a1("glCompressedTexImage2D");
    glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)a1("glCompressedTexImage1D");
    glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)a1("glCompressedTexSubImage3D");
    glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)a1("glCompressedTexSubImage2D");
    glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)a1("glCompressedTexSubImage1D");
    glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)a1("glGetCompressedTexImage");
  }
}

//----- (00000001400E40E0) ----------------------------------------------------
void            sub_1400E40E0(__int64 (           *a1)(     char *))
{
  if ( unk_140404094 )
  {
    glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)a1("glBlendFuncSeparate");
    glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)a1("glMultiDrawArrays");
    glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)a1("glMultiDrawElements");
    glPointParameterf = (PFNGLPOINTPARAMETERFPROC)a1("glPointParameterf");
    glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)a1("glPointParameterfv");
    glPointParameteri = (PFNGLPOINTPARAMETERIPROC)a1("glPointParameteri");
    glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)a1("glPointParameteriv");
    glBlendColor = (PFNGLBLENDCOLORPROC)a1("glBlendColor");
    glBlendEquation = (PFNGLBLENDEQUATIONPROC)a1("glBlendEquation");
  }
}

//----- (00000001400E4190) ----------------------------------------------------
void            sub_1400E4190(__int64 (           *a1)(     char *))
{
  if ( unk_140404128 )
  {
    glGenQueries = (PFNGLGENQUERIESPROC)a1("glGenQueries");
    glDeleteQueries = (PFNGLDELETEQUERIESPROC)a1("glDeleteQueries");
    glIsQuery = (PFNGLISQUERYPROC)a1("glIsQuery");
    glBeginQuery = (PFNGLBEGINQUERYPROC)a1("glBeginQuery");
    glEndQuery = (PFNGLENDQUERYPROC)a1("glEndQuery");
    glGetQueryiv = (PFNGLGETQUERYIVPROC)a1("glGetQueryiv");
    glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)a1("glGetQueryObjectiv");
    glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)a1("glGetQueryObjectuiv");
    glBindBuffer = (PFNGLBINDBUFFERPROC)a1("glBindBuffer");
    glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)a1("glDeleteBuffers");
    glGenBuffers = (PFNGLGENBUFFERSPROC)a1("glGenBuffers");
    glIsBuffer = (PFNGLISBUFFERPROC)a1("glIsBuffer");
    glBufferData = (PFNGLBUFFERDATAPROC)a1("glBufferData");
    glBufferSubData = (PFNGLBUFFERSUBDATAPROC)a1("glBufferSubData");
    glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)a1("glGetBufferSubData");
    glMapBuffer = (PFNGLMAPBUFFERPROC)a1("glMapBuffer");
    glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)a1("glUnmapBuffer");
    glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)a1("glGetBufferParameteriv");
    glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)a1("glGetBufferPointerv");
  }
}

//----- (00000001400E42E0) ----------------------------------------------------
void            sub_1400E42E0(__int64 (           *a1)(     char *))
{
  if ( unk_14040412C )
  {
    glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)a1("glBlendEquationSeparate");
    glDrawBuffers = (PFNGLDRAWBUFFERSPROC)a1("glDrawBuffers");
    glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)a1("glStencilOpSeparate");
    glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)a1("glStencilFuncSeparate");
    glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)a1("glStencilMaskSeparate");
    glAttachShader = (PFNGLATTACHSHADERPROC)a1("glAttachShader");
    glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)a1("glBindAttribLocation");
    glCompileShader = (PFNGLCOMPILESHADERPROC)a1("glCompileShader");
    glCreateProgram = (PFNGLCREATEPROGRAMPROC)a1("glCreateProgram");
    glCreateShader = (PFNGLCREATESHADERPROC)a1("glCreateShader");
    glDeleteProgram = (PFNGLDELETEPROGRAMPROC)a1("glDeleteProgram");
    glDeleteShader = (PFNGLDELETESHADERPROC)a1("glDeleteShader");
    glDetachShader = (PFNGLDETACHSHADERPROC)a1("glDetachShader");
    glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)a1("glDisableVertexAttribArray");
    glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)a1("glEnableVertexAttribArray");
    glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)a1("glGetActiveAttrib");
    glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)a1("glGetActiveUniform");
    glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)a1("glGetAttachedShaders");
    glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)a1("glGetAttribLocation");
    glGetProgramiv = (PFNGLGETPROGRAMIVPROC)a1("glGetProgramiv");
    glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)a1("glGetProgramInfoLog");
    glGetShaderiv = (PFNGLGETSHADERIVPROC)a1("glGetShaderiv");
    glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)a1("glGetShaderInfoLog");
    glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)a1("glGetShaderSource");
    glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)a1("glGetUniformLocation");
    glGetUniformfv = (PFNGLGETUNIFORMFVPROC)a1("glGetUniformfv");
    glGetUniformiv = (PFNGLGETUNIFORMIVPROC)a1("glGetUniformiv");
    glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)a1("glGetVertexAttribdv");
    glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)a1("glGetVertexAttribfv");
    glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)a1("glGetVertexAttribiv");
    glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)a1("glGetVertexAttribPointerv");
    glIsProgram = (PFNGLISPROGRAMPROC)a1("glIsProgram");
    glIsShader = (PFNGLISSHADERPROC)a1("glIsShader");
    glLinkProgram = (PFNGLLINKPROGRAMPROC)a1("glLinkProgram");
    glShaderSource = (PFNGLSHADERSOURCEPROC)a1("glShaderSource");
    glUseProgram = (PFNGLUSEPROGRAMPROC)a1("glUseProgram");
    glUniform1f = (PFNGLUNIFORM1FPROC)a1("glUniform1f");
    glUniform2f = (PFNGLUNIFORM2FPROC)a1("glUniform2f");
    glUniform3f = (PFNGLUNIFORM3FPROC)a1("glUniform3f");
    glUniform4f = (PFNGLUNIFORM4FPROC)a1("glUniform4f");
    glUniform1i = (PFNGLUNIFORM1IPROC)a1("glUniform1i");
    glUniform2i = (PFNGLUNIFORM2IPROC)a1("glUniform2i");
    glUniform3i = (PFNGLUNIFORM3IPROC)a1("glUniform3i");
    glUniform4i = (PFNGLUNIFORM4IPROC)a1("glUniform4i");
    glUniform1fv = (PFNGLUNIFORM1FVPROC)a1("glUniform1fv");
    glUniform2fv = (PFNGLUNIFORM2FVPROC)a1("glUniform2fv");
    glUniform3fv = (PFNGLUNIFORM3FVPROC)a1("glUniform3fv");
    glUniform4fv = (PFNGLUNIFORM4FVPROC)a1("glUniform4fv");
    glUniform1iv = (PFNGLUNIFORM1IVPROC)a1("glUniform1iv");
    glUniform2iv = (PFNGLUNIFORM2IVPROC)a1("glUniform2iv");
    glUniform3iv = (PFNGLUNIFORM3IVPROC)a1("glUniform3iv");
    glUniform4iv = (PFNGLUNIFORM4IVPROC)a1("glUniform4iv");
    glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)a1("glUniformMatrix2fv");
    glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)a1("glUniformMatrix3fv");
    glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)a1("glUniformMatrix4fv");
    glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)a1("glValidateProgram");
    glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)a1("glVertexAttrib1d");
    glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)a1("glVertexAttrib1dv");
    glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)a1("glVertexAttrib1f");
    glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)a1("glVertexAttrib1fv");
    glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)a1("glVertexAttrib1s");
    glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)a1("glVertexAttrib1sv");
    glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)a1("glVertexAttrib2d");
    glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)a1("glVertexAttrib2dv");
    glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)a1("glVertexAttrib2f");
    glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)a1("glVertexAttrib2fv");
    glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)a1("glVertexAttrib2s");
    glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)a1("glVertexAttrib2sv");
    glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)a1("glVertexAttrib3d");
    glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)a1("glVertexAttrib3dv");
    glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)a1("glVertexAttrib3f");
    glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)a1("glVertexAttrib3fv");
    glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)a1("glVertexAttrib3s");
    glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)a1("glVertexAttrib3sv");
    glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)a1("glVertexAttrib4Nbv");
    glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)a1("glVertexAttrib4Niv");
    glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)a1("glVertexAttrib4Nsv");
    glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)a1("glVertexAttrib4Nub");
    glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)a1("glVertexAttrib4Nubv");
    glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)a1("glVertexAttrib4Nuiv");
    glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)a1("glVertexAttrib4Nusv");
    glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)a1("glVertexAttrib4bv");
    glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)a1("glVertexAttrib4d");
    glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)a1("glVertexAttrib4dv");
    glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)a1("glVertexAttrib4f");
    glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)a1("glVertexAttrib4fv");
    glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)a1("glVertexAttrib4iv");
    glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)a1("glVertexAttrib4s");
    glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)a1("glVertexAttrib4sv");
    glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)a1("glVertexAttrib4ubv");
    glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)a1("glVertexAttrib4uiv");
    glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)a1("glVertexAttrib4usv");
    glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)a1("glVertexAttribPointer");
  }
}

//----- (00000001400E48D0) ----------------------------------------------------
void            sub_1400E48D0(__int64 (           *a1)(     char *))
{
  if ( unk_1404044B0 )
  {
    glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)a1("glUniformMatrix2x3fv");
    glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)a1("glUniformMatrix3x2fv");
    glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)a1("glUniformMatrix2x4fv");
    glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)a1("glUniformMatrix4x2fv");
    glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)a1("glUniformMatrix3x4fv");
    glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)a1("glUniformMatrix4x3fv");
  }
}

//----- (00000001400E4950) ----------------------------------------------------
void            sub_1400E4950(__int64 (           *a1)(     char *))
{
  if ( unk_1404044B4 )
  {
    glColorMaski = (PFNGLCOLORMASKIPROC)a1("glColorMaski");
    glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)a1("glGetBooleani_v");
    glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)a1("glGetIntegeri_v");
    glEnablei = (PFNGLENABLEIPROC)a1("glEnablei");
    glDisablei = (PFNGLDISABLEIPROC)a1("glDisablei");
    glIsEnabledi = (PFNGLISENABLEDIPROC)a1("glIsEnabledi");
    glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)a1("glBeginTransformFeedback");
    glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)a1("glEndTransformFeedback");
    glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)a1("glBindBufferRange");
    glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)a1("glBindBufferBase");
    glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)a1("glTransformFeedbackVaryings");
    glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)a1("glGetTransformFeedbackVarying");
    glClampColor = (PFNGLCLAMPCOLORPROC)a1("glClampColor");
    glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)a1("glBeginConditionalRender");
    glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)a1("glEndConditionalRender");
    glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)a1("glVertexAttribIPointer");
    glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)a1("glGetVertexAttribIiv");
    glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)a1("glGetVertexAttribIuiv");
    glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)a1("glVertexAttribI1i");
    glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)a1("glVertexAttribI2i");
    glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)a1("glVertexAttribI3i");
    glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)a1("glVertexAttribI4i");
    glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)a1("glVertexAttribI1ui");
    glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)a1("glVertexAttribI2ui");
    glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)a1("glVertexAttribI3ui");
    glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)a1("glVertexAttribI4ui");
    glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)a1("glVertexAttribI1iv");
    glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)a1("glVertexAttribI2iv");
    glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)a1("glVertexAttribI3iv");
    glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)a1("glVertexAttribI4iv");
    glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)a1("glVertexAttribI1uiv");
    glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)a1("glVertexAttribI2uiv");
    glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)a1("glVertexAttribI3uiv");
    glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)a1("glVertexAttribI4uiv");
    glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)a1("glVertexAttribI4bv");
    glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)a1("glVertexAttribI4sv");
    glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)a1("glVertexAttribI4ubv");
    glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)a1("glVertexAttribI4usv");
    glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)a1("glGetUniformuiv");
    glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)a1("glBindFragDataLocation");
    glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)a1("glGetFragDataLocation");
    glUniform1ui = (PFNGLUNIFORM1UIPROC)a1("glUniform1ui");
    glUniform2ui = (PFNGLUNIFORM2UIPROC)a1("glUniform2ui");
    glUniform3ui = (PFNGLUNIFORM3UIPROC)a1("glUniform3ui");
    glUniform4ui = (PFNGLUNIFORM4UIPROC)a1("glUniform4ui");
    glUniform1uiv = (PFNGLUNIFORM1UIVPROC)a1("glUniform1uiv");
    glUniform2uiv = (PFNGLUNIFORM2UIVPROC)a1("glUniform2uiv");
    glUniform3uiv = (PFNGLUNIFORM3UIVPROC)a1("glUniform3uiv");
    glUniform4uiv = (PFNGLUNIFORM4UIVPROC)a1("glUniform4uiv");
    glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)a1("glTexParameterIiv");
    glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)a1("glTexParameterIuiv");
    glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)a1("glGetTexParameterIiv");
    glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)a1("glGetTexParameterIuiv");
    glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)a1("glClearBufferiv");
    glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)a1("glClearBufferuiv");
    glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)a1("glClearBufferfv");
    glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)a1("glClearBufferfi");
    glGetStringi = (PFNGLGETSTRINGIPROC)a1("glGetStringi");
    glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)a1("glIsRenderbuffer");
    glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)a1("glBindRenderbuffer");
    glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)a1("glDeleteRenderbuffers");
    glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)a1("glGenRenderbuffers");
    glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)a1("glRenderbufferStorage");
    glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)a1("glGetRenderbufferParameteriv");
    glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)a1("glIsFramebuffer");
    glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)a1("glBindFramebuffer");
    glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)a1("glDeleteFramebuffers");
    glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)a1("glGenFramebuffers");
    glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)a1("glCheckFramebufferStatus");
    glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)a1("glFramebufferTexture1D");
    glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)a1("glFramebufferTexture2D");
    glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)a1("glFramebufferTexture3D");
    glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)a1("glFramebufferRenderbuffer");
    glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)a1("glGetFramebufferAttachmentParameteriv");
    glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)a1("glGenerateMipmap");
    glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)a1("glBlitFramebuffer");
    glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)a1("glRenderbufferStorageMultisample");
    glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)a1("glFramebufferTextureLayer");
    glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)a1("glMapBufferRange");
    glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)a1("glFlushMappedBufferRange");
    glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)a1("glBindVertexArray");
    glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)a1("glDeleteVertexArrays");
    glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)a1("glGenVertexArrays");
    glIsVertexArray = (PFNGLISVERTEXARRAYPROC)a1("glIsVertexArray");
  }
}

//----- (00000001400E4EB0) ----------------------------------------------------
void            sub_1400E4EB0(__int64 (           *a1)(     char *))
{
  if ( unk_140404788 )
  {
    glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)a1("glDrawArraysInstanced");
    glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)a1("glDrawElementsInstanced");
    glTexBuffer = (PFNGLTEXBUFFERPROC)a1("glTexBuffer");
    glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)a1("glPrimitiveRestartIndex");
    glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)a1("glCopyBufferSubData");
    glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)a1("glGetUniformIndices");
    glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)a1("glGetActiveUniformsiv");
    glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)a1("glGetActiveUniformName");
    glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)a1("glGetUniformBlockIndex");
    glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)a1("glGetActiveUniformBlockiv");
    glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)a1("glGetActiveUniformBlockName");
    glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)a1("glUniformBlockBinding");
    glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)a1("glBindBufferRange");
    glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)a1("glBindBufferBase");
    glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)a1("glGetIntegeri_v");
  }
}

//----- (00000001400E4FC0) ----------------------------------------------------
void            sub_1400E4FC0(__int64 (           *a1)(     char *))
{
  if ( unk_14040478C )
  {
    glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)a1("glDrawElementsBaseVertex");
    glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)a1("glDrawRangeElementsBaseVertex");
    glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)a1("glDrawElementsInstancedBaseVertex");
    unk_140404808 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))a1(
                                                                                              "glMultiDrawElementsBaseVertex");
    glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)a1("glProvokingVertex");
    glFenceSync = (PFNGLFENCESYNCPROC)a1("glFenceSync");
    glIsSync = (PFNGLISSYNCPROC)a1("glIsSync");
    glDeleteSync = (PFNGLDELETESYNCPROC)a1("glDeleteSync");
    glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)a1("glClientWaitSync");
    glWaitSync = (PFNGLWAITSYNCPROC)a1("glWaitSync");
    glGetInteger64v = (PFNGLGETINTEGER64VPROC)a1("glGetInteger64v");
    glGetSynciv = (PFNGLGETSYNCIVPROC)a1("glGetSynciv");
    glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)a1("glGetInteger64i_v");
    glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)a1("glGetBufferParameteri64v");
    glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)a1("glFramebufferTexture");
    glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)a1("glTexImage2DMultisample");
    glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)a1("glTexImage3DMultisample");
    glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)a1("glGetMultisamplefv");
    glSampleMaski = (PFNGLSAMPLEMASKIPROC)a1("glSampleMaski");
  }
}

//----- (00000001400E5110) ----------------------------------------------------
void            sub_1400E5110(__int64 (           *a1)(     char *))
{
  if ( unk_140404888 )
  {
    glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)a1("glBindFragDataLocationIndexed");
    glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC)a1("glGetFragDataIndex");
    glGenSamplers = (PFNGLGENSAMPLERSPROC)a1("glGenSamplers");
    glDeleteSamplers = (PFNGLDELETESAMPLERSPROC)a1("glDeleteSamplers");
    glIsSampler = (PFNGLISSAMPLERPROC)a1("glIsSampler");
    glBindSampler = (PFNGLBINDSAMPLERPROC)a1("glBindSampler");
    glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC)a1("glSamplerParameteri");
    glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC)a1("glSamplerParameteriv");
    glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC)a1("glSamplerParameterf");
    glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC)a1("glSamplerParameterfv");
    glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC)a1("glSamplerParameterIiv");
    glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC)a1("glSamplerParameterIuiv");
    glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)a1("glGetSamplerParameteriv");
    glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)a1("glGetSamplerParameterIiv");
    glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)a1("glGetSamplerParameterfv");
    glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)a1("glGetSamplerParameterIuiv");
    glQueryCounter = (PFNGLQUERYCOUNTERPROC)a1("glQueryCounter");
    glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC)a1("glGetQueryObjecti64v");
    glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC)a1("glGetQueryObjectui64v");
    glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC)a1("glVertexAttribDivisor");
    glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC)a1("glVertexAttribP1ui");
    glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC)a1("glVertexAttribP1uiv");
    glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC)a1("glVertexAttribP2ui");
    glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC)a1("glVertexAttribP2uiv");
    glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC)a1("glVertexAttribP3ui");
    glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC)a1("glVertexAttribP3uiv");
    glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC)a1("glVertexAttribP4ui");
    glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC)a1("glVertexAttribP4uiv");
    glVertexP2ui = (PFNGLVERTEXP2UIPROC)a1("glVertexP2ui");
    glVertexP2uiv = (PFNGLVERTEXP2UIVPROC)a1("glVertexP2uiv");
    glVertexP3ui = (PFNGLVERTEXP3UIPROC)a1("glVertexP3ui");
    glVertexP3uiv = (PFNGLVERTEXP3UIVPROC)a1("glVertexP3uiv");
    glVertexP4ui = (PFNGLVERTEXP4UIPROC)a1("glVertexP4ui");
    glVertexP4uiv = (PFNGLVERTEXP4UIVPROC)a1("glVertexP4uiv");
    glTexCoordP1ui = (PFNGLTEXCOORDP1UIPROC)a1("glTexCoordP1ui");
    glTexCoordP1uiv = (PFNGLTEXCOORDP1UIVPROC)a1("glTexCoordP1uiv");
    glTexCoordP2ui = (PFNGLTEXCOORDP2UIPROC)a1("glTexCoordP2ui");
    glTexCoordP2uiv = (PFNGLTEXCOORDP2UIVPROC)a1("glTexCoordP2uiv");
    glTexCoordP3ui = (PFNGLTEXCOORDP3UIPROC)a1("glTexCoordP3ui");
    glTexCoordP3uiv = (PFNGLTEXCOORDP3UIVPROC)a1("glTexCoordP3uiv");
    glTexCoordP4ui = (PFNGLTEXCOORDP4UIPROC)a1("glTexCoordP4ui");
    glTexCoordP4uiv = (PFNGLTEXCOORDP4UIVPROC)a1("glTexCoordP4uiv");
    glMultiTexCoordP1ui = (PFNGLMULTITEXCOORDP1UIPROC)a1("glMultiTexCoordP1ui");
    glMultiTexCoordP1uiv = (PFNGLMULTITEXCOORDP1UIVPROC)a1("glMultiTexCoordP1uiv");
    glMultiTexCoordP2ui = (PFNGLMULTITEXCOORDP2UIPROC)a1("glMultiTexCoordP2ui");
    glMultiTexCoordP2uiv = (PFNGLMULTITEXCOORDP2UIVPROC)a1("glMultiTexCoordP2uiv");
    glMultiTexCoordP3ui = (PFNGLMULTITEXCOORDP3UIPROC)a1("glMultiTexCoordP3ui");
    glMultiTexCoordP3uiv = (PFNGLMULTITEXCOORDP3UIVPROC)a1("glMultiTexCoordP3uiv");
    glMultiTexCoordP4ui = (PFNGLMULTITEXCOORDP4UIPROC)a1("glMultiTexCoordP4ui");
    glMultiTexCoordP4uiv = (PFNGLMULTITEXCOORDP4UIVPROC)a1("glMultiTexCoordP4uiv");
    glNormalP3ui = (PFNGLNORMALP3UIPROC)a1("glNormalP3ui");
    glNormalP3uiv = (PFNGLNORMALP3UIVPROC)a1("glNormalP3uiv");
    glColorP3ui = (PFNGLCOLORP3UIPROC)a1("glColorP3ui");
    glColorP3uiv = (PFNGLCOLORP3UIVPROC)a1("glColorP3uiv");
    glColorP4ui = (PFNGLCOLORP4UIPROC)a1("glColorP4ui");
    glColorP4uiv = (PFNGLCOLORP4UIVPROC)a1("glColorP4uiv");
    glSecondaryColorP3ui = (PFNGLSECONDARYCOLORP3UIPROC)a1("glSecondaryColorP3ui");
    glSecondaryColorP3uiv = (PFNGLSECONDARYCOLORP3UIVPROC)a1("glSecondaryColorP3uiv");
  }
}

