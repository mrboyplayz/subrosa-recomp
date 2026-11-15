/* Netcode rotation encoding and packet readers.

   The encoders quantize the quaternion of a rotation matrix into the integer
   payload of a network packet. The quaternion is built with
   math_quat_from_mat3(); the component with the largest absolute value is
   dropped (the receiver can reconstruct it), the other three are
   sign-canonicalized and written as scaled integers in the order given by the
   table below. The readers decode signed values and optional indices over
   the bit reader in net_bits.h. */
#ifndef SR_ENGINE_NET_ROTATION_H
#define SR_ENGINE_NET_ROTATION_H

#include <stdint.h>

/* Order tables of the original executable: four consecutive ints each,
   naming the quaternion component to emit per slot (3 = w). Entry 0 is
   always 3. */
extern int dword_140301DC8;   /* 0x140301DC8, first entry of the 13-bit order table */
extern int dword_140301DE8;   /* 0x140301DE8, first entry of the general order table */

#define net_rotation_order_13bit ((const int32_t *)&dword_140301DC8)
#define net_rotation_order       ((const int32_t *)&dword_140301DE8)

/* out[0] receives the index of the dropped component; the remaining written
   slots receive the quantized other three components. bits is the
   quantization bit width (general variant). */
void net_encode_rotation(int32_t out[4], const float matrix[9], int bits);   /* 0x140114E90 */
void net_encode_rotation_13bit(int32_t out[4], const float matrix[9]);       /* 0x140114D40 */

/* Sign-magnitude reads over the bit reader. Both always report success. */
int net_read_signed_bits(int32_t *value, int bits);     /* 0x140115D20 */
int net_read_optional_index(int32_t *value, int bits);  /* 0x140115BD0 */

#endif /* SR_ENGINE_NET_ROTATION_H */
