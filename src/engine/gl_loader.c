#include <stddef.h>
#include <stdint.h>
#include "gl_loader.h"
#include "memory.h"

/* The version flags: dwords of their own, except the first, which lies in
 * the state region. */
extern int32_t dword_140302FF0;
extern int32_t dword_140302FF4;
extern int32_t unk_140404090;
extern int32_t unk_140404094;
extern int32_t unk_140404128;
extern int32_t unk_14040412C;
extern int32_t unk_1404044B0;
extern int32_t unk_1404044B4;
extern int32_t unk_140404788;
extern int32_t unk_14040478C;
extern int32_t unk_140404888;
extern int32_t unk_14040488C;
extern float flt_140384000[];
extern void *unk_140404808; /* glMultiDrawElementsBaseVertex */
extern char slot_glLogicOp[] __asm__("glLogicOp");
extern char slot_glStencilFunc[] __asm__("glStencilFunc");
extern char slot_glStencilOp[] __asm__("glStencilOp");
extern char slot_glDepthFunc[] __asm__("glDepthFunc");
extern char slot_glPixelStoref[] __asm__("glPixelStoref");
extern char slot_glPixelStorei[] __asm__("glPixelStorei");
extern char slot_glReadBuffer[] __asm__("glReadBuffer");
extern char slot_glReadPixels[] __asm__("glReadPixels");
extern char slot_glGetBooleanv[] __asm__("glGetBooleanv");
extern char slot_glGetDoublev[] __asm__("glGetDoublev");
extern char slot_glGetError[] __asm__("glGetError");
extern char slot_glGetFloatv[] __asm__("glGetFloatv");
extern char slot_glGetIntegerv[] __asm__("glGetIntegerv");
extern char slot_glGetString[] __asm__("glGetString");
extern char slot_glGetTexImage[] __asm__("glGetTexImage");
extern char slot_glGetTexParameterfv[] __asm__("glGetTexParameterfv");
extern char slot_glGetTexParameteriv[] __asm__("glGetTexParameteriv");
extern char slot_glGetTexLevelParameterfv[] __asm__("glGetTexLevelParameterfv");
extern char slot_glGetTexLevelParameteriv[] __asm__("glGetTexLevelParameteriv");
extern char slot_glIsEnabled[] __asm__("glIsEnabled");
extern char slot_glDepthRange[] __asm__("glDepthRange");
extern char slot_glViewport[] __asm__("glViewport");
extern char slot_glDrawArrays[] __asm__("glDrawArrays");
extern char slot_glBindTexture[] __asm__("glBindTexture");
extern char slot_glDeleteTextures[] __asm__("glDeleteTextures");
extern char slot_glGenTextures[] __asm__("glGenTextures");
extern char slot_glIsTexture[] __asm__("glIsTexture");
extern char slot_glDrawRangeElements[] __asm__("glDrawRangeElements");
extern char slot_glTexImage3D[] __asm__("glTexImage3D");
extern char slot_glTexSubImage3D[] __asm__("glTexSubImage3D");
extern char slot_glCopyTexSubImage3D[] __asm__("glCopyTexSubImage3D");
extern char slot_glActiveTexture[] __asm__("glActiveTexture");
extern char slot_glSampleCoverage[] __asm__("glSampleCoverage");
extern char slot_glCompressedTexImage3D[] __asm__("glCompressedTexImage3D");
extern char slot_glCompressedTexImage2D[] __asm__("glCompressedTexImage2D");
extern char slot_glCompressedTexImage1D[] __asm__("glCompressedTexImage1D");
extern char slot_glCompressedTexSubImage3D[] __asm__("glCompressedTexSubImage3D");
extern char slot_glCompressedTexSubImage2D[] __asm__("glCompressedTexSubImage2D");
extern char slot_glCompressedTexSubImage1D[] __asm__("glCompressedTexSubImage1D");
extern char slot_glGetCompressedTexImage[] __asm__("glGetCompressedTexImage");
extern char slot_glBlendFuncSeparate[] __asm__("glBlendFuncSeparate");
extern char slot_glMultiDrawArrays[] __asm__("glMultiDrawArrays");
extern char slot_glMultiDrawElements[] __asm__("glMultiDrawElements");
extern char slot_glPointParameterf[] __asm__("glPointParameterf");
extern char slot_glPointParameterfv[] __asm__("glPointParameterfv");
extern char slot_glPointParameteri[] __asm__("glPointParameteri");
extern char slot_glPointParameteriv[] __asm__("glPointParameteriv");
extern char slot_glBlendColor[] __asm__("glBlendColor");
extern char slot_glBlendEquation[] __asm__("glBlendEquation");
extern char slot_glGenQueries[] __asm__("glGenQueries");
extern char slot_glDeleteQueries[] __asm__("glDeleteQueries");
extern char slot_glIsQuery[] __asm__("glIsQuery");
extern char slot_glBeginQuery[] __asm__("glBeginQuery");
extern char slot_glEndQuery[] __asm__("glEndQuery");
extern char slot_glGetQueryiv[] __asm__("glGetQueryiv");
extern char slot_glGetQueryObjectiv[] __asm__("glGetQueryObjectiv");
extern char slot_glGetQueryObjectuiv[] __asm__("glGetQueryObjectuiv");
extern char slot_glBindBuffer[] __asm__("glBindBuffer");
extern char slot_glDeleteBuffers[] __asm__("glDeleteBuffers");
extern char slot_glGenBuffers[] __asm__("glGenBuffers");
extern char slot_glIsBuffer[] __asm__("glIsBuffer");
extern char slot_glBufferData[] __asm__("glBufferData");
extern char slot_glBufferSubData[] __asm__("glBufferSubData");
extern char slot_glGetBufferSubData[] __asm__("glGetBufferSubData");
extern char slot_glMapBuffer[] __asm__("glMapBuffer");
extern char slot_glUnmapBuffer[] __asm__("glUnmapBuffer");
extern char slot_glGetBufferParameteriv[] __asm__("glGetBufferParameteriv");
extern char slot_glGetBufferPointerv[] __asm__("glGetBufferPointerv");
extern char slot_glBlendEquationSeparate[] __asm__("glBlendEquationSeparate");
extern char slot_glDrawBuffers[] __asm__("glDrawBuffers");
extern char slot_glStencilOpSeparate[] __asm__("glStencilOpSeparate");
extern char slot_glStencilFuncSeparate[] __asm__("glStencilFuncSeparate");
extern char slot_glStencilMaskSeparate[] __asm__("glStencilMaskSeparate");
extern char slot_glAttachShader[] __asm__("glAttachShader");
extern char slot_glBindAttribLocation[] __asm__("glBindAttribLocation");
extern char slot_glCompileShader[] __asm__("glCompileShader");
extern char slot_glCreateProgram[] __asm__("glCreateProgram");
extern char slot_glCreateShader[] __asm__("glCreateShader");
extern char slot_glDeleteProgram[] __asm__("glDeleteProgram");
extern char slot_glDeleteShader[] __asm__("glDeleteShader");
extern char slot_glDetachShader[] __asm__("glDetachShader");
extern char slot_glDisableVertexAttribArray[] __asm__("glDisableVertexAttribArray");
extern char slot_glEnableVertexAttribArray[] __asm__("glEnableVertexAttribArray");
extern char slot_glGetActiveAttrib[] __asm__("glGetActiveAttrib");
extern char slot_glGetActiveUniform[] __asm__("glGetActiveUniform");
extern char slot_glGetAttachedShaders[] __asm__("glGetAttachedShaders");
extern char slot_glGetAttribLocation[] __asm__("glGetAttribLocation");
extern char slot_glGetProgramiv[] __asm__("glGetProgramiv");
extern char slot_glGetProgramInfoLog[] __asm__("glGetProgramInfoLog");
extern char slot_glGetShaderiv[] __asm__("glGetShaderiv");
extern char slot_glGetShaderInfoLog[] __asm__("glGetShaderInfoLog");
extern char slot_glGetShaderSource[] __asm__("glGetShaderSource");
extern char slot_glGetUniformLocation[] __asm__("glGetUniformLocation");
extern char slot_glGetUniformfv[] __asm__("glGetUniformfv");
extern char slot_glGetUniformiv[] __asm__("glGetUniformiv");
extern char slot_glGetVertexAttribdv[] __asm__("glGetVertexAttribdv");
extern char slot_glGetVertexAttribfv[] __asm__("glGetVertexAttribfv");
extern char slot_glGetVertexAttribiv[] __asm__("glGetVertexAttribiv");
extern char slot_glGetVertexAttribPointerv[] __asm__("glGetVertexAttribPointerv");
extern char slot_glIsProgram[] __asm__("glIsProgram");
extern char slot_glIsShader[] __asm__("glIsShader");
extern char slot_glLinkProgram[] __asm__("glLinkProgram");
extern char slot_glShaderSource[] __asm__("glShaderSource");
extern char slot_glUseProgram[] __asm__("glUseProgram");
extern char slot_glUniform1f[] __asm__("glUniform1f");
extern char slot_glUniform2f[] __asm__("glUniform2f");
extern char slot_glUniform3f[] __asm__("glUniform3f");
extern char slot_glUniform4f[] __asm__("glUniform4f");
extern char slot_glUniform1i[] __asm__("glUniform1i");
extern char slot_glUniform2i[] __asm__("glUniform2i");
extern char slot_glUniform3i[] __asm__("glUniform3i");
extern char slot_glUniform4i[] __asm__("glUniform4i");
extern char slot_glUniform1fv[] __asm__("glUniform1fv");
extern char slot_glUniform2fv[] __asm__("glUniform2fv");
extern char slot_glUniform3fv[] __asm__("glUniform3fv");
extern char slot_glUniform4fv[] __asm__("glUniform4fv");
extern char slot_glUniform1iv[] __asm__("glUniform1iv");
extern char slot_glUniform2iv[] __asm__("glUniform2iv");
extern char slot_glUniform3iv[] __asm__("glUniform3iv");
extern char slot_glUniform4iv[] __asm__("glUniform4iv");
extern char slot_glUniformMatrix2fv[] __asm__("glUniformMatrix2fv");
extern char slot_glUniformMatrix3fv[] __asm__("glUniformMatrix3fv");
extern char slot_glUniformMatrix4fv[] __asm__("glUniformMatrix4fv");
extern char slot_glValidateProgram[] __asm__("glValidateProgram");
extern char slot_glVertexAttrib1d[] __asm__("glVertexAttrib1d");
extern char slot_glVertexAttrib1dv[] __asm__("glVertexAttrib1dv");
extern char slot_glVertexAttrib1f[] __asm__("glVertexAttrib1f");
extern char slot_glVertexAttrib1fv[] __asm__("glVertexAttrib1fv");
extern char slot_glVertexAttrib1s[] __asm__("glVertexAttrib1s");
extern char slot_glVertexAttrib1sv[] __asm__("glVertexAttrib1sv");
extern char slot_glVertexAttrib2d[] __asm__("glVertexAttrib2d");
extern char slot_glVertexAttrib2dv[] __asm__("glVertexAttrib2dv");
extern char slot_glVertexAttrib2f[] __asm__("glVertexAttrib2f");
extern char slot_glVertexAttrib2fv[] __asm__("glVertexAttrib2fv");
extern char slot_glVertexAttrib2s[] __asm__("glVertexAttrib2s");
extern char slot_glVertexAttrib2sv[] __asm__("glVertexAttrib2sv");
extern char slot_glVertexAttrib3d[] __asm__("glVertexAttrib3d");
extern char slot_glVertexAttrib3dv[] __asm__("glVertexAttrib3dv");
extern char slot_glVertexAttrib3f[] __asm__("glVertexAttrib3f");
extern char slot_glVertexAttrib3fv[] __asm__("glVertexAttrib3fv");
extern char slot_glVertexAttrib3s[] __asm__("glVertexAttrib3s");
extern char slot_glVertexAttrib3sv[] __asm__("glVertexAttrib3sv");
extern char slot_glVertexAttrib4Nbv[] __asm__("glVertexAttrib4Nbv");
extern char slot_glVertexAttrib4Niv[] __asm__("glVertexAttrib4Niv");
extern char slot_glVertexAttrib4Nsv[] __asm__("glVertexAttrib4Nsv");
extern char slot_glVertexAttrib4Nub[] __asm__("glVertexAttrib4Nub");
extern char slot_glVertexAttrib4Nubv[] __asm__("glVertexAttrib4Nubv");
extern char slot_glVertexAttrib4Nuiv[] __asm__("glVertexAttrib4Nuiv");
extern char slot_glVertexAttrib4Nusv[] __asm__("glVertexAttrib4Nusv");
extern char slot_glVertexAttrib4bv[] __asm__("glVertexAttrib4bv");
extern char slot_glVertexAttrib4d[] __asm__("glVertexAttrib4d");
extern char slot_glVertexAttrib4dv[] __asm__("glVertexAttrib4dv");
extern char slot_glVertexAttrib4f[] __asm__("glVertexAttrib4f");
extern char slot_glVertexAttrib4fv[] __asm__("glVertexAttrib4fv");
extern char slot_glVertexAttrib4iv[] __asm__("glVertexAttrib4iv");
extern char slot_glVertexAttrib4s[] __asm__("glVertexAttrib4s");
extern char slot_glVertexAttrib4sv[] __asm__("glVertexAttrib4sv");
extern char slot_glVertexAttrib4ubv[] __asm__("glVertexAttrib4ubv");
extern char slot_glVertexAttrib4uiv[] __asm__("glVertexAttrib4uiv");
extern char slot_glVertexAttrib4usv[] __asm__("glVertexAttrib4usv");
extern char slot_glVertexAttribPointer[] __asm__("glVertexAttribPointer");
extern char slot_glUniformMatrix2x3fv[] __asm__("glUniformMatrix2x3fv");
extern char slot_glUniformMatrix3x2fv[] __asm__("glUniformMatrix3x2fv");
extern char slot_glUniformMatrix2x4fv[] __asm__("glUniformMatrix2x4fv");
extern char slot_glUniformMatrix4x2fv[] __asm__("glUniformMatrix4x2fv");
extern char slot_glUniformMatrix3x4fv[] __asm__("glUniformMatrix3x4fv");
extern char slot_glUniformMatrix4x3fv[] __asm__("glUniformMatrix4x3fv");
extern char slot_glColorMaski[] __asm__("glColorMaski");
extern char slot_glGetBooleani_v[] __asm__("glGetBooleani_v");
extern char slot_glGetIntegeri_v[] __asm__("glGetIntegeri_v");
extern char slot_glEnablei[] __asm__("glEnablei");
extern char slot_glDisablei[] __asm__("glDisablei");
extern char slot_glIsEnabledi[] __asm__("glIsEnabledi");
extern char slot_glBeginTransformFeedback[] __asm__("glBeginTransformFeedback");
extern char slot_glEndTransformFeedback[] __asm__("glEndTransformFeedback");
extern char slot_glBindBufferRange[] __asm__("glBindBufferRange");
extern char slot_glBindBufferBase[] __asm__("glBindBufferBase");
extern char slot_glTransformFeedbackVaryings[] __asm__("glTransformFeedbackVaryings");
extern char slot_glGetTransformFeedbackVarying[] __asm__("glGetTransformFeedbackVarying");
extern char slot_glClampColor[] __asm__("glClampColor");
extern char slot_glBeginConditionalRender[] __asm__("glBeginConditionalRender");
extern char slot_glEndConditionalRender[] __asm__("glEndConditionalRender");
extern char slot_glVertexAttribIPointer[] __asm__("glVertexAttribIPointer");
extern char slot_glGetVertexAttribIiv[] __asm__("glGetVertexAttribIiv");
extern char slot_glGetVertexAttribIuiv[] __asm__("glGetVertexAttribIuiv");
extern char slot_glVertexAttribI1i[] __asm__("glVertexAttribI1i");
extern char slot_glVertexAttribI2i[] __asm__("glVertexAttribI2i");
extern char slot_glVertexAttribI3i[] __asm__("glVertexAttribI3i");
extern char slot_glVertexAttribI4i[] __asm__("glVertexAttribI4i");
extern char slot_glVertexAttribI1ui[] __asm__("glVertexAttribI1ui");
extern char slot_glVertexAttribI2ui[] __asm__("glVertexAttribI2ui");
extern char slot_glVertexAttribI3ui[] __asm__("glVertexAttribI3ui");
extern char slot_glVertexAttribI4ui[] __asm__("glVertexAttribI4ui");
extern char slot_glVertexAttribI1iv[] __asm__("glVertexAttribI1iv");
extern char slot_glVertexAttribI2iv[] __asm__("glVertexAttribI2iv");
extern char slot_glVertexAttribI3iv[] __asm__("glVertexAttribI3iv");
extern char slot_glVertexAttribI4iv[] __asm__("glVertexAttribI4iv");
extern char slot_glVertexAttribI1uiv[] __asm__("glVertexAttribI1uiv");
extern char slot_glVertexAttribI2uiv[] __asm__("glVertexAttribI2uiv");
extern char slot_glVertexAttribI3uiv[] __asm__("glVertexAttribI3uiv");
extern char slot_glVertexAttribI4uiv[] __asm__("glVertexAttribI4uiv");
extern char slot_glVertexAttribI4bv[] __asm__("glVertexAttribI4bv");
extern char slot_glVertexAttribI4sv[] __asm__("glVertexAttribI4sv");
extern char slot_glVertexAttribI4ubv[] __asm__("glVertexAttribI4ubv");
extern char slot_glVertexAttribI4usv[] __asm__("glVertexAttribI4usv");
extern char slot_glGetUniformuiv[] __asm__("glGetUniformuiv");
extern char slot_glBindFragDataLocation[] __asm__("glBindFragDataLocation");
extern char slot_glGetFragDataLocation[] __asm__("glGetFragDataLocation");
extern char slot_glUniform1ui[] __asm__("glUniform1ui");
extern char slot_glUniform2ui[] __asm__("glUniform2ui");
extern char slot_glUniform3ui[] __asm__("glUniform3ui");
extern char slot_glUniform4ui[] __asm__("glUniform4ui");
extern char slot_glUniform1uiv[] __asm__("glUniform1uiv");
extern char slot_glUniform2uiv[] __asm__("glUniform2uiv");
extern char slot_glUniform3uiv[] __asm__("glUniform3uiv");
extern char slot_glUniform4uiv[] __asm__("glUniform4uiv");
extern char slot_glTexParameterIiv[] __asm__("glTexParameterIiv");
extern char slot_glTexParameterIuiv[] __asm__("glTexParameterIuiv");
extern char slot_glGetTexParameterIiv[] __asm__("glGetTexParameterIiv");
extern char slot_glGetTexParameterIuiv[] __asm__("glGetTexParameterIuiv");
extern char slot_glClearBufferiv[] __asm__("glClearBufferiv");
extern char slot_glClearBufferuiv[] __asm__("glClearBufferuiv");
extern char slot_glClearBufferfv[] __asm__("glClearBufferfv");
extern char slot_glClearBufferfi[] __asm__("glClearBufferfi");
extern char slot_glGetStringi[] __asm__("glGetStringi");
extern char slot_glIsRenderbuffer[] __asm__("glIsRenderbuffer");
extern char slot_glBindRenderbuffer[] __asm__("glBindRenderbuffer");
extern char slot_glDeleteRenderbuffers[] __asm__("glDeleteRenderbuffers");
extern char slot_glGenRenderbuffers[] __asm__("glGenRenderbuffers");
extern char slot_glRenderbufferStorage[] __asm__("glRenderbufferStorage");
extern char slot_glGetRenderbufferParameteriv[] __asm__("glGetRenderbufferParameteriv");
extern char slot_glIsFramebuffer[] __asm__("glIsFramebuffer");
extern char slot_glBindFramebuffer[] __asm__("glBindFramebuffer");
extern char slot_glDeleteFramebuffers[] __asm__("glDeleteFramebuffers");
extern char slot_glGenFramebuffers[] __asm__("glGenFramebuffers");
extern char slot_glCheckFramebufferStatus[] __asm__("glCheckFramebufferStatus");
extern char slot_glFramebufferTexture1D[] __asm__("glFramebufferTexture1D");
extern char slot_glFramebufferTexture2D[] __asm__("glFramebufferTexture2D");
extern char slot_glFramebufferTexture3D[] __asm__("glFramebufferTexture3D");
extern char slot_glFramebufferRenderbuffer[] __asm__("glFramebufferRenderbuffer");
extern char slot_glGetFramebufferAttachmentParameteriv[] __asm__("glGetFramebufferAttachmentParameteriv");
extern char slot_glGenerateMipmap[] __asm__("glGenerateMipmap");
extern char slot_glBlitFramebuffer[] __asm__("glBlitFramebuffer");
extern char slot_glRenderbufferStorageMultisample[] __asm__("glRenderbufferStorageMultisample");
extern char slot_glFramebufferTextureLayer[] __asm__("glFramebufferTextureLayer");
extern char slot_glMapBufferRange[] __asm__("glMapBufferRange");
extern char slot_glFlushMappedBufferRange[] __asm__("glFlushMappedBufferRange");
extern char slot_glBindVertexArray[] __asm__("glBindVertexArray");
extern char slot_glDeleteVertexArrays[] __asm__("glDeleteVertexArrays");
extern char slot_glGenVertexArrays[] __asm__("glGenVertexArrays");
extern char slot_glIsVertexArray[] __asm__("glIsVertexArray");
extern char slot_glDrawArraysInstanced[] __asm__("glDrawArraysInstanced");
extern char slot_glDrawElementsInstanced[] __asm__("glDrawElementsInstanced");
extern char slot_glTexBuffer[] __asm__("glTexBuffer");
extern char slot_glPrimitiveRestartIndex[] __asm__("glPrimitiveRestartIndex");
extern char slot_glCopyBufferSubData[] __asm__("glCopyBufferSubData");
extern char slot_glGetUniformIndices[] __asm__("glGetUniformIndices");
extern char slot_glGetActiveUniformsiv[] __asm__("glGetActiveUniformsiv");
extern char slot_glGetActiveUniformName[] __asm__("glGetActiveUniformName");
extern char slot_glGetUniformBlockIndex[] __asm__("glGetUniformBlockIndex");
extern char slot_glGetActiveUniformBlockiv[] __asm__("glGetActiveUniformBlockiv");
extern char slot_glGetActiveUniformBlockName[] __asm__("glGetActiveUniformBlockName");
extern char slot_glUniformBlockBinding[] __asm__("glUniformBlockBinding");
extern char slot_glDrawElementsBaseVertex[] __asm__("glDrawElementsBaseVertex");
extern char slot_glDrawRangeElementsBaseVertex[] __asm__("glDrawRangeElementsBaseVertex");
extern char slot_glDrawElementsInstancedBaseVertex[] __asm__("glDrawElementsInstancedBaseVertex");
extern char slot_glProvokingVertex[] __asm__("glProvokingVertex");
extern char slot_glFenceSync[] __asm__("glFenceSync");
extern char slot_glIsSync[] __asm__("glIsSync");
extern char slot_glDeleteSync[] __asm__("glDeleteSync");
extern char slot_glClientWaitSync[] __asm__("glClientWaitSync");
extern char slot_glWaitSync[] __asm__("glWaitSync");
extern char slot_glGetInteger64v[] __asm__("glGetInteger64v");
extern char slot_glGetSynciv[] __asm__("glGetSynciv");
extern char slot_glGetInteger64i_v[] __asm__("glGetInteger64i_v");
extern char slot_glGetBufferParameteri64v[] __asm__("glGetBufferParameteri64v");
extern char slot_glFramebufferTexture[] __asm__("glFramebufferTexture");
extern char slot_glTexImage2DMultisample[] __asm__("glTexImage2DMultisample");
extern char slot_glTexImage3DMultisample[] __asm__("glTexImage3DMultisample");
extern char slot_glGetMultisamplefv[] __asm__("glGetMultisamplefv");
extern char slot_glSampleMaski[] __asm__("glSampleMaski");
extern char slot_glBindFragDataLocationIndexed[] __asm__("glBindFragDataLocationIndexed");
extern char slot_glGetFragDataIndex[] __asm__("glGetFragDataIndex");
extern char slot_glGenSamplers[] __asm__("glGenSamplers");
extern char slot_glDeleteSamplers[] __asm__("glDeleteSamplers");
extern char slot_glIsSampler[] __asm__("glIsSampler");
extern char slot_glBindSampler[] __asm__("glBindSampler");
extern char slot_glSamplerParameteri[] __asm__("glSamplerParameteri");
extern char slot_glSamplerParameteriv[] __asm__("glSamplerParameteriv");
extern char slot_glSamplerParameterf[] __asm__("glSamplerParameterf");
extern char slot_glSamplerParameterfv[] __asm__("glSamplerParameterfv");
extern char slot_glSamplerParameterIiv[] __asm__("glSamplerParameterIiv");
extern char slot_glSamplerParameterIuiv[] __asm__("glSamplerParameterIuiv");
extern char slot_glGetSamplerParameteriv[] __asm__("glGetSamplerParameteriv");
extern char slot_glGetSamplerParameterIiv[] __asm__("glGetSamplerParameterIiv");
extern char slot_glGetSamplerParameterfv[] __asm__("glGetSamplerParameterfv");
extern char slot_glGetSamplerParameterIuiv[] __asm__("glGetSamplerParameterIuiv");
extern char slot_glQueryCounter[] __asm__("glQueryCounter");
extern char slot_glGetQueryObjecti64v[] __asm__("glGetQueryObjecti64v");
extern char slot_glGetQueryObjectui64v[] __asm__("glGetQueryObjectui64v");
extern char slot_glVertexAttribDivisor[] __asm__("glVertexAttribDivisor");
extern char slot_glVertexAttribP1ui[] __asm__("glVertexAttribP1ui");
extern char slot_glVertexAttribP1uiv[] __asm__("glVertexAttribP1uiv");
extern char slot_glVertexAttribP2ui[] __asm__("glVertexAttribP2ui");
extern char slot_glVertexAttribP2uiv[] __asm__("glVertexAttribP2uiv");
extern char slot_glVertexAttribP3ui[] __asm__("glVertexAttribP3ui");
extern char slot_glVertexAttribP3uiv[] __asm__("glVertexAttribP3uiv");
extern char slot_glVertexAttribP4ui[] __asm__("glVertexAttribP4ui");
extern char slot_glVertexAttribP4uiv[] __asm__("glVertexAttribP4uiv");
extern char slot_glVertexP2ui[] __asm__("glVertexP2ui");
extern char slot_glVertexP2uiv[] __asm__("glVertexP2uiv");
extern char slot_glVertexP3ui[] __asm__("glVertexP3ui");
extern char slot_glVertexP3uiv[] __asm__("glVertexP3uiv");
extern char slot_glVertexP4ui[] __asm__("glVertexP4ui");
extern char slot_glVertexP4uiv[] __asm__("glVertexP4uiv");
extern char slot_glTexCoordP1ui[] __asm__("glTexCoordP1ui");
extern char slot_glTexCoordP1uiv[] __asm__("glTexCoordP1uiv");
extern char slot_glTexCoordP2ui[] __asm__("glTexCoordP2ui");
extern char slot_glTexCoordP2uiv[] __asm__("glTexCoordP2uiv");
extern char slot_glTexCoordP3ui[] __asm__("glTexCoordP3ui");
extern char slot_glTexCoordP3uiv[] __asm__("glTexCoordP3uiv");
extern char slot_glTexCoordP4ui[] __asm__("glTexCoordP4ui");
extern char slot_glTexCoordP4uiv[] __asm__("glTexCoordP4uiv");
extern char slot_glMultiTexCoordP1ui[] __asm__("glMultiTexCoordP1ui");
extern char slot_glMultiTexCoordP1uiv[] __asm__("glMultiTexCoordP1uiv");
extern char slot_glMultiTexCoordP2ui[] __asm__("glMultiTexCoordP2ui");
extern char slot_glMultiTexCoordP2uiv[] __asm__("glMultiTexCoordP2uiv");
extern char slot_glMultiTexCoordP3ui[] __asm__("glMultiTexCoordP3ui");
extern char slot_glMultiTexCoordP3uiv[] __asm__("glMultiTexCoordP3uiv");
extern char slot_glMultiTexCoordP4ui[] __asm__("glMultiTexCoordP4ui");
extern char slot_glMultiTexCoordP4uiv[] __asm__("glMultiTexCoordP4uiv");
extern char slot_glNormalP3ui[] __asm__("glNormalP3ui");
extern char slot_glNormalP3uiv[] __asm__("glNormalP3uiv");
extern char slot_glColorP3ui[] __asm__("glColorP3ui");
extern char slot_glColorP3uiv[] __asm__("glColorP3uiv");
extern char slot_glColorP4ui[] __asm__("glColorP4ui");
extern char slot_glColorP4uiv[] __asm__("glColorP4uiv");
extern char slot_glSecondaryColorP3ui[] __asm__("glSecondaryColorP3ui");
extern char slot_glSecondaryColorP3uiv[] __asm__("glSecondaryColorP3uiv");
extern char slot_glClipControl[] __asm__("glClipControl");

