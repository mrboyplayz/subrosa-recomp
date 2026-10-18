#include "arith.h"
#include "item.h"
#include "frame.h"

/* Original callees retained at the boundary, with their machine-code ABI.
   The client wrapper for 0x14007B2A0 reads the float lane in XMM2. */
extern void sub_14007B2A0(float matrix[9], const float axis[3], float angle);
extern uint32_t sub_1400169B0(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
extern uint64_t sr_CreateItem(int32_t type, const float position[3], const float *velocity, const float rotation[9]);
extern void sub_1400CA9B0(int item, int parent);
extern void sub_1400CA7C0(int item, int human, int slot);

uintptr_t item_register_link(int index, uint32_t link, int32_t slot)
{
    if (slot == -1) {
        for (slot = 0; slot < 64; slot++) {
            uint32_t mask = item_link_mask_word(index, (uint32_t)slot >> 5);
            if (!(mask & (1u << ((uint32_t)slot & 31u))))
                break;
            if (slot == 63)
                return mask;
        }
    }
    int64_t word = (int64_t)slot >> 5;
    uint32_t bit = 1u << ((uint32_t)slot & 31u);
    uintptr_t result = (uintptr_t)(word + 1760LL * index);
    item_link_value(index, slot) = link;
    item_link_mask_word(index, word) |= bit;
    int32_t peers = item_link_peer_count;
    for (int32_t peer = 0; peer < peers; peer++)
        item_peer_link_mask(peer, index, word) &= ~bit;
    if (peers > 0)
        result = (uintptr_t)&item_peer_link_mask(peers, index, word);
    item_local_link_mask(index, word) &= ~bit;
    return result;
}

uint64_t item_insert_cash_bill(int index, int bill, uint32_t denomination)
{
    int32_t last = item_cash_bill_count(index);
    uint32_t packed, shift;

    if (last >= 9)
        return 0;
    last = add_int(last, 1);
    item_cash_bill_count(index) = last;
    packed = item_cash_bill_values(index);
    if (last > bill) {
        uint32_t remaining = (uint32_t)last - (uint32_t)bill;
        shift = (uint32_t)last * 3u;
        do {
            uint32_t value = (packed >> ((shift - 3u) & 31u)) & 7u;
            packed = (packed & ~(7u << (shift & 31u))) | (value << (shift & 31u));
            shift -= 3u;
        } while (--remaining);
        last = bill;
    }
    shift = (uint32_t)last * 3u;
    /* The inserted input is not masked to three bits in the original. */
    item_cash_bill_values(index) = (packed & ~(7u << (shift & 31u)))
                                  | (denomination << (shift & 31u));
    item_cash_spread(index) = add_int(item_cash_spread(index), 1);
    return 1;
}

uint64_t item_cash_value(int index)
{
    int32_t last = item_cash_bill_count(index);
    uint64_t packed;
    uint32_t value = 0;

    if (last < 0)
        return 0;
    packed = item_cash_bill_values(index);
    /* INC wraps at INT32_MAX; that path reads only the first bill. The
       native shifts are 64-bit even though the packed storage is 32-bit. */
    if (add_int(last, 1) < 2)
        last = 0;
    for (int32_t bill = 0; bill <= last; bill++) {
        uint32_t shift = (uint32_t)bill * 3u;
        value += (uint32_t)item_cash_denominations[(packed >> (shift & 63u)) & 7u];
    }
    return value;
}

uint64_t item_append_inventory(uint32_t index, int human, int slot)
{
    HumanHand *inventory = item_inventory_slot(human, slot);
    int32_t count = inventory->count;
    if (count >= 8)
        return 0;
    item_inventory_entry(human, slot, count) = (int32_t)index;
    inventory->count = add_int(inventory->count, 1);
    return 1;
}

static int can_attach_child(const WorldItem *parent, const WorldItem *child)
{
    if (parent->child_count >= 8 || !item_type_accepts_child(child->type, parent->type))
        return 0;
    if ((uint32_t)child->type - 17u <= 1u)
        return parent->child_count < 5;
    return parent->child_count <= 0;
}

uint64_t item_attach_child(int parent_index, int child_index)
{
    WorldItem *parent = &world_items[parent_index];
    WorldItem *child = &world_items[child_index];
    int32_t count = parent->child_count;
    if (!can_attach_child(parent, child))
        return 0;
    item_child_entry(parent_index, count) = child_index;
    parent->child_count = add_int(parent->child_count, 1);
    child->parent = parent_index;
    child->slot = count;
    return 1;
}

uint64_t item_transfer(int index, int child_index, int human, int slot)
{
    WorldItem *item;
    if ((uint32_t)index >= WORLD_ITEM_CAPACITY)
        return 0;
    item = &world_items[index];
    if (child_index == -1) {
        if (human == -1) {
            if (item->parent != -1)
                sub_1400CA9B0(index, item->parent);
            else if (item->holder != -1)
                sub_1400CA7C0(index, item->holder, item->slot);
            else
                return 0;
        } else {
            HumanHand *inventory = item_inventory_slot(human, slot);
            int32_t count = inventory->count;
            if (count >= 2 || (slot < 2 && count >= 1))
                return 0;
            if ((slot == 2 && !item_type_is_gun(item->type)) ||
                (slot > 2 && item_type_is_gun(item->type)))
                return 0;
            if (item->parent != -1) {
                sub_1400CA9B0(index, item->parent);
                item->parent = -1;
            }
            if (item->holder != -1)
                sub_1400CA7C0(index, item->holder, item->slot);
            /* Detaching from the same inventory may change its count. */
            count = inventory->count;
            if (count < 8) {
                item->holder = human;
                item->slot = slot;
                item_inventory_entry(human, slot, count) = index;
                inventory->count = add_int(inventory->count, 1);
            }
        }
        if (game_connected)
            world_item_change_count(index) = add_int(world_item_change_count(index), 1);
        return 1;
    } else {
        WorldItem *child = &world_items[child_index];
        int32_t count = item->child_count;
        int32_t old_slot = child->slot;
        int32_t holder;
        if (!can_attach_child(item, child))
            return 0;
        item_child_entry(index, count) = child_index;
        item->child_count = add_int(item->child_count, 1);
        holder = child->holder;
        child->parent = index;
        child->slot = count;
        if (holder != -1)
            sub_1400CA7C0(child_index, holder, old_slot);
        if (game_connected) {
            world_item_change_count(index) = add_int(world_item_change_count(index), 1);
            if ((uint32_t)child_index < WORLD_ITEM_CAPACITY)
                world_item_change_count(child_index) = add_int(world_item_change_count(child_index), 1);
        }
        return 1;
    }
}

uint64_t item_remove_cash_bill(int index, int bill)
{
    int32_t count = item_cash_bill_count(index);
    uint32_t result = (uint32_t)count;

    if (!count) {
        world_items[index].lifetime = 0;
    } else if (count > 0) {
        count--;
        result = (uint32_t)count;
        item_cash_bill_count(index) = count;
        if (bill <= count) {
            uint32_t shift = (uint32_t)bill * 3u;
            int32_t current = bill;
            result = item_cash_bill_values(index);
            do {
                uint32_t cleared = result & ~(7u << (shift & 31u));
                uint32_t following = (cleared >> ((shift + 3u) & 31u)) & 7u;
                result = cleared | (following << (shift & 31u));
                item_cash_bill_values(index) = result;
                shift += 3u;
                current = add_int(current, 1);
            } while (current <= item_cash_bill_count(index));
        }
    }
    return result;
}

void item_restore_block_part(int index)
{
    const ItemBlockOrigin *origin = item_block_origin(index);
    uint32_t block = origin->block;
    int32_t voxel_x = origin->voxel[0], voxel_y = origin->voxel[1], voxel_z = origin->voxel[2];
    const ItemBlockPart *part;
    float size = item_layer_voxel_size(origin->layer);
    float angle = (float)((double)((block >> 24) & 3u) * 1.570796326795);
    const float up[3] = {0.0f, 1.0f, 0.0f};
    float basis[9] = {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f};
    float part_rotation[9];
    float x, y, z, px, py, pz;

    sub_14007B2A0(basis, up, angle);
    part = item_block_part(block, origin->part);
    px = part->position[0];
    py = part->position[1];
    pz = part->position[2];
    x = px * basis[0];
    y = px * basis[1];
    z = px * basis[2];
    /* The second rotation is present in the original even though its
       resulting matrix is not used in the distance calculation. */
    for (int k = 0; k < 9; k++)
        part_rotation[k] = part->rotation[k];
    sub_14007B2A0(part_rotation, up, angle);

    x = ((((float)voxel_x + 0.5f) * size + x) + py * basis[3]) + pz * basis[6];
    y = (((float)voxel_y * size + y) + py * basis[4]) + pz * basis[7];
    z = ((((float)voxel_z + 0.5f) * size + z) + py * basis[5]) + pz * basis[8];
    x -= world_items[index].position[0];
    y -= world_items[index].position[1];
    z -= world_items[index].position[2];
    if (!(sqrt_float((y * y + x * x) + z * z) >= 0.125f)) {
        uint32_t vx = (uint32_t)origin->voxel[0], vy = (uint32_t)origin->voxel[1], vz = (uint32_t)origin->voxel[2];
        uint32_t gone = sub_1400169B0((uint32_t)origin->layer, vx, vy, vz);
        gone &= ~(1u << ((uint32_t)origin->part & 31u));
        world_set_block_gone((uint32_t)origin->layer, vx, vy, vz, gone);
        world_event_block_gone((uint32_t)origin->layer, vx, vy, vz, gone, 1u);
    }
}

uint64_t item_break_block_part(uint32_t block, int part_index, int layer, int vx, int vy, int vz)
{
    uint32_t part_bit = 1u << ((uint32_t)part_index & 31u);
    uint32_t gone = sub_1400169B0((uint32_t)layer, (uint32_t)vx, (uint32_t)vy, (uint32_t)vz);
    const ItemBlockPart *part;
    float angle, size, position[3], rotation[9];
    const float up[3] = {0.0f, 1.0f, 0.0f};
    float basis[9] = {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f};
    int32_t index;
    ItemBlockOrigin *origin;

    if (gone & part_bit)
        return UINT32_MAX;
    angle = (float)((double)((block >> 24) & 3u) * 1.570796326795);
    size = item_layer_voxel_size(layer);
    sub_14007B2A0(basis, up, angle);
    part = item_block_part(block, part_index);
    position[0] = ((((float)vx + 0.5f) * size + basis[0] * part->position[0])
                   + basis[3] * part->position[1]) + basis[6] * part->position[2];
    position[1] = (((float)vy * size + basis[1] * part->position[0])
                   + basis[4] * part->position[1]) + basis[7] * part->position[2];
    position[2] = ((((float)vz + 0.5f) * size + basis[2] * part->position[0])
                   + basis[5] * part->position[1]) + basis[8] * part->position[2];
    for (int k = 0; k < 9; k++)
        rotation[k] = part->rotation[k];
    sub_14007B2A0(rotation, up, angle);
    index = (int32_t)sr_CreateItem(part->item_type, position, 0, rotation);
    if (index == -1)
        return UINT32_MAX;

    gone = part_bit | sub_1400169B0((uint32_t)layer, (uint32_t)vx, (uint32_t)vy, (uint32_t)vz);
    world_set_block_gone((uint32_t)layer, (uint32_t)vx, (uint32_t)vy, (uint32_t)vz, gone);
    world_event_block_gone((uint32_t)layer, (uint32_t)vx, (uint32_t)vy, (uint32_t)vz, gone, 1u);
    world_items[index].unknown_318 = 1;
    origin = item_block_origin(index);
    origin->layer = layer;
    origin->voxel[0] = vx;
    origin->voxel[1] = vy;
    origin->voxel[2] = vz;
    origin->block = (block & 0x3FFu) + (block & 0x03000000u);
    origin->part = part_index;

    if (world_items[index].type == 39) {
        int region_count = item_block_region_count;
        for (int r = 0; r < region_count; r++) {
            const ItemBlockRegion *region = &item_block_regions[r];
            /* JB rejects unordered lower bounds; JAE permits unordered
               upper bounds. Preserve the x, y, z order. */
            if (!(position[0] >= region->bounds_min[0]) || position[0] >= region->bounds_max[0] ||
                !(position[1] >= region->bounds_min[1]) || position[1] >= region->bounds_max[1] ||
                !(position[2] >= region->bounds_min[2]) || position[2] >= region->bounds_max[2])
                continue;
            int entry_count = region->entry_count;
            for (int e = 0; e < entry_count; e++) {
                const ItemBlockRegionEntry *entry = &region->entries[e];
                if (vy == entry->voxel[1] && vz == entry->voxel[2] && vx == entry->voxel[0]) {
                    item_block_region_value(index) = entry->unknown_c;
                    if (region->kind == 1)
                        item_computer_team(index) = region->computer_team;
                }
            }
        }
    }
    return (uint32_t)index;
}
