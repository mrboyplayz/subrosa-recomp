#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014006C780) ----------------------------------------------------
__int64 sr_camera_update_letterbox()
{
  extern void camera_update_letterbox(void);
  camera_update_letterbox();
  return 0;
}

//----- (000000014007A2C0) ----------------------------------------------------
__int64            sr_camera_begin_orthographic(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  extern void camera_begin_orthographic(int x, int y, int width, int height,
                                        float half_width, float half_height, float half_depth);
  camera_begin_orthographic(a1, a2, a3, a4, a5, a6, a7);
  return 0;
}

//----- (000000014007A570) ----------------------------------------------------
__int64            sr_camera_begin_perspective(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  extern void camera_begin_perspective(int x, int y, int width, int height,
                                       float z_near, float z_far, float tan_half_fov);
  camera_begin_perspective(a1, a2, a3, a4, a5, a6, a7);
  return 0;
}

//----- (000000014007B6F0) ----------------------------------------------------
__int64            sr_camera_scale_model(float a1, float a2, float a3)
{
  extern void camera_scale_model(float x, float y, float z);
  camera_scale_model(a1, a2, a3);
  return 0;
}
#undef unused_macro_alias
#undef unused_macro_alias_2
#undef unused_macro_alias_3
#undef unused_macro_alias_4
#undef unused_macro_alias_5
#undef unused_macro_alias_6
#undef unused_macro_alias_7
#undef unused_macro_alias_8
#undef unused_macro_alias_9
#undef unused_macro_alias_10
#undef unused_macro_alias_11

//----- (000000014007B7E0) ----------------------------------------------------
__int64            sr_camera_set_scissor(float a1, float a2, float a3, float a4)
{
  extern void camera_set_scissor(float x, float y, float width, float height);
  camera_set_scissor(a1, a2, a3, a4);
  return 0;
}

//----- (000000014007B990) ----------------------------------------------------
__int64            sr_camera_set_model(unsigned int *a1, _DWORD *a2)
{
  extern void camera_set_model(const float position[3], const float rotation[9]);
  camera_set_model((const float *)a1, (const float *)a2);
  return 0;
}
#undef unused_macro_alias
#undef unused_macro_alias_2
#undef unused_macro_alias_3
#undef unused_macro_alias_4

//----- (000000014007BB00) ----------------------------------------------------
double sr_camera_begin_2d()
{
  extern void camera_begin_2d(void);
  camera_begin_2d();
  return 0.0;
}

//----- (000000014007BE20) ----------------------------------------------------
__int64            sr_camera_set_view(float *a1, unsigned int *a2)
{
  extern void camera_set_view(const float eye[3], const float rotation[9]);
  camera_set_view(a1, (const float *)a2);
  return 0;
}
#undef unused_macro_alias
#undef unused_macro_alias_2

