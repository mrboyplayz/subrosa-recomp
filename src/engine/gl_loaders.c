/* The OpenGL loader. Every store keeps the original's order: the resolver is
 * called once per name, top to bottom, and each result lands in the client's
 * pointer variable (the import block below the shared state) or in the GL
 * state region, exactly as the original's machine code does it. */
#include "gl_loaders.h"
#include "memory.h"

/* Import-block gates (the client's own globals, reached under their names). */
extern int dword_140302FF0;
extern int dword_140302FF4;
extern int dword_140404A68;
extern int unk_140404090;
extern int unk_140404094;
extern int unk_140404128;
extern int unk_14040412C;
extern int unk_1404044B0;
extern int unk_1404044B4;
extern int unk_140404788;
extern int unk_14040478C;
extern int unk_140404888;
extern int unk_14040488C;

/* The pointer table slots: the client's function-pointer variables. */
extern void (*glDrawArrays)(void);
extern void (*glBindTexture)(void);
extern void (*glDeleteTextures)(void);
extern void (*glGenTextures)(void);
extern void (*glIsTexture)(void);
extern void (*glDrawRangeElements)(void);
extern void (*glTexImage3D)(void);
extern void (*glTexSubImage3D)(void);
extern void (*glCopyTexSubImage3D)(void);
extern void (*glActiveTexture)(void);
extern void (*glSampleCoverage)(void);
extern void (*glCompressedTexImage3D)(void);
extern void (*glCompressedTexImage2D)(void);
extern void (*glCompressedTexImage1D)(void);
extern void (*glCompressedTexSubImage3D)(void);
extern void (*glCompressedTexSubImage2D)(void);
extern void (*glCompressedTexSubImage1D)(void);
extern void (*glGetCompressedTexImage)(void);
extern void (*glBlendFuncSeparate)(void);
extern void (*glMultiDrawArrays)(void);
extern void (*glMultiDrawElements)(void);
extern void (*glPointParameterf)(void);
extern void (*glPointParameterfv)(void);
extern void (*glPointParameteri)(void);
extern void (*glPointParameteriv)(void);
extern void (*glBlendColor)(void);
extern void (*glBlendEquation)(void);
extern void (*glGenQueries)(void);
extern void (*glDeleteQueries)(void);
extern void (*glIsQuery)(void);
extern void (*glBeginQuery)(void);
extern void (*glEndQuery)(void);
extern void (*glGetQueryiv)(void);
extern void (*glGetQueryObjectiv)(void);
extern void (*glGetQueryObjectuiv)(void);
extern void (*glBindBuffer)(void);
extern void (*glDeleteBuffers)(void);
extern void (*glGenBuffers)(void);
extern void (*glIsBuffer)(void);
extern void (*glBufferData)(void);
extern void (*glBufferSubData)(void);
extern void (*glGetBufferSubData)(void);
extern void (*glMapBuffer)(void);
extern void (*glUnmapBuffer)(void);
extern void (*glGetBufferParameteriv)(void);
extern void (*glGetBufferPointerv)(void);
extern void (*glUniformMatrix2x3fv)(void);
extern void (*glUniformMatrix3x2fv)(void);
extern void (*glUniformMatrix2x4fv)(void);
extern void (*glUniformMatrix4x2fv)(void);
extern void (*glUniformMatrix3x4fv)(void);
extern void (*glUniformMatrix4x3fv)(void);
extern void (*glDrawArraysInstanced)(void);
extern void (*glDrawElementsInstanced)(void);
extern void (*glTexBuffer)(void);
extern void (*glPrimitiveRestartIndex)(void);
extern void (*glCopyBufferSubData)(void);
extern void (*glGetUniformIndices)(void);
extern void (*glGetActiveUniformsiv)(void);
extern void (*glGetActiveUniformName)(void);
extern void (*glGetUniformBlockIndex)(void);
extern void (*glGetActiveUniformBlockiv)(void);
extern void (*glGetActiveUniformBlockName)(void);
extern void (*glUniformBlockBinding)(void);
extern void (*glBindBufferRange)(void);
extern void (*glBindBufferBase)(void);
extern void (*glGetIntegeri_v)(void);
extern void (*glDrawElementsBaseVertex)(void);
extern void (*glDrawRangeElementsBaseVertex)(void);
extern void (*glDrawElementsInstancedBaseVertex)(void);
extern void (*glProvokingVertex)(void);
extern void (*glFenceSync)(void);
extern void (*glIsSync)(void);
extern void (*glDeleteSync)(void);
extern void (*glClientWaitSync)(void);
extern void (*glWaitSync)(void);
extern void (*glGetInteger64v)(void);
extern void (*glGetSynciv)(void);
extern void (*glGetInteger64i_v)(void);
extern void (*glGetBufferParameteri64v)(void);
extern void (*glFramebufferTexture)(void);
extern void (*glTexImage2DMultisample)(void);
extern void (*glTexImage3DMultisample)(void);
extern void (*glGetMultisamplefv)(void);
extern void (*glSampleMaski)(void);
extern void (*glClipControl)(void);
extern void (*glLogicOp)(void);
extern void (*glStencilFunc)(void);
extern void (*glStencilOp)(void);
extern void (*glDepthFunc)(void);
extern void (*glPixelStoref)(void);
extern void (*glPixelStorei)(void);
extern void (*glReadBuffer)(void);
extern void (*glReadPixels)(void);
extern void (*glGetBooleanv)(void);
extern void (*glGetDoublev)(void);
extern void (*glGetError)(void);
extern void (*glGetFloatv)(void);
extern void (*glGetIntegerv)(void);
extern void (*glGetString)(void);
extern void (*glGetTexImage)(void);
extern void (*glGetTexParameterfv)(void);
extern void (*glGetTexParameteriv)(void);
extern void (*glGetTexLevelParameterfv)(void);
extern void (*glGetTexLevelParameteriv)(void);
extern void (*glIsEnabled)(void);
extern void (*glDepthRange)(void);
extern void (*glViewport)(void);
extern void (*glBlendEquationSeparate)(void);
extern void (*glDrawBuffers)(void);
extern void (*glStencilOpSeparate)(void);
extern void (*glStencilFuncSeparate)(void);
extern void (*glStencilMaskSeparate)(void);
extern void (*glAttachShader)(void);
extern void (*glBindAttribLocation)(void);
extern void (*glCompileShader)(void);
extern void (*glCreateProgram)(void);
extern void (*glCreateShader)(void);
extern void (*glDeleteProgram)(void);
extern void (*glDeleteShader)(void);
extern void (*glDetachShader)(void);
extern void (*glDisableVertexAttribArray)(void);
extern void (*glEnableVertexAttribArray)(void);
extern void (*glGetActiveAttrib)(void);
extern void (*glGetActiveUniform)(void);
extern void (*glGetAttachedShaders)(void);
extern void (*glGetAttribLocation)(void);
extern void (*glGetProgramiv)(void);
extern void (*glGetProgramInfoLog)(void);
extern void (*glGetShaderiv)(void);
extern void (*glGetShaderInfoLog)(void);
extern void (*glGetShaderSource)(void);
extern void (*glGetUniformLocation)(void);
extern void (*glGetUniformfv)(void);
extern void (*glGetUniformiv)(void);
extern void (*glGetVertexAttribdv)(void);
extern void (*glGetVertexAttribfv)(void);
extern void (*glGetVertexAttribiv)(void);
extern void (*glGetVertexAttribPointerv)(void);
extern void (*glIsProgram)(void);
extern void (*glIsShader)(void);
extern void (*glLinkProgram)(void);
extern void (*glShaderSource)(void);
extern void (*glUseProgram)(void);
extern void (*glUniform1f)(void);
extern void (*glUniform2f)(void);
extern void (*glUniform3f)(void);
extern void (*glUniform4f)(void);
extern void (*glUniform1i)(void);
extern void (*glUniform2i)(void);
extern void (*glUniform3i)(void);
extern void (*glUniform4i)(void);
extern void (*glUniform1fv)(void);
extern void (*glUniform2fv)(void);
extern void (*glUniform3fv)(void);
extern void (*glUniform4fv)(void);
extern void (*glUniform1iv)(void);
extern void (*glUniform2iv)(void);
extern void (*glUniform3iv)(void);
extern void (*glUniform4iv)(void);
extern void (*glUniformMatrix2fv)(void);
extern void (*glUniformMatrix3fv)(void);
extern void (*glUniformMatrix4fv)(void);
extern void (*glValidateProgram)(void);
extern void (*glVertexAttrib1d)(void);
extern void (*glVertexAttrib1dv)(void);
extern void (*glVertexAttrib1f)(void);
extern void (*glVertexAttrib1fv)(void);
extern void (*glVertexAttrib1s)(void);
extern void (*glVertexAttrib1sv)(void);
extern void (*glVertexAttrib2d)(void);
extern void (*glVertexAttrib2dv)(void);
extern void (*glVertexAttrib2f)(void);
extern void (*glVertexAttrib2fv)(void);
extern void (*glVertexAttrib2s)(void);
extern void (*glVertexAttrib2sv)(void);
extern void (*glVertexAttrib3d)(void);
extern void (*glVertexAttrib3dv)(void);
extern void (*glVertexAttrib3f)(void);
extern void (*glVertexAttrib3fv)(void);
extern void (*glVertexAttrib3s)(void);
extern void (*glVertexAttrib3sv)(void);
extern void (*glVertexAttrib4Nbv)(void);
extern void (*glVertexAttrib4Niv)(void);
extern void (*glVertexAttrib4Nsv)(void);
extern void (*glVertexAttrib4Nub)(void);
extern void (*glVertexAttrib4Nubv)(void);
extern void (*glVertexAttrib4Nuiv)(void);
extern void (*glVertexAttrib4Nusv)(void);
extern void (*glVertexAttrib4bv)(void);
extern void (*glVertexAttrib4d)(void);
extern void (*glVertexAttrib4dv)(void);
extern void (*glVertexAttrib4f)(void);
extern void (*glVertexAttrib4fv)(void);
extern void (*glVertexAttrib4iv)(void);
extern void (*glVertexAttrib4s)(void);
extern void (*glVertexAttrib4sv)(void);
extern void (*glVertexAttrib4ubv)(void);
extern void (*glVertexAttrib4uiv)(void);
extern void (*glVertexAttrib4usv)(void);
extern void (*glVertexAttribPointer)(void);
extern void (*glColorMaski)(void);
extern void (*glGetBooleani_v)(void);
extern void (*glEnablei)(void);
extern void (*glDisablei)(void);
extern void (*glIsEnabledi)(void);
extern void (*glBeginTransformFeedback)(void);
extern void (*glEndTransformFeedback)(void);
extern void (*glTransformFeedbackVaryings)(void);
extern void (*glGetTransformFeedbackVarying)(void);
extern void (*glClampColor)(void);
extern void (*glBeginConditionalRender)(void);
extern void (*glEndConditionalRender)(void);
extern void (*glVertexAttribIPointer)(void);
extern void (*glGetVertexAttribIiv)(void);
extern void (*glGetVertexAttribIuiv)(void);
extern void (*glVertexAttribI1i)(void);
extern void (*glVertexAttribI2i)(void);
extern void (*glVertexAttribI3i)(void);
extern void (*glVertexAttribI4i)(void);
extern void (*glVertexAttribI1ui)(void);
extern void (*glVertexAttribI2ui)(void);
extern void (*glVertexAttribI3ui)(void);
extern void (*glVertexAttribI4ui)(void);
extern void (*glVertexAttribI1iv)(void);
extern void (*glVertexAttribI2iv)(void);
extern void (*glVertexAttribI3iv)(void);
extern void (*glVertexAttribI4iv)(void);
extern void (*glVertexAttribI1uiv)(void);
extern void (*glVertexAttribI2uiv)(void);
extern void (*glVertexAttribI3uiv)(void);
extern void (*glVertexAttribI4uiv)(void);
extern void (*glVertexAttribI4bv)(void);
extern void (*glVertexAttribI4sv)(void);
extern void (*glVertexAttribI4ubv)(void);
extern void (*glVertexAttribI4usv)(void);
extern void (*glGetUniformuiv)(void);
extern void (*glBindFragDataLocation)(void);
extern void (*glGetFragDataLocation)(void);
extern void (*glUniform1ui)(void);
extern void (*glUniform2ui)(void);
extern void (*glUniform3ui)(void);
extern void (*glUniform4ui)(void);
extern void (*glUniform1uiv)(void);
extern void (*glUniform2uiv)(void);
extern void (*glUniform3uiv)(void);
extern void (*glUniform4uiv)(void);
extern void (*glTexParameterIiv)(void);
extern void (*glTexParameterIuiv)(void);
extern void (*glGetTexParameterIiv)(void);
extern void (*glGetTexParameterIuiv)(void);
extern void (*glClearBufferiv)(void);
extern void (*glClearBufferuiv)(void);
extern void (*glClearBufferfv)(void);
extern void (*glClearBufferfi)(void);
extern void (*glGetStringi)(void);
extern void (*glIsRenderbuffer)(void);
extern void (*glBindRenderbuffer)(void);
extern void (*glDeleteRenderbuffers)(void);
extern void (*glGenRenderbuffers)(void);
extern void (*glRenderbufferStorage)(void);
extern void (*glGetRenderbufferParameteriv)(void);
extern void (*glIsFramebuffer)(void);
extern void (*glBindFramebuffer)(void);
extern void (*glDeleteFramebuffers)(void);
extern void (*glGenFramebuffers)(void);
extern void (*glCheckFramebufferStatus)(void);
extern void (*glFramebufferTexture1D)(void);
extern void (*glFramebufferTexture2D)(void);
extern void (*glFramebufferTexture3D)(void);
extern void (*glFramebufferRenderbuffer)(void);
extern void (*glGetFramebufferAttachmentParameteriv)(void);
extern void (*glGenerateMipmap)(void);
extern void (*glBlitFramebuffer)(void);
extern void (*glRenderbufferStorageMultisample)(void);
extern void (*glFramebufferTextureLayer)(void);
extern void (*glMapBufferRange)(void);
extern void (*glFlushMappedBufferRange)(void);
extern void (*glBindVertexArray)(void);
extern void (*glDeleteVertexArrays)(void);
extern void (*glGenVertexArrays)(void);
extern void (*glIsVertexArray)(void);
extern void (*glBindFragDataLocationIndexed)(void);
extern void (*glGetFragDataIndex)(void);
extern void (*glGenSamplers)(void);
extern void (*glDeleteSamplers)(void);
extern void (*glIsSampler)(void);
extern void (*glBindSampler)(void);
extern void (*glSamplerParameteri)(void);
extern void (*glSamplerParameteriv)(void);
extern void (*glSamplerParameterf)(void);
extern void (*glSamplerParameterfv)(void);
extern void (*glSamplerParameterIiv)(void);
extern void (*glSamplerParameterIuiv)(void);
extern void (*glGetSamplerParameteriv)(void);
extern void (*glGetSamplerParameterIiv)(void);
extern void (*glGetSamplerParameterfv)(void);
extern void (*glGetSamplerParameterIuiv)(void);
extern void (*glQueryCounter)(void);
extern void (*glGetQueryObjecti64v)(void);
extern void (*glGetQueryObjectui64v)(void);
extern void (*glVertexAttribDivisor)(void);
extern void (*glVertexAttribP1ui)(void);
extern void (*glVertexAttribP1uiv)(void);
extern void (*glVertexAttribP2ui)(void);
extern void (*glVertexAttribP2uiv)(void);
extern void (*glVertexAttribP3ui)(void);
extern void (*glVertexAttribP3uiv)(void);
extern void (*glVertexAttribP4ui)(void);
extern void (*glVertexAttribP4uiv)(void);
extern void (*glVertexP2ui)(void);
extern void (*glVertexP2uiv)(void);
extern void (*glVertexP3ui)(void);
extern void (*glVertexP3uiv)(void);
extern void (*glVertexP4ui)(void);
extern void (*glVertexP4uiv)(void);
extern void (*glTexCoordP1ui)(void);
extern void (*glTexCoordP1uiv)(void);
extern void (*glTexCoordP2ui)(void);
extern void (*glTexCoordP2uiv)(void);
extern void (*glTexCoordP3ui)(void);
extern void (*glTexCoordP3uiv)(void);
extern void (*glTexCoordP4ui)(void);
extern void (*glTexCoordP4uiv)(void);
extern void (*glMultiTexCoordP1ui)(void);
extern void (*glMultiTexCoordP1uiv)(void);
extern void (*glMultiTexCoordP2ui)(void);
extern void (*glMultiTexCoordP2uiv)(void);
extern void (*glMultiTexCoordP3ui)(void);
extern void (*glMultiTexCoordP3uiv)(void);
extern void (*glMultiTexCoordP4ui)(void);
extern void (*glMultiTexCoordP4uiv)(void);
extern void (*glNormalP3ui)(void);
extern void (*glNormalP3uiv)(void);
extern void (*glColorP3ui)(void);
extern void (*glColorP3uiv)(void);
extern void (*glColorP4ui)(void);
extern void (*glColorP4uiv)(void);
extern void (*glSecondaryColorP3ui)(void);
extern void (*glSecondaryColorP3uiv)(void);

