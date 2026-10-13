/* Changing the level's voxels: allocating chunk slots and block records,
 * writing a voxel's entries, and marking records whose meshes must be
 * rebuilt.
 */
#include <string.h>
#include "arith.h"
#include "world.h"

/* ---- still recompiled code ------------------------------------------------- */

/* Releases GPU mesh `mesh` of buffer kind `kind`. */
extern long long sub_1401941F0(int kind, int mesh);

/* ---- layer and record fields --------------------------------------------- */

#define layer_word(layer, offset) \
    SR_GLOBAL(int32_t, 0x15ADA9240ULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer) + (offset))
/* A chunk slot's in-use flag: the word before its 512 cells. */
#define layer_slot_used(layer, slot) \
    SR_GLOBAL(int32_t, 0x15ADA97ACULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer) + 0x804ULL * (uint64_t)(slot))
#define layer_record_count(layer) layer_word(layer, 0x100D6C)

#define WORLD_CHUNK_SLOTS 512
#define WORLD_BLOCK_RECORDS 4096

#define record_word(record, offset) \
    SR_GLOBAL(int32_t, 0x154161240ULL + 0x6C48ULL * (uint64_t)(int64_t)(record) + (offset))
#define record_table(record, offset) \
    (&SR_GLOBAL(uint32_t, 0x154161240ULL + 0x6C48ULL * (uint64_t)(int64_t)(record) + (offset)))
#define record_used(record) record_word(record, 0x0)
#define record_layer(record) record_word(record, 0x4)
#define record_mesh(record, band) record_word(record, 0x6008 + 4 * (band))   /* -1: none */
#define record_cell(record, axis) record_word(record, 0x6018 + 4 * (axis))   /* its 8-voxel cell */
#define record_changed(record) record_word(record, 0x6024)
#define record_unknown_6030(record) record_word(record, 0x6030)

/* Block meshes, 0x8C24 bytes each: the word a release sets to -1 (the mesh's owner). */
#define block_mesh_owner(mesh) SR_GLOBAL(int32_t, 0x151E46224ULL + 0x8C24ULL * (uint64_t)(int64_t)(mesh))

static int voxel_in_cell(uint32_t x, uint32_t y, uint32_t z)
{
    return (int)((x & 7) + 8 * ((z & 7) + 8 * (y & 7)));
}

static int cell_in_chunk(uint32_t x, uint32_t y, uint32_t z)
{
    return (int)((x >> 3 & 7) + 8 * ((z >> 3 & 7) + 8 * (y >> 3 & 7)));
}

/* The chunk slot table entry of chunk cx, cy, cz. */
static int32_t *chunk_entry(int layer, int32_t cx, int32_t cy, int32_t cz)
{
    int32_t *table;

    memcpy(&table, world_level_chunk_table_address(layer), sizeof table);
    return &table[add_int(multiply_int(add_int(multiply_int(world_level_chunks(layer, 2), cy), cz),
                                       world_level_chunks(layer, 0)),
                          cx)];
}

/* The record holding voxel x, y, z of a layer (-1: none), its chunk being
   valid; the shifts are unsigned, as in the original. */
static int32_t find_record(int layer, uint32_t x, uint32_t y, uint32_t z)
{
    int32_t slot;

    if ((int32_t)(x >> 6) >= world_level_chunks(layer, 0) || (int32_t)(y >> 6) >= world_level_chunks(layer, 1) ||
        (int32_t)(z >> 6) >= world_level_chunks(layer, 2))
        return -1;
    slot = *chunk_entry(layer, (int32_t)(x >> 6), (int32_t)(y >> 6), (int32_t)(z >> 6));
    if (slot == -1)
        return -1;
    return world_level_cells(layer, slot)[cell_in_chunk(x, y, z)];
}

int world_chunk_allocate(uint32_t layer, int32_t cx, int32_t cy, int32_t cz)
{
    int slot;

    if (layer > 3 || cx < 0 || cy < 0 || cz < 0 || cx >= world_level_chunks(layer, 0) ||
        cy >= world_level_chunks(layer, 1) || cz >= world_level_chunks(layer, 2))
        return -1;
    for (slot = 0; slot < WORLD_CHUNK_SLOTS; slot++)
        if (!layer_slot_used(layer, slot))
            break;
    if (slot == WORLD_CHUNK_SLOTS)
        return -1;
    *chunk_entry((int)layer, cx, cy, cz) = slot;
    layer_slot_used(layer, slot) = 1;
    memset(world_level_cells(layer, slot), 0xFF, 0x800);
    return slot;
}

