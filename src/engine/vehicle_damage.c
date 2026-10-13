/* Damage to a vehicle's health. See vehicle.h. */
#include "vehicle.h"
#include "frame.h"
#include "arith.h"

void vehicle_damage(int index, int damage)
{
    PhysicsVehicle *vehicle = &physics_vehicles[index];
    WorldEvent *event;
    int32_t count;

    if (vehicle->type == VEHICLE_TYPE_TRAIN || vehicle->health <= 0)
        return;
    vehicle->health = subtract_int(vehicle->health, damage);
    if (vehicle->health > 0 || !game_connected)
        return;

    count = world_event_count;
    event = &world_events[count];
    event->type = WORLD_EVENT_UPDATE_VEHICLE;
    event->tick = game_tick;
    event->a = index;
    event->b = VEHICLE_UPDATE_DESTROYED;
    event->c = 0;
    event->vector_a[0] = vehicle->position[0];
    event->vector_a[1] = vehicle->position[1];
    event->vector_a[2] = vehicle->position[2];
    event->vector_b[0] = vehicle->velocity[0];
    event->vector_b[1] = vehicle->velocity[1];
    event->vector_b[2] = vehicle->velocity[2];
    world_event_count = (count + 1) & 0xFFFF;
}
