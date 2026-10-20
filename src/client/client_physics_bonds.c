#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140005160) ----------------------------------------------------
__int64 sr_physics_add_world_contact(__int16 body, unsigned int *offset, unsigned int *normal,
                      float depth, unsigned int friction_bits, float depth_scale,
                      unsigned int stiffness_bits)
{
  extern uintptr_t physics_add_world_contact(int16_t, const float *, const float *, float, float, float, float);
  float friction, stiffness;
  __builtin_memcpy(&friction, &friction_bits, 4);
  __builtin_memcpy(&stiffness, &stiffness_bits, 4);
  return (__int64)physics_add_world_contact(body, (const float *)offset, (const float *)normal,
                                           depth, friction, depth_scale, stiffness);
}

//----- (00000001400052C0) ----------------------------------------------------
__int64            sr_physics_add_contact(
        int a1,
        int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        float a6,
        unsigned int a7,
        float a8,
        unsigned int a9)
{
  extern int physics_add_contact(int body_a, int body_b, const float *offset_a, const float *offset_b,
                                 const float *normal, float depth, float friction, float depth_scale, float stiffness);
  /* src/engine/physics_bonds.c. The original leaves in RAX the normal's z bits when it added the contact, else the
     end of the bond array; 0x1400CA430 returns it, so it is kept. */
  if (physics_add_contact(a1, a2, (const float *)a3, (const float *)a4, (const float *)a5, a6, *(float *)&a7, a8,
                          *(float *)&a9) < 0)
    return (__int64)&g_1B4657C80;
  return a5[2];
}

//----- (000000014001FB90) ----------------------------------------------------
void sr_physics_expire_bonds()
{
  extern void physics_expire_bonds(void);
  physics_expire_bonds();
}

//----- (000000014007F370) ----------------------------------------------------
void            sr_physics_remove_bond(unsigned int a1)
{
  extern void physics_remove_bond(int bond);
  /* src/engine/physics_bonds.c */
  physics_remove_bond((int)a1);
}

