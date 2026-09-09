#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <GL/gl.h>
#include <GL/glext.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "recovered_shaders.h"

static PFNGLCREATESHADERPROC create_shader;
static PFNGLSHADERSOURCEPROC shader_source;
static PFNGLCOMPILESHADERPROC compile_shader;
static PFNGLGETSHADERIVPROC get_shader_iv;
static PFNGLGETSHADERINFOLOGPROC get_shader_log;
static PFNGLDELETESHADERPROC delete_shader;
static PFNGLCREATEPROGRAMPROC create_program;
static PFNGLATTACHSHADERPROC attach_shader;
static PFNGLLINKPROGRAMPROC link_program;
static PFNGLGETPROGRAMIVPROC get_program_iv;
static PFNGLGETPROGRAMINFOLOGPROC get_program_log;
static PFNGLDELETEPROGRAMPROC delete_program;

#define LOAD(slot, name) do { \
    PROC address = wglGetProcAddress(name); \
    uintptr_t bits = 0; memcpy(&bits, &address, sizeof(bits)); \
    if (!address || bits <= 3 || bits == UINTPTR_MAX) { \
        fprintf(stderr, "Missing OpenGL entry point: %s\n", name); return 0; \
    } \
    _Static_assert(sizeof(slot) == sizeof(address), "Function-pointer size mismatch"); \
    memcpy(&slot, &address, sizeof(slot)); \
} while (0)

static int load_gl(void) {
    LOAD(create_shader, "glCreateShader"); LOAD(shader_source, "glShaderSource");
    LOAD(compile_shader, "glCompileShader"); LOAD(get_shader_iv, "glGetShaderiv");
    LOAD(get_shader_log, "glGetShaderInfoLog"); LOAD(delete_shader, "glDeleteShader");
    LOAD(create_program, "glCreateProgram"); LOAD(attach_shader, "glAttachShader");
    LOAD(link_program, "glLinkProgram"); LOAD(get_program_iv, "glGetProgramiv");
    LOAD(get_program_log, "glGetProgramInfoLog"); LOAD(delete_program, "glDeleteProgram");
    return 1;
}

static int test_programs(void) {
    int failures = 0, stages = 0;
    for (unsigned p = 0; p < 13; ++p) {
        GLuint program = create_program();
        int stage_ok = program != 0;
        for (unsigned i = 0; i < sizeof(sr_extracted_shaders)/sizeof(sr_extracted_shaders[0]); ++i) {
            const SrExtractedShader *source = &sr_extracted_shaders[i];
            if (source->program != p) continue;
            GLuint shader = create_shader(source->type);
            const char *text = (const char *)source->source;
            shader_source(shader, 1, &text, &source->size);
            compile_shader(shader);
            GLint compiled = 0;
            get_shader_iv(shader, GL_COMPILE_STATUS, &compiled);
            if (!compiled) {
                char log[8192]; GLsizei length = 0;
                get_shader_log(shader, sizeof(log)-1, &length, log); log[length] = 0;
                fprintf(stderr, "Program %u stage 0x%x failed:\n%s\n", p, source->type, log);
                stage_ok = 0;
            }
            attach_shader(program, shader); delete_shader(shader); ++stages;
        }
        link_program(program);
        GLint linked = 0;
        get_program_iv(program, GL_LINK_STATUS, &linked);
        if (!linked) {
            char log[8192]; GLsizei length = 0;
            get_program_log(program, sizeof(log)-1, &length, log); log[length] = 0;
            fprintf(stderr, "Program %u link failed:\n%s\n", p, log);
        }
        if (!stage_ok || !linked) ++failures;
        printf("Program %02u: %s\n", p, stage_ok && linked ? "PASS" : "FAIL");
        delete_program(program);
    }
    GLenum error = glGetError();
    if (error) { fprintf(stderr, "OpenGL error 0x%x\n", error); ++failures; }
    printf("%d original stages, 13 programs, %d failures. No shader source modifications.\n", stages, failures);
    return failures == 0;
}

int main(void) {
    HINSTANCE instance = GetModuleHandle(NULL);
    WNDCLASSA wc = {0};
    wc.style = CS_OWNDC; wc.lpfnWndProc = DefWindowProcA;
    wc.hInstance = instance; wc.lpszClassName = "SrShaderValidation";
    if (!RegisterClassA(&wc)) return 2;
    HWND window = CreateWindowA(wc.lpszClassName, "Shader validation", WS_POPUP,
                                0, 0, 64, 64, NULL, NULL, instance, NULL);
    HDC dc = window ? GetDC(window) : NULL;
    HGLRC context = NULL;
    int result = 2;
    PIXELFORMATDESCRIPTOR pf = {0};
    pf.nSize = sizeof(pf); pf.nVersion = 1;
    pf.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL;
    pf.iPixelType = PFD_TYPE_RGBA; pf.cColorBits = 24;
    int format = dc ? ChoosePixelFormat(dc, &pf) : 0;
    if (!format || !SetPixelFormat(dc, format, &pf) ||
        !(context = wglCreateContext(dc)) || !wglMakeCurrent(dc, context)) {
        fprintf(stderr, "Cannot initialize hidden OpenGL validation context: %lu\n", GetLastError());
        goto cleanup;
    }
    printf("GL: %s / %s\n", glGetString(GL_VERSION), glGetString(GL_RENDERER));
    if (!load_gl()) goto cleanup;
    result = test_programs() ? 0 : 1;
cleanup:
    if (context) { wglMakeCurrent(NULL, NULL); wglDeleteContext(context); }
    if (dc) ReleaseDC(window, dc);
    if (window) DestroyWindow(window);
    UnregisterClassA(wc.lpszClassName, instance);
    return result;
}
