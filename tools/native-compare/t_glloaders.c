// NC_WRAPPERS: 1400A6700 1400E3BC0 1400E3EE0 1400E3FD0 1400E4030 1400E40E0 1400E4190 1400E42E0 1400E48D0 1400E4950 1400E4EB0 1400E4FC0 1400E5110 1400E3B90 14010E030
/* The OpenGL loader suite: every loader resolves names through a recording
   resolver and stores the results in the client's pointer table. The master
   case feeds glGetString canned version strings, so the original's own
   version parse (0x140091880) decides the extension gates; the standalone
   loader cases set the gates directly. Both builds print the resolver call
   log, the return value and every slot the loader wrote. */
#include <string.h>
#include <windows.h>
#include "nc.h"
#include "gl_loaders.h"
#include "gl_proc.h"

/* Slot addresses in the original image (the mapped exe in both builds). */
#define SLOT(address) (*(void **)(uintptr_t)(address))
#define GATE(address) (*(unsigned int *)(uintptr_t)(address))

static const struct { const char *name; unsigned long long address; } gates[] = {
    {"0x140302FF0", 0x140302FF0ULL},
    {"0x140302FF4", 0x140302FF4ULL},
    {"0x140404090", 0x140404090ULL},
    {"0x140404094", 0x140404094ULL},
    {"0x140404128", 0x140404128ULL},
    {"0x14040412C", 0x14040412CULL},
    {"0x1404044B0", 0x1404044B0ULL},
    {"0x1404044B4", 0x1404044B4ULL},
    {"0x140404788", 0x140404788ULL},
    {"0x14040478C", 0x14040478CULL},
    {"0x140404888", 0x140404888ULL},
    {"0x14040488C", 0x14040488CULL},
};

typedef struct {
    const char *suite;
    const struct { const char *name; unsigned long long address; } slots[128];
    int slot_count;
} LoaderEntry;

