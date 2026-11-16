#ifndef SR_ENGINE_GL_PROC_H
#define SR_ENGINE_GL_PROC_H

/* The GL module's procedure resolver (the loader's callback). 0x14009E190. */
long long gl_proc_resolve(const char *name);

/* Loads opengl32.dll and puts wglGetProcAddress in the hook slot. 0x14010E030. */
long long gl_load_opengl32(void);

#endif
