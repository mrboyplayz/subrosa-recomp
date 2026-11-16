/* A vehicle's countdown: not for type 13, only while above zero; it drops by
 * the elapsed amount (32-bit wrap) and, at zero or below, the removal event
 * is recorded (when connected) with the vehicle's position and velocity. The
 * event ring wraps at 0x10000. The vehicle record and the ring are hashed. */
// NC_WRAPPERS: 14000B650
#include <string.h>
#include "nc.h"
#include "frame.h"
#include "world.h"
#include "physics.h"

#ifdef NC_NATIVE
#define countdown(v, e) ((void (*)(int, int))NC_ADDR(0x14000B650))(v, e)
#elif defined(NC_CLIENT_WRAPPERS)
void sub_14000B650(signed int, int);
#define countdown sub_14000B650
#else
#define countdown world_vehicle_countdown
#endif

#define counter(v) SR_GLOBAL(int32_t, 0x15F2D920CULL + 0x5168ULL * (uint64_t)(int64_t)(v))

int main(void)
{
    nc_map_image();
    nc_save(&physics_vehicles[0], sizeof(PhysicsVehicle) * 3);
    nc_save(&world_events[0xFFF0], sizeof(WorldEvent) * 16);
    nc_save(&world_events[0], sizeof(WorldEvent) * 16);
    for (int n = 0; n < nc_cases(4000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        int vehicle = (int)nc_rand_below(3);
        PhysicsVehicle *v = &physics_vehicles[vehicle];
        v->type = nc_chance(25) ? 13 : (int32_t)nc_rand_below(30);
        counter(vehicle) = nc_chance(15) ? (int32_t)nc_rand() : (int32_t)nc_rand_below(40) - 5;
        for (int k = 0; k < 3; k++) {
            v->position[k] = nc_float(-100, 100);
            v->velocity[k] = nc_float(-100, 100);
        }
        int elapsed = nc_chance(10) ? (int32_t)nc_rand() : (int)nc_rand_below(30) - 3;
        game_connected = nc_chance(75);
        game_tick = (int32_t)nc_rand();
        world_event_count = nc_chance(15) ? 0xFFF8 + (int)nc_rand_below(8) : (int)nc_rand_below(8);
        int start = world_event_count & 0xFFFF;
        countdown(vehicle, elapsed);
        nc_line("n%d v%d type %d elapsed %d -> %d count %08x event %016llx wrap %016llx", n, vehicle, v->type, elapsed,
                counter(vehicle), world_event_count,
                (unsigned long long)nc_hash(&world_events[start], sizeof(WorldEvent)),
                (unsigned long long)nc_hash(&world_events[0xFFF0], sizeof(WorldEvent) * 16));
    }
    return 0;
}