typedef struct GlSlot {
    const char *name;
    void **slot;
} GlSlot;

static void load_group(const int32_t *flag, const GlSlot *group, size_t count, GlResolver resolve)
{
    if (!*flag)
        return;
    for (size_t i = 0; i < count; i++)
        *group[i].slot = (void *)(uintptr_t)resolve(group[i].name);
}

long long gl_load_clip_control(GlResolver resolve)
{
    if (!unk_14040488C)
        return (long long)(uintptr_t)resolve;
    long long result = resolve("glClipControl");
    *(void **)slot_glClipControl = (void *)(uintptr_t)result;
    return result;
}

/* OpenGL 1.0: 48 functions. 0x1400E3BC0 */
static const GlSlot gl_load_1_0_slots[] = {
    {"glCullFace", (void **)&SR_GLOBAL(void *, 0x144980CB8ULL)},
    {"glFrontFace", (void **)&SR_GLOBAL(void *, 0x144980CC0ULL)},
    {"glHint", (void **)&SR_GLOBAL(void *, 0x144980CC8ULL)},
    {"glLineWidth", (void **)&SR_GLOBAL(void *, 0x144980CD0ULL)},
    {"glPointSize", (void **)&SR_GLOBAL(void *, 0x144980CD8ULL)},
    {"glPolygonMode", (void **)&SR_GLOBAL(void *, 0x144980CE0ULL)},
    {"glScissor", (void **)&SR_GLOBAL(void *, 0x144980CE8ULL)},
    {"glTexParameterf", (void **)&SR_GLOBAL(void *, 0x144980CF0ULL)},
    {"glTexParameterfv", (void **)&SR_GLOBAL(void *, 0x144980CF8ULL)},
    {"glTexParameteri", (void **)&SR_GLOBAL(void *, 0x144980D00ULL)},
    {"glTexParameteriv", (void **)&SR_GLOBAL(void *, 0x144980D08ULL)},
    {"glTexImage1D", (void **)&SR_GLOBAL(void *, 0x144980D10ULL)},
    {"glTexImage2D", (void **)&SR_GLOBAL(void *, 0x144980D18ULL)},
    {"glDrawBuffer", (void **)&SR_GLOBAL(void *, 0x144980D20ULL)},
    {"glClear", (void **)&SR_GLOBAL(void *, 0x144980D28ULL)},
    {"glClearColor", (void **)&SR_GLOBAL(void *, 0x144980D30ULL)},
    {"glClearStencil", (void **)&SR_GLOBAL(void *, 0x144980D38ULL)},
    {"glClearDepth", (void **)&SR_GLOBAL(void *, 0x144980D40ULL)},
    {"glStencilMask", (void **)&SR_GLOBAL(void *, 0x144980D48ULL)},
    {"glColorMask", (void **)&SR_GLOBAL(void *, 0x144980D50ULL)},
    {"glDepthMask", (void **)&SR_GLOBAL(void *, 0x144980D58ULL)},
    {"glDisable", (void **)&SR_GLOBAL(void *, 0x144980D60ULL)},
    {"glEnable", (void **)&SR_GLOBAL(void *, 0x144980D68ULL)},
    {"glFinish", (void **)&SR_GLOBAL(void *, 0x144980D70ULL)},
    {"glFlush", (void **)&SR_GLOBAL(void *, 0x144980D78ULL)},
    {"glBlendFunc", (void **)&SR_GLOBAL(void *, 0x144980D80ULL)},
    {"glLogicOp", (void **)slot_glLogicOp},
    {"glStencilFunc", (void **)slot_glStencilFunc},
    {"glStencilOp", (void **)slot_glStencilOp},
    {"glDepthFunc", (void **)slot_glDepthFunc},
    {"glPixelStoref", (void **)slot_glPixelStoref},
    {"glPixelStorei", (void **)slot_glPixelStorei},
    {"glReadBuffer", (void **)slot_glReadBuffer},
    {"glReadPixels", (void **)slot_glReadPixels},
    {"glGetBooleanv", (void **)slot_glGetBooleanv},
    {"glGetDoublev", (void **)slot_glGetDoublev},
    {"glGetError", (void **)slot_glGetError},
    {"glGetFloatv", (void **)slot_glGetFloatv},
    {"glGetIntegerv", (void **)slot_glGetIntegerv},
    {"glGetString", (void **)slot_glGetString},
    {"glGetTexImage", (void **)slot_glGetTexImage},
    {"glGetTexParameterfv", (void **)slot_glGetTexParameterfv},
    {"glGetTexParameteriv", (void **)slot_glGetTexParameteriv},
    {"glGetTexLevelParameterfv", (void **)slot_glGetTexLevelParameterfv},
    {"glGetTexLevelParameteriv", (void **)slot_glGetTexLevelParameteriv},
    {"glIsEnabled", (void **)slot_glIsEnabled},
    {"glDepthRange", (void **)slot_glDepthRange},
    {"glViewport", (void **)slot_glViewport},
};

