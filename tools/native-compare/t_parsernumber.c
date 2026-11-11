/* The embedded-text parser over generated buffers: prefix match, token
   search and both number readers at the cursor, set and hashed through the
   same address globals. Number cases always reach an injected number: the
   original's empty-parse result is the target's uninitialized stack, which
   cannot be compared. Each read is recomposed from the scratch the reader
   leaves behind by the original integer parser and sscanf entry, a
   cross-check that holds in both builds only if the port's scan is exact. */
// NC_WRAPPERS: 14003C6F0 140091DF0 140115360 140115410
#include <string.h>
#include <windows.h>
#include "nc.h"
#include "text_parser.h"

#ifdef NC_CLIENT_WRAPPERS
long long sr_parser_token_matches(const void *);
long long sr_parser_skip_to_token(const void *);
long long sr_parser_read_number(void);
long long sr_parser_read_number64(void);
#define entry_matches(t) sr_parser_token_matches(t)
#define entry_skip(t)     sr_parser_skip_to_token(t)
#define entry_number()    sr_parser_read_number()
#define entry_number64()  sr_parser_read_number64()
#elif defined(NC_NATIVE)
#define entry_matches(t)  ((long long (*)(const void *))NC_ADDR(0x14003C6F0))(t)
#define entry_skip(t)     ((long long (*)(const void *))NC_ADDR(0x140091DF0))(t)
#define entry_number()    ((long long (*)(void))NC_ADDR(0x140115360))()
#define entry_number64()  ((long long (*)(void))NC_ADDR(0x140115410))()
#else
#define entry_matches(t)  parser_token_matches(t)
#define entry_skip(t)     parser_skip_to_token(t)
#define entry_number()    parser_read_number()
#define entry_number64()  parser_read_number64()
#endif

static const char fillers[] =
    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.,:;!#$%&()[]<>";

static long long compose_number(void)
{
    return ((long long (*)(long long))NC_ADDR(0x1400A5400))
        ((long long)(uintptr_t)parser_number_text);
}

static long long compose_number64(void)
{
    unsigned long long value = 0;
    ((long long (*)(long long, char *, void *))NC_ADDR(0x14015B070))
        ((long long)(uintptr_t)parser_number_text, "%I64u", &value);
    return (long long)value;
}

static int build_number(unsigned char *out, int op, int budget)
{
    int at = 0;
    if (op == 4) {
        /* %I64u accepts one leading sign; a dash run there would be a
           matching failure and the result would be target garbage. */
        if (nc_chance(40))
            out[at++] = '-';
    } else if (nc_chance(40)) {
        int dashes = 1 + (int)nc_rand_below(3);
        for (int i = 0; i < dashes; i++)
            out[at++] = '-';
    }
    /* 200-380 characters: past the copier's 255 cap for a third of them.
       The 32-bit reader wraps its parse; a 20-digit %I64u would take the
       CRT's range-error path, which needs the real process's runtime
       state, so the 64-bit runs stay inside the unsigned 64-bit range. */
    int digits = 3 + (int)nc_rand_below(12);
    if (op == 4)
        digits = 2 + (int)nc_rand_below(17);
    else if (nc_chance(25) && budget > 220)
        digits = 200 + (int)nc_rand_below(181);
    for (int i = 0; i < digits && at < budget; i++) {
        out[at++] = (unsigned char)('0' + nc_rand_below(10));
        /* a dash inside the run: both readers copy it, the 32-bit parser
           filters it, sscanf stops or (after a leading sign) never starts */
        if (i >= 3 && i + 2 < digits
            && ((op == 3 && nc_chance(15)) || (op == 4 && digits < 30 && nc_chance(10))))
            out[at++] = '-';
    }
    return at;
}

static void run_case(int n)
{
    int op = n % 6;
    nc_seed((uint64_t)n * 977 + op);
    for (int i = 0; i < 512; i++)
        parser_scan->data[i] = (unsigned char)fillers[nc_rand_below(sizeof fillers - 1)];
    int length = op < 2 ? 16 + (int)nc_rand_below(497)
                        : 100 + (int)nc_rand_below(413);
    parser_scan->length = length;

    unsigned char token[16];
    memset(token, 0, sizeof token);
    int token_length = 1 + (int)nc_rand_below(8);
    for (int i = 0; i < token_length; i++)
        token[i] = (unsigned char)fillers[nc_rand_below(sizeof fillers - 1)];
    token[token_length] = 0;
    int place_a = 4 + (int)nc_rand_below(length - 16);
    memcpy(parser_scan->data + place_a, token, token_length);

    if (op == 0 || op == 1) {
        int cursor;
        if (n % 3 == 0) cursor = length;                    /* the closed window */
        else if (n % 5 == 0) cursor = length + 1 + (int)nc_rand_below(4);
        else if (n % 7 == 0) cursor = -(int)nc_rand_below(9);
        else if (n % 11 == 0) cursor = place_a - 1;         /* one byte short */
        else cursor = place_a - (int)nc_rand_below(3);
        parser_scan->position = cursor;
        if (op == 0 && n % 4 == 0) token[0] = 0;            /* the empty token */
        long long result = entry_matches(token);
        nc_line("token %d %d cursor %d result %016llx hash %016llx", n, op,
                parser_scan->position, (unsigned long long)result,
                (unsigned long long)nc_hash(token, sizeof token));
    } else if (op == 2 || op == 5) {
        unsigned char token16[16];
        memcpy(token16, token, token_length + 1);
        if (op == 5) {                                      /* never in the buffer */
            token16[0] = 1; token16[1] = 2; token16[2] = 3; token16[3] = 0;
        }
        int place_b = 8 + (int)nc_rand_below(length - 24);
        if (op == 2 && n % 4 == 0)                           /* ends at the length */
            place_b = length - token_length;
        if (op == 2)
            memcpy(parser_scan->data + place_b, token16, strlen((const char *)token16));
        int cursor = n % 3 == 0 ? length
                                : place_b - (int)nc_rand_below(n % 5 == 0 ? 40 : 8);
        parser_scan->position = cursor;
        long long result = entry_skip(token16);
        nc_line("skip %d %d cursor %d found %lld hash %016llx", n, op,
                parser_scan->position, (long long)result,
                (unsigned long long)nc_hash(parser_scan->data, 512));
    } else {
        unsigned char number[512];
        int number_length = build_number(number, op, length - 12);
        int number_at = 4 + (int)nc_rand_below(length - number_length - 8);
        memcpy(parser_scan->data + number_at, number, number_length);
        int cursor = number_at - (int)nc_rand_below(8);
        if (n % 9 == 0) cursor = -(int)nc_rand_below(4);    /* reads the length word's zero bytes */
        parser_scan->position = cursor;
        long long result = op == 3 ? entry_number() : entry_number64();
        long long composed = op == 3 ? compose_number() : compose_number64();
        nc_line("read %d %d cursor %d result %016llx scratch %016llx compose %016llx same %d",
                n, op, parser_scan->position, (unsigned long long)result,
                (unsigned long long)nc_hash(parser_number_text, 256),
                (unsigned long long)composed, result == composed);
    }
}

int main(void)
{
    /* The original CRT sscanf the number readers execute (its integer
       parser and the compose calls) reaches kernel32 imports. */
    nc_bind_import("KERNEL32.dll", "GetLastError", GetLastError);
    nc_map_image();
    for (int n = 0; n < nc_cases(2000); n++)
        run_case(n);
    return 0;
}