int world_block_record_allocate(int layer, int slot, int32_t x8, int32_t y8, int32_t z8)
{
    int record;

    if ((uint32_t)layer > 3 || (uint32_t)slot > 0x1FF || x8 < 0 || y8 < 0 || z8 < 0 ||
        (int32_t)((uint32_t)x8 >> 3) >= world_level_chunks(layer, 0) ||
        (int32_t)((uint32_t)y8 >> 3) >= world_level_chunks(layer, 1) ||
        (int32_t)((uint32_t)z8 >> 3) >= world_level_chunks(layer, 2))
        return -1;
    for (record = 0; record < WORLD_BLOCK_RECORDS; record++)
        if (!record_used(record))
            break;
    if (record == WORLD_BLOCK_RECORDS)
        return -1;
    record_used(record) = 1;
    record_layer(record) = layer;
    record_cell(record, 0) = x8;
    world_level_cells(layer, slot)[(x8 & 7) + 8 * ((z8 & 7) + 8 * (y8 & 7))] = record;
    record_cell(record, 1) = y8;
    record_cell(record, 2) = z8;
    memset(record_table(record, 0x8), 0, 0x800);
    memset(record_table(record, 0x808), 0, 0x800);
    memset(record_table(record, 0x3008), 0, 0x800);
    memset(record_table(record, 0x4808), 0, 0x800);
    memset(record_table(record, 0x5008), 0, 0x800);
    layer_record_count(layer) = add_int(layer_record_count(layer), 1);
    record_unknown_6030(record) = 0;
    for (int band = 0; band < 4; band++)
        record_mesh(record, band) = -1;
    return record;
}

void world_block_mark_changed(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    int32_t record;

    if (layer > 3 || (int32_t)x < 0 || (int32_t)y < 0 || (int32_t)z < 0)
        return;
    record = find_record((int)layer, x, y, z);
    if (record != -1)
        record_changed(record) = 1;
}

void world_block_set_unknown_8(int layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    int32_t *entry, slot, record;

    if ((uint32_t)layer > 3 || (int32_t)x < 0 || (int32_t)y < 0 || (int32_t)z < 0)
        return;
    if ((int32_t)(x >> 6) >= world_level_chunks(layer, 0) || (int32_t)(y >> 6) >= world_level_chunks(layer, 1) ||
        (int32_t)(z >> 6) >= world_level_chunks(layer, 2))
        return;
    entry = chunk_entry(layer, (int32_t)(x >> 6), (int32_t)(y >> 6), (int32_t)(z >> 6));
    slot = *entry;
    if (slot == -1) {
        slot = world_chunk_allocate((uint32_t)layer, (int32_t)(x >> 6), (int32_t)(y >> 6), (int32_t)(z >> 6));
        if (slot == -1)
            return;
    }
    record = world_level_cells(layer, slot)[cell_in_chunk(x, y, z)];
    if (record == -1) {
        record = world_block_record_allocate(layer, slot, (int32_t)(x >> 3), (int32_t)(y >> 3), (int32_t)(z >> 3));
        if (record == -1)
            return;
    }
    record_table(record, 0x8)[voxel_in_cell(x, y, z)] = value;
    world_block_mark_changed((uint32_t)layer, x, y, z);
}

int world_block_record_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    if (layer > 3 || (int32_t)x < 0 || (int32_t)y < 0 || (int32_t)z < 0)
        return -1;
    return find_record((int)layer, x, y, z);
}

uint32_t world_block_set_unknown_808(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    int32_t record = world_block_record_at(layer, x, y, z);

    if (record == -1)
        return 0xFFFFFFFFu;
    record_table(record, 0x808)[voxel_in_cell(x, y, z)] = value;
    return value;
}