void gl_load_1_0(GlResolver resolve)
{
    load_group(&SR_GLOBAL(int32_t, 0x144980CB0ULL), gl_load_1_0_slots, sizeof gl_load_1_0_slots / sizeof gl_load_1_0_slots[0], resolve);
}

/* OpenGL 1.1: 13 functions. 0x1400E3EE0 */
static const GlSlot gl_load_1_1_slots[] = {
    {"glDrawArrays", (void **)slot_glDrawArrays},
    {"glDrawElements", (void **)&flt_140384000[131076]},
    {"glPolygonOffset", (void **)&flt_140384000[131078]},
    {"glCopyTexImage1D", (void **)&flt_140384000[131080]},
    {"glCopyTexImage2D", (void **)&flt_140384000[131082]},
    {"glCopyTexSubImage1D", (void **)&flt_140384000[131084]},
    {"glCopyTexSubImage2D", (void **)&flt_140384000[131086]},
    {"glTexSubImage1D", (void **)&flt_140384000[131088]},
    {"glTexSubImage2D", (void **)&flt_140384000[131090]},
    {"glBindTexture", (void **)slot_glBindTexture},
    {"glDeleteTextures", (void **)slot_glDeleteTextures},
    {"glGenTextures", (void **)slot_glGenTextures},
    {"glIsTexture", (void **)slot_glIsTexture},
};

