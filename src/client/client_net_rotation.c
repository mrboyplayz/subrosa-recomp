#include "shared_client.h"
#include "../engine/net_bits.h"
#include "../engine/net_rotation.h"

//----- (0000000140114D40) ----------------------------------------------------
__int64            sr_net_encode_rotation_13bit(_DWORD *a1, float *a2)
{
  /* Clean implementation: src/engine/net_rotation.c, checked against the original
     executable (tools/native-compare). This wrapper keeps the entry point the
     recompiled callers use. */
  net_encode_rotation_13bit((int32_t *)a1, a2);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_stack_word
#undef quaternion
#undef unused_frame_cookie

//----- (0000000140114E90) ----------------------------------------------------
__int64            sr_net_encode_rotation(_DWORD *a1, float *a2, char a3)
{
  /* Clean implementation: src/engine/net_rotation.c, checked against the original
     executable (tools/native-compare). This wrapper keeps the entry point the
     recompiled callers use. */
  net_encode_rotation((int32_t *)a1, a2, a3);
  return 0; /* the function has no caller */
}
#undef unused_stack_word
#undef quaternion
#undef unused_frame_cookie

