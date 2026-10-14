/* Three routines the items use, against the original: bullet creation
   (src/engine/bullets.c, 0x14004E8A0), the item-info event (events.c,
   0x140051940) and an item worn on the body following its holder
   (item_tick.c, 0x1401380F0), and the grenade blast (items/grenade.c,
   0x1400A70B0). */
#include "peload.h"
#include <xmmintrin.h>
#ifdef ENGINE
MS unsigned int bullet_create(int type, const float *position, const float *velocity, int player);
MS void event_update_item_info(int item);
MS void item_follow_holder(int item, int human);
MS void grenade_explode(int item);
#endif
#define G(type, addr) (*(type *)D(addr))
static uint8_t *items, *humans, *bodies, *vehicles, *events, *bullets, *bullet_types, *changes;
static uint32_t random_state = 24680u;
static uint32_t rnd(void) { random_state = random_state * 1664525u + 1013904223u; return random_state >> 3; }
static float value(void) { return ((int)(rnd() % 65536) - 32768) / 4096.0f; }
static void put(void *p, int off, uint32_t v) { memcpy((uint8_t *)p + off, &v, 4); }
static void putf(void *p, int off, float v) { memcpy((uint8_t *)p + off, &v, 4); }
static uint64_t hash(const void *p, size_t n) {
    const uint8_t *b = p; uint64_t h = 14695981039346656037ULL;
    for (size_t k = 0; k < n; k++) h = (h ^ b[k]) * 1099511628211ULL;
    return h;
}
static void words(const void *p, int n) {
    for (int k = 0; k < n; k++) {
        uint32_t v; memcpy(&v, (const uint8_t *)p + 4 * k, 4);
        if ((v & 0x7f800000u) == 0x7f800000u && (v & 0x7fffffu)) v = 0x7fc00000u;
        printf(" %08x", v);
    }
}

/* A flight whose direction normalizes (by the original's normalize,
   0x14007A240, in both images) to exactly 0.707 upward: the threshold
   between the two axes the bullet's frame is built from. */
static float steep_x;
static void find_steep_flight(void) {
    float x = 0.70721f, v[3], out[3];
    for (int k = 0; k < 2000; k++) {
        v[0] = x; v[1] = 0.707f; v[2] = 0.0f;
        ((MS void (*)(float *, const float *))F(0x14007A240ULL))(out, v);
        if (out[1] == 0.707f) { steep_x = x; return; }
        x = nextafterf(x, k % 2 ? 1.0f : 0.0f);
        if (k % 2) x = nextafterf(x, 1.0f);
    }
    fprintf(stderr, "no flight normalizes to 0.707\n"); exit(3);
}

static void bullet_cases(int cases) {
    find_steep_flight();
    static const int32_t counts[] = {0, 1, 7, 100, 0x3FFF, 0x4000, 0x4001, -1};
    for (int c = 0; c < cases; c++) {
        int32_t count = counts[c % 8 == 7 ? rnd() % 8 : rnd() % 4];
        G(int32_t, 0x1A8E379D4ULL) = count;
        G(int32_t, 0x183E93530ULL) = (int)rnd();
        int slot = count >= 0 && count < 0x4000 ? count : 0;
        for (int k = 0; k < 0x5C; k += 4) put(bullets + slot * 0x5C, k, rnd());
        for (int b = 0; b < 8; b++) putf(bullet_types + b * 0x18, 0, value());
        /* The world's axes are writable data the original reads each time. */
        static const uint64_t axes[6] = {0x1402F6178ULL, 0x1402F617CULL, 0x1402F6180ULL, 0x1402F6188ULL, 0x1402F618CULL, 0x1402F6190ULL};
        static const float unit[6] = {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f};
        for (int k = 0; k < 6; k++) G(float, axes[k]) = c % 3 == 0 ? value() : unit[k];
        float pos[3], vel[3];
        for (int k = 0; k < 3; k++) { pos[k] = value(); vel[k] = value(); }
        switch (c % 9) {                 /* steep, flat, zero and odd flights */
        case 1: vel[0] = 0.0f; vel[2] = 0.0f; break;
        case 2: vel[1] = 0.0f; break;
        case 3: vel[0] = vel[1] = vel[2] = 0.0f; break;
        case 4: vel[1] = vel[0] * 0.70710677f; vel[2] = 0.0f; break;
        case 5: put(vel, 4 * (rnd() % 3), 0x7fc00001u); break;
        case 6: vel[1] = 1.0f; vel[0] = 1.0f; vel[2] = 0.0f; break;
        case 7: vel[0] = -steep_x; vel[1] = -0.707f; vel[2] = 0.0f; break;
        case 8: vel[0] = steep_x; vel[1] = 0.707f; vel[2] = 0.0f; break;
        }
        int type = (int)(rnd() % 8), player = (int)(rnd() % 64) - 1;
        printf("bullet %d count=%d type=%d player=%d pos", c, count, type, player); words(pos, 3); printf(" vel"); words(vel, 3);
        _mm_setcsr(0x1f80);
#ifdef ENGINE
        unsigned int r = bullet_create(type, pos, vel, player);
#else
        unsigned int r = (unsigned int)((MS long long (*)(int, float *, float *, int))F(0x14004E8A0ULL))(type, pos, vel, player);
#endif
        uint32_t csr = _mm_getcsr();
        printf(" -> %u csr=%08x count=%d created=%d record", r, csr, G(int32_t, 0x1A8E379D4ULL), G(int32_t, 0x183E93530ULL));
        words(bullets + slot * 0x5C, 0x5C / 4); printf("\n");
    }
}