static const LoaderEntry loaders[] = {
    {"gl_load_all", {
        {"glGetString", 0x140302FA8ULL},
        {"glDrawArrays", 0x140302FF8ULL},
        {"glDrawElements", 0x140404010ULL},
        {"glPolygonOffset", 0x140404018ULL},
        {"glCopyTexImage1D", 0x140404020ULL},
        {"glCopyTexImage2D", 0x140404028ULL},
        {"glCopyTexSubImage1D", 0x140404030ULL},
        {"glCopyTexSubImage2D", 0x140404038ULL},
        {"glTexSubImage1D", 0x140404040ULL},
        {"glTexSubImage2D", 0x140404048ULL},
        {"glBindTexture", 0x140404050ULL},
        {"glDeleteTextures", 0x140404058ULL},
        {"glGenTextures", 0x140404060ULL},
        {"glIsTexture", 0x140404068ULL},
        {"glDrawRangeElements", 0x140404070ULL},
        {"glTexImage3D", 0x140404078ULL},
        {"glTexSubImage3D", 0x140404080ULL},
        {"glCopyTexSubImage3D", 0x140404088ULL},
        {"glActiveTexture", 0x140404098ULL},
        {"glSampleCoverage", 0x1404040A0ULL},
        {"glCompressedTexImage3D", 0x1404040A8ULL},
        {"glCompressedTexImage2D", 0x1404040B0ULL},
        {"glCompressedTexImage1D", 0x1404040B8ULL},
        {"glCompressedTexSubImage3D", 0x1404040C0ULL},
        {"glCompressedTexSubImage2D", 0x1404040C8ULL},
        {"glCompressedTexSubImage1D", 0x1404040D0ULL},
        {"glGetCompressedTexImage", 0x1404040D8ULL},
        {"glBlendFuncSeparate", 0x1404040E0ULL},
        {"glMultiDrawArrays", 0x1404040E8ULL},
        {"glMultiDrawElements", 0x1404040F0ULL},
        {"glPointParameterf", 0x1404040F8ULL},
        {"glPointParameterfv", 0x140404100ULL},
        {"glPointParameteri", 0x140404108ULL},
        {"glPointParameteriv", 0x140404110ULL},
        {"glBlendColor", 0x140404118ULL},
        {"glBlendEquation", 0x140404120ULL},
        {"glGenQueries", 0x140404130ULL},
        {"glDeleteQueries", 0x140404138ULL},
        {"glIsQuery", 0x140404140ULL},
        {"glBeginQuery", 0x140404148ULL},
        {"glEndQuery", 0x140404150ULL},
        {"glGetQueryiv", 0x140404158ULL},
        {"glGetQueryObjectiv", 0x140404160ULL},
        {"glGetQueryObjectuiv", 0x140404168ULL},
        {"glBindBuffer", 0x140404170ULL},
        {"glDeleteBuffers", 0x140404178ULL},
        {"glGenBuffers", 0x140404180ULL},
        {"glIsBuffer", 0x140404188ULL},
        {"glBufferData", 0x140404190ULL},
        {"glBufferSubData", 0x140404198ULL},
        {"glGetBufferSubData", 0x1404041A0ULL},
        {"glMapBuffer", 0x1404041A8ULL},
        {"glUnmapBuffer", 0x1404041B0ULL},
        {"glGetBufferParameteriv", 0x1404041B8ULL},
        {"glGetBufferPointerv", 0x1404041C0ULL},
        {"glUniformMatrix2x3fv", 0x1404044B8ULL},
        {"glUniformMatrix3x2fv", 0x1404044C0ULL},
        {"glUniformMatrix2x4fv", 0x1404044C8ULL},
        {"glUniformMatrix4x2fv", 0x1404044D0ULL},
        {"glUniformMatrix3x4fv", 0x1404044D8ULL},
        {"glUniformMatrix4x3fv", 0x1404044E0ULL},
        {"glDrawArraysInstanced", 0x140404790ULL},
        {"glDrawElementsInstanced", 0x140404798ULL},
        {"glTexBuffer", 0x1404047A0ULL},
        {"glPrimitiveRestartIndex", 0x1404047A8ULL},
        {"glCopyBufferSubData", 0x1404047B0ULL},
        {"glGetUniformIndices", 0x1404047B8ULL},
        {"glGetActiveUniformsiv", 0x1404047C0ULL},
        {"glGetActiveUniformName", 0x1404047C8ULL},
        {"glGetUniformBlockIndex", 0x1404047D0ULL},
        {"glGetActiveUniformBlockiv", 0x1404047D8ULL},
        {"glGetActiveUniformBlockName", 0x1404047E0ULL},
        {"glUniformBlockBinding", 0x1404047E8ULL},
        {"glBindBufferRange", 0x140404528ULL},
        {"glBindBufferBase", 0x140404530ULL},
        {"glGetIntegeri_v", 0x1404044F8ULL},
        {"glDrawElementsBaseVertex", 0x1404047F0ULL},
        {"glDrawRangeElementsBaseVertex", 0x1404047F8ULL},
        {"glDrawElementsInstancedBaseVertex", 0x140404800ULL},
        {"glProvokingVertex", 0x140404810ULL},
        {"glFenceSync", 0x140404818ULL},
        {"glIsSync", 0x140404820ULL},
        {"glDeleteSync", 0x140404828ULL},
        {"glClientWaitSync", 0x140404830ULL},
        {"glWaitSync", 0x140404838ULL},
        {"glGetInteger64v", 0x140404840ULL},
        {"glGetSynciv", 0x140404848ULL},
        {"glGetInteger64i_v", 0x140404850ULL},
        {"glGetBufferParameteri64v", 0x140404858ULL},
        {"glFramebufferTexture", 0x140404860ULL},
        {"glTexImage2DMultisample", 0x140404868ULL},
        {"glTexImage3DMultisample", 0x140404870ULL},
        {"glGetMultisamplefv", 0x140404878ULL},
        {"glSampleMaski", 0x140404880ULL},
        {"glClipControl", 0x140404A60ULL},
    }, 95},
    {"gl_load_fixed_functions", {
        {"glCullFace", 0x144980CB8ULL},
        {"glFrontFace", 0x144980CC0ULL},
        {"glHint", 0x144980CC8ULL},
        {"glLineWidth", 0x144980CD0ULL},
        {"glPointSize", 0x144980CD8ULL},
        {"glPolygonMode", 0x144980CE0ULL},
        {"glScissor", 0x144980CE8ULL},
        {"glTexParameterf", 0x144980CF0ULL},
        {"glTexParameterfv", 0x144980CF8ULL},
        {"glTexParameteri", 0x144980D00ULL},
        {"glTexParameteriv", 0x144980D08ULL},
        {"glTexImage1D", 0x144980D10ULL},
        {"glTexImage2D", 0x144980D18ULL},
        {"glDrawBuffer", 0x144980D20ULL},
        {"glClear", 0x144980D28ULL},
        {"glClearColor", 0x144980D30ULL},
        {"glClearStencil", 0x144980D38ULL},
        {"glClearDepth", 0x144980D40ULL},
        {"glStencilMask", 0x144980D48ULL},
        {"glColorMask", 0x144980D50ULL},
        {"glDepthMask", 0x144980D58ULL},
        {"glDisable", 0x144980D60ULL},
        {"glEnable", 0x144980D68ULL},
        {"glFinish", 0x144980D70ULL},
        {"glFlush", 0x144980D78ULL},
        {"glBlendFunc", 0x144980D80ULL},
        {"glLogicOp", 0x140302F40ULL},
        {"glStencilFunc", 0x140302F48ULL},
        {"glStencilOp", 0x140302F50ULL},
        {"glDepthFunc", 0x140302F58ULL},
        {"glPixelStoref", 0x140302F60ULL},
        {"glPixelStorei", 0x140302F68ULL},
        {"glReadBuffer", 0x140302F70ULL},
        {"glReadPixels", 0x140302F78ULL},
        {"glGetBooleanv", 0x140302F80ULL},
        {"glGetDoublev", 0x140302F88ULL},
        {"glGetError", 0x140302F90ULL},
        {"glGetFloatv", 0x140302F98ULL},
        {"glGetIntegerv", 0x140302FA0ULL},
        {"glGetString", 0x140302FA8ULL},
        {"glGetTexImage", 0x140302FB0ULL},
        {"glGetTexParameterfv", 0x140302FB8ULL},
        {"glGetTexParameteriv", 0x140302FC0ULL},
        {"glGetTexLevelParameterfv", 0x140302FC8ULL},
        {"glGetTexLevelParameteriv", 0x140302FD0ULL},
        {"glIsEnabled", 0x140302FD8ULL},
        {"glDepthRange", 0x140302FE0ULL},
        {"glViewport", 0x140302FE8ULL},
    }, 48},
    {"gl_load_core_1_1", {
        {"glDrawArrays", 0x140302FF8ULL},
        {"glDrawElements", 0x140404010ULL},
        {"glPolygonOffset", 0x140404018ULL},
        {"glCopyTexImage1D", 0x140404020ULL},
        {"glCopyTexImage2D", 0x140404028ULL},
        {"glCopyTexSubImage1D", 0x140404030ULL},
        {"glCopyTexSubImage2D", 0x140404038ULL},
        {"glTexSubImage1D", 0x140404040ULL},
        {"glTexSubImage2D", 0x140404048ULL},
        {"glBindTexture", 0x140404050ULL},
        {"glDeleteTextures", 0x140404058ULL},
        {"glGenTextures", 0x140404060ULL},
        {"glIsTexture", 0x140404068ULL},
    }, 13},
    {"gl_load_core_1_2", {
        {"glDrawRangeElements", 0x140404070ULL},
        {"glTexImage3D", 0x140404078ULL},
        {"glTexSubImage3D", 0x140404080ULL},
        {"glCopyTexSubImage3D", 0x140404088ULL},
    }, 4},
    {"gl_load_multitexture_1_3", {
        {"glActiveTexture", 0x140404098ULL},
        {"glSampleCoverage", 0x1404040A0ULL},
        {"glCompressedTexImage3D", 0x1404040A8ULL},
        {"glCompressedTexImage2D", 0x1404040B0ULL},
        {"glCompressedTexImage1D", 0x1404040B8ULL},
        {"glCompressedTexSubImage3D", 0x1404040C0ULL},
        {"glCompressedTexSubImage2D", 0x1404040C8ULL},
        {"glCompressedTexSubImage1D", 0x1404040D0ULL},
        {"glGetCompressedTexImage", 0x1404040D8ULL},
    }, 9},
    {"gl_load_blend_1_4", {
        {"glBlendFuncSeparate", 0x1404040E0ULL},
        {"glMultiDrawArrays", 0x1404040E8ULL},
        {"glMultiDrawElements", 0x1404040F0ULL},
        {"glPointParameterf", 0x1404040F8ULL},
        {"glPointParameterfv", 0x140404100ULL},
        {"glPointParameteri", 0x140404108ULL},
        {"glPointParameteriv", 0x140404110ULL},
        {"glBlendColor", 0x140404118ULL},
        {"glBlendEquation", 0x140404120ULL},
    }, 9},
    {"gl_load_buffers_1_5", {
        {"glGenQueries", 0x140404130ULL},
        {"glDeleteQueries", 0x140404138ULL},
        {"glIsQuery", 0x140404140ULL},
        {"glBeginQuery", 0x140404148ULL},
        {"glEndQuery", 0x140404150ULL},
        {"glGetQueryiv", 0x140404158ULL},
        {"glGetQueryObjectiv", 0x140404160ULL},
        {"glGetQueryObjectuiv", 0x140404168ULL},
        {"glBindBuffer", 0x140404170ULL},
        {"glDeleteBuffers", 0x140404178ULL},
        {"glGenBuffers", 0x140404180ULL},
        {"glIsBuffer", 0x140404188ULL},
        {"glBufferData", 0x140404190ULL},
        {"glBufferSubData", 0x140404198ULL},
        {"glGetBufferSubData", 0x1404041A0ULL},
        {"glMapBuffer", 0x1404041A8ULL},
        {"glUnmapBuffer", 0x1404041B0ULL},
        {"glGetBufferParameteriv", 0x1404041B8ULL},
        {"glGetBufferPointerv", 0x1404041C0ULL},
    }, 19},
    {"gl_load_stencil_2_0", {
        {"glBlendEquationSeparate", 0x1404041C8ULL},
        {"glDrawBuffers", 0x1404041D0ULL},
        {"glStencilOpSeparate", 0x1404041D8ULL},
        {"glStencilFuncSeparate", 0x1404041E0ULL},
        {"glStencilMaskSeparate", 0x1404041E8ULL},
        {"glAttachShader", 0x1404041F0ULL},
        {"glBindAttribLocation", 0x1404041F8ULL},
        {"glCompileShader", 0x140404200ULL},
        {"glCreateProgram", 0x140404208ULL},
        {"glCreateShader", 0x140404210ULL},
        {"glDeleteProgram", 0x140404218ULL},
        {"glDeleteShader", 0x140404220ULL},
        {"glDetachShader", 0x140404228ULL},
        {"glDisableVertexAttribArray", 0x140404230ULL},
        {"glEnableVertexAttribArray", 0x140404238ULL},
        {"glGetActiveAttrib", 0x140404240ULL},
        {"glGetActiveUniform", 0x140404248ULL},
        {"glGetAttachedShaders", 0x140404250ULL},
        {"glGetAttribLocation", 0x140404258ULL},
        {"glGetProgramiv", 0x140404260ULL},
        {"glGetProgramInfoLog", 0x140404268ULL},
        {"glGetShaderiv", 0x140404270ULL},
        {"glGetShaderInfoLog", 0x140404278ULL},
        {"glGetShaderSource", 0x140404280ULL},
        {"glGetUniformLocation", 0x140404288ULL},
        {"glGetUniformfv", 0x140404290ULL},
        {"glGetUniformiv", 0x140404298ULL},
        {"glGetVertexAttribdv", 0x1404042A0ULL},
        {"glGetVertexAttribfv", 0x1404042A8ULL},
        {"glGetVertexAttribiv", 0x1404042B0ULL},
        {"glGetVertexAttribPointerv", 0x1404042B8ULL},
        {"glIsProgram", 0x1404042C0ULL},
        {"glIsShader", 0x1404042C8ULL},
        {"glLinkProgram", 0x1404042D0ULL},
        {"glShaderSource", 0x1404042D8ULL},
        {"glUseProgram", 0x1404042E0ULL},
        {"glUniform1f", 0x1404042E8ULL},
        {"glUniform2f", 0x1404042F0ULL},
        {"glUniform3f", 0x1404042F8ULL},
        {"glUniform4f", 0x140404300ULL},
        {"glUniform1i", 0x140404308ULL},
        {"glUniform2i", 0x140404310ULL},
        {"glUniform3i", 0x140404318ULL},
        {"glUniform4i", 0x140404320ULL},
        {"glUniform1fv", 0x140404328ULL},
        {"glUniform2fv", 0x140404330ULL},
        {"glUniform3fv", 0x140404338ULL},
        {"glUniform4fv", 0x140404340ULL},
        {"glUniform1iv", 0x140404348ULL},
        {"glUniform2iv", 0x140404350ULL},
        {"glUniform3iv", 0x140404358ULL},
        {"glUniform4iv", 0x140404360ULL},
        {"glUniformMatrix2fv", 0x140404368ULL},
        {"glUniformMatrix3fv", 0x140404370ULL},
        {"glUniformMatrix4fv", 0x140404378ULL},
        {"glValidateProgram", 0x140404380ULL},
        {"glVertexAttrib1d", 0x140404388ULL},
        {"glVertexAttrib1dv", 0x140404390ULL},
        {"glVertexAttrib1f", 0x140404398ULL},
        {"glVertexAttrib1fv", 0x1404043A0ULL},
        {"glVertexAttrib1s", 0x1404043A8ULL},
        {"glVertexAttrib1sv", 0x1404043B0ULL},
        {"glVertexAttrib2d", 0x1404043B8ULL},
        {"glVertexAttrib2dv", 0x1404043C0ULL},
        {"glVertexAttrib2f", 0x1404043C8ULL},
        {"glVertexAttrib2fv", 0x1404043D0ULL},
        {"glVertexAttrib2s", 0x1404043D8ULL},
        {"glVertexAttrib2sv", 0x1404043E0ULL},
        {"glVertexAttrib3d", 0x1404043E8ULL},
        {"glVertexAttrib3dv", 0x1404043F0ULL},
        {"glVertexAttrib3f", 0x1404043F8ULL},
        {"glVertexAttrib3fv", 0x140404400ULL},
        {"glVertexAttrib3s", 0x140404408ULL},
        {"glVertexAttrib3sv", 0x140404410ULL},
        {"glVertexAttrib4Nbv", 0x140404418ULL},
        {"glVertexAttrib4Niv", 0x140404420ULL},
        {"glVertexAttrib4Nsv", 0x140404428ULL},
        {"glVertexAttrib4Nub", 0x140404430ULL},
        {"glVertexAttrib4Nubv", 0x140404438ULL},
        {"glVertexAttrib4Nuiv", 0x140404440ULL},
        {"glVertexAttrib4Nusv", 0x140404448ULL},
        {"glVertexAttrib4bv", 0x140404450ULL},
        {"glVertexAttrib4d", 0x140404458ULL},
        {"glVertexAttrib4dv", 0x140404460ULL},
        {"glVertexAttrib4f", 0x140404468ULL},
        {"glVertexAttrib4fv", 0x140404470ULL},
        {"glVertexAttrib4iv", 0x140404478ULL},
        {"glVertexAttrib4s", 0x140404480ULL},
        {"glVertexAttrib4sv", 0x140404488ULL},
        {"glVertexAttrib4ubv", 0x140404490ULL},
        {"glVertexAttrib4uiv", 0x140404498ULL},
        {"glVertexAttrib4usv", 0x1404044A0ULL},
        {"glVertexAttribPointer", 0x1404044A8ULL},
    }, 93},
    {"gl_load_uniform_2_0", {
        {"glUniformMatrix2x3fv", 0x1404044B8ULL},
        {"glUniformMatrix3x2fv", 0x1404044C0ULL},
        {"glUniformMatrix2x4fv", 0x1404044C8ULL},
        {"glUniformMatrix4x2fv", 0x1404044D0ULL},
        {"glUniformMatrix3x4fv", 0x1404044D8ULL},
        {"glUniformMatrix4x3fv", 0x1404044E0ULL},
    }, 6},
    {"gl_load_indexed_3_0", {
        {"glColorMaski", 0x1404044E8ULL},
        {"glGetBooleani_v", 0x1404044F0ULL},
        {"glGetIntegeri_v", 0x1404044F8ULL},
        {"glEnablei", 0x140404500ULL},
        {"glDisablei", 0x140404508ULL},
        {"glIsEnabledi", 0x140404510ULL},
        {"glBeginTransformFeedback", 0x140404518ULL},
        {"glEndTransformFeedback", 0x140404520ULL},
        {"glBindBufferRange", 0x140404528ULL},
        {"glBindBufferBase", 0x140404530ULL},
        {"glTransformFeedbackVaryings", 0x140404538ULL},
        {"glGetTransformFeedbackVarying", 0x140404540ULL},
        {"glClampColor", 0x140404548ULL},
        {"glBeginConditionalRender", 0x140404550ULL},
        {"glEndConditionalRender", 0x140404558ULL},
        {"glVertexAttribIPointer", 0x140404560ULL},
        {"glGetVertexAttribIiv", 0x140404568ULL},
        {"glGetVertexAttribIuiv", 0x140404570ULL},
        {"glVertexAttribI1i", 0x140404578ULL},
        {"glVertexAttribI2i", 0x140404580ULL},
        {"glVertexAttribI3i", 0x140404588ULL},
        {"glVertexAttribI4i", 0x140404590ULL},
        {"glVertexAttribI1ui", 0x140404598ULL},
        {"glVertexAttribI2ui", 0x1404045A0ULL},
        {"glVertexAttribI3ui", 0x1404045A8ULL},
        {"glVertexAttribI4ui", 0x1404045B0ULL},
        {"glVertexAttribI1iv", 0x1404045B8ULL},
        {"glVertexAttribI2iv", 0x1404045C0ULL},
        {"glVertexAttribI3iv", 0x1404045C8ULL},
        {"glVertexAttribI4iv", 0x1404045D0ULL},
        {"glVertexAttribI1uiv", 0x1404045D8ULL},
        {"glVertexAttribI2uiv", 0x1404045E0ULL},
        {"glVertexAttribI3uiv", 0x1404045E8ULL},
        {"glVertexAttribI4uiv", 0x1404045F0ULL},
        {"glVertexAttribI4bv", 0x1404045F8ULL},
        {"glVertexAttribI4sv", 0x140404600ULL},
        {"glVertexAttribI4ubv", 0x140404608ULL},
        {"glVertexAttribI4usv", 0x140404610ULL},
        {"glGetUniformuiv", 0x140404618ULL},
        {"glBindFragDataLocation", 0x140404620ULL},
        {"glGetFragDataLocation", 0x140404628ULL},
        {"glUniform1ui", 0x140404630ULL},
        {"glUniform2ui", 0x140404638ULL},
        {"glUniform3ui", 0x140404640ULL},
        {"glUniform4ui", 0x140404648ULL},
        {"glUniform1uiv", 0x140404650ULL},
        {"glUniform2uiv", 0x140404658ULL},
        {"glUniform3uiv", 0x140404660ULL},
        {"glUniform4uiv", 0x140404668ULL},
        {"glTexParameterIiv", 0x140404670ULL},
        {"glTexParameterIuiv", 0x140404678ULL},
        {"glGetTexParameterIiv", 0x140404680ULL},
        {"glGetTexParameterIuiv", 0x140404688ULL},
        {"glClearBufferiv", 0x140404690ULL},
        {"glClearBufferuiv", 0x140404698ULL},
        {"glClearBufferfv", 0x1404046A0ULL},
        {"glClearBufferfi", 0x1404046A8ULL},
        {"glGetStringi", 0x1404046B0ULL},
        {"glIsRenderbuffer", 0x1404046B8ULL},
        {"glBindRenderbuffer", 0x1404046C0ULL},
        {"glDeleteRenderbuffers", 0x1404046C8ULL},
        {"glGenRenderbuffers", 0x1404046D0ULL},
        {"glRenderbufferStorage", 0x1404046D8ULL},
        {"glGetRenderbufferParameteriv", 0x1404046E0ULL},
        {"glIsFramebuffer", 0x1404046E8ULL},
        {"glBindFramebuffer", 0x1404046F0ULL},
        {"glDeleteFramebuffers", 0x1404046F8ULL},
        {"glGenFramebuffers", 0x140404700ULL},
        {"glCheckFramebufferStatus", 0x140404708ULL},
        {"glFramebufferTexture1D", 0x140404710ULL},
        {"glFramebufferTexture2D", 0x140404718ULL},
        {"glFramebufferTexture3D", 0x140404720ULL},
        {"glFramebufferRenderbuffer", 0x140404728ULL},
        {"glGetFramebufferAttachmentParameteriv", 0x140404730ULL},
        {"glGenerateMipmap", 0x140404738ULL},
        {"glBlitFramebuffer", 0x140404740ULL},
        {"glRenderbufferStorageMultisample", 0x140404748ULL},
        {"glFramebufferTextureLayer", 0x140404750ULL},
        {"glMapBufferRange", 0x140404758ULL},
        {"glFlushMappedBufferRange", 0x140404760ULL},
        {"glBindVertexArray", 0x140404768ULL},
        {"glDeleteVertexArrays", 0x140404770ULL},
        {"glGenVertexArrays", 0x140404778ULL},
        {"glIsVertexArray", 0x140404780ULL},
    }, 84},
    {"gl_load_instanced_3_0", {
        {"glDrawArraysInstanced", 0x140404790ULL},
        {"glDrawElementsInstanced", 0x140404798ULL},
        {"glTexBuffer", 0x1404047A0ULL},
        {"glPrimitiveRestartIndex", 0x1404047A8ULL},
        {"glCopyBufferSubData", 0x1404047B0ULL},
        {"glGetUniformIndices", 0x1404047B8ULL},
        {"glGetActiveUniformsiv", 0x1404047C0ULL},
        {"glGetActiveUniformName", 0x1404047C8ULL},
        {"glGetUniformBlockIndex", 0x1404047D0ULL},
        {"glGetActiveUniformBlockiv", 0x1404047D8ULL},
        {"glGetActiveUniformBlockName", 0x1404047E0ULL},
        {"glUniformBlockBinding", 0x1404047E8ULL},
        {"glBindBufferRange", 0x140404528ULL},
        {"glBindBufferBase", 0x140404530ULL},
        {"glGetIntegeri_v", 0x1404044F8ULL},
    }, 15},
    {"gl_load_basevertex_3_2", {
        {"glDrawElementsBaseVertex", 0x1404047F0ULL},
        {"glDrawRangeElementsBaseVertex", 0x1404047F8ULL},
        {"glDrawElementsInstancedBaseVertex", 0x140404800ULL},
        {"glProvokingVertex", 0x140404810ULL},
        {"glFenceSync", 0x140404818ULL},
        {"glIsSync", 0x140404820ULL},
        {"glDeleteSync", 0x140404828ULL},
        {"glClientWaitSync", 0x140404830ULL},
        {"glWaitSync", 0x140404838ULL},
        {"glGetInteger64v", 0x140404840ULL},
        {"glGetSynciv", 0x140404848ULL},
        {"glGetInteger64i_v", 0x140404850ULL},
        {"glGetBufferParameteri64v", 0x140404858ULL},
        {"glFramebufferTexture", 0x140404860ULL},
        {"glTexImage2DMultisample", 0x140404868ULL},
        {"glTexImage3DMultisample", 0x140404870ULL},
        {"glGetMultisamplefv", 0x140404878ULL},
        {"glSampleMaski", 0x140404880ULL},
    }, 18},
    {"gl_load_sync_3_3", {
        {"glBindFragDataLocationIndexed", 0x140404890ULL},
        {"glGetFragDataIndex", 0x140404898ULL},
        {"glGenSamplers", 0x1404048A0ULL},
        {"glDeleteSamplers", 0x1404048A8ULL},
        {"glIsSampler", 0x1404048B0ULL},
        {"glBindSampler", 0x1404048B8ULL},
        {"glSamplerParameteri", 0x1404048C0ULL},
        {"glSamplerParameteriv", 0x1404048C8ULL},
        {"glSamplerParameterf", 0x1404048D0ULL},
        {"glSamplerParameterfv", 0x1404048D8ULL},
        {"glSamplerParameterIiv", 0x1404048E0ULL},
        {"glSamplerParameterIuiv", 0x1404048E8ULL},
        {"glGetSamplerParameteriv", 0x1404048F0ULL},
        {"glGetSamplerParameterIiv", 0x1404048F8ULL},
        {"glGetSamplerParameterfv", 0x140404900ULL},
        {"glGetSamplerParameterIuiv", 0x140404908ULL},
        {"glQueryCounter", 0x140404910ULL},
        {"glGetQueryObjecti64v", 0x140404918ULL},
        {"glGetQueryObjectui64v", 0x140404920ULL},
        {"glVertexAttribDivisor", 0x140404928ULL},
        {"glVertexAttribP1ui", 0x140404930ULL},
        {"glVertexAttribP1uiv", 0x140404938ULL},
        {"glVertexAttribP2ui", 0x140404940ULL},
        {"glVertexAttribP2uiv", 0x140404948ULL},
        {"glVertexAttribP3ui", 0x140404950ULL},
        {"glVertexAttribP3uiv", 0x140404958ULL},
        {"glVertexAttribP4ui", 0x140404960ULL},
        {"glVertexAttribP4uiv", 0x140404968ULL},
        {"glVertexP2ui", 0x140404970ULL},
        {"glVertexP2uiv", 0x140404978ULL},
        {"glVertexP3ui", 0x140404980ULL},
        {"glVertexP3uiv", 0x140404988ULL},
        {"glVertexP4ui", 0x140404990ULL},
        {"glVertexP4uiv", 0x140404998ULL},
        {"glTexCoordP1ui", 0x1404049A0ULL},
        {"glTexCoordP1uiv", 0x1404049A8ULL},
        {"glTexCoordP2ui", 0x1404049B0ULL},
        {"glTexCoordP2uiv", 0x1404049B8ULL},
        {"glTexCoordP3ui", 0x1404049C0ULL},
        {"glTexCoordP3uiv", 0x1404049C8ULL},
        {"glTexCoordP4ui", 0x1404049D0ULL},
        {"glTexCoordP4uiv", 0x1404049D8ULL},
        {"glMultiTexCoordP1ui", 0x1404049E0ULL},
        {"glMultiTexCoordP1uiv", 0x1404049E8ULL},
        {"glMultiTexCoordP2ui", 0x1404049F0ULL},
        {"glMultiTexCoordP2uiv", 0x1404049F8ULL},
        {"glMultiTexCoordP3ui", 0x140404A00ULL},
        {"glMultiTexCoordP3uiv", 0x140404A08ULL},
        {"glMultiTexCoordP4ui", 0x140404A10ULL},
        {"glMultiTexCoordP4uiv", 0x140404A18ULL},
        {"glNormalP3ui", 0x140404A20ULL},
        {"glNormalP3uiv", 0x140404A28ULL},
        {"glColorP3ui", 0x140404A30ULL},
        {"glColorP3uiv", 0x140404A38ULL},
        {"glColorP4ui", 0x140404A40ULL},
        {"glColorP4uiv", 0x140404A48ULL},
        {"glSecondaryColorP3ui", 0x140404A50ULL},
        {"glSecondaryColorP3uiv", 0x140404A58ULL},
    }, 58},
    {"gl_clip_control_proc", {
        {"glClipControl", 0x140404A60ULL},
    }, 1},
    {"gl_load_opengl32", {
    }, 0},
};