/* The eight compatibility-profile slots live inside the client's float
 * table (gl.h reaches them the same way). */
extern float flt_140384000[];

/* Unported callees the master drives: the version/extension parse and the
 * context check. */
extern void sub_140091880(void);
extern unsigned int sub_140091BA0(void);

#define GL_VERSION 0x1F02

void gl_load_fixed_functions(void *(*resolve)(const char *))
{
    if (!SR_GLOBAL(uint32_t, 0x144980CB0ULL))
        return;
    SR_GLOBAL(void *, 0x144980CB8ULL) = resolve("glCullFace");
    SR_GLOBAL(void *, 0x144980CC0ULL) = resolve("glFrontFace");
    SR_GLOBAL(void *, 0x144980CC8ULL) = resolve("glHint");
    SR_GLOBAL(void *, 0x144980CD0ULL) = resolve("glLineWidth");
    SR_GLOBAL(void *, 0x144980CD8ULL) = resolve("glPointSize");
    SR_GLOBAL(void *, 0x144980CE0ULL) = resolve("glPolygonMode");
    SR_GLOBAL(void *, 0x144980CE8ULL) = resolve("glScissor");
    SR_GLOBAL(void *, 0x144980CF0ULL) = resolve("glTexParameterf");
    SR_GLOBAL(void *, 0x144980CF8ULL) = resolve("glTexParameterfv");
    SR_GLOBAL(void *, 0x144980D00ULL) = resolve("glTexParameteri");
    SR_GLOBAL(void *, 0x144980D08ULL) = resolve("glTexParameteriv");
    SR_GLOBAL(void *, 0x144980D10ULL) = resolve("glTexImage1D");
    SR_GLOBAL(void *, 0x144980D18ULL) = resolve("glTexImage2D");
    SR_GLOBAL(void *, 0x144980D20ULL) = resolve("glDrawBuffer");
    SR_GLOBAL(void *, 0x144980D28ULL) = resolve("glClear");
    SR_GLOBAL(void *, 0x144980D30ULL) = resolve("glClearColor");
    SR_GLOBAL(void *, 0x144980D38ULL) = resolve("glClearStencil");
    SR_GLOBAL(void *, 0x144980D40ULL) = resolve("glClearDepth");
    SR_GLOBAL(void *, 0x144980D48ULL) = resolve("glStencilMask");
    SR_GLOBAL(void *, 0x144980D50ULL) = resolve("glColorMask");
    SR_GLOBAL(void *, 0x144980D58ULL) = resolve("glDepthMask");
    SR_GLOBAL(void *, 0x144980D60ULL) = resolve("glDisable");
    SR_GLOBAL(void *, 0x144980D68ULL) = resolve("glEnable");
    SR_GLOBAL(void *, 0x144980D70ULL) = resolve("glFinish");
    SR_GLOBAL(void *, 0x144980D78ULL) = resolve("glFlush");
    SR_GLOBAL(void *, 0x144980D80ULL) = resolve("glBlendFunc");
    glLogicOp = (void (*)(void))resolve("glLogicOp");
    glStencilFunc = (void (*)(void))resolve("glStencilFunc");
    glStencilOp = (void (*)(void))resolve("glStencilOp");
    glDepthFunc = (void (*)(void))resolve("glDepthFunc");
    glPixelStoref = (void (*)(void))resolve("glPixelStoref");
    glPixelStorei = (void (*)(void))resolve("glPixelStorei");
    glReadBuffer = (void (*)(void))resolve("glReadBuffer");
    glReadPixels = (void (*)(void))resolve("glReadPixels");
    glGetBooleanv = (void (*)(void))resolve("glGetBooleanv");
    glGetDoublev = (void (*)(void))resolve("glGetDoublev");
    glGetError = (void (*)(void))resolve("glGetError");
    glGetFloatv = (void (*)(void))resolve("glGetFloatv");
    glGetIntegerv = (void (*)(void))resolve("glGetIntegerv");
    glGetString = (void (*)(void))resolve("glGetString");
    glGetTexImage = (void (*)(void))resolve("glGetTexImage");
    glGetTexParameterfv = (void (*)(void))resolve("glGetTexParameterfv");
    glGetTexParameteriv = (void (*)(void))resolve("glGetTexParameteriv");
    glGetTexLevelParameterfv = (void (*)(void))resolve("glGetTexLevelParameterfv");
    glGetTexLevelParameteriv = (void (*)(void))resolve("glGetTexLevelParameteriv");
    glIsEnabled = (void (*)(void))resolve("glIsEnabled");
    glDepthRange = (void (*)(void))resolve("glDepthRange");
    glViewport = (void (*)(void))resolve("glViewport");
}

