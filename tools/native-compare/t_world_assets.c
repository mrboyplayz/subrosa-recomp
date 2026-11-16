// NC_WRAPPERS: 1400E6E50
/* block/*.sbl loader: 0x1400E6E50. File access (sprintf 0x140158AB0, fopen
   0x14020B8D8, fclose 0x14020B9E8) and the read callback slot 0x1862AE008
   are recording stubs in both builds, so the comparison checks the routine's
   own file format, version tests, table walk and read pattern; the CRT's
   stdio itself is the same code in both programs and is not what this suite
   proves. */
#include <limits.h>
#include <string.h>
#include <stdio.h>
#include "nc.h"
#include "memory.h"
#include "world_assets.h"

#ifdef NC_NATIVE
#define block_sbl_load ((void (*)(const char *))NC_ADDR(0x1400E6E50))
#define city_sbc_save ((void (*)(const char *))NC_ADDR(0x1400D62A0))
#define building_sbb_load ((void (*)(void *, const char *, int))NC_ADDR(0x140026830))
#elif defined(NC_CLIENT_WRAPPERS)
long long asset_load_block_sbl_candidate(char *);
long long asset_save_city_sbc_candidate(void);
void asset_load_building_sbb_candidate(char *, char *, int);
#define block_sbl_load(a1) asset_load_block_sbl_candidate((char *)(a1))
#define city_sbc_save(a1) asset_save_city_sbc_candidate()
#define building_sbb_load(a, b, c) asset_load_building_sbb_candidate((char *)(a), (char *)(b), (int)(c))
#else
#define block_sbl_load sr_block_sbl_load
#define city_sbc_save sr_city_sbc_save
#define building_sbb_load sr_building_sbb_load
#endif

/* The original's read callback slots and the write slot: the .sbl loader
   reads through 0x1862AE008 (fread_sr 0x1402233C0), the building loader
   through 0x1862AE018 (0x14020C0C8), the serializers write through
   0x1862AE010 (0x14020CE0C). The suite points every slot at its stub and
   also redirects the direct-call targets, so both builds meet the same
   stubs. */
#define READ_SLOT_SBL SR_GLOBAL(uintptr_t, 0x1862AE008ULL)
#define READ_SLOT_BLD SR_GLOBAL(uintptr_t, 0x1862AE018ULL)
#define WRITE_SLOT SR_GLOBAL(uintptr_t, 0x1862AE010ULL)

/* A building record, big enough for every table the loader fills. */
static unsigned char building_record[0x2D28AC0ULL + 0x404ULL * 2 + 16];

/* Block header words plus neighbours on both sides; the mesh-group records
   straddle the header words, and the block lights sit at +0x2B86C. */
#define BLOCK_REGION SR_GLOBAL(unsigned char, 0x144FBFB60ULL)
#define MESH_GROUP_STRIDE 0x15CULL
#define MESH_GROUPS 3
#define LIGHTS_BASE_OFFSET 0x2B86CULL
#define LIGHT_STRIDE 0x7CULL
#define LIGHTS 3

static long long fake_file;
static int open_fails;
static int reads, read_size, read_count;
static int version_for_case;
static int a3_for_case;
static uint64_t read_pattern;

static void print_escaped(const char *label, const char *s)
{
    char out[96];
    size_t n = 0;
    for (; *s && n < sizeof(out) - 5; ++s) {
        unsigned char c = (unsigned char)*s;
        if (c >= 0x20 && c < 0x7f && c != '\\')
            out[n++] = (char)c;
        else
            n += (size_t)snprintf(out + n, sizeof(out) - n, "\\%02x", c);
    }
    out[n] = 0;
    nc_line("%s %s", label, out);
}

static long long stub_fopen(char *name, char *mode)
{
    print_escaped("fopen", name);
    print_escaped("mode", mode);
    return open_fails ? 0 : fake_file;
}

static long long stub_fclose(long long file)
{
    nc_line("fclose %016llx", (unsigned long long)file);
    return 0;
}