void gl_load_1_1(GlResolver resolve)
{
    load_group(&dword_140302FF0, gl_load_1_1_slots, sizeof gl_load_1_1_slots / sizeof gl_load_1_1_slots[0], resolve);
}

/* OpenGL 1.2: 4 functions. 0x1400E3FD0 */
static const GlSlot gl_load_1_2_slots[] = {
    {"glDrawRangeElements", (void **)slot_glDrawRangeElements},
    {"glTexImage3D", (void **)slot_glTexImage3D},
    {"glTexSubImage3D", (void **)slot_glTexSubImage3D},
    {"glCopyTexSubImage3D", (void **)slot_glCopyTexSubImage3D},
};

void gl_load_1_2(GlResolver resolve)
{
    load_group(&dword_140302FF4, gl_load_1_2_slots, sizeof gl_load_1_2_slots / sizeof gl_load_1_2_slots[0], resolve);
}

/* OpenGL 1.3: 9 functions. 0x1400E4030 */
static const GlSlot gl_load_1_3_slots[] = {
    {"glActiveTexture", (void **)slot_glActiveTexture},
    {"glSampleCoverage", (void **)slot_glSampleCoverage},
    {"glCompressedTexImage3D", (void **)slot_glCompressedTexImage3D},
    {"glCompressedTexImage2D", (void **)slot_glCompressedTexImage2D},
    {"glCompressedTexImage1D", (void **)slot_glCompressedTexImage1D},
    {"glCompressedTexSubImage3D", (void **)slot_glCompressedTexSubImage3D},
    {"glCompressedTexSubImage2D", (void **)slot_glCompressedTexSubImage2D},
    {"glCompressedTexSubImage1D", (void **)slot_glCompressedTexSubImage1D},
    {"glGetCompressedTexImage", (void **)slot_glGetCompressedTexImage},
};

