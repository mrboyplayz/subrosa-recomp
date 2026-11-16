// NC_WRAPPERS: 1400C8AD0 1400C8BA0
/* Token scanners 0x1400C8AD0 / 0x1400C8BA0.
 *
 * The scanners are driven over garbage strings: leading punctuation, tokens
 * that start in the middle, every character-range edge ('a'-1, 'a', 'z',
 * 'z'+1, 'A'-1, 'A', 'Z', 'Z'+1, '0'-1, '0', '9', '9'+1), '.' in and out of
 * a token, embedded NULs, and cursors at every position from 0 past the 62
 * bound — the bound itself, both as the starting cursor and as the point a
 * scan stops at. Both the returned flag, the produced text and the cursor
 * are compared, as is the whole output buffer, so the terminator is checked
 * too (it is written even when nothing was copied). */
#include <string.h>
#include <xmmintrin.h>
#include "nc.h"
#include "recovery_0c0000.h"

#ifdef NC_NATIVE
#define scan_with_dot(out, src, cursor) \
    ((long long (*)(unsigned char *, long long, int *))NC_ADDR(0x1400C8AD0))((out), (long long)(src), (cursor))
#define scan_without_dot(out, src, cursor) \
    ((long long (*)(unsigned char *, long long, int *))NC_ADDR(0x1400C8BA0))((out), (long long)(src), (cursor))
#elif defined(NC_CLIENT_WRAPPERS)
/* The client keeps the decompiler's signatures (_BYTE * / __int64); the
 * argument passing is the same, so plain C types declare them here. */
long long sub_1400C8AD0(unsigned char *, long long, int *);
long long sub_1400C8BA0(unsigned char *, long long, int *);
#define scan_with_dot(out, src, cursor) sub_1400C8AD0((out), (long long)(src), (cursor))
#define scan_without_dot(out, src, cursor) sub_1400C8BA0((out), (long long)(src), (cursor))
#else
#define scan_with_dot(out, src, cursor) recovery_scan_token((out), (const uint8_t *)(src), (cursor))
#define scan_without_dot(out, src, cursor) recovery_scan_token_no_dot((out), (const uint8_t *)(src), (cursor))
#endif

/* Source buffers. The original reads at most 62 bytes from the cursor, and
 * it reads byte 62 of the buffer when the skip loop ends exactly on the
 * bound, so every buffer is filled past that with non-zero bytes. */
#define FIELD 96

static const unsigned char edges[] = {
    0x00, 0x01, 0x2C, 0x2D, 0x2E, 0x2F, 0x20, 0x40, 0x5B, 0x5E, 0x5F, 0x60, 0x61, 0x62, 0x79, 0x7A, 0x7B,
    0x7F, 0x80, 0xFF, 0x2F, 0x39, 0x3A, 0x30, 0x41, 0x5A, 0x2E, 0x2E
};

static void run_scan_case(int n, int with_dot)
{
    unsigned char source[FIELD];
    unsigned char out[FIELD];
    unsigned char expected_out[FIELD];
    int cursor, expected_cursor;
    int seed_cursor;
    int i;
    __int64 result;

    nc_seed((uint64_t)n * 2 + (uint64_t)with_dot);
    for (i = 0; i < FIELD; i++)
        source[i] = (unsigned char)(0x21 + (nc_rand_below(0x60)));
    /* Garbage before the token: the scanner must skip it. */
    for (i = 0; i < (int)nc_rand_below(4) && i < FIELD; i++)
        source[i] = edges[nc_rand_below(sizeof edges / sizeof edges[0])];
    /* A token body of characters near the range edges. */
    for (i = 2; i < FIELD - 1 && i < 2 + (int)nc_rand_below(70); i++)
        source[i] = edges[nc_rand_below(sizeof edges / sizeof edges[0])];
    /* Embedded NULs, and one guaranteed at a random late position. */
    for (i = 0; i < FIELD; i++)
        if (nc_chance(3))
            source[i] = 0;
    source[nc_rand_below(FIELD - 1)] = 0;
    /* A plain alnum run as well, so the copy loop is entered often. */
    if (nc_chance(40)) {
        int start = (int)nc_rand_below(8);
        for (i = 0; i < 70 && start + i < FIELD; i++)
            source[start + i] = (unsigned char)("abcXYZ019"[nc_rand_below(9)]);
    }

    /* Cursor start: 0, just below the bound, the bound, past it, and anywhere. */
    switch (n % 5) {
    case 0: seed_cursor = 0; break;
    case 1: seed_cursor = 61; break;
    case 2: seed_cursor = 62; break;
    case 3: seed_cursor = 63 + (int)nc_rand_below(20); break;
    default: seed_cursor = (int)nc_rand_below(66); break;
    }

    for (i = 0; i < FIELD; i++)
        out[i] = (unsigned char)(0xA0 + i % 16);
    memcpy(expected_out, out, FIELD);
    expected_cursor = seed_cursor;
    cursor = seed_cursor;
    if (with_dot)
        result = scan_with_dot(out, source, &cursor);
    else
        result = scan_without_dot(out, source, &cursor);

    nc_line("scan%s n%d start %d", with_dot ? "dot" : "plain", n, seed_cursor);
    nc_bytes("  src", source, FIELD);
    nc_line("  -> %d cursor %d", (int)result, cursor);
    nc_bytes("  out", out, FIELD);
    (void)expected_out;
    (void)expected_cursor;
}

/* Noise cases land in a later commit; the scanners are the whole suite
 * for now. */

int main(void)
{
    nc_map_image();
    int cases = nc_cases(600);
    for (int n = 0; n < cases; n++) {
        nc_seed((uint64_t)n * 7 + 3);
        run_scan_case(n, 1);
        run_scan_case(n, 0);
    }
    return 0;
}
