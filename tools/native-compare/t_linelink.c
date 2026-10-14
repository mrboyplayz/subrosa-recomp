/* Sharing a computer screen line (src/engine/item_text.c,
   computer_line_link) against the original (0x140050F90): kept when its
   record still matches, otherwise a new record, registered as the item's
   link (0x1400C3BA0, ported, runs in both). */
#include "peload.h"
#ifdef ENGINE
MS unsigned int computer_line_link(int item, int line);
#endif
#define G(type, addr) (*(type *)D(addr))
static uint8_t *items, *texts;
static uint32_t random_state = 11223u;
static uint32_t rnd(void) { random_state = random_state * 1664525u + 1013904223u; return random_state >> 3; }
static void put(void *p, int off, uint32_t v) { memcpy((uint8_t *)p + off, &v, 4); }
static uint64_t hash(const void *p, size_t n) {
    const uint8_t *b = p; uint64_t h = 14695981039346656037ULL;
    for (size_t k = 0; k < n; k++) h = (h ^ b[k]) * 1099511628211ULL;
    return h;
}
#define RECORD(k) (texts + (size_t)(k) * 0x9C)
int main(int argc, char **argv) {
    init_image(argc, argv); setvbuf(stdout, NULL, _IOFBF, 1 << 20);
    items = &G(uint8_t, 0x182BBB180ULL); texts = &G(uint8_t, 0x1857BD740ULL);
    static const int ids[] = {0, 39, 1023};
    int cases = argc > 3 ? atoi(argv[3]) : 20000;
    int full = 0;
    for (int c = 0; c < cases; c++) {
        int i = ids[rnd() % 3], line = rnd() % 8 == 0 ? 32 + (int)(rnd() % 4) : (int)(rnd() % 32);
        uint8_t *p = items + (size_t)i * 0x1B80;
        for (int k = 0; k < 0x1B80; k += 4) put(p, k, rnd());
        for (int k = 0; k < 64; k++) put(p, 0x178 + 4 * k, rnd() % 40);
        /* The line: text of some length (sometimes none within 64), and colours. */
        uint8_t *text = p + 0x374 + 64 * line, *colors = text + 0x800;
        int length = (int)(rnd() % 80);
        for (int n = 0; n < 64; n++) { text[n] = (uint8_t)(1 + rnd() % 255); colors[n] = (uint8_t)(rnd() % 4 == 0 ? 0 : rnd()); }
        if (length < 64) text[length] = 0;
        /* Records 0..39: random, the line's own sometimes an exact copy. */
        for (int k = 0; k < 40; k++) for (int b = 0; b < 0x9C; b += 4) put(RECORD(k), b, rnd());
        int own = *(int32_t *)(p + 0x178 + 4 * line);
        if (rnd() % 2) {
            int n = length < 63 ? length : 63, kind = (int)(rnd() % 4);
            put(RECORD(own), 0x18, n);
            memcpy(RECORD(own) + 0x1C, text, 64); memcpy(RECORD(own) + 0x5C, colors, 64);
            if (kind == 1 && n > 0) RECORD(own)[0x1C + rnd() % n] ^= 1;   /* one character differs */
            if (kind == 2 && n > 0) RECORD(own)[0x5C + rnd() % n] ^= 1;   /* one colour differs */
            if (kind == 3) put(RECORD(own), 0x18, n + 1);
        }
        /* The first free record: after a few in use, or none at all. */
        int busy = (int)(rnd() % 50);
        if (c % 997 == 5) { for (int k = 0; k < 16384; k++) put(RECORD(k), 0, 1); full = 1; }
        else if (c % 997 == 6 || c % 997 == 7) {
            /* Only record 5000 is free, and the line has no record to give
               back: the search must go all the way. */
            for (int k = 0; k < 16384; k++) put(RECORD(k), 0, k != 5000);
            full = 1;
            put(p, 0x170 + 4 * (line >> 5), *(uint32_t *)(p + 0x170 + 4 * (line >> 5)) & ~(1u << (line & 31)));
        }
        else {
            if (full) { for (int k = 40; k < 16384; k++) put(RECORD(k), 0, 0); full = 0; }
            for (int k = 0; k < 50; k++) put(RECORD(k), 0, k < busy ? 1 + (rnd() % 3 == 0) : 0);
            put(RECORD(busy), 0, 0);
        }
        G(int32_t, 0x1AD04ADA0ULL) = (int)(rnd() % 4) - 1;
        G(uint32_t, 0x183EBFD34ULL) = rnd();
        printf("link %d item=%d line=%d length=%d", c, i, line, length);
#ifdef ENGINE
        unsigned int r = computer_line_link(i, line);
#else
        unsigned int r = (unsigned int)((MS long long (*)(int, int))F(0x140050F90ULL))(i, line);
#endif
        printf(" -> %u item=%016llx records=%016llx", r, (unsigned long long)hash(p, 0x1B80), (unsigned long long)hash(texts, 60 * 0x9C));
        if (r < 16384) printf(" new=%016llx", (unsigned long long)hash(RECORD(r), 0x9C));
        printf("\n");
    }
    fprintf(stderr, "[%s] %d cases\n", img_name, cases); return 0;
}