void gl_load_1_3(GlResolver resolve)
{
    load_group(&unk_140404090, gl_load_1_3_slots, sizeof gl_load_1_3_slots / sizeof gl_load_1_3_slots[0], resolve);
}

/* OpenGL 1.4: 9 functions. 0x1400E40E0 */
static const GlSlot gl_load_1_4_slots[] = {
    {"glBlendFuncSeparate", (void **)slot_glBlendFuncSeparate},
    {"glMultiDrawArrays", (void **)slot_glMultiDrawArrays},
    {"glMultiDrawElements", (void **)slot_glMultiDrawElements},
    {"glPointParameterf", (void **)slot_glPointParameterf},
    {"glPointParameterfv", (void **)slot_glPointParameterfv},
    {"glPointParameteri", (void **)slot_glPointParameteri},
    {"glPointParameteriv", (void **)slot_glPointParameteriv},
    {"glBlendColor", (void **)slot_glBlendColor},
    {"glBlendEquation", (void **)slot_glBlendEquation},
};

void gl_load_1_4(GlResolver resolve)
{
    load_group(&unk_140404094, gl_load_1_4_slots, sizeof gl_load_1_4_slots / sizeof gl_load_1_4_slots[0], resolve);
}

/* OpenGL 1.5: 19 functions. 0x1400E4190 */
static const GlSlot gl_load_1_5_slots[] = {
    {"glGenQueries", (void **)slot_glGenQueries},
    {"glDeleteQueries", (void **)slot_glDeleteQueries},
    {"glIsQuery", (void **)slot_glIsQuery},
    {"glBeginQuery", (void **)slot_glBeginQuery},
    {"glEndQuery", (void **)slot_glEndQuery},
    {"glGetQueryiv", (void **)slot_glGetQueryiv},
    {"glGetQueryObjectiv", (void **)slot_glGetQueryObjectiv},
    {"glGetQueryObjectuiv", (void **)slot_glGetQueryObjectuiv},
    {"glBindBuffer", (void **)slot_glBindBuffer},
    {"glDeleteBuffers", (void **)slot_glDeleteBuffers},
    {"glGenBuffers", (void **)slot_glGenBuffers},
    {"glIsBuffer", (void **)slot_glIsBuffer},
    {"glBufferData", (void **)slot_glBufferData},
    {"glBufferSubData", (void **)slot_glBufferSubData},
    {"glGetBufferSubData", (void **)slot_glGetBufferSubData},
    {"glMapBuffer", (void **)slot_glMapBuffer},
    {"glUnmapBuffer", (void **)slot_glUnmapBuffer},
    {"glGetBufferParameteriv", (void **)slot_glGetBufferParameteriv},
    {"glGetBufferPointerv", (void **)slot_glGetBufferPointerv},
};

void gl_load_1_5(GlResolver resolve)
{
    load_group(&unk_140404128, gl_load_1_5_slots, sizeof gl_load_1_5_slots / sizeof gl_load_1_5_slots[0], resolve);
}

