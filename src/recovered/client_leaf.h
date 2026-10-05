#ifndef SR_RECOVERED_CLIENT_LEAF_H
#define SR_RECOVERED_CLIENT_LEAF_H

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <xmmintrin.h>
#include <emmintrin.h>

/* Pinned client entries 0x140198500, 0x140205c34, 0x140247248,
   0x140247cfc, and 0x1400012a0. */
void sr_client_virtual_abort(void *self);
uint32_t sr_client_u32_at_16(const void *object);
uint8_t sr_client_initialize_global_variables(void *slot, const void *locale_info);
uint32_t sr_client_zero_callback(void);
size_t sr_client_fread_bytes(FILE *stream, void *destination, int count);
/* Funclet invocation entries 0x14020ae90 and 0x14020aee0. The notification
   helper preserves RAX; its R9 input to the callback is 0x19930520. */
uintptr_t sr_client_call_funclet(uintptr_t address, const uintptr_t *frame,
                               unsigned code, int final_notification);
/* Reviewed startup/CPU entries: 0x1401f8ff8, 0x140068f80,
   0x14015e240, and 0x14016e150. */
int sr_client_image_address_readonly(const void *image, uintptr_t address);
uint32_t sr_client_cpu_leaf1_edx(void);
uint32_t sr_client_cpu_sse41_probe(void);
uint32_t sr_client_cpu_sse2_probe(void);
uint32_t sr_client_initialize_math_cpu(uint32_t *primary, uint32_t *secondary);
/* 0x1401f8ac0: preserve packed input bits and COMISS/JB NaN routing.
   Return 1 for the completed small-angle path, 0 for packed dispatch. */
int sr_client_angle_pair_prepare(uint64_t input_bits, __m128 *result);
int sr_client_double_angle_pair_prepare(uint64_t input_bits, __m128d *result);
/* Missing CRT initializer 0x1402370d4, including relocated tzname storage. */
uint32_t sr_client_initialize_timezone(uint32_t *timezone, uint32_t *daylight,
                                      uint32_t *dstbias, uintptr_t *names,
                                      uintptr_t default_names);
/* Native guard thunk 0x14026cf90 tail-jumps to RAX without changing arguments. */
intptr_t sr_client_guard_dispatch(uintptr_t ignored);

#endif
