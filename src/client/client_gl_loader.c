#include "shared_client.h"

#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (00000001400A6700) ----------------------------------------------------
__int64            sub_1400A6700(__int64 (           *a1)(     char *))
{
  unsigned int unused_written_slot;
  __int64 (           *callback_function)(_QWORD);

  unused_written_slot = 0;
  *(_QWORD *)&dword_140404A68 = 0;
  callback_function = (__int64 (           *)(_QWORD))a1("glGetString");
  glGetString = callback_function;
  if ( !callback_function || !callback_function(7938) )
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
  return unused_written_slot;
}

//----- (00000001400E3BC0) ----------------------------------------------------
void            sub_1400E3BC0(__int64 (           *a1)(     char *))
{
    extern void gl_load_1_0(long long (*resolve)(const char *));
    gl_load_1_0((long long (*)(const char *))a1);
}

//----- (00000001400E3EE0) ----------------------------------------------------
void            sub_1400E3EE0(__int64 (           *a1)(     char *))
{
    extern void gl_load_1_1(long long (*resolve)(const char *));
    gl_load_1_1((long long (*)(const char *))a1);
}

//----- (00000001400E3FD0) ----------------------------------------------------
void            sub_1400E3FD0(__int64 (           *a1)(     char *))
{
    extern void gl_load_1_2(long long (*resolve)(const char *));
    gl_load_1_2((long long (*)(const char *))a1);
}

//----- (00000001400E4030) ----------------------------------------------------
void            sub_1400E4030(__int64 (           *a1)(     char *))
{
    extern void gl_load_1_3(long long (*resolve)(const char *));
    gl_load_1_3((long long (*)(const char *))a1);
}

//----- (00000001400E40E0) ----------------------------------------------------
void            sub_1400E40E0(__int64 (           *a1)(     char *))
{
    extern void gl_load_1_4(long long (*resolve)(const char *));
    gl_load_1_4((long long (*)(const char *))a1);
}

//----- (00000001400E4190) ----------------------------------------------------
void            sub_1400E4190(__int64 (           *a1)(     char *))
{
    extern void gl_load_1_5(long long (*resolve)(const char *));
    gl_load_1_5((long long (*)(const char *))a1);
}

//----- (00000001400E42E0) ----------------------------------------------------
void            sub_1400E42E0(__int64 (           *a1)(     char *))
{
    extern void gl_load_2_0(long long (*resolve)(const char *));
    gl_load_2_0((long long (*)(const char *))a1);
}

//----- (00000001400E48D0) ----------------------------------------------------
void            sub_1400E48D0(__int64 (           *a1)(     char *))
{
    extern void gl_load_2_1(long long (*resolve)(const char *));
    gl_load_2_1((long long (*)(const char *))a1);
}

//----- (00000001400E4950) ----------------------------------------------------
void            sub_1400E4950(__int64 (           *a1)(     char *))
{
    extern void gl_load_3_0(long long (*resolve)(const char *));
    gl_load_3_0((long long (*)(const char *))a1);
}

//----- (00000001400E4EB0) ----------------------------------------------------
void            sub_1400E4EB0(__int64 (           *a1)(     char *))
{
    extern void gl_load_3_1(long long (*resolve)(const char *));
    gl_load_3_1((long long (*)(const char *))a1);
}

//----- (00000001400E4FC0) ----------------------------------------------------
void            sub_1400E4FC0(__int64 (           *a1)(     char *))
{
    extern void gl_load_3_2(long long (*resolve)(const char *));
    gl_load_3_2((long long (*)(const char *))a1);
}

//----- (00000001400E5110) ----------------------------------------------------
void            sub_1400E5110(__int64 (           *a1)(     char *))
{
    extern void gl_load_3_3(long long (*resolve)(const char *));
    gl_load_3_3((long long (*)(const char *))a1);
}

//----- (000000014010E030) ----------------------------------------------------
__int64 sr_gl_resolve_proc_loader()
{
  __int64 result;

  result = ((__int64 (           *)(     __int16 *))LoadLibraryW)(L"opengl32.dll");
  g_144980D88 = result;
  if ( result )
  {
    g_144980D90 = ((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                              result,
                                              "wglGetProcAddress");
    return g_144980D90 != 0;
  }
  return result;
}

// 14026E2F8: invalid function type 'HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored

