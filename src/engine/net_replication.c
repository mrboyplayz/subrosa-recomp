#include "net_replication.h"
#include "net.h"
#include "arith.h"
#include "math3d.h"
#include "item.h"
#include "items/items.h"

static int32_t signed_field(uint32_t value, int bits)
{
    uint32_t sign = 1u << (((uint32_t)bits - 1u) & 31u);
    return (int32_t)((value & sign) == sign
        ? value | (0xFFFFFFFFu << ((uint32_t)bits & 31u)) : value);
}

uint64_t net_read_angle(float *out, int bits)
{
    uint32_t value = 0;
    net_read_bits(&value, bits);
    uint32_t half = (1u << ((uint32_t)bits & 31u)) >> 1;
    uint32_t sign = value & half;
    float magnitude = (float)(int64_t)(value & (half - 1u));
    float divisor = (float)(int64_t)half;
    float angle = (float)((double)magnitude * (6.28318530718 / (double)divisor));
    *out = sign == half ? -angle : angle;
    return sign;
}

uint64_t net_read_position_delta(uint32_t *out, int32_t baseline, int bits)
{
    uint32_t value = 0;
    net_read_bits(&value, 1);
    int width = 4;
    if (value) {
        net_read_bits(&value, 1);
        if (value)
            return net_read_bits(out, bits);
        width = 9;
    }
    net_read_bits(&value, width);
    uint32_t position = (uint32_t)baseline + (uint32_t)signed_field(value, width);
    *out = position;
    return position;
}

uint64_t net_read_component_delta(int32_t *out, int32_t baseline, int bits)
{
    uint32_t value = 0;
    if (net_component_unchanged_bit) {
        int status = net_read_bits(&value, 1);
        if (!value) {
            *out = baseline;
            return status;
        }
    }
    net_read_bits(&value, 1);
    int width;
    if (value) {
        net_read_bits(&value, 1);
        if (value)
            return net_read_bits_signed(out, bits);
        width = net_component_large_bits;
    } else {
        width = net_component_small_bits;
    }
    net_read_bits(&value, width);
    int32_t delta = signed_field(value, width);
    *out = add_int(baseline, delta);
    uint32_t bucket = (uint32_t)delta + 128u;
    if (bucket <= 255u) {
        ++net_component_delta_count(delta);
        return (uint64_t)(uintptr_t)net_component_statistics_base;
    }
    return bucket;
}

void net_decode_rotation(float out[9], const int32_t *packed)
{
    float quaternion[4];
    int omitted = packed[0], next = 1;
    int order[4] = {net_quat_first, net_quat_second, net_quat_third, net_quat_fourth};
    double remaining = 1.0;
    for (int slot = 0; slot < 4; ++slot) {
        int component = order[slot];
        if (component == omitted)
            continue;
        double value = (double)packed[next++];
        quaternion[component] = (float)(value * 0.00017265456749763092);
        double square = value * value;
        if (slot == 0)
            remaining = 1.0 - square * 0.00000002980959967779399;
        else
            remaining = remaining + square * -0.00000002980959967779399;
    }
    quaternion[omitted] = remaining > 0.0 ? (float)sqrt_double(remaining) : 0.0f;

    /* The native sum rounds each product and pair of products to float,
       then computes the length and reciprocal in double. */
    float squared_length = (quaternion[3] * quaternion[3] + quaternion[2] * quaternion[2])
                         + (quaternion[0] * quaternion[0] + quaternion[1] * quaternion[1]);
    double length = sqrt_double((double)squared_length);
    if (length == 0.0) {
        quaternion[0] = quaternion[1] = quaternion[2] = 0.0f;
        quaternion[3] = 1.0f;
    } else {
        double inverse = 1.0 / length;
        for (int component = 0; component < 4; ++component)
            quaternion[component] = (float)((double)quaternion[component] * inverse);
    }
    math_mat3_from_quat(out, quaternion);
}

uint64_t net_read_item_update(int frame, int item)
{
    WorldItem *object = &world_items[item];
    NetItemInterpolation *history = &net_item_interpolation(item);
    history->previous_tick = history->tick;
    for (int axis = 0; axis < 3; ++axis)
        history->previous_position[axis] = history->position[axis];
    history->tick = net_replication_tick;

    uint32_t baseline_frame = 0;
    net_read_bits(&baseline_frame, 8);
    NetItemSnapshot *baseline = &net_item_snapshot((int32_t)baseline_frame, item);
    NetItemSnapshot *current = &net_item_snapshot(frame, item);
    for (int axis = 0; axis < 3; ++axis)
        net_read_position_delta((uint32_t *)&current->position[axis], baseline->position[axis], 28);

    object->position[0] = (float)current->position[0] * 0.000244140625f - 4096.0f;
    object->position[1] = (float)current->position[1] * 0.000244140625f;
    object->position[2] = (float)current->position[2] * 0.000244140625f - 4096.0f;
    for (int axis = 0; axis < 3; ++axis)
        history->position[axis] = object->position[axis];
    if (!history->initialized) {
        for (int axis = 0; axis < 3; ++axis)
            history->previous_position[axis] = object->position[axis];
        history->previous_tick = net_replication_tick;
    }
    history->initialized = 1;

    net_read_bits((uint32_t *)&current->omitted_component, 2);
    for (int component = 0; component < 3; ++component)
        net_read_component_delta(&current->components[component], baseline->components[component], 14);
    net_decode_rotation(object->rotation, current->rotation);

    uint32_t result = (uint32_t)object->type;
    if (result == ITEM_CASH_2) {
        net_read_bits((uint32_t *)&item_cash_bill_count(item), 4);
        net_read_bits((uint32_t *)&item_cash_spread(item), 4);
        net_read_bits(&item_cash_bill_values(item), 30);
        result = (uint32_t)object->type;
    }
    if (result == ITEM_WALKIE_TALKIE) {
        net_read_bits((uint32_t *)&walkie_talkie_transmitting(item), 1);
        result = (uint32_t)object->type;
    }
    if (result == ITEM_COMPUTER) {
        net_read_bits(&baseline_frame, 12);
        result = baseline_frame == 4095u ? 0xFFFFFFFFu : baseline_frame;
        net_computer_link(item) = result;
    }
    return result;
}

uint64_t net_read_item_spawn(int item)
{
    WorldItem *object = &world_items[item];
    uint32_t value = 0;
    net_read_bits((uint32_t *)&object->type, 8);
    net_read_bits(&value, 10);
    object->parent = value == 1023u ? -1 : (int32_t)value;
    net_read_bits(&value, 10);
    object->holder = value == 1023u ? -1 : (int32_t)value;
    uint64_t result = net_read_bits((uint32_t *)&object->slot, 4);
    if (object->type == ITEM_COMPUTER) {
        net_read_bits((uint32_t *)&computer_current_line(item), 5);
        return net_read_bits((uint32_t *)&computer_top_line(item), 5);
    }
    return result;
}
