#include "shared_client.h"

#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (00000001400A6700) ----------------------------------------------------
__int64            sub_1400A6700(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern int gl_load_all(void *(*resolve)(const char *));
  return gl_load_all((void *(*)(const char *))a1);
}

//----- (00000001400E3BC0) ----------------------------------------------------
void            sub_1400E3BC0(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_fixed_functions(void *(*resolve)(const char *));
  gl_load_fixed_functions((void *(*)(const char *))a1);
}

//----- (00000001400E3EE0) ----------------------------------------------------
void            sub_1400E3EE0(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_core_1_1(void *(*resolve)(const char *));
  gl_load_core_1_1((void *(*)(const char *))a1);
}

//----- (00000001400E3FD0) ----------------------------------------------------
void            sub_1400E3FD0(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_core_1_2(void *(*resolve)(const char *));
  gl_load_core_1_2((void *(*)(const char *))a1);
}

//----- (00000001400E4030) ----------------------------------------------------
void            sub_1400E4030(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_multitexture_1_3(void *(*resolve)(const char *));
  gl_load_multitexture_1_3((void *(*)(const char *))a1);
}

//----- (00000001400E40E0) ----------------------------------------------------
void            sub_1400E40E0(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_blend_1_4(void *(*resolve)(const char *));
  gl_load_blend_1_4((void *(*)(const char *))a1);
}

//----- (00000001400E4190) ----------------------------------------------------
void            sub_1400E4190(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_buffers_1_5(void *(*resolve)(const char *));
  gl_load_buffers_1_5((void *(*)(const char *))a1);
}

//----- (00000001400E42E0) ----------------------------------------------------
void            sub_1400E42E0(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_stencil_2_0(void *(*resolve)(const char *));
  gl_load_stencil_2_0((void *(*)(const char *))a1);
}

//----- (00000001400E48D0) ----------------------------------------------------
void            sub_1400E48D0(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_uniform_2_0(void *(*resolve)(const char *));
  gl_load_uniform_2_0((void *(*)(const char *))a1);
}

//----- (00000001400E4950) ----------------------------------------------------
void            sub_1400E4950(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_indexed_3_0(void *(*resolve)(const char *));
  gl_load_indexed_3_0((void *(*)(const char *))a1);
}

//----- (00000001400E4EB0) ----------------------------------------------------
void            sub_1400E4EB0(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_instanced_3_0(void *(*resolve)(const char *));
  gl_load_instanced_3_0((void *(*)(const char *))a1);
}

//----- (00000001400E4FC0) ----------------------------------------------------
void            sub_1400E4FC0(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_basevertex_3_2(void *(*resolve)(const char *));
  gl_load_basevertex_3_2((void *(*)(const char *))a1);
}

//----- (00000001400E5110) ----------------------------------------------------
void            sub_1400E5110(__int64 (           *a1)(     char *))
{
  /* Clean implementation: src/engine/gl_loaders.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void gl_load_sync_3_3(void *(*resolve)(const char *));
  gl_load_sync_3_3((void *(*)(const char *))a1);
}

//----- (000000014010E030) ----------------------------------------------------
__int64 sr_gl_resolve_proc_loader()
{
  /* Clean implementation: src/engine/gl_proc.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern int gl_load_opengl32(void);
  return gl_load_opengl32();
}