/* OpenGL 2.0: 93 functions. 0x1400E42E0 */
static const GlSlot gl_load_2_0_slots[] = {
    {"glBlendEquationSeparate", (void **)slot_glBlendEquationSeparate},
    {"glDrawBuffers", (void **)slot_glDrawBuffers},
    {"glStencilOpSeparate", (void **)slot_glStencilOpSeparate},
    {"glStencilFuncSeparate", (void **)slot_glStencilFuncSeparate},
    {"glStencilMaskSeparate", (void **)slot_glStencilMaskSeparate},
    {"glAttachShader", (void **)slot_glAttachShader},
    {"glBindAttribLocation", (void **)slot_glBindAttribLocation},
    {"glCompileShader", (void **)slot_glCompileShader},
    {"glCreateProgram", (void **)slot_glCreateProgram},
    {"glCreateShader", (void **)slot_glCreateShader},
    {"glDeleteProgram", (void **)slot_glDeleteProgram},
    {"glDeleteShader", (void **)slot_glDeleteShader},
    {"glDetachShader", (void **)slot_glDetachShader},
    {"glDisableVertexAttribArray", (void **)slot_glDisableVertexAttribArray},
    {"glEnableVertexAttribArray", (void **)slot_glEnableVertexAttribArray},
    {"glGetActiveAttrib", (void **)slot_glGetActiveAttrib},
    {"glGetActiveUniform", (void **)slot_glGetActiveUniform},
    {"glGetAttachedShaders", (void **)slot_glGetAttachedShaders},
    {"glGetAttribLocation", (void **)slot_glGetAttribLocation},
    {"glGetProgramiv", (void **)slot_glGetProgramiv},
    {"glGetProgramInfoLog", (void **)slot_glGetProgramInfoLog},
    {"glGetShaderiv", (void **)slot_glGetShaderiv},
    {"glGetShaderInfoLog", (void **)slot_glGetShaderInfoLog},
    {"glGetShaderSource", (void **)slot_glGetShaderSource},
    {"glGetUniformLocation", (void **)slot_glGetUniformLocation},
    {"glGetUniformfv", (void **)slot_glGetUniformfv},
    {"glGetUniformiv", (void **)slot_glGetUniformiv},
    {"glGetVertexAttribdv", (void **)slot_glGetVertexAttribdv},
    {"glGetVertexAttribfv", (void **)slot_glGetVertexAttribfv},
    {"glGetVertexAttribiv", (void **)slot_glGetVertexAttribiv},
    {"glGetVertexAttribPointerv", (void **)slot_glGetVertexAttribPointerv},
    {"glIsProgram", (void **)slot_glIsProgram},
    {"glIsShader", (void **)slot_glIsShader},
    {"glLinkProgram", (void **)slot_glLinkProgram},
    {"glShaderSource", (void **)slot_glShaderSource},
    {"glUseProgram", (void **)slot_glUseProgram},
    {"glUniform1f", (void **)slot_glUniform1f},
    {"glUniform2f", (void **)slot_glUniform2f},
    {"glUniform3f", (void **)slot_glUniform3f},
    {"glUniform4f", (void **)slot_glUniform4f},
    {"glUniform1i", (void **)slot_glUniform1i},
    {"glUniform2i", (void **)slot_glUniform2i},
    {"glUniform3i", (void **)slot_glUniform3i},
    {"glUniform4i", (void **)slot_glUniform4i},
    {"glUniform1fv", (void **)slot_glUniform1fv},
    {"glUniform2fv", (void **)slot_glUniform2fv},
    {"glUniform3fv", (void **)slot_glUniform3fv},
    {"glUniform4fv", (void **)slot_glUniform4fv},
    {"glUniform1iv", (void **)slot_glUniform1iv},
    {"glUniform2iv", (void **)slot_glUniform2iv},
    {"glUniform3iv", (void **)slot_glUniform3iv},
    {"glUniform4iv", (void **)slot_glUniform4iv},
    {"glUniformMatrix2fv", (void **)slot_glUniformMatrix2fv},
    {"glUniformMatrix3fv", (void **)slot_glUniformMatrix3fv},
    {"glUniformMatrix4fv", (void **)slot_glUniformMatrix4fv},
    {"glValidateProgram", (void **)slot_glValidateProgram},
    {"glVertexAttrib1d", (void **)slot_glVertexAttrib1d},
    {"glVertexAttrib1dv", (void **)slot_glVertexAttrib1dv},
    {"glVertexAttrib1f", (void **)slot_glVertexAttrib1f},
    {"glVertexAttrib1fv", (void **)slot_glVertexAttrib1fv},
    {"glVertexAttrib1s", (void **)slot_glVertexAttrib1s},
    {"glVertexAttrib1sv", (void **)slot_glVertexAttrib1sv},
    {"glVertexAttrib2d", (void **)slot_glVertexAttrib2d},
    {"glVertexAttrib2dv", (void **)slot_glVertexAttrib2dv},
    {"glVertexAttrib2f", (void **)slot_glVertexAttrib2f},
    {"glVertexAttrib2fv", (void **)slot_glVertexAttrib2fv},
    {"glVertexAttrib2s", (void **)slot_glVertexAttrib2s},
    {"glVertexAttrib2sv", (void **)slot_glVertexAttrib2sv},
    {"glVertexAttrib3d", (void **)slot_glVertexAttrib3d},
    {"glVertexAttrib3dv", (void **)slot_glVertexAttrib3dv},
    {"glVertexAttrib3f", (void **)slot_glVertexAttrib3f},
    {"glVertexAttrib3fv", (void **)slot_glVertexAttrib3fv},
    {"glVertexAttrib3s", (void **)slot_glVertexAttrib3s},
    {"glVertexAttrib3sv", (void **)slot_glVertexAttrib3sv},
    {"glVertexAttrib4Nbv", (void **)slot_glVertexAttrib4Nbv},
    {"glVertexAttrib4Niv", (void **)slot_glVertexAttrib4Niv},
    {"glVertexAttrib4Nsv", (void **)slot_glVertexAttrib4Nsv},
    {"glVertexAttrib4Nub", (void **)slot_glVertexAttrib4Nub},
    {"glVertexAttrib4Nubv", (void **)slot_glVertexAttrib4Nubv},
    {"glVertexAttrib4Nuiv", (void **)slot_glVertexAttrib4Nuiv},
    {"glVertexAttrib4Nusv", (void **)slot_glVertexAttrib4Nusv},
    {"glVertexAttrib4bv", (void **)slot_glVertexAttrib4bv},
    {"glVertexAttrib4d", (void **)slot_glVertexAttrib4d},
    {"glVertexAttrib4dv", (void **)slot_glVertexAttrib4dv},
    {"glVertexAttrib4f", (void **)slot_glVertexAttrib4f},
    {"glVertexAttrib4fv", (void **)slot_glVertexAttrib4fv},
    {"glVertexAttrib4iv", (void **)slot_glVertexAttrib4iv},
    {"glVertexAttrib4s", (void **)slot_glVertexAttrib4s},
    {"glVertexAttrib4sv", (void **)slot_glVertexAttrib4sv},
    {"glVertexAttrib4ubv", (void **)slot_glVertexAttrib4ubv},
    {"glVertexAttrib4uiv", (void **)slot_glVertexAttrib4uiv},
    {"glVertexAttrib4usv", (void **)slot_glVertexAttrib4usv},
    {"glVertexAttribPointer", (void **)slot_glVertexAttribPointer},
};

void gl_load_2_0(GlResolver resolve)
{
    load_group(&unk_14040412C, gl_load_2_0_slots, sizeof gl_load_2_0_slots / sizeof gl_load_2_0_slots[0], resolve);
}

/* OpenGL 2.1: 6 functions. 0x1400E48D0 */
static const GlSlot gl_load_2_1_slots[] = {
    {"glUniformMatrix2x3fv", (void **)slot_glUniformMatrix2x3fv},
    {"glUniformMatrix3x2fv", (void **)slot_glUniformMatrix3x2fv},
    {"glUniformMatrix2x4fv", (void **)slot_glUniformMatrix2x4fv},
    {"glUniformMatrix4x2fv", (void **)slot_glUniformMatrix4x2fv},
    {"glUniformMatrix3x4fv", (void **)slot_glUniformMatrix3x4fv},
    {"glUniformMatrix4x3fv", (void **)slot_glUniformMatrix4x3fv},
};