void gl_load_core_1_1(void *(*resolve)(const char *))
{
    if (!dword_140302FF0)
        return;
    glDrawArrays = (void (*)(void))resolve("glDrawArrays");
    *(void **)&flt_140384000[131076] = resolve("glDrawElements");
    *(void **)&flt_140384000[131078] = resolve("glPolygonOffset");
    *(void **)&flt_140384000[131080] = resolve("glCopyTexImage1D");
    *(void **)&flt_140384000[131082] = resolve("glCopyTexImage2D");
    *(void **)&flt_140384000[131084] = resolve("glCopyTexSubImage1D");
    *(void **)&flt_140384000[131086] = resolve("glCopyTexSubImage2D");
    *(void **)&flt_140384000[131088] = resolve("glTexSubImage1D");
    *(void **)&flt_140384000[131090] = resolve("glTexSubImage2D");
    glBindTexture = (void (*)(void))resolve("glBindTexture");
    glDeleteTextures = (void (*)(void))resolve("glDeleteTextures");
    glGenTextures = (void (*)(void))resolve("glGenTextures");
    glIsTexture = (void (*)(void))resolve("glIsTexture");
}

void gl_load_core_1_2(void *(*resolve)(const char *))
{
    if (!dword_140302FF4)
        return;
    glDrawRangeElements = (void (*)(void))resolve("glDrawRangeElements");
    glTexImage3D = (void (*)(void))resolve("glTexImage3D");
    glTexSubImage3D = (void (*)(void))resolve("glTexSubImage3D");
    glCopyTexSubImage3D = (void (*)(void))resolve("glCopyTexSubImage3D");
}

