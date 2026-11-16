#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014006CFF0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__int64            sr_renderer_draw_textured_rect(double a1, double a2, __int64 a3, float a4, char a5, int a6, int a7, int a8, int a9)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_draw_textured_rect(float x, float y, float width, float height, int flags,
                                          float red, float green, float blue, float alpha);
  /* x, y and width arrive as float bits in wider containers; the colour as float bits in ints. */
  renderer_draw_textured_rect(*(float *)&a1, *(float *)&a2, *(float *)&a3, a4, a5,
                              *(float *)&a6, *(float *)&a7, *(float *)&a8, *(float *)&a9);
  return 0;
}

// 14006CFF0: inconsistent variable size for 'xmm0_8.8'
// 14006CFF0: inconsistent variable size for 'xmm1_8.8'

//----- (000000014006D300) ----------------------------------------------------
__int64            sr_CSDrawAtlasEntry(
        int a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_draw_atlas_sprite(int atlas, int entry, float x, float y, float width, float height,
                                         int flags, float red, float green, float blue, float alpha);
  /* The colour arrives as float bits in ints. */
  renderer_draw_atlas_sprite(a1, a2, a3, a4, a5, a6, a7,
                             *(float *)&a8, *(float *)&a9, *(float *)&a10, *(float *)&a11);
  return 0;
}

//----- (000000014006D660) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__int64            sr_renderer_draw_flat_rect(double a1, double a2, __int64 a3, float a4, char a5, int a6, int a7, int a8, int a9)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_draw_flat_rect(float x, float y, float width, float height, int flags,
                                      float red, float green, float blue, float alpha);
  /* x, y and width arrive as float bits in wider containers; the colour as float bits in ints. */
  renderer_draw_flat_rect(*(float *)&a1, *(float *)&a2, *(float *)&a3, a4, a5,
                          *(float *)&a6, *(float *)&a7, *(float *)&a8, *(float *)&a9);
  return 0;
}

//----- (000000014006E0D0) ----------------------------------------------------
void            sr_renderer_batch_flush(__int64 a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_batch_flush(void);
  (void)a1; (void)a2; (void)a3;
  renderer_batch_flush();
}

//----- (000000014006E2D0) ----------------------------------------------------
void            sr_renderer_batch_draw(__int64 a1, __int64 a2, __int64 a3)
{
  extern void renderer_batch_draw(void);
  renderer_batch_draw();
}

//----- (000000014007D320) ----------------------------------------------------
__int64            sr_renderer_batch_vertex2fv(unsigned int *a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_batch_vertex2fv(const float *position);
  (void)a2; (void)a3;
  renderer_batch_vertex2fv((const float *)a1);
  return 0;
}

//----- (000000014007D420)

__int64            sr_renderer_batch_vertex3f(float a1, float a2, float a3)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_batch_vertex3f(float x, float y, float z);
  renderer_batch_vertex3f(a1, a2, a3);
  return 0;
}
//----- (000000014007D520) ----------------------------------------------------
__int64            sr_renderer_batch_vertex3fv(unsigned int *a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_batch_vertex3fv(const float *position);
  (void)a2; (void)a3;
  renderer_batch_vertex3fv((const float *)a1);
  return 0;
}

//----- (000000014007D710) ----------------------------------------------------
__int64 sr_renderer_sort()
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare suite sort). */
  extern void renderer_sort(void);
  renderer_sort();
  return (int)renderer_sort_count;
}

//----- (000000014007DDF0) ----------------------------------------------------
void            sr_renderer_draw_wire_box(float *a1, float *a2)
{
  /* Clean implementation: src/engine/renderer.c (renderer_draw_wire_box),
     checked against the original executable (tools/native-compare suite
     rendererprimitives). This wrapper keeps the entry point the recompiled
     callers use. */
  extern void renderer_draw_wire_box(const float a[3], const float b[3]);
  renderer_draw_wire_box((const float *)a1, (const float *)a2);
}