void gl_load_2_1(GlResolver resolve)
{
    load_group(&unk_1404044B0, gl_load_2_1_slots, sizeof gl_load_2_1_slots / sizeof gl_load_2_1_slots[0], resolve);
}

/* OpenGL 3.0: 84 functions. 0x1400E4950 */
static const GlSlot gl_load_3_0_slots[] = {
    {"glColorMaski", (void **)slot_glColorMaski},
    {"glGetBooleani_v", (void **)slot_glGetBooleani_v},
    {"glGetIntegeri_v", (void **)slot_glGetIntegeri_v},
    {"glEnablei", (void **)slot_glEnablei},
    {"glDisablei", (void **)slot_glDisablei},
    {"glIsEnabledi", (void **)slot_glIsEnabledi},
    {"glBeginTransformFeedback", (void **)slot_glBeginTransformFeedback},
    {"glEndTransformFeedback", (void **)slot_glEndTransformFeedback},
    {"glBindBufferRange", (void **)slot_glBindBufferRange},
    {"glBindBufferBase", (void **)slot_glBindBufferBase},
    {"glTransformFeedbackVaryings", (void **)slot_glTransformFeedbackVaryings},
    {"glGetTransformFeedbackVarying", (void **)slot_glGetTransformFeedbackVarying},
    {"glClampColor", (void **)slot_glClampColor},
    {"glBeginConditionalRender", (void **)slot_glBeginConditionalRender},
    {"glEndConditionalRender", (void **)slot_glEndConditionalRender},
    {"glVertexAttribIPointer", (void **)slot_glVertexAttribIPointer},
    {"glGetVertexAttribIiv", (void **)slot_glGetVertexAttribIiv},
    {"glGetVertexAttribIuiv", (void **)slot_glGetVertexAttribIuiv},
    {"glVertexAttribI1i", (void **)slot_glVertexAttribI1i},
    {"glVertexAttribI2i", (void **)slot_glVertexAttribI2i},
    {"glVertexAttribI3i", (void **)slot_glVertexAttribI3i},
    {"glVertexAttribI4i", (void **)slot_glVertexAttribI4i},
    {"glVertexAttribI1ui", (void **)slot_glVertexAttribI1ui},
    {"glVertexAttribI2ui", (void **)slot_glVertexAttribI2ui},
    {"glVertexAttribI3ui", (void **)slot_glVertexAttribI3ui},
    {"glVertexAttribI4ui", (void **)slot_glVertexAttribI4ui},
    {"glVertexAttribI1iv", (void **)slot_glVertexAttribI1iv},
    {"glVertexAttribI2iv", (void **)slot_glVertexAttribI2iv},
    {"glVertexAttribI3iv", (void **)slot_glVertexAttribI3iv},
    {"glVertexAttribI4iv", (void **)slot_glVertexAttribI4iv},
    {"glVertexAttribI1uiv", (void **)slot_glVertexAttribI1uiv},
    {"glVertexAttribI2uiv", (void **)slot_glVertexAttribI2uiv},
    {"glVertexAttribI3uiv", (void **)slot_glVertexAttribI3uiv},
    {"glVertexAttribI4uiv", (void **)slot_glVertexAttribI4uiv},
    {"glVertexAttribI4bv", (void **)slot_glVertexAttribI4bv},
    {"glVertexAttribI4sv", (void **)slot_glVertexAttribI4sv},
    {"glVertexAttribI4ubv", (void **)slot_glVertexAttribI4ubv},
    {"glVertexAttribI4usv", (void **)slot_glVertexAttribI4usv},
    {"glGetUniformuiv", (void **)slot_glGetUniformuiv},
    {"glBindFragDataLocation", (void **)slot_glBindFragDataLocation},
    {"glGetFragDataLocation", (void **)slot_glGetFragDataLocation},
    {"glUniform1ui", (void **)slot_glUniform1ui},
    {"glUniform2ui", (void **)slot_glUniform2ui},
    {"glUniform3ui", (void **)slot_glUniform3ui},
    {"glUniform4ui", (void **)slot_glUniform4ui},
    {"glUniform1uiv", (void **)slot_glUniform1uiv},
    {"glUniform2uiv", (void **)slot_glUniform2uiv},
    {"glUniform3uiv", (void **)slot_glUniform3uiv},
    {"glUniform4uiv", (void **)slot_glUniform4uiv},
    {"glTexParameterIiv", (void **)slot_glTexParameterIiv},
    {"glTexParameterIuiv", (void **)slot_glTexParameterIuiv},
    {"glGetTexParameterIiv", (void **)slot_glGetTexParameterIiv},
    {"glGetTexParameterIuiv", (void **)slot_glGetTexParameterIuiv},
    {"glClearBufferiv", (void **)slot_glClearBufferiv},
    {"glClearBufferuiv", (void **)slot_glClearBufferuiv},
    {"glClearBufferfv", (void **)slot_glClearBufferfv},
    {"glClearBufferfi", (void **)slot_glClearBufferfi},
    {"glGetStringi", (void **)slot_glGetStringi},
    {"glIsRenderbuffer", (void **)slot_glIsRenderbuffer},
    {"glBindRenderbuffer", (void **)slot_glBindRenderbuffer},
    {"glDeleteRenderbuffers", (void **)slot_glDeleteRenderbuffers},
    {"glGenRenderbuffers", (void **)slot_glGenRenderbuffers},
    {"glRenderbufferStorage", (void **)slot_glRenderbufferStorage},
    {"glGetRenderbufferParameteriv", (void **)slot_glGetRenderbufferParameteriv},
    {"glIsFramebuffer", (void **)slot_glIsFramebuffer},
    {"glBindFramebuffer", (void **)slot_glBindFramebuffer},
    {"glDeleteFramebuffers", (void **)slot_glDeleteFramebuffers},
    {"glGenFramebuffers", (void **)slot_glGenFramebuffers},
    {"glCheckFramebufferStatus", (void **)slot_glCheckFramebufferStatus},
    {"glFramebufferTexture1D", (void **)slot_glFramebufferTexture1D},
    {"glFramebufferTexture2D", (void **)slot_glFramebufferTexture2D},
    {"glFramebufferTexture3D", (void **)slot_glFramebufferTexture3D},
    {"glFramebufferRenderbuffer", (void **)slot_glFramebufferRenderbuffer},
    {"glGetFramebufferAttachmentParameteriv", (void **)slot_glGetFramebufferAttachmentParameteriv},
    {"glGenerateMipmap", (void **)slot_glGenerateMipmap},
    {"glBlitFramebuffer", (void **)slot_glBlitFramebuffer},
    {"glRenderbufferStorageMultisample", (void **)slot_glRenderbufferStorageMultisample},
    {"glFramebufferTextureLayer", (void **)slot_glFramebufferTextureLayer},
    {"glMapBufferRange", (void **)slot_glMapBufferRange},
    {"glFlushMappedBufferRange", (void **)slot_glFlushMappedBufferRange},
    {"glBindVertexArray", (void **)slot_glBindVertexArray},
    {"glDeleteVertexArrays", (void **)slot_glDeleteVertexArrays},
    {"glGenVertexArrays", (void **)slot_glGenVertexArrays},
    {"glIsVertexArray", (void **)slot_glIsVertexArray},
};

void gl_load_3_0(GlResolver resolve)
{
    load_group(&unk_1404044B4, gl_load_3_0_slots, sizeof gl_load_3_0_slots / sizeof gl_load_3_0_slots[0], resolve);
}

