/* The computer's cipher screen (src/engine/items/computer.c,
   computer_draw_cipher) against the original (0x1400C5750), with the
   letter list (0x1400C5360) and the line links it shares (0x140050F90),
   all ported and run in both images. */
#include "peload.h"
#ifdef ENGINE
MS void computer_draw_cipher(int item);
#endif
#define G(type, addr) (*(type *)D(addr))
static uint8_t *items;
static uint32_t random_state = 97531u;
static uint32_t rnd(void) { random_state = random_state * 1664525u + 1013904223u; return random_state >> 3; }
static void put(void *p, int off, uint32_t v) { memcpy((uint8_t *)p + off, &v, 4); }
static uint64_t hash(const void *p, size_t n) {
    const uint8_t *b = p; uint64_t h = 14695981039346656037ULL;
    for (size_t k = 0; k < n; k++) h = (h ^ b[k]) * 1099511628211ULL;
    return h;
}
int main(int argc, char **argv) {
    init_image(argc, argv); setvbuf(stdout, NULL, _IOFBF, 1 << 20);
    items = &G(uint8_t, 0x182BBB180ULL);
    /* The line link (0x140050F90) and the letter list (0x1400C5360) are ported and run in both. */
    static const int ids[] = {0, 39, 1023};
    int cases = argc > 3 ? atoi(argv[3]) : 20000;
    for (int c = 0; c < cases; c++) {
        int i = ids[rnd() % 3];
        uint8_t *p = items + (size_t)i * 0x1B80;
        for (int k = 0; k < 0x1B80; k += 4) put(p, k, rnd());
        /* Five lines of text: capitals, other bytes (spaces, lower case,
           high bytes), ending anywhere or not at all within 62. */
        for (int row = 0; row < 5; row++) {
            uint8_t *t = p + 0x1660 + 64 * row;
            int length = (int)(rnd() % 70);
            for (int n = 0; n < 64; n++) {
                unsigned kind = rnd() % 8;
                t[n] = kind < 5 ? (uint8_t)('A' + rnd() % 26) : kind == 5 ? ' ' : kind == 6 ? (uint8_t)(rnd() % 256) : (uint8_t)('@' + rnd() % 3 * 27);
                if (n == length) t[n] = 0;
            }
        }
        for (int k = 0; k < 26; k++) put(p, 0x1868 + 4 * k, rnd() % 9 == 0 ? rnd() % 300 : rnd() % 32);
        for (int k = 0; k < 32; k++) put(p, 0x19E8 + 4 * k, rnd() % 3 == 0 ? UINT32_MAX : rnd() % 4 == 0 ? rnd() % 256 : rnd() % 26);
        { static const int32_t counts[] = {0, 1, 9, 10, 11, 99, 100, 255, 256, -1, -10, -11, 1000}; for (int k = 0; k < 26; k++) put(p, 0x1968 + 4 * k, counts[rnd() % 13]); }
        put(p, 0x1A68, rnd() % 4 == 0 ? UINT32_MAX : rnd() % 32);
        for (int k = 0; k < 64; k++) put(p, 0x178 + 4 * k, rnd() % 64);   /* line links: shared text records */
        printf("cipher %d item=%d", c, i);
#ifdef ENGINE
        computer_draw_cipher(i);
#else
        ((MS long long (*)(int))F(0x1400C5750ULL))(i);
#endif
        printf(" item=%016llx texts=%016llx\n", (unsigned long long)hash(p, 0x1B80), (unsigned long long)hash(&G(uint8_t, 0x1857BD740ULL), 80 * 0x9C));
    }
    fprintf(stderr, "[%s] %d cases\n", img_name, cases); return 0;
}