void gl_load_multitexture_1_3(void *(*resolve)(const char *))
{
    if (!unk_140404090)
        return;
    glActiveTexture = (void (*)(void))resolve("glActiveTexture");
    glSampleCoverage = (void (*)(void))resolve("glSampleCoverage");
    glCompressedTexImage3D = (void (*)(void))resolve("glCompressedTexImage3D");
    glCompressedTexImage2D = (void (*)(void))resolve("glCompressedTexImage2D");
    glCompressedTexImage1D = (void (*)(void))resolve("glCompressedTexImage1D");
    glCompressedTexSubImage3D = (void (*)(void))resolve("glCompressedTexSubImage3D");
    glCompressedTexSubImage2D = (void (*)(void))resolve("glCompressedTexSubImage2D");
    glCompressedTexSubImage1D = (void (*)(void))resolve("glCompressedTexSubImage1D");
    glGetCompressedTexImage = (void (*)(void))resolve("glGetCompressedTexImage");
}

void gl_load_blend_1_4(void *(*resolve)(const char *))
{
    if (!unk_140404094)
        return;
    glBlendFuncSeparate = (void (*)(void))resolve("glBlendFuncSeparate");
    glMultiDrawArrays = (void (*)(void))resolve("glMultiDrawArrays");
    glMultiDrawElements = (void (*)(void))resolve("glMultiDrawElements");
    glPointParameterf = (void (*)(void))resolve("glPointParameterf");
    glPointParameterfv = (void (*)(void))resolve("glPointParameterfv");
    glPointParameteri = (void (*)(void))resolve("glPointParameteri");
    glPointParameteriv = (void (*)(void))resolve("glPointParameteriv");
    glBlendColor = (void (*)(void))resolve("glBlendColor");
    glBlendEquation = (void (*)(void))resolve("glBlendEquation");
}

void gl_load_buffers_1_5(void *(*resolve)(const char *))
{
    if (!unk_140404128)
        return;
    glGenQueries = (void (*)(void))resolve("glGenQueries");
    glDeleteQueries = (void (*)(void))resolve("glDeleteQueries");
    glIsQuery = (void (*)(void))resolve("glIsQuery");
    glBeginQuery = (void (*)(void))resolve("glBeginQuery");
    glEndQuery = (void (*)(void))resolve("glEndQuery");
    glGetQueryiv = (void (*)(void))resolve("glGetQueryiv");
    glGetQueryObjectiv = (void (*)(void))resolve("glGetQueryObjectiv");
    glGetQueryObjectuiv = (void (*)(void))resolve("glGetQueryObjectuiv");
    glBindBuffer = (void (*)(void))resolve("glBindBuffer");
    glDeleteBuffers = (void (*)(void))resolve("glDeleteBuffers");
    glGenBuffers = (void (*)(void))resolve("glGenBuffers");
    glIsBuffer = (void (*)(void))resolve("glIsBuffer");
    glBufferData = (void (*)(void))resolve("glBufferData");
    glBufferSubData = (void (*)(void))resolve("glBufferSubData");
    glGetBufferSubData = (void (*)(void))resolve("glGetBufferSubData");
    glMapBuffer = (void (*)(void))resolve("glMapBuffer");
    glUnmapBuffer = (void (*)(void))resolve("glUnmapBuffer");
    glGetBufferParameteriv = (void (*)(void))resolve("glGetBufferParameteriv");
    glGetBufferPointerv = (void (*)(void))resolve("glGetBufferPointerv");
}