static void stub_read(void *dst, uint64_t size, uint64_t count, void *file)
{
    unsigned char *out = (unsigned char *)dst;
    size_t bytes = (size_t)(size * count);
    size_t i;
    int32_t forced = 0;
    int in_region = out >= (unsigned char *)&BLOCK_REGION - 16
        && out <= (unsigned char *)&BLOCK_REGION + LIGHTS_BASE_OFFSET + LIGHT_STRIDE * LIGHTS + 16;
    if (in_region)
        nc_line("read %llu x %llu at %d file %016llx", (unsigned long long)size,
                (unsigned long long)count, (int)(out - ((unsigned char *)&BLOCK_REGION - 16)),
                (unsigned long long)(uintptr_t)file);
    else
        /* The version word lands on the stack, whose address differs between
           the builds; only the destination region is compared. */
        nc_line("read %llu x %llu at stack file %016llx", (unsigned long long)size,
                (unsigned long long)count, (unsigned long long)(uintptr_t)file);
    /* The first read of a case is a version word: fill it with the case's
       version so every edge is exercised. The count words are filled clamped
       so every case runs to completion; the stub is shared by both builds,
       so both see the same values. */
    if (reads == 0)
        forced = version_for_case;
    else if (out == (unsigned char *)&SR_GLOBAL(int32_t, 0x144FBFBC4ULL))
        forced = MESH_GROUPS;
    else if (out == (unsigned char *)&SR_GLOBAL(int32_t, 0x144FEB3C8ULL))
        forced = version_for_case >= 2 ? LIGHTS : 0;
    else if (out == (unsigned char *)&SR_GLOBAL(int32_t, 0x175EEA08CULL))
        forced = SR_GLOBAL(int32_t, 0x175EEA08CULL);
    else if (out == (unsigned char *)&SR_GLOBAL(int32_t, 0x16E486878ULL))
        forced = SR_GLOBAL(int32_t, 0x16E486878ULL);
    else if (out == (unsigned char *)&SR_GLOBAL(int32_t, 0x16E48987CULL))
        forced = SR_GLOBAL(int32_t, 0x16E48987CULL);
    else if (out == (unsigned char *)&SR_GLOBAL(int32_t, 0x16E492084ULL))
        forced = SR_GLOBAL(int32_t, 0x16E492084ULL);
    else if (out == (unsigned char *)&SR_GLOBAL(int32_t, 0x1726DA088ULL))
        forced = SR_GLOBAL(int32_t, 0x1726DA088ULL);
    else if (out == (unsigned char *)&SR_GLOBAL(int32_t, 0x175FBB094ULL))
        forced = SR_GLOBAL(int32_t, 0x175FBB094ULL);
    else if (out >= building_record && out < building_record + sizeof(building_record)) {
        /* The building record: the floor count (0x48) and the tile count
           (0x40) are filled clamped; highlight counts are read from the
           record's own words, which the first highlight read clamps. */
        if (out == building_record + 0x48)
            forced = 1;
        else if (out == building_record + 0x40)
            forced = 3;
        else if (out == building_record + 0x2D28ABCULL)
            forced = 1;
        else if (out >= building_record + 0x2D28AC0ULL
                 && out < building_record + 0x2D28AC0ULL + 0x404ULL * 2
                 && ((out - building_record) & 0x3FF) == 0)
            forced = 2;
    }
    for (i = 0; i < bytes; i++) {
        read_pattern = read_pattern * 6364136223846793005ULL + 1442695040888963407ULL;
        out[i] = (unsigned char)(read_pattern >> 33);
    }
    if (forced && bytes >= 4)
        memcpy(out, &forced, 4);
    reads++;
    read_size = (int)size;
    read_count = (int)count;
}

static void stub_sprintf(char *out, const char *format, ...)
{
    (void)format;
    memset(out, 'B', 32);
    out[32] = 0;
    nc_line("sprintf");
}

static const int versions[] = {0, 1, 2, 3, 4, 7, 12, 13, 14, -1, INT_MIN, INT_MAX};

static int version_or_random(void)
{
    version_for_case = nc_chance(60)
        ? versions[nc_rand_below(sizeof(versions) / sizeof(versions[0]))]
        : (int)nc_rand();
    return version_for_case;
}

static void seed_tables(void)
{
    unsigned char *at;
    unsigned char *end;
    for (at = &BLOCK_REGION - 16, end = at + 16 + 0x74 + MESH_GROUP_STRIDE * MESH_GROUPS + 16;
         at < end; ++at)
        *at = (unsigned char)nc_rand();
    for (at = &BLOCK_REGION + LIGHTS_BASE_OFFSET - 16,
         end = at + 16 + LIGHT_STRIDE * LIGHTS + 16;
         at < end; ++at)
        *at = (unsigned char)nc_rand();
}

