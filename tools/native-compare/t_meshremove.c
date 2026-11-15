// NC_WRAPPERS: 140184AB0
#include "nc.h"
#include "startup.h"

#ifdef NC_NATIVE
#define remove_record(record) ((void (*)(int))NC_ADDR(0x140184AB0))(record)
#elif defined(NC_CLIENT_WRAPPERS)
void sub_140184AB0(int);
#define remove_record(record) sub_140184AB0(record)
#else
#define remove_record(record) startup_mesh_remove_record(record)
#endif

static void fill(unsigned int record)
{
    for (int k = 0; k < 4; ++k) startup_mesh_record(record)[k] = (unsigned int)nc_rand();
    *startup_mesh_record_tag(record) = (unsigned int)nc_rand();
    *startup_mesh_record_flag(record) = (unsigned int)nc_rand();
    for (int k = 0; k < 3; ++k) startup_mesh_record_vector(record)[k] = (unsigned int)nc_rand();
}

static uint64_t record_hash(unsigned int record)
{
    unsigned int words[9];
    for (int k = 0; k < 4; ++k) words[k] = startup_mesh_record(record)[k];
    words[4] = *startup_mesh_record_tag(record);
    words[5] = *startup_mesh_record_flag(record);
    for (int k = 0; k < 3; ++k) words[6 + k] = startup_mesh_record_vector(record)[k];
    return nc_hash(words, sizeof words);
}

int main(void)
{
    static const unsigned int counts[] = {0, 1, 2, 3, 7, 64, 50000, 0x80000000u};
    nc_map_image();
    for (int n = 0; n < nc_cases(2000); ++n) {
        nc_seed(n);
        unsigned int count = counts[n % 8];
        startup_mesh_record_count = count;
        int record;
        switch (nc_rand_below(6)) {
        case 0: record = -1; break;
        case 1: record = (int)count; break;
        case 2: record = (int)count - 1; break;
        case 3: record = (int)count + 1; break;
        case 4: record = (int)0x80000000u; break;
        default: record = count && count < 0x80000000u ? (int)nc_rand_below(count) : 0; break;
        }
        for (unsigned int r = 0; r < 64; ++r) fill(r);
        unsigned int last = count - 1;
        if (count && count <= 50000) fill(last);
        if (record >= 0 && record < 60000) fill((unsigned int)record);
        uint64_t before = record >= 0 && record < 60000 ? record_hash((unsigned int)record) : 0;
        remove_record(record);
        uint64_t first = 0;
        for (unsigned int r = 0; r < 64; ++r) first = first * 31 + record_hash(r);
        nc_line("remove %d count %08x record %d now %08x before %016llx after %016llx last %016llx first %016llx", n,
                count, record, startup_mesh_record_count, (unsigned long long)before,
                (unsigned long long)(record >= 0 && record < 60000 ? record_hash((unsigned int)record) : 0),
                (unsigned long long)(count && count <= 50000 ? record_hash(last) : 0), (unsigned long long)first);
    }
    return 0;
}
