/* Vehicle helpers. See vehicles.h. */
#include <string.h>
#include "arith.h"
#include "vehicles.h"

/* The noise seed the scatter direction draws from (math3d.c's generator). */
#define noise_seed SR_GLOBAL(uint32_t, 0x1602E12C0ULL)

/* Sums, over the wheel points of vehicle, each wheel's offset from point
   (x, z, then y) and its velocity, turned by the vehicle's three rotation
   rows, into the three words at 0x15F2D92A4 of the vehicle's record. The
   point is read fresh for every wheel and may overlap the record. Returns
   the last wheel's index, or vehicle when it has none. 0x1400A48D0 */
int64_t vehicles_wheel_force_sum(int vehicle, const float point[3])
{
    PhysicsVehicle *record = &physics_vehicles[vehicle];
    VehiclesWheelList *wheels = vehicles_wheel_list(vehicle);
    float sum_0 = 0.0f, sum_1 = 0.0f, sum_2 = 0.0f;
    int64_t result = (int64_t)vehicle;

    record->angular_velocity[0] = 0.0f;
    record->angular_velocity[1] = 0.0f;
    record->angular_velocity[2] = 0.0f;

    if (wheels->count > 0) {
        for (int i = 0; i < wheels->count; i++) {
            const PhysicsPoint *wheel = &physics_points[wheels->ids[i]];
            float offset_x = wheel->position[0] - point[0];
            float offset_z = wheel->position[2] - point[2];
            float offset_y = wheel->position[1] - point[1];

            sum_0 = sum_0
                + (float)((float)((float)((float)(record->rotation[0] * offset_z)
                                          - (float)(record->rotation[2] * offset_x))
                                  * wheel->velocity[1])
                          + (float)((float)((float)(record->rotation[2] * offset_y)
                                            - (float)(record->rotation[1] * offset_z))
                                    * wheel->velocity[0]))
                + (float)((float)((float)(record->rotation[1] * offset_x)
                                  - (float)(record->rotation[0] * offset_y))
                          * wheel->velocity[2]);
            record->angular_velocity[0] = sum_0;
            sum_1 = sum_1
                + (float)((float)((float)((float)(record->rotation[3] * offset_z)
                                          - (float)(record->rotation[5] * offset_x))
                                  * wheel->velocity[1])
                          + (float)((float)((float)(record->rotation[5] * offset_y)
                                            - (float)(record->rotation[4] * offset_z))
                                    * wheel->velocity[0]))
                + (float)((float)((float)(record->rotation[4] * offset_x)
                                  - (float)(record->rotation[3] * offset_y))
                          * wheel->velocity[2]);
            record->angular_velocity[1] = sum_1;
            result = (int64_t)wheels->ids[i];
            sum_2 = sum_2
                + (float)((float)((float)((float)(record->rotation[6] * offset_z)
                                          - (float)(record->rotation[8] * offset_x))
                                  * wheel->velocity[1])
                          + (float)((float)((float)(record->rotation[8] * offset_y)
                                            - (float)(record->rotation[7] * offset_z))
                                    * wheel->velocity[0]))
                + (float)((float)((float)(record->rotation[7] * offset_x)
                                  - (float)(record->rotation[6] * offset_y))
                          * wheel->velocity[2]);
            record->angular_velocity[2] = sum_2;
        }
    }
    return result;
}

/* Aligns the stream of index to its next byte, then copies count *
   element_size bytes between the stream at its byte position and buffer:
   into the stream when write, out of it otherwise. The 32-bit product and
   the sign-extended position keep the original's arithmetic; the copy is
   skipped when the end would pass 64 KiB. 0x14006C5E0 */
uint64_t vehicles_packet_bytes_transfer(int index, void *buffer, int element_size, int count, int write)
{
    VehiclesPacketOut *stream = vehicles_packet_out(index);
    uint64_t result;
    int64_t position;
    int byte_count;
    uint32_t end;

    if (stream->bit > 0) {
        stream->count = add_int(stream->count, 1);
        stream->bit = 0;
    }
    position = stream->count;
    byte_count = multiply_int(element_size, count);
    end = (uint32_t)position + (uint32_t)byte_count;
    if ((int32_t)end < 0x10000) {
        uint8_t *data = stream->data;
        void *destination = write ? (void *)(data + position) : buffer;
        const void *source = write ? buffer : (const void *)(data + position);

        result = (uint64_t)memcpy(destination, source, (size_t)(int64_t)byte_count);
        stream->count = add_int(stream->count, byte_count);
    } else {
        result = (uint64_t)end;
    }
    return result;
}