/* City-state window the serializer writes from, plus neighbours on both
   sides: 0x16E486840 - 16 .. 0x16E4920D0 + 0x4248 + 16 covers the world
   records, the companies, and one zone record. */
#define CITY_STATE SR_GLOBAL(unsigned char, 0x16E486840ULL)
#define CITY_STATE_SIZE (0x16E4920D0ULL - 0x16E486840ULL + 0x4248ULL + 16)
#define CITY_NAMES SR_GLOBAL(unsigned char, 0x175EEA08CULL)
#define CITY_NAMES_SIZE (0x181A1E8E4ULL - 0x175EEA08CULL + 16)

/* A building record, big enough for every table the loader fills. */
static void seed_city_state(void)
{
    unsigned char *at;
    unsigned char *end;
    for (at = &CITY_STATE, end = at + CITY_STATE_SIZE; at < end; ++at)
        *at = (unsigned char)nc_rand();
    for (at = &CITY_NAMES, end = at + CITY_NAMES_SIZE; at < end; ++at)
        *at = (unsigned char)nc_rand();
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x140158AB0, stub_sprintf);
    nc_redirect(0x14020B8D8, stub_fopen);
    nc_redirect(0x14020B9E8, stub_fclose);
    READ_SLOT_SBL = (uintptr_t)stub_read;
    READ_SLOT_BLD = (uintptr_t)stub_read;
    WRITE_SLOT = (uintptr_t)stub_read;
    nc_save(&BLOCK_REGION - 16, 16 + 0x74 + MESH_GROUP_STRIDE * MESH_GROUPS + 16);
    nc_save(&BLOCK_REGION + LIGHTS_BASE_OFFSET - 16, 16 + LIGHT_STRIDE * LIGHTS + 16);
    nc_save(&CITY_STATE, CITY_STATE_SIZE);
    nc_save(&CITY_NAMES, CITY_NAMES_SIZE);
    nc_save(building_record, sizeof(building_record));

    for (int n = 0; n < nc_cases(1024); ++n) {
        nc_restore();
        nc_seed((uint64_t)n);
        seed_tables();
        fake_file = (long long)(nc_rand() | 1);
        open_fails = nc_chance(10);
        read_pattern = nc_rand();
        reads = 0;
        read_size = 0;
        read_count = 0;
        version_for_case = 0;
        version_or_random();
        a3_for_case = nc_chance(50) ? 0 : (int)nc_rand();
        /* The stub fills the version and count words (see stub_read), so
           every case runs to completion and the comparison checks the exact
           read pattern both builds make. */

        nc_line("case %d version %d fails %d", n, version_for_case, open_fails);
        block_sbl_load("testblock");
        nc_line("reads %d size %d count %d", reads, read_size, read_count);

        /* The .sbc writer: the stub fills every count word clamped, so the
           whole walk runs and the comparison checks the exact write pattern
           and every destination offset. */
        seed_city_state();
        reads = 0;
        read_pattern = nc_rand();
        SR_GLOBAL(int32_t, 0x175EEA08CULL) = (int32_t)nc_rand_below(4);
        SR_GLOBAL(int32_t, 0x16E486878ULL) = (int32_t)nc_rand_below(4);
        SR_GLOBAL(int32_t, 0x16E48987CULL) = (int32_t)nc_rand_below(3);
        SR_GLOBAL(int32_t, 0x16E492084ULL) = (int32_t)nc_rand_below(3);
        SR_GLOBAL(int32_t, 0x1726DA088ULL) = (int32_t)nc_rand_below(3);
        SR_GLOBAL(int32_t, 0x175FBB094ULL) = (int32_t)nc_rand_below(4);
        nc_line("case %d save fails %d", n, open_fails);
        city_sbc_save("testcity");
        nc_line("writes %d", reads);

        /* The .sbb loader: the stub fills the header counts clamped (floor
           count 1, 3 tiles, 1 highlight) and the version with the case's
           version, so every branch is exercised. */
        seed_city_state();
        reads = 0;
        read_pattern = nc_rand();
        version_for_case = nc_chance(70) ? 12 + (int)nc_rand_below(3) : (int)nc_rand();
        nc_line("case %d building fails %d", n, open_fails);
        building_sbb_load(building_record, "testbuilding", a3_for_case);
        nc_line("build reads %d", reads);
    }
    return 0;
}
