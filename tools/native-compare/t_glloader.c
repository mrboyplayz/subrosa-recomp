// NC_WRAPPERS: 1400E3B90 1400E3BC0 1400E3EE0 1400E3FD0 1400E4030 1400E40E0 1400E4190 1400E42E0 1400E48D0 1400E4950 1400E4EB0 1400E4FC0 1400E5110
/* The OpenGL function loaders: each checks its version flag as a dword and,
 * when set, asks the resolver for its functions in order and stores each
 * result in the function's slot. The resolver here is a recording stub that
 * returns a value per name (zero for some), so the order of the requests and
 * every slot written are compared. The flags take 0, 1, a value whose low
 * byte is zero (a byte test would miss it) and the sign bit. */
#include <string.h>
#include "nc.h"

typedef long long (*Resolver)(const char *);

#ifdef NC_NATIVE
#define LOADER(address) ((long long (*)(Resolver))NC_ADDR(address))
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400E3B90(Resolver);
void sub_1400E3BC0(Resolver), sub_1400E3EE0(Resolver), sub_1400E3FD0(Resolver), sub_1400E4030(Resolver),
     sub_1400E40E0(Resolver), sub_1400E4190(Resolver), sub_1400E42E0(Resolver), sub_1400E48D0(Resolver),
     sub_1400E4950(Resolver), sub_1400E4EB0(Resolver), sub_1400E4FC0(Resolver), sub_1400E5110(Resolver);
#else
#include "gl_loader.h"
#endif

static long long calls, order_hash;
static uint64_t current_case;

static long long resolver(const char *name)
{
    uint64_t h = nc_hash(name, strlen(name) + 1);
    calls++;
    order_hash = order_hash * 1000003 + (long long)(h & 0xFFFFFFF);
    if ((h ^ current_case) % 5 == 0)
        return 0;
    return (long long)(0x7E0000000000ULL + ((h ^ (current_case * 0x9E3779B97F4A7C15ULL)) & 0xFFFFFFFFFFF8ULL));
}

/* The state each loader can touch: GL 1.0 slots and flags, the 1.1 slots,
 * the slot region of the later versions, and the 1.0 slots in the state
 * region. */
static const struct { uint64_t start, size; } ranges[] = {
    {0x140302F40, 0xC0}, {0x140404000, 0xA70}, {0x144980CB0, 0xE0},
};

int main(void)
{
    static const uint32_t flag_values[] = {0, 1, 0x100, 0x80000000u, 2, 0xFF00, 0};
    static const struct { uint64_t address, flag; } loaders[] = {
        {0x1400E3B90, 0x14040488C}, {0x1400E3BC0, 0x144980CB0}, {0x1400E3EE0, 0x140302FF0},
        {0x1400E3FD0, 0x140302FF4}, {0x1400E4030, 0x140404090}, {0x1400E40E0, 0x140404094},
        {0x1400E4190, 0x140404128}, {0x1400E42E0, 0x14040412C}, {0x1400E48D0, 0x1404044B0},
        {0x1400E4950, 0x1404044B4}, {0x1400E4EB0, 0x140404788}, {0x1400E4FC0, 0x14040478C},
        {0x1400E5110, 0x140404888},
    };
    nc_map_image();
    for (size_t i = 0; i < sizeof ranges / sizeof ranges[0]; i++)
        nc_save(NC_ADDR(ranges[i].start), ranges[i].size);
    for (int n = 0; n < nc_cases(500); n++) {
        for (size_t l = 0; l < sizeof loaders / sizeof loaders[0]; l++) {
            nc_seed((uint64_t)n * 31 + l);
            nc_restore();
            current_case = (uint64_t)n * 131 + l;
            /* The slots start non-zero, so a store of zero is seen. */
            for (size_t i = 0; i < sizeof ranges / sizeof ranges[0]; i++)
                for (uint64_t o = 0; o + 8 <= ranges[i].size; o += 8)
                    *(uint64_t *)NC_ADDR(ranges[i].start + o) = 0xA5A5000000000000ULL + o;
            /* Every flag gets a value so a loader that checks the wrong one shows. */
            for (size_t k = 0; k < sizeof loaders / sizeof loaders[0]; k++)
                *(uint32_t *)NC_ADDR(loaders[k].flag) = flag_values[nc_rand_below(7)];
            if (n % 3 == 0)
                *(uint32_t *)NC_ADDR(loaders[l].flag) = flag_values[n / 3 % 7];
            calls = 0;
            order_hash = 0;
            long long result;
#ifdef NC_NATIVE
            result = LOADER(loaders[l].address)(resolver);
#elif defined(NC_CLIENT_WRAPPERS)
            switch (l) {
            case 0: result = sub_1400E3B90(resolver); break;
            case 1: sub_1400E3BC0(resolver); result = 0; break;
            case 2: sub_1400E3EE0(resolver); result = 0; break;
            case 3: sub_1400E3FD0(resolver); result = 0; break;
            case 4: sub_1400E4030(resolver); result = 0; break;
            case 5: sub_1400E40E0(resolver); result = 0; break;
            case 6: sub_1400E4190(resolver); result = 0; break;
            case 7: sub_1400E42E0(resolver); result = 0; break;
            case 8: sub_1400E48D0(resolver); result = 0; break;
            case 9: sub_1400E4950(resolver); result = 0; break;
            case 10: sub_1400E4EB0(resolver); result = 0; break;
            case 11: sub_1400E4FC0(resolver); result = 0; break;
            default: sub_1400E5110(resolver); result = 0; break;
            }
#else
            switch (l) {
            case 0: result = gl_load_clip_control(resolver); break;
            case 1: gl_load_1_0(resolver); result = 0; break;
            case 2: gl_load_1_1(resolver); result = 0; break;
            case 3: gl_load_1_2(resolver); result = 0; break;
            case 4: gl_load_1_3(resolver); result = 0; break;
            case 5: gl_load_1_4(resolver); result = 0; break;
            case 6: gl_load_1_5(resolver); result = 0; break;
            case 7: gl_load_2_0(resolver); result = 0; break;
            case 8: gl_load_2_1(resolver); result = 0; break;
            case 9: gl_load_3_0(resolver); result = 0; break;
            case 10: gl_load_3_1(resolver); result = 0; break;
            case 11: gl_load_3_2(resolver); result = 0; break;
            default: gl_load_3_3(resolver); result = 0; break;
            }
#endif
            uint64_t h = 0;
            for (size_t i = 0; i < sizeof ranges / sizeof ranges[0]; i++)
                h = h * 31 + nc_hash(NC_ADDR(ranges[i].start), ranges[i].size);
            /* Only the clip-control loader returns a value; it is the resolver
               itself (a pointer into the test) when the flag is clear, so
               compare whether it is. */
            nc_line("n%d loader %zu flag %08x calls %lld order %016llx state %016llx result %s", n, l,
                    *(uint32_t *)NC_ADDR(loaders[l].flag), calls, (unsigned long long)order_hash,
                    (unsigned long long)h,
                    l == 0 ? (result == (long long)(uintptr_t)resolver ? "resolver" : "value") : "-");
        }
    }
    return 0;
}
