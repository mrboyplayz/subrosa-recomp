// NC_WRAPPERS: 1400EC410
#include <limits.h>
#include <string.h>
#include "nc.h"
#include "round_settings.h"
#include "text_parser.h"

#ifdef NC_NATIVE
#define settings_file ((double (*)(int))NC_ADDR(0x1400EC410))
#elif defined(NC_CLIENT_WRAPPERS)
double sub_1400EC410(int);
#define settings_file sub_1400EC410
#else
#define settings_file round_settings_file
#endif

/* File access, the loader and the number reader are recording stubs in both
   builds; the key search is the routine's own (inlined in the original,
   parser_skip_to_token in the port). */
static int open_fails;
static long long fake_file;
static unsigned char text[320];
static int32_t text_length, start_position;

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

static long long stub_fprintf(long long file, char *format, char *key, int value)
{
    nc_line("fprintf %016llx %d", (unsigned long long)file, value);
    print_escaped("format", format);
    print_escaped("key", key);
    return 0;
}

static void stub_load(char *name)
{
    print_escaped("load", name);
    int32_t n = text_length > 0 ? text_length : 0;
    memcpy(parser_scan->data, text, (size_t)n);
    parser_scan->data[n] = 0;
    parser_scan->length = text_length;
    parser_scan->position = start_position;
}

static const int32_t edges[] = {0, 1, -1, 2, 59, 60, 61, 199, 200, 201, 250, 4000, INT_MIN, INT_MAX};

static int32_t edge_or_random(void)
{
    return nc_chance(60) ? edges[nc_rand_below(sizeof(edges) / sizeof(edges[0]))] : (int32_t)nc_rand();
}

static long long stub_number(void)
{
    int32_t position = parser_scan->position;
    nc_line("number at %d of %d", position, parser_scan->length);
    /* The real reader moves past the digits; later keys restart from 0. */
    parser_scan->position = position + (int32_t)nc_rand_below(5);
    return (long long)((nc_rand() & 0xffffffff00000000ULL) | (uint32_t)edge_or_random());
}

static const char *const keys[] = {"roundtime=", "startcash=", "weekly=", "bonusratio=", "teamdamage="};

/* Config text from whole keys, keys cut short or misspelled, digits, line
   ends, NUL bytes and noise. The length may stop inside or right after a
   key, so a key that ends exactly at the end is not read. */
static void make_text(void)
{
    size_t n = 0;
    int pieces = (int)nc_rand_below(12);
    while (pieces-- > 0 && n < 240) {
        const char *key = keys[nc_rand_below(5)];
        size_t len = strlen(key);
        switch (nc_rand_below(8)) {
        case 0: case 1: case 2:
            memcpy(text + n, key, len); n += len; break;
        case 3:  /* cut short */
            len = nc_rand_below((uint32_t)len); memcpy(text + n, key, len); n += len; break;
        case 4:  /* one byte changed */
            memcpy(text + n, key, len); text[n + nc_rand_below((uint32_t)len)] ^= 0x20; n += len; break;
        case 5: {
            int d = 1 + (int)nc_rand_below(6);
            if (nc_chance(30)) text[n++] = '-';
            while (d--) text[n++] = (unsigned char)('0' + nc_rand_below(10));
            break;
        }
        case 6:
            text[n++] = '\r'; text[n++] = '\n'; break;
        default: {
            int d = 1 + (int)nc_rand_below(4);
            while (d--) text[n++] = nc_chance(15) ? 0 : (unsigned char)nc_rand();
            break;
        }
        }
    }
    text_length = (int32_t)n;
    if (nc_chance(15) && n)
        text_length = (int32_t)nc_rand_below((uint32_t)n);   /* stop inside the text */
    if (nc_chance(3))
        text_length = -(int32_t)nc_rand_below(4);            /* empty or negative */
    start_position = 0;
    if (nc_chance(20))
        start_position = (int32_t)nc_rand_below((uint32_t)(n + 6)) - 3;
}

int main(void)
{
    /* The settings plus neighbours on both sides, and the parser window. */
    unsigned char *around = (unsigned char *)round_settings - 16;
    nc_map_image();
    nc_redirect(0x14020B8D8, stub_fopen);
    nc_redirect(0x14020B9E8, stub_fclose);
    nc_redirect(0x1400920F0, stub_fprintf);
    nc_redirect(0x1400ED940, stub_load);
    nc_redirect(0x1400A3D70, stub_number);
    nc_save(around, 16 + sizeof(RoundSettings) + 16);
    nc_save(parser_scan, 8 + sizeof(text) + 1);

    nc_line("defaults %08x %08x %08x %08x",
            (uint32_t)SR_GLOBAL(int32_t, 0x140278EC0ULL), (uint32_t)SR_GLOBAL(int32_t, 0x140278EC4ULL),
            (uint32_t)SR_GLOBAL(int32_t, 0x140278EC8ULL), (uint32_t)SR_GLOBAL(int32_t, 0x140278ECCULL));
    for (int n = 0; n < nc_cases(4096); ++n) {
        nc_restore();
        nc_seed((uint64_t)n);
        for (size_t i = 0; i < 16; ++i) {
            around[i] = (unsigned char)nc_rand();
            around[16 + sizeof(RoundSettings) + i] = (unsigned char)nc_rand();
        }
        RoundSettings *s = round_settings;
        s->round_minutes = edge_or_random();
        s->start_cash = edge_or_random();
        s->weekly = edge_or_random();
        s->bonus_ratio = edge_or_random();
        s->team_damage = edge_or_random();
        parser_scan->position = (int32_t)nc_rand();
        parser_scan->length = (int32_t)nc_rand();
        int save = nc_chance(40);
        open_fails = save && nc_chance(25);
        fake_file = (long long)(nc_rand() | 1);
        make_text();

        nc_line("case %d save %d fails %d", n, save, open_fails);
        settings_file(save);
        nc_line("settings %d %d %d %d %d cursor %d length %d around %016llx", s->round_minutes, s->start_cash,
                s->weekly, s->bonus_ratio, s->team_damage, parser_scan->position, parser_scan->length,
                (unsigned long long)nc_hash(around, 16 + sizeof(RoundSettings) + 16));
    }
    return 0;
}
