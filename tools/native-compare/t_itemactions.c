/* 0x1400CA740 cash bill removal, 0x1400CA1C0 item contacts and
   0x1400CDFF0 block restoration. Grid/mesh queries, rotations and block
   updates use identical recording stubs. No file I/O or game startup. */
#include "peload.h"
#include <stddef.h>
#include <xmmintrin.h>
#ifdef ENGINE
MS uint64_t item_remove_cash_bill(int, int);
MS void item_solve_contacts(int);
MS void item_restore_block_part(int);
#endif

#define G(type, address) (*(type *)D(address))
#define NI 16
static uint32_t state = 271828, answers;
static uint8_t *items, *types;
static int32_t candidate_count, candidate_ids[256];
static uint32_t random32(void) { state = state * 1664525u + 1013904223u; return state; }
static uint32_t answer(void) { answers = answers * 1103515245u + 12345u; return answers >> 8; }
static void put(uint8_t *p, size_t offset, uint32_t value) { memcpy(p + offset, &value, 4); }
static void putf(uint8_t *p, size_t offset, float value) { memcpy(p + offset, &value, 4); }
static void words(const void *p, int count) {
    for (int k = 0; k < count; k++) {
        uint32_t value; memcpy(&value, (const uint8_t *)p + 4 * k, 4);
        if ((value & 0x7f800000u) == 0x7f800000u && (value & 0x7fffffu)) value = 0x7fc00000u;
        printf(" %08x", value);
    }
}
static uint64_t hash(const void *p, size_t count) {
    const uint8_t *bytes = p; uint64_t result = 14695981039346656037ULL;
    for (size_t k = 0; k < count; k++) result = (result ^ bytes[k]) * 1099511628211ULL;
    return result;
}
static MS void grid(void *out, const int32_t lo[3], const int32_t hi[3]) {
    printf("grid"); words(lo, 3); words(hi, 3); printf(" count=%d\n", candidate_count);
    int32_t *records = out; records[0] = candidate_count; records[1] = 0x12345678;
    for (int k = 0; k < candidate_count; k++) {
        records[2 + k * 2] = candidate_ids[k]; records[3 + k * 2] = (int32_t)random32();
    }
}
static MS uint32_t mesh(int32_t a, int32_t b, const void *ma, const void *mb,
                        const float pa[3], const float ra[9], const float pb[3], const float rb[9]) {
    uint32_t result = answer() % 3;
    printf("mesh %d %d types=%td:%td %td:%td", a, b,
           ((const uint8_t *)ma - types) / 0x13D0, ((const uint8_t *)ma - types) % 0x13D0,
           ((const uint8_t *)mb - types) / 0x13D0, ((const uint8_t *)mb - types) % 0x13D0);
    printf(" pa"); words(pa, 3); printf(" ra"); words(ra, 9);
    printf(" pb"); words(pb, 3); printf(" rb"); words(rb, 9); printf(" -> %u\n", result);
    return result;
}
static void rotation_result(float m[9], float angle) {
    /* Controlled math boundary: distinct matrix outputs for all 4 turns. */
    static const float basis[4][9] = {
        {1,0,0, 0,1,0, 0,0,1}, {0,0,-1, 0,1,0, 1,0,0},
        {-1,0,0, 0,1,0, 0,0,-1}, {0,0,1, 0,1,0, -1,0,0}
    };
    unsigned quarter = (unsigned)(angle / 1.570796326795f + 0.5f) & 3;
    memcpy(m, basis[quarter], sizeof basis[0]);
}
static MS void rotate(float m[9], const float axis[3], float angle) {
    printf("rotate"); words(m, 9); printf(" axis"); words(axis, 3);
    printf(" angle"); words(&angle, 1); printf("\n"); rotation_result(m, angle);
}
static MS uint32_t gone(uint32_t layer, uint32_t x, uint32_t y, uint32_t z) {
    uint32_t result = answer(); printf("gone %u %u %u %u -> %08x\n", layer, x, y, z, result); return result;
}
static MS void setgone(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t mask) {
    printf("setgone %u %u %u %u %08x\n", layer, x, y, z, mask);
}
static MS void rebuild(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t mask, uint32_t update) {
    printf("rebuild %u %u %u %u %08x %u\n", layer, x, y, z, mask, update);
}
static void cash_cases(int count) {
    static const int32_t counts[] = {0,1,2,5,10,11,16,33,-1,INT32_MIN};
    for (int c = 0; c < count; c++) {
        int index = random32() % NI, bill = (int)(random32() % 39) - 4;
        uint8_t *p = items + 0x1B80 * index;
        for (int k = 0; k < 0x1B80; k += 4) put(p, k, random32());
        int32_t n = counts[c % (sizeof counts / sizeof counts[0])];
        put(p, 0x2A4, (uint32_t)n);
        printf("cash %d %d %d %d\n", c, index, bill, n);
_mm_setcsr(0x1f80);
#ifdef ENGINE
        uint64_t result = item_remove_cash_bill(index, bill);
#else
        uint64_t result = ((MS uint64_t (*)(int, int))F(0x1400CA740ULL))(index, bill);
#endif
        printf("result %016" PRIx64 " state %016" PRIx64 " mxcsr=%08x\n", result, hash(p, 0x1B80), _mm_getcsr());
    }
}
static void contact_cases(int count) {
    static const int32_t timers[] = {-1,0,59,60,61,INT32_MAX};
    static const uint32_t specials[] = {0,0x80000000,0x7f800000,0xff800000,0x7fc00001,0x7f800001};
    for (int c = 0; c < count; c++) {
        int index = random32() % NI; answers = random32();
        for (int t = 0; t < 4; t++) put(types + 0x13D0 * t, 0xC, (c % 13) ? 1 : 0);
        for (int i = 0; i < NI; i++) {
            uint8_t *p = items + 0x1B80 * i; memset(p, 0, 0x1B80);
            put(p, 8, random32() % 3); put(p, 0xC, (uint32_t)timers[random32() % 6]);
            put(p, 0x14, random32() % 4); put(p, 0x58, i + 100);
            for (int k = 0; k < 3; k++) {
                putf(p, 0x104 + 4*k, -1.0f); putf(p, 0x110 + 4*k, 1.0f);
                put(p, 0x11C + 4*k, random32()); put(p, 0x128 + 4*k, random32());
                put(p, 0x5C + 4*k, random32());
            }
            for (int k = 0; k < 9; k++) put(p, 0xA4 + 4*k, random32());
            if (c % 4 == 1) putf(p, 0x104 + 4*(i % 3), (float)((int)(random32() % 5) - 2));
            if (c % 4 == 2) put(p, 0x104 + 4*(i % 3), specials[(c / 4 + i) % 6]);
            if (c % 4 == 3) put(p, 0x110 + 4*(i % 3), specials[(c / 4 + i) % 6]);
        }
        candidate_count = c % 31 == 0 ? 256 : (int)(random32() % 22) - 2;
        for (int k = 0; k < candidate_count; k++) candidate_ids[k] = random32() % NI;
        printf("contacts %d item=%d\n", c, index);
_mm_setcsr(0x1f80);
#ifdef ENGINE
        item_solve_contacts(index);
#else
        ((MS void (*)(int))F(0x1400CA1C0ULL))(index);
#endif
        printf("state %016" PRIx64 " mxcsr=%08x\n", hash(items, 0x1B80 * NI), _mm_getcsr());
    }
}
static void restoration_cases(int count) {
    static const float distances[] = {0.0f,0.0625f,0.12499999f,0.125f,0.12500001f,0.5f,__builtin_nanf(""),__builtin_inff()};
    for (int c = 0; c < count; c++) {
        int index = random32() % NI, layer = random32() % 4, part = random32() % 40;
        uint32_t block = (random32() % 4) | ((random32() % 4) << 24);
        int32_t voxel[3] = {(int)(random32()%7)-3,(int)(random32()%7)-3,(int)(random32()%7)-3};
        uint8_t *p = items + 0x1B80 * index;
        uint8_t *b = &G(uint8_t, 0x1812C2110ULL + 0xED0ULL*(block&0x3FF) + 0x74ULL*part);
        float local[3], basis[9], size = c % 7 == 0 ? 0.0f : c % 7 == 1 ? 2.5f : 4.0f;
        float angle = (float)((double)((block>>24)&3) * 1.570796326795);
        memset(p, 0xA5, 0x1B80); put(p,0x31C,layer); memcpy(p+0x320,voxel,12);
        put(p,0x32C,block); put(p,0x330,part); G(float,0x15ADA9280ULL+0x100D70ULL*layer)=size;
        for (int k=0;k<3;k++) { local[k]=((int)(random32()%17)-8)*0.03125f; putf(b,4+4*k,local[k]); }
        for (int k=0;k<9;k++) put(b,16+4*k,random32());
        rotation_result(basis, angle);
        for (int k=0;k<3;k++) {
            float target = (((float)voxel[k] + (k == 1 ? 0.0f : 0.5f))*size + local[0]*basis[k]);
            target = (target + local[1]*basis[k+3]) + local[2]*basis[k+6];
            putf(p,0x5C+4*k, target + (k == c%3 ? distances[c%8] : 0.0f));
        }
        answers=random32(); printf("restore %d item=%d\n",c,index);
_mm_setcsr(0x1f80);
#ifdef ENGINE
        item_restore_block_part(index);
#else
        ((MS void (*)(int))F(0x1400CDFF0ULL))(index);
#endif
        printf("state %016" PRIx64 " part %016" PRIx64 " mxcsr=%08x\n",hash(p,0x1B80),hash(b,0x74),_mm_getcsr());
    }
}
int main(int argc, char **argv) {
    init_image(argc, argv); setvbuf(stdout, NULL, _IOFBF, 1 << 20);
    hook(0x140038230ULL,grid); hook(0x14004A7A0ULL,mesh); hook(0x14007B2A0ULL,rotate);
    hook(0x1400169B0ULL,gone); hook(0x140017110ULL,setgone); hook(0x1400516B0ULL,rebuild);
    items=&G(uint8_t,0x182BBB180ULL); types=&G(uint8_t,0x182A7E180ULL);
    int cases=argc>3?atoi(argv[3]):5000;
    cash_cases(cases); contact_cases(cases); restoration_cases(cases);
    fprintf(stderr,"[%s] %d cases for each of 3 routines\n",img_name,cases); return 0;
}