/* Canned version/extension strings the fake glGetString serves; the original
   parse turns them into the extension gates. */
static const char *versions[] = {
    "4.6.0 Sub Rosa native-compare", "3.3.0", "2.1.0", "1.1.0", "OpenGL ES 3.0",
};
static const char *extensions =
    "GL_ARB_multi_draw GL_EXT_texture_array GL_ARB_texture_storage ";

static int call_index;

/* Callable stand-ins for the resolved GL functions. The original's parse and
   context check call some of the pointers it stored, so a stand-in must be
   safe to call through: each one is a generated thunk that lands in
   call_through with its index and answers zero. */
static uint64_t call_through(uint64_t index)
{
    nc_line("through %llu", (unsigned long long)index);
    return 0;
}

static unsigned char *thunk_page;

static void *make_thunk(int i)
{
    unsigned char *p = thunk_page + 32 * (size_t)i;
    uint64_t index = (uint64_t)i;
    uint64_t target = (uint64_t)(uintptr_t)call_through;
    p[0] = 0x48; p[1] = 0xB9; memcpy(p + 2, &index, 8);      /* mov rcx, i */
    p[10] = 0x48; p[11] = 0xB8; memcpy(p + 12, &target, 8);  /* mov rax, call_through */
    p[20] = 0xFF; p[21] = 0xE0;                              /* jmp rax */
    return p;
}

