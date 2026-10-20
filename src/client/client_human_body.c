#include "shared_client.h"

//----- (0000000140055FA0) ----------------------------------------------------
__int64            sr_human_create_joint_bond(int a1, signed int a2, signed int a3, float *a4)
{
  /* Clean implementation: src/engine/human_body.c, checked against the original executable
     (tools/native-compare suite humanjoint). This wrapper keeps the entry point the recompiled callers use. */
  extern int human_create_joint_bond(int human, int parent_bone, int child_bone, const float anchor[3]);
  return (unsigned int)human_create_joint_bond(a1, a2, a3, a4); /* -1 as the original's 0xFFFFFFFF in EAX */
}

//----- (00000001400AB7B0) ----------------------------------------------------
__int64            sr_human_create_joints(int a1)
{
  /* Clean implementation: src/engine/human_body.c, checked against the original executable
     (tools/native-compare suite body). */
  extern void human_create_joints(int human);
  human_create_joints(a1);
  return 0; /* result discarded by its caller */
}

//----- (00000001400ABB10) ----------------------------------------------------
_UNKNOWN **           sr_human_update_centre(int a1)
{
  /* Clean implementation: src/engine/human_body.c, checked against the original executable
     (tools/native-compare suite body). */
  extern void human_update_centre(int human);
  human_update_centre(a1);
  return 0; /* result discarded by all callers */
}