void gl_load_stencil_2_0(void *(*resolve)(const char *))
{
    if (!unk_14040412C)
        return;
    glBlendEquationSeparate = (void (*)(void))resolve("glBlendEquationSeparate");
    glDrawBuffers = (void (*)(void))resolve("glDrawBuffers");
    glStencilOpSeparate = (void (*)(void))resolve("glStencilOpSeparate");
    glStencilFuncSeparate = (void (*)(void))resolve("glStencilFuncSeparate");
    glStencilMaskSeparate = (void (*)(void))resolve("glStencilMaskSeparate");
    glAttachShader = (void (*)(void))resolve("glAttachShader");
    glBindAttribLocation = (void (*)(void))resolve("glBindAttribLocation");
    glCompileShader = (void (*)(void))resolve("glCompileShader");
    glCreateProgram = (void (*)(void))resolve("glCreateProgram");
    glCreateShader = (void (*)(void))resolve("glCreateShader");
    glDeleteProgram = (void (*)(void))resolve("glDeleteProgram");
    glDeleteShader = (void (*)(void))resolve("glDeleteShader");
    glDetachShader = (void (*)(void))resolve("glDetachShader");
    glDisableVertexAttribArray = (void (*)(void))resolve("glDisableVertexAttribArray");
    glEnableVertexAttribArray = (void (*)(void))resolve("glEnableVertexAttribArray");
    glGetActiveAttrib = (void (*)(void))resolve("glGetActiveAttrib");
    glGetActiveUniform = (void (*)(void))resolve("glGetActiveUniform");
    glGetAttachedShaders = (void (*)(void))resolve("glGetAttachedShaders");
    glGetAttribLocation = (void (*)(void))resolve("glGetAttribLocation");
    glGetProgramiv = (void (*)(void))resolve("glGetProgramiv");
    glGetProgramInfoLog = (void (*)(void))resolve("glGetProgramInfoLog");
    glGetShaderiv = (void (*)(void))resolve("glGetShaderiv");
    glGetShaderInfoLog = (void (*)(void))resolve("glGetShaderInfoLog");
    glGetShaderSource = (void (*)(void))resolve("glGetShaderSource");
    glGetUniformLocation = (void (*)(void))resolve("glGetUniformLocation");
    glGetUniformfv = (void (*)(void))resolve("glGetUniformfv");
    glGetUniformiv = (void (*)(void))resolve("glGetUniformiv");
    glGetVertexAttribdv = (void (*)(void))resolve("glGetVertexAttribdv");
    glGetVertexAttribfv = (void (*)(void))resolve("glGetVertexAttribfv");
    glGetVertexAttribiv = (void (*)(void))resolve("glGetVertexAttribiv");
    glGetVertexAttribPointerv = (void (*)(void))resolve("glGetVertexAttribPointerv");
    glIsProgram = (void (*)(void))resolve("glIsProgram");
    glIsShader = (void (*)(void))resolve("glIsShader");
    glLinkProgram = (void (*)(void))resolve("glLinkProgram");
    glShaderSource = (void (*)(void))resolve("glShaderSource");
    glUseProgram = (void (*)(void))resolve("glUseProgram");
    glUniform1f = (void (*)(void))resolve("glUniform1f");
    glUniform2f = (void (*)(void))resolve("glUniform2f");
    glUniform3f = (void (*)(void))resolve("glUniform3f");
    glUniform4f = (void (*)(void))resolve("glUniform4f");
    glUniform1i = (void (*)(void))resolve("glUniform1i");
    glUniform2i = (void (*)(void))resolve("glUniform2i");
    glUniform3i = (void (*)(void))resolve("glUniform3i");
    glUniform4i = (void (*)(void))resolve("glUniform4i");
    glUniform1fv = (void (*)(void))resolve("glUniform1fv");
    glUniform2fv = (void (*)(void))resolve("glUniform2fv");
    glUniform3fv = (void (*)(void))resolve("glUniform3fv");
    glUniform4fv = (void (*)(void))resolve("glUniform4fv");
    glUniform1iv = (void (*)(void))resolve("glUniform1iv");
    glUniform2iv = (void (*)(void))resolve("glUniform2iv");
    glUniform3iv = (void (*)(void))resolve("glUniform3iv");
    glUniform4iv = (void (*)(void))resolve("glUniform4iv");
    glUniformMatrix2fv = (void (*)(void))resolve("glUniformMatrix2fv");
    glUniformMatrix3fv = (void (*)(void))resolve("glUniformMatrix3fv");
    glUniformMatrix4fv = (void (*)(void))resolve("glUniformMatrix4fv");
    glValidateProgram = (void (*)(void))resolve("glValidateProgram");
    glVertexAttrib1d = (void (*)(void))resolve("glVertexAttrib1d");
    glVertexAttrib1dv = (void (*)(void))resolve("glVertexAttrib1dv");
    glVertexAttrib1f = (void (*)(void))resolve("glVertexAttrib1f");
    glVertexAttrib1fv = (void (*)(void))resolve("glVertexAttrib1fv");
    glVertexAttrib1s = (void (*)(void))resolve("glVertexAttrib1s");
    glVertexAttrib1sv = (void (*)(void))resolve("glVertexAttrib1sv");
    glVertexAttrib2d = (void (*)(void))resolve("glVertexAttrib2d");
    glVertexAttrib2dv = (void (*)(void))resolve("glVertexAttrib2dv");
    glVertexAttrib2f = (void (*)(void))resolve("glVertexAttrib2f");
    glVertexAttrib2fv = (void (*)(void))resolve("glVertexAttrib2fv");
    glVertexAttrib2s = (void (*)(void))resolve("glVertexAttrib2s");
    glVertexAttrib2sv = (void (*)(void))resolve("glVertexAttrib2sv");
    glVertexAttrib3d = (void (*)(void))resolve("glVertexAttrib3d");
    glVertexAttrib3dv = (void (*)(void))resolve("glVertexAttrib3dv");
    glVertexAttrib3f = (void (*)(void))resolve("glVertexAttrib3f");
    glVertexAttrib3fv = (void (*)(void))resolve("glVertexAttrib3fv");
    glVertexAttrib3s = (void (*)(void))resolve("glVertexAttrib3s");
    glVertexAttrib3sv = (void (*)(void))resolve("glVertexAttrib3sv");
    glVertexAttrib4Nbv = (void (*)(void))resolve("glVertexAttrib4Nbv");
    glVertexAttrib4Niv = (void (*)(void))resolve("glVertexAttrib4Niv");
    glVertexAttrib4Nsv = (void (*)(void))resolve("glVertexAttrib4Nsv");
    glVertexAttrib4Nub = (void (*)(void))resolve("glVertexAttrib4Nub");
    glVertexAttrib4Nubv = (void (*)(void))resolve("glVertexAttrib4Nubv");
    glVertexAttrib4Nuiv = (void (*)(void))resolve("glVertexAttrib4Nuiv");
    glVertexAttrib4Nusv = (void (*)(void))resolve("glVertexAttrib4Nusv");
    glVertexAttrib4bv = (void (*)(void))resolve("glVertexAttrib4bv");
    glVertexAttrib4d = (void (*)(void))resolve("glVertexAttrib4d");
    glVertexAttrib4dv = (void (*)(void))resolve("glVertexAttrib4dv");
    glVertexAttrib4f = (void (*)(void))resolve("glVertexAttrib4f");
    glVertexAttrib4fv = (void (*)(void))resolve("glVertexAttrib4fv");
    glVertexAttrib4iv = (void (*)(void))resolve("glVertexAttrib4iv");
    glVertexAttrib4s = (void (*)(void))resolve("glVertexAttrib4s");
    glVertexAttrib4sv = (void (*)(void))resolve("glVertexAttrib4sv");
    glVertexAttrib4ubv = (void (*)(void))resolve("glVertexAttrib4ubv");
    glVertexAttrib4uiv = (void (*)(void))resolve("glVertexAttrib4uiv");
    glVertexAttrib4usv = (void (*)(void))resolve("glVertexAttrib4usv");
    glVertexAttribPointer = (void (*)(void))resolve("glVertexAttribPointer");
}