static const char *fake_glGetString(unsigned int name)
{
    int index = call_index++;
    nc_line("call %d glGetString %u", index, name);
    if (name == 7938) {                                /* GL_VERSION */
        if ((index % 11) == 5) return 0;               /* a driver that answers no version */
        return versions[(index / 3) % 5];
    }
    if (name == 7939) return extensions;               /* GL_EXTENSIONS */
    return "";
}

static void *resolver(const char *name)
{
    int index = call_index++;
    nc_line("call %d %s", index, name);
    if (strcmp(name, "glGetString") == 0) return (void *)fake_glGetString;
    return make_thunk(index);
}

/* The original's version parse and context check call its statically-linked
   CRT (sscanf_s, the heap allocator), which crashes in the harness because
   the original's CRT startup never ran. Both builds get these stand-ins via
   nc_redirect: the parse re-reads the served version through the glGetString
   slot, parses it with the harness's own sscanf, and writes the same state
   the original's parse writes; the context check just reports a context. */
static void parse_stand_in(void)
{
    const char *(*get_string)(unsigned int);
    const char *version;
    int major = 0, minor = 0;

    get_string = (void *)SLOT(0x140302FA8ULL);
    version = get_string ? get_string(7938) : 0;
    if (version) sscanf(version, "%d.%d", &major, &minor);
    GATE(0x140404A68ULL) = (unsigned)major;
    GATE(0x140404A6CULL) = (unsigned)minor;
    GATE(0x144980D98ULL) = (unsigned)major;
    GATE(0x144980D9CULL) = (unsigned)minor;
    GATE(0x144980CB0ULL) = major > 1 || (major == 1 && minor >= 0);
    GATE(0x140302FF0ULL) = major > 1 || (major == 1 && minor >= 1);
    GATE(0x140302FF4ULL) = major > 1 || (major == 1 && minor >= 2);
    GATE(0x140404090ULL) = major > 1 || (major == 1 && minor >= 3);
    GATE(0x140404094ULL) = major > 1 || (major == 1 && minor >= 4);
    GATE(0x140404128ULL) = major > 2 || (major == 2 && minor >= 0);
    GATE(0x14040412CULL) = major > 2 || (major == 2 && minor >= 1);
    GATE(0x1404044B0ULL) = major > 3 || (major == 3 && minor >= 0);
    GATE(0x1404044B4ULL) = major > 3 || (major == 3 && minor >= 1);
    GATE(0x140404788ULL) = major > 3 || (major == 3 && minor >= 2);
    GATE(0x14040478CULL) = major > 3 || (major == 3 && minor >= 2);
    GATE(0x140404888ULL) = major > 3 || (major == 3 && minor >= 3);
    GATE(0x14040488CULL) = major > 4 || (major == 4 && minor >= 5);
}