/* Posts type-2 entries into the player's speech ring: the repeat counter's
   worth of them (or that many when it is negative, resetting it to 0),
   each carrying the vehicle type with channel 0; then one more with the
   type record's channel word plus 2 when the gate allows. The cursor is
   read again before every field, so a slot that overlaps it behaves like
   the original's. 0x1400A2C00 */
uint32_t vehicles_alert_post(int player, int type)
{
    int32_t repeat = vehicles_alert_repeat;
    uint32_t result = (uint32_t)repeat;
    int32_t cursor;
    int32_t remaining;
    uint32_t count;

    if (repeat > 0) {
        remaining = repeat;
        do {
            remaining = subtract_int(remaining, 1);
            cursor = player_ring_cursor(player);
            player_ring_slots(player)[cursor].type = 2;
            cursor = player_ring_cursor(player);
            player_ring_slots(player)[cursor].count = type;
            cursor = player_ring_cursor(player);
            player_ring_slots(player)[cursor].channel = 0;
            cursor = player_ring_cursor(player);
            cursor = (int32_t)(((uint8_t)cursor + 1) & 0x3F);
            player_ring_cursor(player) = cursor;
        } while (remaining > 0);
        vehicles_alert_repeat = remaining;
        result = (uint32_t)remaining;
    }
    if (repeat < 0) {
        count = (uint32_t)subtract_int(0, repeat);
        vehicles_alert_repeat = 0;
        do {
            cursor = player_ring_cursor(player);
            player_ring_slots(player)[cursor].type = 2;
            cursor = player_ring_cursor(player);
            player_ring_slots(player)[cursor].count = type;
            cursor = player_ring_cursor(player);
            player_ring_slots(player)[cursor].channel = 1;
            cursor = player_ring_cursor(player);
            cursor = (int32_t)(((uint8_t)cursor + 1) & 0x3F);
            player_ring_cursor(player) = cursor;
            result = (uint32_t)cursor;
            count = count - 1;
        } while (count != 0);
    }
    if (vehicles_alert_armed) {
        if (!vehicles_alert_blocked) {
            cursor = player_ring_cursor(player);
            player_ring_slots(player)[cursor].type = 2;
            cursor = player_ring_cursor(player);
            player_ring_slots(player)[cursor].count = type;
            cursor = player_ring_cursor(player);
            player_ring_slots(player)[cursor].channel = add_int(vehicles_alert_channel(type), 2);
            cursor = player_ring_cursor(player);
            cursor = (int32_t)(((uint8_t)cursor + 1) & 0x3F);
            player_ring_cursor(player) = cursor;
            result = (uint32_t)cursor;
        }
    }
    return result;
}

/* Three draws of the noise seed: the first two make a direction across the
   plane (normalized unless its length is zero or not a number), the third
   a distance from height up to height + spread / 2, scaled into out as
   direction * distance. 0x1400A5510 */
uint64_t vehicles_scatter_direction(float out[2], float spread, float height)
{
    uint32_t seed, h, t;
    float direction_x, direction_y, value, root, inverse, distance;
    uint64_t result;

    seed = noise_seed;
    h = (seed << 13) ^ seed;
    noise_seed = seed + 1;
    t = 15731u * (h * h) + 789221u;
    direction_x = 1.0f - (float)((t * t - 771171059u) & 0x7FFFFFFFu) * 9.31322574615478515625e-10f;
    out[0] = direction_x;

    seed = noise_seed;
    h = (seed << 13) ^ seed;
    noise_seed = seed + 1;
    t = 15731u * (h * h) + 789221u;
    value = out[0];
    direction_y = 1.0f - (float)((t * t - 771171059u) & 0x7FFFFFFFu) * 9.31322574615478515625e-10f;

    root = sqrt_float(value * value + direction_y * direction_y);
    if (is_zero_or_nan(root)) {
        direction_y = 0.0f;
        value = 0.0f;
    } else {
        inverse = 1.0f / root;
        direction_y = direction_y * inverse;
        value = value * inverse;
    }
    out[0] = value;
    out[1] = direction_y;

    seed = noise_seed;
    h = (seed << 13) ^ seed;
    noise_seed = seed + 1;
    t = 15731u * (h * h) + 789221u;
    distance = 1.0f - (float)((t * t - 771171059u) & 0x7FFFFFFFu) * 9.31322574615478515625e-10f;
    distance = (distance + 1.0f) * spread * 0.5f + height;
    direction_y = distance * out[1];
    direction_x = distance * out[0];
    out[1] = direction_y;
    out[0] = direction_x;
    result = (uint64_t)(uint32_t)(seed + 1u);
    return result;
}
