#include "shared_client.h"
#include "../engine/physics.h"

//----- (00000001400A56B0) ----------------------------------------------------
__int64            sr_human_random_direction(float *a1, float a2, float a3)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_random_direction(float *, float, float);
  human_random_direction(a1, a2, a3);
  return 0;
}

//----- (00000001400A9940) ----------------------------------------------------
__int64            sr_human_limit_joint_turn(int a1, int a2, int a3, float *a4)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_turn(int, int, int, float *);
  human_limit_joint_turn(a1, a2, a3, a4);
  return 0;
}

//----- (00000001400A9EF0) ----------------------------------------------------
__int64            sr_human_limit_joint_angles(int a1, int a2, int a3, float *a4)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_angles(int, int, int, float *);
  human_limit_joint_angles(a1, a2, a3, a4);
  return 0;
}

//----- (00000001400AA510) ----------------------------------------------------
__int64            sr_human_keep_arms_off_item(int a1, int a2)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_keep_arms_off_item(int, int);
  human_keep_arms_off_item(a1, a2);
  return 0;
}

//----- (00000001400AC530) ----------------------------------------------------
__int64            sr_human_item_28_hand_target(float *a1, int a2, int a3)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_item_28_hand_target(float *, int, int);
  human_item_28_hand_target(a1, a2, a3);
  return 0;
}

//----- (00000001400AD030) ----------------------------------------------------
void sr_human_build_look_pose(int a1, float sr_pose_angle)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_build_look_pose(int human, float twist);
  human_build_look_pose(a1, sr_pose_angle);
}

//----- (00000001400AD2B0) ----------------------------------------------------
__int64            sr_human_drive_ragdoll(int a1, __int64 a2, double a3)
{
  /* Clean implementation: src/engine/human_ragdoll.c (the active ragdoll), checked against the original
     executable (tools/native-compare suite ragdoll). Only a1 is an argument. */
  extern void human_drive_ragdoll(int human);
  (void)a2;
  (void)a3;
  human_drive_ragdoll(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400B1450) ----------------------------------------------------
__int64            sr_human_limb_inverse_kinematics(
        int a1,
        int a2,
        int a3,
        float *a4,
        float *a5,
        float *a6,
        float a7,
        int a8,
        __m128 *a9,
        float *a10,
        unsigned int *a11,
        unsigned int *a12,
        float a13,
        char a14)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limb_inverse_kinematics(int, int, int, const float *, const float *, const float *, float, float,
                                            float *, const float *, const uint32_t *, const uint32_t *, float, int);
  float twist;
  memcpy(&twist, &a8, sizeof twist);
  human_limb_inverse_kinematics(a1, a2, a3, a4, a5, a6, a7, twist, (float *)a9, a10, a11, a12, a13, (unsigned char)a14);
  return 0;
}

//----- (00000001400B29B0) ----------------------------------------------------
__int64            sr_human_aim_hand_target(__int64 a1, int a2, int a3, int a4, int a5, float *a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_aim_hand_target(float *, int, int, int, const float *);
  (void)a5;
  human_aim_hand_target((float *)a1, a2, a3, a4, a6);
  return 0;
}

//----- (00000001400B2BF0) ----------------------------------------------------
__int64            sr_human_limit_joint_change(int a1, int a2, int a3, float *a4, float a5, float a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_change(int, int, int, float *, float, float);
  human_limit_joint_change(a1, a2, a3, a4, a5, a6);
  return a2;
}

//----- (00000001400B4DA0) ----------------------------------------------------
__int64            sr_human_hold_item(int a1, int a2, int a3, unsigned int *a4, unsigned int *a5, float *a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_hold_item(int, int, int, const float *, const float *, const float *);
  human_hold_item(a1, a2, a3, (const float *)a4, (const float *)a5, a6);
  return 0;
}