static unsigned int check_stand_in(void)
{
    return 1;
}

/* In the native build the routine under test is the original machine code at
   its address; in the port build it is the engine port; with client wrappers
   it is the real client entry point. */
#ifdef NC_NATIVE
typedef void (*gl_load_proc)(void *(*)(const char *));
#define FN_ALL        ((int (*)(void *(*)(const char *)))NC_ADDR(0x1400A6700))
#define FN_FIXED      ((gl_load_proc)NC_ADDR(0x1400E3BC0))
#define FN_CORE_1_1   ((gl_load_proc)NC_ADDR(0x1400E3EE0))
#define FN_CORE_1_2   ((gl_load_proc)NC_ADDR(0x1400E3FD0))
#define FN_MULTI      ((gl_load_proc)NC_ADDR(0x1400E4030))
#define FN_BLEND      ((gl_load_proc)NC_ADDR(0x1400E40E0))
#define FN_BUFFERS    ((gl_load_proc)NC_ADDR(0x1400E4190))
#define FN_STENCIL    ((gl_load_proc)NC_ADDR(0x1400E42E0))
#define FN_UNIFORM    ((gl_load_proc)NC_ADDR(0x1400E48D0))
#define FN_INDEXED    ((gl_load_proc)NC_ADDR(0x1400E4950))
#define FN_INSTANCED  ((gl_load_proc)NC_ADDR(0x1400E4EB0))
#define FN_BASEVERTEX ((gl_load_proc)NC_ADDR(0x1400E4FC0))
#define FN_SYNC       ((gl_load_proc)NC_ADDR(0x1400E5110))
#define FN_CLIPPROC   ((void *(*)(void *(*)(const char *)))NC_ADDR(0x1400E3B90))
#define FN_OPENGL32   ((long long (*)(void))NC_ADDR(0x14010E030))
#elif defined(NC_CLIENT_WRAPPERS)
typedef void (*gl_load_proc)(void *(*)(const char *));
typedef long long (*c_resolver)(char *);
long long sub_1400A6700(c_resolver);
void sub_1400E3BC0(c_resolver);
void sub_1400E3EE0(c_resolver);
void sub_1400E3FD0(c_resolver);
void sub_1400E4030(c_resolver);
void sub_1400E40E0(c_resolver);
void sub_1400E4190(c_resolver);
void sub_1400E42E0(c_resolver);
void sub_1400E48D0(c_resolver);
void sub_1400E4950(c_resolver);
void sub_1400E4EB0(c_resolver);
void sub_1400E4FC0(c_resolver);
void sub_1400E5110(c_resolver);
long long (*sub_1400E3B90(c_resolver))(void *, void *);
long long sr_gl_resolve_proc_loader(void);
#define RES(r) ((c_resolver)(r))
#define FN_ALL        ((int (*)(void *(*)(const char *)))sub_1400A6700)
#define FN_FIXED      ((gl_load_proc)sub_1400E3BC0)
#define FN_CORE_1_1   ((gl_load_proc)sub_1400E3EE0)
#define FN_CORE_1_2   ((gl_load_proc)sub_1400E3FD0)
#define FN_MULTI      ((gl_load_proc)sub_1400E4030)
#define FN_BLEND      ((gl_load_proc)sub_1400E40E0)
#define FN_BUFFERS    ((gl_load_proc)sub_1400E4190)
#define FN_STENCIL    ((gl_load_proc)sub_1400E42E0)
#define FN_UNIFORM    ((gl_load_proc)sub_1400E48D0)
#define FN_INDEXED    ((gl_load_proc)sub_1400E4950)
#define FN_INSTANCED  ((gl_load_proc)sub_1400E4EB0)
#define FN_BASEVERTEX ((gl_load_proc)sub_1400E4FC0)
#define FN_SYNC       ((gl_load_proc)sub_1400E5110)
#define FN_CLIPPROC   ((void *(*)(void *(*)(const char *)))sub_1400E3B90)
#define FN_OPENGL32   ((long long (*)(void))sr_gl_resolve_proc_loader)
#else
typedef void (*gl_load_proc)(void *(*)(const char *));
#define FN_ALL        gl_load_all
#define FN_FIXED      gl_load_fixed_functions
#define FN_CORE_1_1   gl_load_core_1_1
#define FN_CORE_1_2   gl_load_core_1_2
#define FN_MULTI      gl_load_multitexture_1_3
#define FN_BLEND      gl_load_blend_1_4
#define FN_BUFFERS    gl_load_buffers_1_5
#define FN_STENCIL    gl_load_stencil_2_0
#define FN_UNIFORM    gl_load_uniform_2_0
#define FN_INDEXED    gl_load_indexed_3_0
#define FN_INSTANCED  gl_load_instanced_3_0
#define FN_BASEVERTEX gl_load_basevertex_3_2
#define FN_SYNC       gl_load_sync_3_3
#define FN_CLIPPROC   gl_clip_control_proc
#define FN_OPENGL32   gl_load_opengl32
#endif