void world_block_release_mesh(int record, int band)
{
    int32_t mesh;

    if ((uint32_t)record > 0xFFF)
        return;
    mesh = record_mesh(record, band);
    record_mesh(record, band) = -1;
    if ((uint32_t)mesh > 0x3FF)
        return;
    block_mesh_owner(mesh) = -1;
    sub_1401941F0(0, mesh);
    sub_1401941F0(3, mesh);
    sub_1401941F0(5, mesh);
}

void world_block_set_model(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int32_t value)
{
    int32_t record;
    int band;

    if (layer > 3 || (int32_t)x < 0 || (int32_t)y < 0 || (int32_t)z < 0)
        return;
    record = find_record((int)layer, x, y, z);
    if (record == -1)
        return;
    band = (int)(y >> 1 & 3);
    record_table(record, 0x4808)[voxel_in_cell(x, y, z)] = (uint32_t)value;
    if (record_mesh(record, band) >= 0)
        world_block_release_mesh(record, band);
}

/* ---- placing a block ------------------------------------------------------ */

/* A block shape's size in voxels (shape + 0xC0, 0xE8 bytes per shape from 0x145098C00). */
#define shape_size(shape, axis) SR_GLOBAL(int32_t, 0x145098CC0ULL + 0xE8ULL * (uint64_t)(shape) + 4ULL * (uint64_t)(axis))

/* The voxel's eight face words (record + 0x1008, 16 bytes per voxel). */
#define record_faces(record, voxel) \
    (&SR_GLOBAL(uint16_t, 0x154162248ULL + 0x6C48ULL * (uint64_t)(int64_t)(record) + 16ULL * (uint64_t)(int64_t)(voxel)))

/* Cube neighbours of a 0x40000000 entry: offset, the bit this voxel loses
   when that neighbour is a cube too, and the bit the neighbour loses. */
static const struct {
    int dx, dy, dz;
    uint32_t own, theirs;
} cube_neighbours[6] = {
    { 0, -1, 0, 0x01, 0x20 }, { 0, 1, 0, 0x20, 0x01 }, { 0, 0, 1, 0x02, 0x08 },
    { 0, 0, -1, 0x08, 0x02 }, { -1, 0, 0, 0x04, 0x10 }, { 1, 0, 0, 0x10, 0x04 },
};

/* Shape neighbours by side: 0 -x, 1 -y, 2 -z, 3 +z, 4 +y, 5 +x. */
static const int side_offset[6][3] = {
    { -1, 0, 0 }, { 0, -1, 0 }, { 0, 0, -1 }, { 0, 0, 1 }, { 0, 1, 0 }, { 1, 0, 0 },
};

