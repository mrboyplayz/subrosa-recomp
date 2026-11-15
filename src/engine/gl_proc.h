#ifndef SR_ENGINE_GL_PROC_H
#define SR_ENGINE_GL_PROC_H

/* The GL module's procedure resolver (the loader's callback). 0x14009E190. */
long long gl_proc_resolve(const char *name);

#endif