void gl_load_uniform_2_0(void *(*resolve)(const char *))
{
    if (!unk_1404044B0)
        return;
    glUniformMatrix2x3fv = (void (*)(void))resolve("glUniformMatrix2x3fv");
    glUniformMatrix3x2fv = (void (*)(void))resolve("glUniformMatrix3x2fv");
    glUniformMatrix2x4fv = (void (*)(void))resolve("glUniformMatrix2x4fv");
    glUniformMatrix4x2fv = (void (*)(void))resolve("glUniformMatrix4x2fv");
    glUniformMatrix3x4fv = (void (*)(void))resolve("glUniformMatrix3x4fv");
    glUniformMatrix4x3fv = (void (*)(void))resolve("glUniformMatrix4x3fv");
}

void gl_load_indexed_3_0(void *(*resolve)(const char *))
{
    if (!unk_1404044B4)
        return;
    glColorMaski = (void (*)(void))resolve("glColorMaski");
    glGetBooleani_v = (void (*)(void))resolve("glGetBooleani_v");
    glGetIntegeri_v = (void (*)(void))resolve("glGetIntegeri_v");
    glEnablei = (void (*)(void))resolve("glEnablei");
    glDisablei = (void (*)(void))resolve("glDisablei");
    glIsEnabledi = (void (*)(void))resolve("glIsEnabledi");
    glBeginTransformFeedback = (void (*)(void))resolve("glBeginTransformFeedback");
    glEndTransformFeedback = (void (*)(void))resolve("glEndTransformFeedback");
    glBindBufferRange = (void (*)(void))resolve("glBindBufferRange");
    glBindBufferBase = (void (*)(void))resolve("glBindBufferBase");
    glTransformFeedbackVaryings = (void (*)(void))resolve("glTransformFeedbackVaryings");
    glGetTransformFeedbackVarying = (void (*)(void))resolve("glGetTransformFeedbackVarying");
    glClampColor = (void (*)(void))resolve("glClampColor");
    glBeginConditionalRender = (void (*)(void))resolve("glBeginConditionalRender");
    glEndConditionalRender = (void (*)(void))resolve("glEndConditionalRender");
    glVertexAttribIPointer = (void (*)(void))resolve("glVertexAttribIPointer");
    glGetVertexAttribIiv = (void (*)(void))resolve("glGetVertexAttribIiv");
    glGetVertexAttribIuiv = (void (*)(void))resolve("glGetVertexAttribIuiv");
    glVertexAttribI1i = (void (*)(void))resolve("glVertexAttribI1i");
    glVertexAttribI2i = (void (*)(void))resolve("glVertexAttribI2i");
    glVertexAttribI3i = (void (*)(void))resolve("glVertexAttribI3i");
    glVertexAttribI4i = (void (*)(void))resolve("glVertexAttribI4i");
    glVertexAttribI1ui = (void (*)(void))resolve("glVertexAttribI1ui");
    glVertexAttribI2ui = (void (*)(void))resolve("glVertexAttribI2ui");
    glVertexAttribI3ui = (void (*)(void))resolve("glVertexAttribI3ui");
    glVertexAttribI4ui = (void (*)(void))resolve("glVertexAttribI4ui");
    glVertexAttribI1iv = (void (*)(void))resolve("glVertexAttribI1iv");
    glVertexAttribI2iv = (void (*)(void))resolve("glVertexAttribI2iv");
    glVertexAttribI3iv = (void (*)(void))resolve("glVertexAttribI3iv");
    glVertexAttribI4iv = (void (*)(void))resolve("glVertexAttribI4iv");
    glVertexAttribI1uiv = (void (*)(void))resolve("glVertexAttribI1uiv");
    glVertexAttribI2uiv = (void (*)(void))resolve("glVertexAttribI2uiv");
    glVertexAttribI3uiv = (void (*)(void))resolve("glVertexAttribI3uiv");
    glVertexAttribI4uiv = (void (*)(void))resolve("glVertexAttribI4uiv");
    glVertexAttribI4bv = (void (*)(void))resolve("glVertexAttribI4bv");
    glVertexAttribI4sv = (void (*)(void))resolve("glVertexAttribI4sv");
    glVertexAttribI4ubv = (void (*)(void))resolve("glVertexAttribI4ubv");
    glVertexAttribI4usv = (void (*)(void))resolve("glVertexAttribI4usv");
    glGetUniformuiv = (void (*)(void))resolve("glGetUniformuiv");
    glBindFragDataLocation = (void (*)(void))resolve("glBindFragDataLocation");
    glGetFragDataLocation = (void (*)(void))resolve("glGetFragDataLocation");
    glUniform1ui = (void (*)(void))resolve("glUniform1ui");
    glUniform2ui = (void (*)(void))resolve("glUniform2ui");
    glUniform3ui = (void (*)(void))resolve("glUniform3ui");
    glUniform4ui = (void (*)(void))resolve("glUniform4ui");
    glUniform1uiv = (void (*)(void))resolve("glUniform1uiv");
    glUniform2uiv = (void (*)(void))resolve("glUniform2uiv");
    glUniform3uiv = (void (*)(void))resolve("glUniform3uiv");
    glUniform4uiv = (void (*)(void))resolve("glUniform4uiv");
    glTexParameterIiv = (void (*)(void))resolve("glTexParameterIiv");
    glTexParameterIuiv = (void (*)(void))resolve("glTexParameterIuiv");
    glGetTexParameterIiv = (void (*)(void))resolve("glGetTexParameterIiv");
    glGetTexParameterIuiv = (void (*)(void))resolve("glGetTexParameterIuiv");
    glClearBufferiv = (void (*)(void))resolve("glClearBufferiv");
    glClearBufferuiv = (void (*)(void))resolve("glClearBufferuiv");
    glClearBufferfv = (void (*)(void))resolve("glClearBufferfv");
    glClearBufferfi = (void (*)(void))resolve("glClearBufferfi");
    glGetStringi = (void (*)(void))resolve("glGetStringi");
    glIsRenderbuffer = (void (*)(void))resolve("glIsRenderbuffer");
    glBindRenderbuffer = (void (*)(void))resolve("glBindRenderbuffer");
    glDeleteRenderbuffers = (void (*)(void))resolve("glDeleteRenderbuffers");
    glGenRenderbuffers = (void (*)(void))resolve("glGenRenderbuffers");
    glRenderbufferStorage = (void (*)(void))resolve("glRenderbufferStorage");
    glGetRenderbufferParameteriv = (void (*)(void))resolve("glGetRenderbufferParameteriv");
    glIsFramebuffer = (void (*)(void))resolve("glIsFramebuffer");
    glBindFramebuffer = (void (*)(void))resolve("glBindFramebuffer");
    glDeleteFramebuffers = (void (*)(void))resolve("glDeleteFramebuffers");
    glGenFramebuffers = (void (*)(void))resolve("glGenFramebuffers");
    glCheckFramebufferStatus = (void (*)(void))resolve("glCheckFramebufferStatus");
    glFramebufferTexture1D = (void (*)(void))resolve("glFramebufferTexture1D");
    glFramebufferTexture2D = (void (*)(void))resolve("glFramebufferTexture2D");
    glFramebufferTexture3D = (void (*)(void))resolve("glFramebufferTexture3D");
    glFramebufferRenderbuffer = (void (*)(void))resolve("glFramebufferRenderbuffer");
    glGetFramebufferAttachmentParameteriv = (void (*)(void))resolve("glGetFramebufferAttachmentParameteriv");
    glGenerateMipmap = (void (*)(void))resolve("glGenerateMipmap");
    glBlitFramebuffer = (void (*)(void))resolve("glBlitFramebuffer");
    glRenderbufferStorageMultisample = (void (*)(void))resolve("glRenderbufferStorageMultisample");
    glFramebufferTextureLayer = (void (*)(void))resolve("glFramebufferTextureLayer");
    glMapBufferRange = (void (*)(void))resolve("glMapBufferRange");
    glFlushMappedBufferRange = (void (*)(void))resolve("glFlushMappedBufferRange");
    glBindVertexArray = (void (*)(void))resolve("glBindVertexArray");
    glDeleteVertexArrays = (void (*)(void))resolve("glDeleteVertexArrays");
    glGenVertexArrays = (void (*)(void))resolve("glGenVertexArrays");
    glIsVertexArray = (void (*)(void))resolve("glIsVertexArray");
}