/* OpenGL 3.1: 15 functions. 0x1400E4EB0 */
static const GlSlot gl_load_3_1_slots[] = {
    {"glDrawArraysInstanced", (void **)slot_glDrawArraysInstanced},
    {"glDrawElementsInstanced", (void **)slot_glDrawElementsInstanced},
    {"glTexBuffer", (void **)slot_glTexBuffer},
    {"glPrimitiveRestartIndex", (void **)slot_glPrimitiveRestartIndex},
    {"glCopyBufferSubData", (void **)slot_glCopyBufferSubData},
    {"glGetUniformIndices", (void **)slot_glGetUniformIndices},
    {"glGetActiveUniformsiv", (void **)slot_glGetActiveUniformsiv},
    {"glGetActiveUniformName", (void **)slot_glGetActiveUniformName},
    {"glGetUniformBlockIndex", (void **)slot_glGetUniformBlockIndex},
    {"glGetActiveUniformBlockiv", (void **)slot_glGetActiveUniformBlockiv},
    {"glGetActiveUniformBlockName", (void **)slot_glGetActiveUniformBlockName},
    {"glUniformBlockBinding", (void **)slot_glUniformBlockBinding},
    {"glBindBufferRange", (void **)slot_glBindBufferRange},
    {"glBindBufferBase", (void **)slot_glBindBufferBase},
    {"glGetIntegeri_v", (void **)slot_glGetIntegeri_v},
};

void gl_load_3_1(GlResolver resolve)
{
    load_group(&unk_140404788, gl_load_3_1_slots, sizeof gl_load_3_1_slots / sizeof gl_load_3_1_slots[0], resolve);
}

/* OpenGL 3.2: 19 functions. 0x1400E4FC0 */
static const GlSlot gl_load_3_2_slots[] = {
    {"glDrawElementsBaseVertex", (void **)slot_glDrawElementsBaseVertex},
    {"glDrawRangeElementsBaseVertex", (void **)slot_glDrawRangeElementsBaseVertex},
    {"glDrawElementsInstancedBaseVertex", (void **)slot_glDrawElementsInstancedBaseVertex},
    {"glMultiDrawElementsBaseVertex", (void **)&unk_140404808},
    {"glProvokingVertex", (void **)slot_glProvokingVertex},
    {"glFenceSync", (void **)slot_glFenceSync},
    {"glIsSync", (void **)slot_glIsSync},
    {"glDeleteSync", (void **)slot_glDeleteSync},
    {"glClientWaitSync", (void **)slot_glClientWaitSync},
    {"glWaitSync", (void **)slot_glWaitSync},
    {"glGetInteger64v", (void **)slot_glGetInteger64v},
    {"glGetSynciv", (void **)slot_glGetSynciv},
    {"glGetInteger64i_v", (void **)slot_glGetInteger64i_v},
    {"glGetBufferParameteri64v", (void **)slot_glGetBufferParameteri64v},
    {"glFramebufferTexture", (void **)slot_glFramebufferTexture},
    {"glTexImage2DMultisample", (void **)slot_glTexImage2DMultisample},
    {"glTexImage3DMultisample", (void **)slot_glTexImage3DMultisample},
    {"glGetMultisamplefv", (void **)slot_glGetMultisamplefv},
    {"glSampleMaski", (void **)slot_glSampleMaski},
};

void gl_load_3_2(GlResolver resolve)
{
    load_group(&unk_14040478C, gl_load_3_2_slots, sizeof gl_load_3_2_slots / sizeof gl_load_3_2_slots[0], resolve);
}

/* OpenGL 3.3: 58 functions. 0x1400E5110 */
static const GlSlot gl_load_3_3_slots[] = {
    {"glBindFragDataLocationIndexed", (void **)slot_glBindFragDataLocationIndexed},
    {"glGetFragDataIndex", (void **)slot_glGetFragDataIndex},
    {"glGenSamplers", (void **)slot_glGenSamplers},
    {"glDeleteSamplers", (void **)slot_glDeleteSamplers},
    {"glIsSampler", (void **)slot_glIsSampler},
    {"glBindSampler", (void **)slot_glBindSampler},
    {"glSamplerParameteri", (void **)slot_glSamplerParameteri},
    {"glSamplerParameteriv", (void **)slot_glSamplerParameteriv},
    {"glSamplerParameterf", (void **)slot_glSamplerParameterf},
    {"glSamplerParameterfv", (void **)slot_glSamplerParameterfv},
    {"glSamplerParameterIiv", (void **)slot_glSamplerParameterIiv},
    {"glSamplerParameterIuiv", (void **)slot_glSamplerParameterIuiv},
    {"glGetSamplerParameteriv", (void **)slot_glGetSamplerParameteriv},
    {"glGetSamplerParameterIiv", (void **)slot_glGetSamplerParameterIiv},
    {"glGetSamplerParameterfv", (void **)slot_glGetSamplerParameterfv},
    {"glGetSamplerParameterIuiv", (void **)slot_glGetSamplerParameterIuiv},
    {"glQueryCounter", (void **)slot_glQueryCounter},
    {"glGetQueryObjecti64v", (void **)slot_glGetQueryObjecti64v},
    {"glGetQueryObjectui64v", (void **)slot_glGetQueryObjectui64v},
    {"glVertexAttribDivisor", (void **)slot_glVertexAttribDivisor},
    {"glVertexAttribP1ui", (void **)slot_glVertexAttribP1ui},
    {"glVertexAttribP1uiv", (void **)slot_glVertexAttribP1uiv},
    {"glVertexAttribP2ui", (void **)slot_glVertexAttribP2ui},
    {"glVertexAttribP2uiv", (void **)slot_glVertexAttribP2uiv},
    {"glVertexAttribP3ui", (void **)slot_glVertexAttribP3ui},
    {"glVertexAttribP3uiv", (void **)slot_glVertexAttribP3uiv},
    {"glVertexAttribP4ui", (void **)slot_glVertexAttribP4ui},
    {"glVertexAttribP4uiv", (void **)slot_glVertexAttribP4uiv},
    {"glVertexP2ui", (void **)slot_glVertexP2ui},
    {"glVertexP2uiv", (void **)slot_glVertexP2uiv},
    {"glVertexP3ui", (void **)slot_glVertexP3ui},
    {"glVertexP3uiv", (void **)slot_glVertexP3uiv},
    {"glVertexP4ui", (void **)slot_glVertexP4ui},
    {"glVertexP4uiv", (void **)slot_glVertexP4uiv},
    {"glTexCoordP1ui", (void **)slot_glTexCoordP1ui},
    {"glTexCoordP1uiv", (void **)slot_glTexCoordP1uiv},
    {"glTexCoordP2ui", (void **)slot_glTexCoordP2ui},
    {"glTexCoordP2uiv", (void **)slot_glTexCoordP2uiv},
    {"glTexCoordP3ui", (void **)slot_glTexCoordP3ui},
    {"glTexCoordP3uiv", (void **)slot_glTexCoordP3uiv},
    {"glTexCoordP4ui", (void **)slot_glTexCoordP4ui},
    {"glTexCoordP4uiv", (void **)slot_glTexCoordP4uiv},
    {"glMultiTexCoordP1ui", (void **)slot_glMultiTexCoordP1ui},
    {"glMultiTexCoordP1uiv", (void **)slot_glMultiTexCoordP1uiv},
    {"glMultiTexCoordP2ui", (void **)slot_glMultiTexCoordP2ui},
    {"glMultiTexCoordP2uiv", (void **)slot_glMultiTexCoordP2uiv},
    {"glMultiTexCoordP3ui", (void **)slot_glMultiTexCoordP3ui},
    {"glMultiTexCoordP3uiv", (void **)slot_glMultiTexCoordP3uiv},
    {"glMultiTexCoordP4ui", (void **)slot_glMultiTexCoordP4ui},
    {"glMultiTexCoordP4uiv", (void **)slot_glMultiTexCoordP4uiv},
    {"glNormalP3ui", (void **)slot_glNormalP3ui},
    {"glNormalP3uiv", (void **)slot_glNormalP3uiv},
    {"glColorP3ui", (void **)slot_glColorP3ui},
    {"glColorP3uiv", (void **)slot_glColorP3uiv},
    {"glColorP4ui", (void **)slot_glColorP4ui},
    {"glColorP4uiv", (void **)slot_glColorP4uiv},
    {"glSecondaryColorP3ui", (void **)slot_glSecondaryColorP3ui},
    {"glSecondaryColorP3uiv", (void **)slot_glSecondaryColorP3uiv},
};

void gl_load_3_3(GlResolver resolve)
{
    load_group(&unk_140404888, gl_load_3_3_slots, sizeof gl_load_3_3_slots / sizeof gl_load_3_3_slots[0], resolve);
}
