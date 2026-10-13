#include "shared_client.h"

//----- (000000014007A010) ----------------------------------------------------
__int64            sub_14007A010(__int64 a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat3_multiply(float out[9], const float a[9], const float b[9]);
  math_mat3_multiply((float *)a1, (const float *)a2, (const float *)a3);
  return 0;
}

//----- (000000014007A0E0)
__int64 sub_14007A0E0(_OWORD *a1,__int64 a2,__int64 a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat4_multiply(float out[16], const float a[16], const float b[16]);
  math_mat4_multiply((float *)a1, (const float *)a2, (const float *)a3);
  return a3 + 48; /* value the original leaves in RAX */
}

//----- (000000014007AE70) ----------------------------------------------------
_UNKNOWN **           sub_14007AE70(float *a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat3_multiply_transposed(float out[9], const float a[9], const float b[9]);
  math_mat3_multiply_transposed(a1, a2, a3);
  return 0;
}

//----- (000000014007B2A0) ----------------------------------------------------
void            sub_14007B2A0(__int64 a1, float *a2, double a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat3_rotate_rows(float matrix[9], const float axis[3], float angle);
  /* The angle arrives as float bits in the low lane of a double. */
  math_mat3_rotate_rows((float *)a1, a2, *(float *)&a3);
}