void gl_load_instanced_3_0(void *(*resolve)(const char *))
{
    if (!unk_140404788)
        return;
    glDrawArraysInstanced = (void (*)(void))resolve("glDrawArraysInstanced");
    glDrawElementsInstanced = (void (*)(void))resolve("glDrawElementsInstanced");
    glTexBuffer = (void (*)(void))resolve("glTexBuffer");
    glPrimitiveRestartIndex = (void (*)(void))resolve("glPrimitiveRestartIndex");
    glCopyBufferSubData = (void (*)(void))resolve("glCopyBufferSubData");
    glGetUniformIndices = (void (*)(void))resolve("glGetUniformIndices");
    glGetActiveUniformsiv = (void (*)(void))resolve("glGetActiveUniformsiv");
    glGetActiveUniformName = (void (*)(void))resolve("glGetActiveUniformName");
    glGetUniformBlockIndex = (void (*)(void))resolve("glGetUniformBlockIndex");
    glGetActiveUniformBlockiv = (void (*)(void))resolve("glGetActiveUniformBlockiv");
    glGetActiveUniformBlockName = (void (*)(void))resolve("glGetActiveUniformBlockName");
    glUniformBlockBinding = (void (*)(void))resolve("glUniformBlockBinding");
    glBindBufferRange = (void (*)(void))resolve("glBindBufferRange");
    glBindBufferBase = (void (*)(void))resolve("glBindBufferBase");
    glGetIntegeri_v = (void (*)(void))resolve("glGetIntegeri_v");
}

void gl_load_basevertex_3_2(void *(*resolve)(const char *))
{
    if (!unk_14040478C)
        return;
    glDrawElementsBaseVertex = (void (*)(void))resolve("glDrawElementsBaseVertex");
    glDrawRangeElementsBaseVertex = (void (*)(void))resolve("glDrawRangeElementsBaseVertex");
    glDrawElementsInstancedBaseVertex = (void (*)(void))resolve("glDrawElementsInstancedBaseVertex");
    glProvokingVertex = (void (*)(void))resolve("glProvokingVertex");
    glFenceSync = (void (*)(void))resolve("glFenceSync");
    glIsSync = (void (*)(void))resolve("glIsSync");
    glDeleteSync = (void (*)(void))resolve("glDeleteSync");
    glClientWaitSync = (void (*)(void))resolve("glClientWaitSync");
    glWaitSync = (void (*)(void))resolve("glWaitSync");
    glGetInteger64v = (void (*)(void))resolve("glGetInteger64v");
    glGetSynciv = (void (*)(void))resolve("glGetSynciv");
    glGetInteger64i_v = (void (*)(void))resolve("glGetInteger64i_v");
    glGetBufferParameteri64v = (void (*)(void))resolve("glGetBufferParameteri64v");
    glFramebufferTexture = (void (*)(void))resolve("glFramebufferTexture");
    glTexImage2DMultisample = (void (*)(void))resolve("glTexImage2DMultisample");
    glTexImage3DMultisample = (void (*)(void))resolve("glTexImage3DMultisample");
    glGetMultisamplefv = (void (*)(void))resolve("glGetMultisamplefv");
    glSampleMaski = (void (*)(void))resolve("glSampleMaski");
}

