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
#elif defined(NC_CLIENT_WRAPPERS)
long long asset_load_block_sbl_candidate(char *);
#define block_sbl_load(a1) asset_load_block_sbl_candidate((char *)(a1))
#else
#define block_sbl_load sr_block_sbl_load
#endif

/* The original's read callback slot (startup 0x1401550C0 stores the address
   of fread_sr there): the port calls through the same slot, so one stub
   covers both builds. */
#define READ_SLOT SR_GLOBAL(uintptr_t, 0x1862AE008ULL)

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
    /* The first read of a case is the version word: fill it with the case's
       version so every edge is exercised. The count words are filled clamped
       so every case runs to completion; the stub is shared by both builds,
       so both see the same values. */
    if (reads == 0)
        forced = version_for_case;
    else if (out == (unsigned char *)&SR_GLOBAL(int32_t, 0x144FBFBC4ULL))
        forced = MESH_GROUPS;
    else if (out == (unsigned char *)&SR_GLOBAL(int32_t, 0x144FEB3C8ULL))
        forced = version_for_case >= 2 ? LIGHTS : 0;
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

int main(void)
{
    nc_map_image();
    nc_redirect(0x140158AB0, stub_sprintf);
    nc_redirect(0x14020B8D8, stub_fopen);
    nc_redirect(0x14020B9E8, stub_fclose);
    READ_SLOT = (uintptr_t)stub_read;
    nc_save(&BLOCK_REGION - 16, 16 + 0x74 + MESH_GROUP_STRIDE * MESH_GROUPS + 16);
    nc_save(&BLOCK_REGION + LIGHTS_BASE_OFFSET - 16, 16 + LIGHT_STRIDE * LIGHTS + 16);

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
        /* The stub fills the version and count words (see stub_read), so
           every case runs to completion and the comparison checks the exact
           read pattern both builds make. */

        nc_line("case %d version %d fails %d", n, version_for_case, open_fails);
        block_sbl_load("testblock");
        nc_line("reads %d size %d count %d", reads, read_size, read_count);
    }
    return 0;
}
