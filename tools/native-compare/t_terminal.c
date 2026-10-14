/* The computer terminal's new line (src/engine/items/computer.c,
   computer_new_line) against the original (0x1400C3E00), with the line link
   it shares (0x140050F90, ported) run in both images. */
#include "peload.h"
#ifdef ENGINE
MS void computer_new_line(int item);
#endif
#define G(type, addr) (*(type *)D(addr))
static uint8_t *items;
static uint32_t random_state = 31415u;
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
    static const int ids[] = {0, 39, 1023};
    int cases = argc > 3 ? atoi(argv[3]) : 20000;
    for (int c = 0; c < cases; c++) {
        int i = ids[rnd() % 3];
        uint8_t *p = items + (size_t)i * 0x1B80;
        for (int k = 0; k < 0x1B80; k += 4) put(p, k, rnd());
        int line = (int)(rnd() % 32);
        put(p, 0x368, line);
        /* The top line: where the scroll happens, or anywhere (out of range too). */
        unsigned kind = rnd() % 4;
        put(p, 0x36C, kind == 0 ? (uint32_t)((line + 10) & 31) : kind == 1 ? (uint32_t)((line + 9) & 31) : kind == 2 ? rnd() % 32 : rnd());
        for (int k = 0; k < 64; k++) put(p, 0x178 + 4 * k, rnd() % 64);   /* line links */
        uint8_t *text = p + 0x374 + 64 * line;
        int length = (int)(rnd() % 70);
        if (length < 64) text[length] = 0;
        G(int32_t, 0x18329B1E0ULL + 4ULL * (uint64_t)i) = (int)rnd();
        G(uint32_t, 0x183EBFD34ULL) = rnd();
        printf("newline %d item=%d line=%d", c, i, line);
#ifdef ENGINE
        computer_new_line(i);
#else
        ((MS long long (*)(int))F(0x1400C3E00ULL))(i);
#endif
        printf(" item=%016llx changes=%d texts=%016llx\n", (unsigned long long)hash(p, 0x1B80),
               G(int32_t, 0x18329B1E0ULL + 4ULL * (uint64_t)i), (unsigned long long)hash(&G(uint8_t, 0x1857BD740ULL), 80 * 0x9C));
    }
    fprintf(stderr, "[%s] %d cases\n", img_name, cases); return 0;
}