void gl_load_sync_3_3(void *(*resolve)(const char *))
{
    if (!unk_140404888)
        return;
    glBindFragDataLocationIndexed = (void (*)(void))resolve("glBindFragDataLocationIndexed");
    glGetFragDataIndex = (void (*)(void))resolve("glGetFragDataIndex");
    glGenSamplers = (void (*)(void))resolve("glGenSamplers");
    glDeleteSamplers = (void (*)(void))resolve("glDeleteSamplers");
    glIsSampler = (void (*)(void))resolve("glIsSampler");
    glBindSampler = (void (*)(void))resolve("glBindSampler");
    glSamplerParameteri = (void (*)(void))resolve("glSamplerParameteri");
    glSamplerParameteriv = (void (*)(void))resolve("glSamplerParameteriv");
    glSamplerParameterf = (void (*)(void))resolve("glSamplerParameterf");
    glSamplerParameterfv = (void (*)(void))resolve("glSamplerParameterfv");
    glSamplerParameterIiv = (void (*)(void))resolve("glSamplerParameterIiv");
    glSamplerParameterIuiv = (void (*)(void))resolve("glSamplerParameterIuiv");
    glGetSamplerParameteriv = (void (*)(void))resolve("glGetSamplerParameteriv");
    glGetSamplerParameterIiv = (void (*)(void))resolve("glGetSamplerParameterIiv");
    glGetSamplerParameterfv = (void (*)(void))resolve("glGetSamplerParameterfv");
    glGetSamplerParameterIuiv = (void (*)(void))resolve("glGetSamplerParameterIuiv");
    glQueryCounter = (void (*)(void))resolve("glQueryCounter");
    glGetQueryObjecti64v = (void (*)(void))resolve("glGetQueryObjecti64v");
    glGetQueryObjectui64v = (void (*)(void))resolve("glGetQueryObjectui64v");
    glVertexAttribDivisor = (void (*)(void))resolve("glVertexAttribDivisor");
    glVertexAttribP1ui = (void (*)(void))resolve("glVertexAttribP1ui");
    glVertexAttribP1uiv = (void (*)(void))resolve("glVertexAttribP1uiv");
    glVertexAttribP2ui = (void (*)(void))resolve("glVertexAttribP2ui");
    glVertexAttribP2uiv = (void (*)(void))resolve("glVertexAttribP2uiv");
    glVertexAttribP3ui = (void (*)(void))resolve("glVertexAttribP3ui");
    glVertexAttribP3uiv = (void (*)(void))resolve("glVertexAttribP3uiv");
    glVertexAttribP4ui = (void (*)(void))resolve("glVertexAttribP4ui");
    glVertexAttribP4uiv = (void (*)(void))resolve("glVertexAttribP4uiv");
    glVertexP2ui = (void (*)(void))resolve("glVertexP2ui");
    glVertexP2uiv = (void (*)(void))resolve("glVertexP2uiv");
    glVertexP3ui = (void (*)(void))resolve("glVertexP3ui");
    glVertexP3uiv = (void (*)(void))resolve("glVertexP3uiv");
    glVertexP4ui = (void (*)(void))resolve("glVertexP4ui");
    glVertexP4uiv = (void (*)(void))resolve("glVertexP4uiv");
    glTexCoordP1ui = (void (*)(void))resolve("glTexCoordP1ui");
    glTexCoordP1uiv = (void (*)(void))resolve("glTexCoordP1uiv");
    glTexCoordP2ui = (void (*)(void))resolve("glTexCoordP2ui");
    glTexCoordP2uiv = (void (*)(void))resolve("glTexCoordP2uiv");
    glTexCoordP3ui = (void (*)(void))resolve("glTexCoordP3ui");
    glTexCoordP3uiv = (void (*)(void))resolve("glTexCoordP3uiv");
    glTexCoordP4ui = (void (*)(void))resolve("glTexCoordP4ui");
    glTexCoordP4uiv = (void (*)(void))resolve("glTexCoordP4uiv");
    glMultiTexCoordP1ui = (void (*)(void))resolve("glMultiTexCoordP1ui");
    glMultiTexCoordP1uiv = (void (*)(void))resolve("glMultiTexCoordP1uiv");
    glMultiTexCoordP2ui = (void (*)(void))resolve("glMultiTexCoordP2ui");
    glMultiTexCoordP2uiv = (void (*)(void))resolve("glMultiTexCoordP2uiv");
    glMultiTexCoordP3ui = (void (*)(void))resolve("glMultiTexCoordP3ui");
    glMultiTexCoordP3uiv = (void (*)(void))resolve("glMultiTexCoordP3uiv");
    glMultiTexCoordP4ui = (void (*)(void))resolve("glMultiTexCoordP4ui");
    glMultiTexCoordP4uiv = (void (*)(void))resolve("glMultiTexCoordP4uiv");
    glNormalP3ui = (void (*)(void))resolve("glNormalP3ui");
    glNormalP3uiv = (void (*)(void))resolve("glNormalP3uiv");
    glColorP3ui = (void (*)(void))resolve("glColorP3ui");
    glColorP3uiv = (void (*)(void))resolve("glColorP3uiv");
    glColorP4ui = (void (*)(void))resolve("glColorP4ui");
    glColorP4uiv = (void (*)(void))resolve("glColorP4uiv");
    glSecondaryColorP3ui = (void (*)(void))resolve("glSecondaryColorP3ui");
    glSecondaryColorP3uiv = (void (*)(void))resolve("glSecondaryColorP3uiv");
}


/* Resolves glClipControl through the gate, or returns the resolver itself
 * when the extension is missing, as the original does. 0x1400E3B90 */
void *gl_clip_control_proc(void *(*resolve)(const char *))
{
    void *result = (void *)resolve;
    if (unk_14040488C) {
        result = resolve("glClipControl");
        glClipControl = (void (*)(void))result;
    }
    return result;
}

/* The master loader: clears the version-read result, loads glGetString, asks
 * the version, parses it, then runs every extension loader in the original's
 * order — the fixed-function block, the inlined extension blocks (here as
 * calls to the ports above, the original inlined them), and the ClipControl
 * resolver — and reports whether anything loaded. 0x1400A6700 */
int gl_load_all(void *(*resolve)(const char *))
{
    /* The original zeroed the pair with one qword store at 0x140404A68, which
     * spans both dwords; they are separate globals in the recompile. */
    dword_140404A68 = 0;
    SR_GLOBAL(uint32_t, 0x140404A6CULL) = 0;
    void *get_string = resolve("glGetString");
    glGetString = (void (*)(void))get_string;
    if (!get_string || !((const char *(*)(unsigned int))get_string)(GL_VERSION))
        return 0;
    sub_140091880();
    gl_load_fixed_functions(resolve);
    gl_load_core_1_1(resolve);
    gl_load_core_1_2(resolve);
    gl_load_multitexture_1_3(resolve);
    gl_load_blend_1_4(resolve);
    gl_load_buffers_1_5(resolve);
    gl_load_stencil_2_0(resolve);
    gl_load_uniform_2_0(resolve);
    gl_load_indexed_3_0(resolve);
    gl_load_instanced_3_0(resolve);
    gl_load_basevertex_3_2(resolve);
    gl_load_sync_3_3(resolve);
    if (!sub_140091BA0())
        return 0;
    gl_clip_control_proc(resolve);
    if (dword_140404A68 || SR_GLOBAL(uint32_t, 0x140404A6CULL))
        return 1;
    return 0;
}
