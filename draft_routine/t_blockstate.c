// NC_WRAPPERS: 140012670 140016AF0 140017910 14001B390
#include <string.h>
#include "nc.h"
#include "world.h"

/* Prototypes for our draft routines */
void blocks_update_neighbor_links(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
void blocks_clear_voxel_state_entry(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int value);
void blocks_update_gone_masks(int32_t record_idx);
uint32_t blocks_compare_records(int a, int b, int c, int d);

#ifdef NC_NATIVE
static void run_update_neighbor_links(uint32_t l, uint32_t x, uint32_t y, uint32_t z) {
    ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t))NC_ADDR(0x140012670))(l, x, y, z);
}
static void run_clear_voxel_state(uint32_t l, uint32_t x, uint32_t y, uint32_t z, int v) {
    ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t, int))NC_ADDR(0x140016AF0))(l, x, y, z, v);
}
static void run_update_gone_masks(int32_t r) {
    ((void (*)(int32_t))NC_ADDR(0x140017910))(r);
}
static uint32_t run_compare_records(int a, int b, int c, int d) {
    return ((uint32_t (*)(int, int, int, int))NC_ADDR(0x14001B390))(a, b, c, d);
}
#else
static void run_update_neighbor_links(uint32_t l, uint32_t x, uint32_t y, uint32_t z) {
    blocks_update_neighbor_links(l, x, y, z);
}
static void run_clear_voxel_state(uint32_t l, uint32_t x, uint32_t y, uint32_t z, int v) {
    blocks_clear_voxel_state_entry(l, x, y, z, v);
}
static void run_update_gone_masks(int32_t r) {
    blocks_update_gone_masks(r);
}
static uint32_t run_compare_records(int a, int b, int c, int d) {
    return blocks_compare_records(a, b, c, d);
}
#endif

static void test_neighbor_links(int n) {
    uint32_t l = nc_rand_below(4);
    uint32_t x = nc_rand_below(1024);
    uint32_t y = nc_rand_below(1024);
    uint32_t z = nc_rand_below(1024);
    
    nc_save(world_block_records, sizeof(world_block_records[0]) * WORLD_BLOCK_RECORD_CAPACITY);
    run_update_neighbor_links(l, x, y, z);
    nc_line("res %08x", (unsigned)nc_hash(world_block_records, 0x10000)); // rough check
}

static void test_clear_voxel_state(int n) {
    uint32_t l = nc_rand_below(4);
    uint32_t x = nc_rand_below(1024);
    uint32_t y = nc_rand_below(1024);
    uint32_t z = nc_rand_below(1024);
    int v = (int)nc_rand();
    
    nc_save((void *)0x140404A6C, 0x1000000); // save relevant state area
    run_clear_voxel_state(l, x, y, z, v);
    nc_line("res %08x", (unsigned)nc_hash((void *)0x140404A6C, 0x1000000));
}

static void test_update_gone_masks(int n) {
    int32_t r = (int32_t)nc_rand_below(4096);
    nc_save(world_block_records, sizeof(world_block_records[0]) * WORLD_BLOCK_RECORD_CAPACITY);
    run_update_gone_masks(r);
    nc_line("res %08x", (unsigned)nc_hash(world_block_records, 0x10000));
}

static void test_compare_records(int n) {
    int a = (int)nc_rand_below(4096);
    int b = (int)nc_rand_below(8);
    int c = (int)nc_rand();
    int d = (int)nc_rand_below(4096);
    uint32_t res = run_compare_records(a, b, c, d);
    nc_line("res %08x", res);
}

int main(void) {
    nc_map_image();
    for (int n = 0; n < nc_cases(1000); n++) {
        test_neighbor_links(n);
        test_clear_voxel_state(n);
        test_update_gone_masks(n);
        test_compare_records(n);
    }
    return 0;
}