void world_block_place(int layer, int32_t x, uint32_t y, int32_t z, uint32_t value, const uint16_t faces[8])
{
    int32_t *entry, slot, record, voxel;

    if ((uint32_t)layer > 3 || x < 0 || (int32_t)y < 0 || z < 0)
        return;
    if ((int32_t)((uint32_t)x >> 6) >= world_level_chunks(layer, 0) || (int32_t)(y >> 6) >= world_level_chunks(layer, 1) ||
        (int32_t)((uint32_t)z >> 6) >= world_level_chunks(layer, 2))
        return;
    if (value == 0)
        return;
    entry = chunk_entry(layer, (int32_t)((uint32_t)x >> 6), (int32_t)(y >> 6), (int32_t)((uint32_t)z >> 6));
    slot = *entry;
    if (slot == -1) {
        slot = world_chunk_allocate((uint32_t)layer, (int32_t)((uint32_t)x >> 6), (int32_t)(y >> 6),
                                    (int32_t)((uint32_t)z >> 6));
        if (slot == -1)
            return;
    }
    record = world_level_cells(layer, slot)[cell_in_chunk((uint32_t)x, y, (uint32_t)z)];
    if (record == -1) {
        record = world_block_record_allocate(layer, slot, (int32_t)((uint32_t)x >> 3), (int32_t)(y >> 3),
                                             (int32_t)((uint32_t)z >> 3));
        if (record == -1)
            return;
    }
    voxel = voxel_in_cell((uint32_t)x, y, (uint32_t)z);

    if ((value & 0xE0000000u) == 0x40000000u) {
        uint32_t *own = &record_table(record, 0x8)[voxel];

        *own = (value >> 24 & 3) << 24 | 0x4000003Fu;
        for (int i = 0; i < 8; i++) {
            record_faces(record, voxel)[i] = faces[i];
            if ((int16_t)faces[i] >= 0)
                *own |= 0x40u << i;
        }
        for (int n = 0; n < 6; n++) {
            uint32_t nx = (uint32_t)x + (uint32_t)cube_neighbours[n].dx;
            uint32_t ny = y + (uint32_t)cube_neighbours[n].dy;
            uint32_t nz = (uint32_t)z + (uint32_t)cube_neighbours[n].dz;
            uint32_t other = world_block_unknown_8_at((uint32_t)layer, nx, ny, nz);

            /* The bottom of the level counts as covered. */
            if ((other & 0xE0000000u) == 0x40000000u || (n == 0 && y == 0)) {
                *own &= ~cube_neighbours[n].own;
                world_block_set_unknown_8(layer, nx, ny, nz, other & ~cube_neighbours[n].theirs);
            }
        }
        world_block_mark_changed((uint32_t)layer, (uint32_t)x, y, (uint32_t)z);
    } else if ((value & 0xE0000000u) == 0x80000000u) {
        uint32_t type = value & 0xFFFF, covered;

        record_table(record, 0x8)[voxel] = value;
        for (int i = 0; i < 8; i++)
            record_faces(record, voxel)[i] = faces[i];
        /* The rest of the shape's voxels point back to this one. */
        for (int32_t dy = 0; dy < shape_size(type, 1); dy++)
            for (int32_t dz = 0; dz < shape_size(type, 2); dz++)
                for (int32_t dx = 0; dx < shape_size(type, 0); dx++) {
                    uint32_t px = (uint32_t)(x + dx), py = y + (uint32_t)dy, pz = (uint32_t)(z + dz);

                    if (!dy && !dz && !dx)
                        continue;
                    world_block_set_unknown_8(layer, px, py, pz,
                                              (uint32_t)dx | ((uint32_t)dz | (uint32_t)dy << 8) << 8 | 0xC0000000u);
                    world_block_mark_changed((uint32_t)layer, px, py, pz);
                }
        covered = record_table(record, 0x808)[voxel];
        for (int side = 0; side < 6; side++) {
            uint32_t nx = (uint32_t)x + (uint32_t)side_offset[side][0];
            uint32_t ny = y + (uint32_t)side_offset[side][1];
            uint32_t nz = (uint32_t)z + (uint32_t)side_offset[side][2];
            uint32_t other = world_block_unknown_8_at((uint32_t)layer, nx, ny, nz);
            int32_t neighbour;
            uint32_t their_covered;

            if ((other & 0xE0000000u) != 0x80000000u)
                continue;
            covered = world_block_covered_faces((int)type, side, covered, (int)(other & 0xFFFF));
            neighbour = world_block_record_at((uint32_t)layer, nx, ny, nz);
            their_covered = neighbour == -1 ? 0 : record_table(neighbour, 0x808)[voxel_in_cell(nx, ny, nz)];
            neighbour = world_block_record_at((uint32_t)layer, nx, ny, nz);
            if (neighbour != -1)
                record_table(neighbour, 0x808)[voxel_in_cell(nx, ny, nz)] =
                    world_block_covered_faces((int)(other & 0xFFFF), 5 - side, their_covered, (int)type);
        }
        record_table(record, 0x808)[voxel] = covered;
        world_block_mark_changed((uint32_t)layer, (uint32_t)x, y, (uint32_t)z);
    }
}

/* ---- more voxel entries --------------------------------------------------- */

/* Block meshes' part lists: a count, then 21-word entries whose first word a
   removal clears and whose words 2-5 are the part's voxel (x, y, z within
   its cell) and part number. */
#define block_mesh_part_count(mesh) SR_GLOBAL(int32_t, 0x151E49A44ULL + 0x8C24ULL * (uint64_t)(int64_t)(mesh))
#define block_mesh_part(mesh, part) \
    (&SR_GLOBAL(int32_t, 0x151E49A48ULL + 0x8C24ULL * (uint64_t)(int64_t)(mesh) + 84ULL * (uint64_t)(int64_t)(part)))

/* Block meshes' model lists: a count, then 7-word entries whose word 1 is
   a voxel and word 2 that voxel's gone-parts mask. */