static void info_cases(int cases) {
    static const int ids[] = {0, 1, 500, 1023, 1024, -1, 2000};
    for (int c = 0; c < cases; c++) {
        int item = ids[rnd() % 7];
        if (item >= 0 && item < 1024) for (int k = 0; k < 0x1B80; k += 4) put(items + item * 0x1B80, k, rnd());
        G(int32_t, 0x1AD04ADC0ULL) = (int)(rnd() % 3) - 1;
        G(uint32_t, 0x183EBFD34ULL) = rnd();
        G(int32_t, 0x189C1DC64ULL) = c % 13 == 0 ? 65535 : c % 13 == 4 ? 40000 : (int)(rnd() % 8);
        for (int k = 0; k < 8 * 128; k += 4) put(events, k, rnd());
        for (int k = 0; k < 128; k += 4) { put(events + 65535 * 128, k, rnd()); put(events + 40000 * 128, k, rnd()); }
        printf("info %d item=%d", c, item);
#ifdef ENGINE
        event_update_item_info(item);
#else
        ((MS long long (*)(int))F(0x140051940ULL))(item);
#endif
        printf(" count=%d events=%016llx/%016llx/%016llx changes=%016llx\n", G(int32_t, 0x189C1DC64ULL),
               (unsigned long long)hash(events, 8 * 128), (unsigned long long)hash(events + 65535 * 128, 128),
               (unsigned long long)hash(events + 40000 * 128, 128), (unsigned long long)hash(changes, 4096));
    }
}

static void follow_cases(int cases) {
    static const int ids[] = {0, 77, 1023};
    static const int human_ids[] = {0, 31, 255};
    static const int32_t slots[] = {-2, -1, 0, 1, 2, 3, 6};
    for (int c = 0; c < cases; c++) {
        int item = ids[rnd() % 3], human = human_ids[rnd() % 3];
        uint8_t *p = items + item * 0x1B80, *h = humans + (size_t)human * 0x6FF8;
        for (int k = 0; k < 0x1B80; k += 4) put(p, k, rnd());
        for (int k = 0; k < 0x6FF8; k += 4) putf(h, k, value());
        put(p, 0x2C, slots[rnd() % 7]);
        put(p, 0x58, rnd() % 40);
        put(h, 0x28, rnd() % 2 ? UINT32_MAX : rnd() % 4);
        if (rnd() % 17 == 0) put(h, 0x220 + 2 * 0x138 + 0x34 + 4 * (rnd() % 9), 0x7fc00001u);
        for (int b = 0; b < 40; b++) for (int k = 0; k < 0xBC; k += 4) put(bodies + b * 0xBC, k, rnd());
        for (int v = 0; v < 4; v++) for (int k = 0x2C; k < 0x38; k += 4) putf(vehicles + v * 0x5168, k, value());
        int body = *(int32_t *)(p + 0x58);
        printf("follow %d item=%d human=%d", c, item, human); _mm_setcsr(0x1f80);
#ifdef ENGINE
        item_follow_holder(item, human);
#else
        ((MS long long (*)(int, int))F(0x1401380F0ULL))(item, human);
#endif
        uint32_t csr = _mm_getcsr();
        printf(" csr=%08x item=%016llx body=%016llx\n", csr, (unsigned long long)hash(p, 0x1B80), (unsigned long long)hash(bodies + body * 0xBC, 0xBC));
    }
}

/* The grenade blast (items/grenade.c, 0x1400A70B0). Team damage
   (0x14011B7F0) and criminal rating (0x140116D80) are recording stubs; the
   first sometimes changes the grenade's primer, which the original reads
   again after it. */
