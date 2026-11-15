// NC_WRAPPERS: 140012940 140017890
#include <string.h>
#include "nc.h"
#include "world_block_maintenance.h"

#ifdef NC_NATIVE
#define release ((void (*)(uint32_t,int32_t))NC_ADDR(0x140012940))
#define invalidate ((void (*)(uint32_t))NC_ADDR(0x140017890))
#elif defined(NC_CLIENT_WRAPPERS)
void sub_140012940(uint32_t,int32_t), sub_140017890(uint32_t);
#define release sub_140012940
#define invalidate sub_140017890
#else
#define release world_release_block_mesh
#define invalidate world_invalidate_block_meshes
#endif
static uint32_t selected;
static int change_during_prepare;
static void prepare(uint32_t record)
{
    nc_line("prepare %u %d %d %08x", record, world_block_records[record].active,
            world_block_records[record].unknown_6024, world_record_1008_counter);
    if (change_during_prepare) {
        world_block_records[record].active = 0;
        world_block_records[record].meshes[0] = 1023;
        world_block_records[record].meshes[3] = 0;
    }
}
static void release_channel(int channel, int mesh)
{
    WorldBlockRecord *r = &world_block_records[selected];
    nc_line("release %d %d %d %d/%d/%d/%d %d %08x", channel, mesh,
            world_mesh_record_link((uint32_t)mesh), r->meshes[0], r->meshes[1],
            r->meshes[2], r->meshes[3], r->unknown_6024, world_record_1008_counter);
}
int main(void)
{
    static const uint32_t indices[] = {0, 1, 1007, 1008, 1009, 4095, 4096, UINT32_MAX};
    static const int32_t meshes[] = {-1, 0, 1, 1023, 1024, INT32_MIN};
    nc_map_image();
    nc_redirect(0x14000C4C0, prepare);
    nc_redirect(0x1401941F0, release_channel);
    for (int n = 0; n < nc_cases(4096); ++n) {
        nc_seed(n);
        uint32_t record = indices[n % 8];
        selected = record < 4096 ? record : 0;
        WorldBlockRecord *r = &world_block_records[selected];
        /* One-past-capacity state is mapped but must not be touched. */
        WorldBlockRecord *guard = (WorldBlockRecord *)NC_ADDR(0x154161240ULL + 4096ULL * 0x6c48ULL);
        for (int operation = 0; operation < 2; ++operation) {
            memset(r, 0xa5, sizeof(*r));
            memset(guard, 0x5a, sizeof(*guard));
            r->active = (n / 8) % 3 == 0 ? 0 : ((n / 8) % 3 == 1 ? 1 : INT32_MIN);
            for (int q = 0; q < 4; ++q) r->meshes[q] = meshes[(n / 24 + q) % 6];
            r->unknown_6024 = (int32_t)nc_rand();
            for (unsigned i = 0; i < 1024; ++i) world_mesh_record_link(i) = (int32_t)nc_rand();
            world_record_1008_counter = n & 1 ? UINT32_MAX : (uint32_t)nc_rand();
            change_during_prepare = (n / 144) & 1;
            if (operation) invalidate(record);
            else release(record, (n / 6) % 4);
            uint32_t owners[1024];
            for (unsigned i = 0; i < 1024; ++i) owners[i] = (uint32_t)world_mesh_record_link(i);
            nc_line("state %d %d %016llx %016llx %08x %016llx", n, operation,
                    (unsigned long long)nc_hash(r, sizeof(*r)),
                    (unsigned long long)nc_hash(owners, sizeof(owners)), world_record_1008_counter,
                    (unsigned long long)nc_hash(guard, sizeof(*guard)));
        }
    }
    return 0;
}