#define block_mesh_model_count(mesh) SR_GLOBAL(int32_t, 0x151E48038ULL + 0x8C24ULL * (uint64_t)(int64_t)(mesh))
#define block_mesh_model(mesh, i) \
    (&SR_GLOBAL(int32_t, 0x151E4803CULL + 0x8C24ULL * (uint64_t)(int64_t)(mesh) + 28ULL * (uint64_t)(int64_t)(i)))

#define record_unknown_6028(record) record_word(record, 0x6028)
/* A record's bytes at +0x3808, 8 per voxel. */
#define record_unknown_3808_bytes(record) \
    (&SR_GLOBAL(uint8_t, 0x154164A48ULL + 0x6C48ULL * (uint64_t)(int64_t)(record)))

/* Rebuilds a block record's meshes; still recompiled code. */
extern long long sub_14000C4C0(int record);

/* The record holding voxel x, y, z, allocating its chunk slot and record
   when missing; -1 when out of the level or out of slots or records. */
static int32_t find_or_allocate_record(int layer, uint32_t x, uint32_t y, uint32_t z)
{
    int32_t slot, record;

    if ((uint32_t)layer > 3 || (int32_t)x < 0 || (int32_t)y < 0 || (int32_t)z < 0)
        return -1;
    if ((int32_t)(x >> 6) >= world_level_chunks(layer, 0) || (int32_t)(y >> 6) >= world_level_chunks(layer, 1) ||
        (int32_t)(z >> 6) >= world_level_chunks(layer, 2))
        return -1;
    slot = *chunk_entry(layer, (int32_t)(x >> 6), (int32_t)(y >> 6), (int32_t)(z >> 6));
    if (slot == -1) {
        slot = world_chunk_allocate((uint32_t)layer, (int32_t)(x >> 6), (int32_t)(y >> 6), (int32_t)(z >> 6));
        if (slot == -1)
            return -1;
    }
    record = world_level_cells(layer, slot)[cell_in_chunk(x, y, z)];
    if (record == -1)
        record = world_block_record_allocate(layer, slot, (int32_t)(x >> 3), (int32_t)(y >> 3), (int32_t)(z >> 3));
    return record;
}

void world_block_set_layout(int layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    int32_t record = find_or_allocate_record(layer, x, y, z);
    int band = (int)(y >> 1 & 3);

    if (record == -1)
        return;
    record_table(record, 0x3008)[voxel_in_cell(x, y, z)] = value;
    if (record_mesh(record, band) >= 0)
        world_block_release_mesh(record, band);
    world_block_mark_changed((uint32_t)layer, x, y, z);
}

void world_block_write_layout(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    int32_t record = world_block_record_at(layer, x, y, z);

    if (record != -1)
        record_table(record, 0x3008)[voxel_in_cell(x, y, z)] = value;
}

void world_block_write_gone(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    int32_t record = world_block_record_at(layer, x, y, z);

    if (record == -1)
        return;
    record_table(record, 0x5808)[voxel_in_cell(x, y, z)] = value;
    record_unknown_6028(record) = 1;
}

void world_block_set_id(int layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    int32_t record = find_or_allocate_record(layer, x, y, z);
    int band = (int)(y >> 1 & 3), voxel = voxel_in_cell(x, y, z);

    if (record == -1)
        return;
    record_table(record, 0x5008)[voxel] = value;
    record_table(record, 0x5808)[voxel] = 0;   /* no part gone */
    if (record_mesh(record, band) >= 0)
        world_block_release_mesh(record, band);
}

void world_block_mesh_clear_part(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int32_t part)
{
    int32_t record = world_block_record_at(layer, x, y, z), mesh;

    if (record == -1)
        return;
    mesh = record_mesh(record, (int)(y >> 1 & 3));
    if (mesh == -1)
        return;
    for (int i = 0; i < block_mesh_part_count(mesh); i++) {
        int32_t *entry = block_mesh_part(mesh, i);

        if (entry[2] == (int32_t)(x & 7) && entry[3] == (int32_t)(y & 7) && entry[4] == (int32_t)(z & 7) &&
            entry[5] == part)
            entry[0] = 0;
    }
}

