#ifndef SR_ENGINE_PHYSICS_KERNELS_H
#define SR_ENGINE_PHYSICS_KERNELS_H
#include <xmmintrin.h>

/* Inverse inertia applied to a world-space vector: project into each row
   of the basis, scale by its diagonal, then reconstruct. out is cleared
   before inputs are read. The return is diagonal, as in the original.
   0x14002CF10 */
const float *physics_apply_inverse_inertia(float out[3], const float vector[3],
                                          const float basis[9], const float diagonal[3]);

/* Original four-lane implementation. out, vector and diagonal must be
   aligned to 16 bytes. basis is unaligned but must have ten accessible
   floats: the fourth output lane reads the extra word. All SIMD lanes also
   contribute FP status, including the unused fourth projection.
   0x14002D2D0 */
const float *physics_apply_inverse_inertia4(float out[4], const float vector[4],
                                           const float basis[10], const float diagonal[4]);

/* The two roots of a ray/sphere intersection with a unit direction, given
   origin minus sphere centre. No hit test or clamping is done. 0x14011C640 */
float physics_sphere_exit_distance(const float offset[3], const float direction[3], float radius);
/* Entry root in lane zero; other lanes are native negative-zero words.
   0x14011C6B0 */
__m128 physics_sphere_entry_distance(const float offset[3], const float direction[3], float radius);
#endif
