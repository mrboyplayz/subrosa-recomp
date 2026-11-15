/* Vehicle helpers: a wheel force sum, a packet byte transfer, a repeat
 * alert into a player's speech ring, and a planar scatter direction. The
 * tick stages of the vehicles themselves live in world_vehicles.c.
 */
#ifndef SR_ENGINE_VEHICLES_H
#define SR_ENGINE_VEHICLES_H

#include <stdint.h>
#include "memory.h"
#include "physics.h"
#include "player_ring.h"

/* ---- the wheel list of a vehicle ----------------------------------------- */

/* The wheel points of a vehicle, 0x15F2D92EC in its record: the count of
   PhysicsPoint indices that follows. */
typedef struct VehiclesWheelList {
    int32_t count;
    int32_t ids[5150];                   /* PhysicsPoint indices, to the end of the record */
} VehiclesWheelList;

#define vehicles_wheel_list(vehicle) \
    ((VehiclesWheelList *)(void *)((unsigned char *)physics_vehicles + 0xEC + sizeof(PhysicsVehicle) * (uint64_t)(int64_t)(vehicle)))

/* Sums, over the wheel points of vehicle, each wheel's offset from point
   and its velocity, turned by the vehicle's three rotation rows, into the
   vehicle's words at 0x15F2D92A4 (physics.h's angular_velocity). Returns
   the last wheel's index, or vehicle when it has none. 0x1400A48D0 */
int64_t vehicles_wheel_force_sum(int vehicle, const float point[3]);

/* ---- a vehicle's packet stream ------------------------------------------- */

/* One stream of 65,548 bytes: the byte position, the bit position within
   the current byte, and 64 KiB of data. 0x1607B5380. */
typedef struct VehiclesPacketOut {
    int32_t count;
    int32_t bit;
    uint8_t unknown_8[4];
    uint8_t data[0x10000];
} VehiclesPacketOut;

#define VEHICLES_PACKET_OUT_SIZE 0x1000C

#define vehicles_packet_out(index) \
    (&SR_GLOBAL(VehiclesPacketOut, 0x1607B5380ULL + VEHICLES_PACKET_OUT_SIZE * (uint64_t)(int64_t)(index)))

/* Aligns the stream of index to its next byte (advancing the count and
   clearing the bit when a byte is partly written), then copies count *
   element_size bytes between the stream at its position and buffer: into
   the stream when write, out of it otherwise. Nothing moves when the end
   would pass 64 KiB. Returns the destination of the copy, or the
   zero-extended end position when nothing moved. 0x14006C5E0 */
uint64_t vehicles_packet_bytes_transfer(int index, void *buffer, int element_size, int count, int write);

/* ---- the repeat alert ---------------------------------------------------- */

/* The repeat counter of the alert, 0x160FC481C: how many entries the next
   alert posts; a negative count posts that many instead and resets to 0. */
#define vehicles_alert_repeat SR_GLOBAL(int32_t, 0x160FC481CULL)
/* The alert's gate: 0x183F7C975 must be set and 0x183F7C775 clear for the
   extra entry to be posted. */
#define vehicles_alert_armed SR_GLOBAL(uint8_t, 0x183F7C975ULL)
#define vehicles_alert_blocked SR_GLOBAL(uint8_t, 0x183F7C775ULL)
/* A word of the vehicle type's record, 0x182BBB420, 7040 bytes each: the
   channel of the extra entry, plus 2. */
#define vehicles_alert_channel(type) \
    SR_GLOBAL(int32_t, 0x182BBB420ULL + 4ULL * 1760ULL * (uint64_t)(int64_t)(type))

/* Posts type-2 entries into the player's speech ring: vehicles_alert_repeat
   of them (or that many when it is negative, resetting it to 0), each with
   the vehicle type and channel 0; then, when the gate allows, one more
   with the type record's channel word plus 2. Returns the ring's write
   cursor, or the repeat counter when nothing was posted. 0x1400A2C00 */
uint32_t vehicles_alert_post(int player, int type);

/* ---- the scatter direction ----------------------------------------------- */

/* Three draws of the noise seed (math3d.c's generator): the first two make
   a direction across the plane (the planar twin of the 3D
   sr_human_random_direction), the third a distance from height up to
   height + spread / 2, written into out as direction * distance. Returns
   the seed after the draws. 0x1400A5510 */
uint64_t vehicles_scatter_direction(float out[2], float spread, float height);

#endif
