/* The computer's snake game (src/engine/items/computer_snake.c) against the
   original (0x1400C9820), with its screen (0x1400C8E10) and the line links
   it shares, ported and run in both images. Starting a level (0x1400C92B0)
   is a recording stub. */
#include "peload.h"
#ifdef ENGINE
MS void computer_update_snake(int item);
#endif
#define G(type, addr) (*(type *)D(addr))
static uint8_t *items;
static uint32_t random_state = 86420u;
static uint32_t rnd(void) { random_state = random_state * 1664525u + 1013904223u; return random_state >> 3; }
static void put(void *p, int off, uint32_t v) { memcpy((uint8_t *)p + off, &v, 4); }
static uint64_t hash(const void *p, size_t n) {
    const uint8_t *b = p; uint64_t h = 14695981039346656037ULL;
    for (size_t k = 0; k < n; k++) h = (h ^ b[k]) * 1099511628211ULL;
    return h;
}
static uint32_t rand_state; static int rand_stuck;   /* rand always 0: a second food lands on the first, up to 512 times */
static MS int s_rand(void) { rand_state = rand_state * 1103515245u + 12345u; int r = rand_stuck ? 0 : (int)((rand_state >> 16) & 0x7FFF); printf(" rand=%d", r); return r; }
/* The original's sprintf (0x140158AB0) needs a started C runtime, so both
   processes route it to the host's (as t_text.c does). The screen passes at
   most two ints. */
static MS void h_sprintf(char *buffer, const char *format, int a, int b) {
    if (strchr(format, '%')) printf(" sprintf(\"%s\",%d,%d)", format, a, b);   /* unused argument registers hold leftovers */
    else printf(" sprintf(\"%s\")", format);
    sprintf(buffer, format, a, b);
}
int main(int argc, char **argv) {
    init_image(argc, argv); setvbuf(stdout, NULL, _IOFBF, 1 << 20);
    items = &G(uint8_t, 0x182BBB180ULL);
    hook(0x14023B1B0ULL, s_rand); hook(0x140158AB0ULL, h_sprintf);   /* level start, screen and line links are ported and run in both */
    static const int ids[] = {0, 39, 1023};
    static const int32_t delays[] = {-1, 0, 1, 1, 1, 2, 5};
    static const int32_t food[] = {-1, 0, 1, 1, 2, 2, 5};
    static const uint8_t cells[] = {0, 0, 0, 0, 2, 3, 4, 4, 1, 9};
    int cases = argc > 3 ? atoi(argv[3]) : 30000;
    for (int c = 0; c < cases; c++) {
        int i = ids[rnd() % 3];
        uint8_t *p = items + (size_t)i * 0x1B80;
        for (int k = 0; k < 0x1B80; k += 4) put(p, k, rnd());
        put(p, 0x1660, rnd() % 4 == 0 ? 0xFFFE + rnd() % 3 : rnd() % 1000);
        put(p, 0x1664, food[rnd() % 7]);
        rand_state = rnd(); rand_stuck = c % 11 == 0;
        put(p, 0x1668, (int)(rnd() % 50) - 5);
        put(p, 0x166C, delays[rnd() % 7]);
        put(p, 0x1670, rnd() % 6 == 0);
        put(p, 0x1674, rnd() % 5);
        put(p, 0x1678, rnd() % 5 == 0 ? rnd() % 200 : rnd() % 64);
        put(p, 0x167C, rnd() % 64);   /* the game keeps it masked; outside 0..63 it reads other fields as cells */
        for (int k = 0; k < 64; k++) {
            int edge = rnd() % 6 == 0;
            put(p, 0x1680 + 8 * k, edge ? (rnd() % 2 ? 0 : 30) : rnd() % 31);
            put(p, 0x1684 + 8 * k, edge ? (rnd() % 2 ? 0 : 21) : rnd() % 22);
        }
        for (int k = 0; k < 22 * 32; k++) p[0x1880 + k] = cells[rnd() % 10];
        for (int k = 0; k < 64; k++) put(p, 0x178 + 4 * k, rnd() % 64);   /* line links */
        printf("snake %d item=%d", c, i);
#ifdef ENGINE
        computer_update_snake(i);
#else
        ((MS void (*)(int))F(0x1400C9820ULL))(i);
#endif
        printf(" item=%016llx texts=%016llx\n", (unsigned long long)hash(p, 0x1B80), (unsigned long long)hash(&G(uint8_t, 0x1857BD740ULL), 80 * 0x9C));
    }
    fprintf(stderr, "[%s] %d cases\n", img_name, cases); return 0;
}