void world_block_clear(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    int32_t record = world_block_record_at(layer, x, y, z);
    int voxel;

    if (record == -1)
        return;
    voxel = voxel_in_cell(x, y, z);
    /* A cube going away uncovers the faces of the cubes next to it. */
    if ((record_table(record, 0x8)[voxel] & 0xE0000000u) == 0x40000000u) {
        static const struct {
            int dx, dy, dz;
            uint32_t uncovered;
        } next[6] = {
            { 0, -1, 0, 0x20 }, { 0, 1, 0, 0x01 }, { 0, 0, 1, 0x08 },
            { 0, 0, -1, 0x02 }, { -1, 0, 0, 0x10 }, { 1, 0, 0, 0x04 },
        };

        for (int i = 0; i < 6; i++) {
            uint32_t nx = x + (uint32_t)next[i].dx, ny = y + (uint32_t)next[i].dy, nz = z + (uint32_t)next[i].dz;
            uint32_t entry = world_block_unknown_8_at(layer, nx, ny, nz);

            if ((entry & 0xE0000000u) == 0x40000000u)
                world_block_set_unknown_8((int)layer, nx, ny, nz, entry | next[i].uncovered);
        }
    }
    record_table(record, 0x8)[voxel] = 0;
    record_table(record, 0x3008)[voxel] = 0;
    world_block_mark_changed(layer, x, y, z);
}

void world_block_place_layout(int layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value, const uint16_t parts[8])
{
    int32_t record = find_or_allocate_record(layer, x, y, z);
    int band = (int)(y >> 1 & 3);

    if (record == -1)
        return;
    if ((value & 0xE0000000u) == 0x80000000u) {
        int voxel = voxel_in_cell(x, y, z);
        int shape = (int)(value & 0xFFFF);

        record_table(record, 0x3008)[voxel] = value;
        for (int k = 0; k < 8; k++)
            record_unknown_3808_bytes(record)[8 * voxel + k] = (uint8_t)parts[k];
        /* The rest of the shape's footprint points back here. */
        for (int dy = 0; dy < shape_size(shape, 1); dy++)
            for (int dz = 0; dz < shape_size(shape, 2); dz++)
                for (int dx = 0; dx < shape_size(shape, 0); dx++)
                    if (dy || dz || dx)
                        world_block_set_layout(layer, x + (uint32_t)dx, y + (uint32_t)dy, z + (uint32_t)dz,
                                               (uint32_t)dx | ((uint32_t)dz | (uint32_t)dy << 8) << 8 | 0xC0000000u);
    }
    if (record_mesh(record, band) >= 0)
        world_block_release_mesh(record, band);
    world_block_mark_changed((uint32_t)layer, x, y, z);
}

void world_block_record_refresh(int record)
{
    if ((uint32_t)record > 0xFFF || !record_used(record))
        return;
    sub_14000C4C0(record);
    for (int band = 0; band < 4; band++) {
        int32_t mesh = record_mesh(record, band);

        if (mesh == -1)
            continue;
        for (int i = 0; i < block_mesh_model_count(mesh); i++) {
            int32_t *entry = block_mesh_model(mesh, i);
            entry[2] = (int32_t)record_table(record, 0x5808)[entry[1]];
        }
    }
    record_unknown_6028(record) = 0;
}

#define record_unknown_6c34(record) record_word(record, 0x6C34)
#define record_band_unknown_6c38(record, band) record_word(record, 0x6C38 + 4 * (band))

void world_block_mark_unknown_6c34(int layer, int32_t x, int32_t y, int32_t z)
{
    int32_t slot, record;

    /* The bounds are the layer's size in voxels; the layer is not checked. */
    if (x < 0 || x >= (int32_t)((uint32_t)world_level_chunks(layer, 0) << 6) || y < 0 ||
        y >= (int32_t)((uint32_t)world_level_chunks(layer, 1) << 6) || z < 0 ||
        z >= (int32_t)((uint32_t)world_level_chunks(layer, 2) << 6))
        return;
    slot = *chunk_entry(layer, x >> 6, y >> 6, z >> 6);
    if (slot == -1)
        return;
    record = world_level_cells(layer, slot)[cell_in_chunk((uint32_t)x, (uint32_t)y, (uint32_t)z)];
    if (record == -1)
        return;
    record_unknown_6c34(record) = 1;
    record_band_unknown_6c38(record, y >> 1 & 3) = 1;
}