static void run_case(int n)
{
    int which = n % 15;
    const LoaderEntry *l = &loaders[which];
    call_index = 0;
    for (unsigned g = 0; g < sizeof gates / sizeof gates[0]; ++g)
        GATE(gates[g].address) = nc_chance(60) ? (unsigned)nc_rand_below(0x101) : 0;
    /* The standalone clip-control resolver shares the master's gate. */
    uint64_t result;
    if (which == 14)
        result = (uint64_t)(uintptr_t)FN_OPENGL32();
    else if (which == 13)
        result = (uint64_t)(uintptr_t)FN_CLIPPROC(resolver);
    else if (which == 0)
        result = (unsigned)FN_ALL(resolver);
    else {
        gl_load_proc load = 0;
        switch (which) {
        case 1: load = FN_FIXED; break;
        case 2: load = FN_CORE_1_1; break;
        case 3: load = FN_CORE_1_2; break;
        case 4: load = FN_MULTI; break;
        case 5: load = FN_BLEND; break;
        case 6: load = FN_BUFFERS; break;
        case 7: load = FN_STENCIL; break;
        case 8: load = FN_UNIFORM; break;
        case 9: load = FN_INDEXED; break;
        case 10: load = FN_INSTANCED; break;
        case 11: load = FN_BASEVERTEX; break;
        case 12: load = FN_SYNC; break;
        }
        load(resolver);
        result = 0;
    }
    nc_line("case %d %s calls %d result %llu", n, l->suite, call_index,
            (unsigned long long)result);
    for (int s = 0; s < l->slot_count; ++s)
        nc_line("  %s = %016llx", l->slots[s].name,
                (unsigned long long)(uintptr_t)SLOT(l->slots[s].address));
    for (unsigned g = 0; g < sizeof gates / sizeof gates[0]; ++g)
        nc_line("  gate %s = %u", gates[g].name, GATE(gates[g].address));
}

int main(void)
{
    /* The original's version parse and context check call these kernel32
       imports; both builds execute them (the port drives the unported parse
       at its address too). */
    nc_bind_import("KERNEL32.dll", "LoadLibraryW", (void *)LoadLibraryW);
    nc_bind_import("KERNEL32.dll", "GetProcAddress", (void *)GetProcAddress);
    nc_bind_import("KERNEL32.dll", "GetLastError", (void *)GetLastError);
    thunk_page = VirtualAlloc(NULL, 32 * 4096, MEM_RESERVE | MEM_COMMIT,
                              PAGE_EXECUTE_READWRITE);
    if (!thunk_page) return 4;
    nc_map_image();
    nc_redirect(0x140091880ULL, (void *)parse_stand_in);
    nc_redirect(0x140091BA0ULL, (void *)check_stand_in);
    nc_save((void *)(uintptr_t)0x140302F40ULL, 0x140404A70ULL - 0x140302F40ULL);
    nc_save((void *)(uintptr_t)0x144980CA0ULL, 0x144980DC0ULL - 0x144980CA0ULL);
    for (int n = 0; n < nc_cases(200); ++n) {
        nc_restore();
        run_case(n);
    }
    return 0;
}