static int blast_grenade;
static uint32_t blast_case;
static MS long long s_team_damage(int player, int damage) {
    printf(" team-damage(%d,%d)", player, damage);
    if (blast_case % 3 == 0) put(items + blast_grenade * 0x1B80, 0x20, blast_case % 2 ? UINT32_MAX : 5);
    return 0;
}
static MS void s_criminal(int attacker, int victim, int amount) { printf(" criminal(%d,%d,%d)", attacker, victim, amount); }
static void blast_cases(int cases) {
    static const int human_ids[] = {0, 1, 2, 3, 40, 128, 254, 255};
    static const int grenades[] = {5, 600, 1023};
    hook(0x14011B7F0ULL, s_team_damage); hook(0x140116D80ULL, s_criminal);
    memset(humans, 0, 256 * 0x6FF8);
    for (int c = 0; c < cases; c++) {
        blast_case = (uint32_t)c;
        int g = grenades[rnd() % 3]; blast_grenade = g;
        uint8_t *p = items + g * 0x1B80;
        for (int k = 0; k < 0x1B80; k += 4) put(p, k, rnd());
        for (int k = 0; k < 3; k++) putf(p, 0x5C + 4 * k, value() * 0.5f);
        if (c % 29 == 0) put(p, 0x5C, 0x7fc00001u);
        put(p, 0x20, rnd() % 4 ? rnd() % 6 : UINT32_MAX);
        for (int pl = 0; pl < 6; pl++) put(&G(uint8_t, 0x151620C60ULL + 0x3834ULL * pl), 0x84, rnd() % 3);
        for (int b = 0; b < 160; b++) for (int k = 0; k < 0xBC; k += 4) putf(bodies + b * 0xBC, k, value() * 0.75f);
        for (int n = 0; n < 8; n++) {
            uint8_t *h = humans + (size_t)human_ids[n] * 0x6FF8;
            put(h, 0, rnd() % 5 ? 1 : 0);
            put(h, 8, rnd() % 4 ? rnd() % 6 : UINT32_MAX);
            put(h, 0x3C, rnd());
            for (int k = 0; k < 3; k++) putf(h, 0x224 + 4 * k, value() * 1.25f);
            for (int b = 0; b < 16; b++) {
                uint8_t *bone = h + 0x220 + b * 0x138;
                put(bone, 0, (n * 16 + b + c) % 160);
                static const float masses[] = {-8.0f, -20.0f, 100.0f, 40.0f};
                putf(bone, 0x84, rnd() % 5 == 0 ? masses[rnd() % 4] : value());
            }
            if (c % 5 == n % 5) { /* a pelvis exactly 8 units away: the edge of the blast */
                for (int k = 0; k < 3; k++) memcpy(h + 0x224 + 4 * k, p + 0x5C + 4 * k, 4);
                float edge; memcpy(&edge, p + 0x5C, 4); edge += 8.0f; memcpy(h + 0x224, &edge, 4);
            }
            if (c % 7 == n) { /* a bone exactly at the grenade */
                int body = *(int32_t *)(h + 0x220);
                memcpy(bodies + body * 0xBC + 0x18, p + 0x5C, 12);
            }
        }
        printf("blast %d grenade=%d", c, g); _mm_setcsr(0x1f80);
#ifdef ENGINE
        grenade_explode(g);
#else
        ((MS long long (*)(int))F(0x1400A70B0ULL))(g);
#endif
        uint32_t csr = _mm_getcsr();
        printf(" csr=%08x bodies=%016llx", csr, (unsigned long long)hash(bodies, 160 * 0xBC));
        for (int n = 0; n < 8; n++) printf(" %08x", *(uint32_t *)(humans + (size_t)human_ids[n] * 0x6FF8 + 0x3C));
        printf("\n");
    }
}

int main(int argc, char **argv) {
    init_image(argc, argv); setvbuf(stdout, NULL, _IOFBF, 1 << 20);
    items = &G(uint8_t, 0x182BBB180ULL); humans = &G(uint8_t, 0x18329E308ULL); bodies = &G(uint8_t, 0x1449816E0ULL);
    vehicles = &G(uint8_t, 0x15F2D9200ULL); events = &G(uint8_t, 0x1873DE460ULL); bullets = &G(uint8_t, 0x1A8A879C0ULL);
    bullet_types = &G(uint8_t, 0x1A8A873C0ULL); changes = &G(uint8_t, 0x18329B1E0ULL);
    int cases = argc > 3 ? atoi(argv[3]) : 20000;
    bullet_cases(cases); info_cases(cases); follow_cases(cases); blast_cases(cases / 4);
    fprintf(stderr, "[%s] %d cases per routine\n", img_name, cases); return 0;
}
