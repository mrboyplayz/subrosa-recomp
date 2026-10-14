/* Cash insertion/value, inventory append, child attach and transfer.
   ITEM_WRAPPERS uses the linked client entry points; ITEM_REAL_HANDLING
   retains the actual detach/drop helpers instead of recording boundaries. */
#include "peload.h"
#include <xmmintrin.h>
#ifdef ENGINE
MS uint64_t item_insert_cash_bill(int, int, uint32_t);
MS uint64_t item_cash_value(int);
MS uint64_t item_append_inventory(uint32_t, int, int);
MS uint64_t item_attach_child(int, int);
MS uint64_t item_transfer(int, int, int, int);
#endif
#define G(type, address) (*(type *)D(address))
#define NI 16
#define NH 4
#define NT 40
static uint8_t *items, *humans, *types, *bodies;
static int32_t *changes;
static uint32_t state = 8675309;
static int mode, target_human, target_slot;
static uint32_t rnd(void) { state = state * 1664525u + 1013904223u; return state; }
static void put(void *base, int offset, uint32_t value) { memcpy((uint8_t *)base + offset, &value, 4); }
static int32_t get(const void *base, int offset) { int32_t v; memcpy(&v, (const uint8_t *)base + offset, 4); return v; }
static void putf(void *base, int offset, float value) { memcpy((uint8_t *)base + offset, &value, 4); }
static uint64_t hash(const void *base, size_t count) {
    const uint8_t *p = base; uint64_t h = 14695981039346656037ULL;
    for (size_t k = 0; k < count; k++) h = (h ^ p[k]) * 1099511628211ULL;
    return h;
}
static uint8_t *inventory(int human, int slot) { return humans + human * 0x6FF8 + 0x6AD0 + 40 * slot; }
static MS void detach(int item, int parent) {
    printf("detach %d %d parent=%d holder=%d slot=%d\n", item, parent,
           get(items + item * 0x1B80, 0x28), get(items + item * 0x1B80, 0x24), get(items + item * 0x1B80, 0x2C));
    /* Keep a distinctive parent so the caller's explicit -1 write matters. */
    put(items + item * 0x1B80, 0x28, 11);
    changes[item] = (int32_t)((uint32_t)changes[item] + 1u);
}
static MS void drop(int item, int human, int slot) {
    printf("drop %d %d %d parent=%d holder=%d slot=%d\n", item, human, slot,
           get(items + item * 0x1B80, 0x28), get(items + item * 0x1B80, 0x24), get(items + item * 0x1B80, 0x2C));
    put(items + item * 0x1B80, 0x24, UINT32_MAX);
    if (human == target_human && slot == target_slot && mode == 1)
        put(inventory(human, slot), 0, 8); /* forces the post-drop capacity recheck */
    else if (human == target_human && slot == target_slot && mode == 2)
        put(inventory(human, slot), 0, 0);
    changes[item] = (int32_t)((uint32_t)changes[item] + 1u);
}
static void print_state(const char *label, int c, uint64_t result, uint32_t csr) {
    printf("%s %d result=%016llx csr=%08x items=%016llx humans=%016llx changes=%016llx bodies=%016llx types=%016llx last=%016llx:%08x\n",
           label, c, (unsigned long long)result, csr,
           (unsigned long long)hash(items, NI * 0x1B80), (unsigned long long)hash(humans, NH * 0x6FF8),
           (unsigned long long)hash(changes, NI * 4), (unsigned long long)hash(bodies, NI * 0xBC),
           (unsigned long long)hash(types, NT * 0x13D0),
           (unsigned long long)hash(items + 1023 * 0x1B80, 0x1B80), (uint32_t)changes[1023]);
}
static uint64_t insert(int item, int bill, uint32_t value) {
#if defined(ENGINE) && !defined(ITEM_WRAPPERS)
    return item_insert_cash_bill(item, bill, value);
#else
    return ((MS uint64_t (*)(int, int, uint32_t))F(0x1400C3AB0ULL))(item, bill, value);
#endif
}
static uint64_t cash_value(int item) {
#if defined(ENGINE) && !defined(ITEM_WRAPPERS)
    return item_cash_value(item);
#else
    return ((MS uint64_t (*)(int))F(0x1400C3D10ULL))(item);
#endif
}
static uint64_t append(uint32_t item, int human, int slot) {
#if defined(ENGINE) && !defined(ITEM_WRAPPERS)
    return item_append_inventory(item, human, slot);
#else
    return ((MS uint64_t (*)(uint32_t, int, int))F(0x1400C3C90ULL))(item, human, slot);
#endif
}
static uint64_t attach(int item, int child) {
#if defined(ENGINE) && !defined(ITEM_WRAPPERS)
    return item_attach_child(item, child);
#else
    return ((MS uint64_t (*)(int, int))F(0x1400E38A0ULL))(item, child);
#endif
}
static uint64_t transfer(int item, int child, int human, int slot) {
#if defined(ENGINE) && !defined(ITEM_WRAPPERS)
    return item_transfer(item, child, human, slot);
#else
    return ((MS uint64_t (*)(int, int, int, int))F(0x1400E35D0ULL))(item, child, human, slot);
#endif
}
static void cash_cases(int cases) {
    static const int32_t counts[] = {-3,-1,0,1,2,3,4,5,6,7,8,9,10,INT32_MIN,INT32_MAX};
    static const int32_t bills[] = {-257,-4,-1,0,1,2,5,8,9,10,11,31,32,33,256,INT32_MAX};
    static const int32_t sums[] = {-3,-1,INT32_MIN,0,1,2,5,8,9,10,11,16,21,31,32,33,64,127,256,INT32_MAX};
    for (int c = 0; c < cases; c++) {
        int item = (int)(rnd() % NI), n = counts[c % (sizeof counts / sizeof *counts)];
        int bill = bills[(c / (sizeof counts / sizeof *counts)) % (sizeof bills / sizeof *bills)];
        uint8_t *p = items + item * 0x1B80;
        for (int k = 0; k < 0x1B80; k += 4) put(p, k, rnd());
        put(p, 0x2A4, (uint32_t)n);
        put(p, 0x2A0, c % 3 ? rnd() : INT32_MAX);
        uint32_t denomination = c % 4 ? rnd() : (uint32_t)(c % 8);
        printf("insert %d item=%d last=%d bill=%d value=%08x\n", c, item, n, bill, denomination);
        _mm_setcsr(0x1f80); uint64_t result = insert(item, bill, denomination); uint32_t csr = _mm_getcsr();
        print_state("inserted", c, result, csr);
        put(p, 0x2A4, (uint32_t)sums[c % (sizeof sums / sizeof *sums)]);
        int32_t *denominations = &G(int32_t, 0x1402B2960ULL);
        for (int k = 0; k < 8; k++) denominations[k] = (int32_t)rnd();
        _mm_setcsr(0x1f80); result = cash_value(item); csr = _mm_getcsr();
        print_state("value", c, result, csr);
    }
}
static void setup(int c, int real) {
    for (int i = 0; i < NI; i++) {
        uint8_t *p = items + i * 0x1B80;
        for (int k = 0; k < 0x1B80; k += 4) put(p, k, rnd());
        put(p, 0x14, rnd() % NT); put(p, 0x24, c % 3 ? rnd() % NH : UINT32_MAX);
        put(p, 0x28, c % 2 ? rnd() % NI : UINT32_MAX); put(p, 0x2C, rnd() % 6);
        put(p, 0x58, i); put(p, 0x34, rnd() % 10);
        for (int k = 0; k < 8; k++) put(p, 0x38 + 4 * k, rnd() % NI);
        changes[i] = c % 5 ? (int32_t)rnd() : INT32_MAX;
    }
    for (int h = 0; h < NH; h++) {
        uint8_t *p = humans + h * 0x6FF8;
        for (int k = 0; k < 0x6FF8; k += 4) put(p, k, rnd());
        for (int k = 0x494; k < 0x4F8; k += 4) putf(p, k, ((int)(rnd() % 2000) - 1000) / 64.0f);
        for (int s = 0; s < 8; s++) {
            put(inventory(h, s), 0, real ? rnd() % 5 : rnd() % 10);
            for (int k = 0; k < 9; k++) put(inventory(h, s), 4 + 4 * k, rnd() % NI);
        }
    }
    for (int k = 0; k < NI * 0xBC; k += 4) put(bodies, k, rnd());
    for (int t = 0; t < NT; t++) {
        uint8_t *p = types + t * 0x13D0;
        for (int k = 0; k < 0x13D0; k += 4) put(p, k, rnd());
        put(p, 0x10, (uint32_t)(c + t) % 3);
        for (int k = 0; k < NT; k++) put(p, 0x11C + 4 * k, (uint32_t)(c + 2 * t + k) % 3);
    }
    G(int32_t, 0x1AD04ADC0ULL) = (int32_t)(c % 3) - 1;
}
static void inventory_cases(int cases, int real) {
    static const int32_t counts[] = {-2,-1,0,1,2,4,5,7,8,9,INT32_MAX};
    static const int32_t children[] = {-2,-1,0,1,2,4,5,7,8,9};
    for (int c = 0; c < cases; c++) {
        setup(c, real);
        int human = (int)(rnd() % NH), slot = c % 8;
        put(inventory(human, slot), 0, (uint32_t)counts[c % (sizeof counts / sizeof *counts)]);
        uint32_t input = rnd();
        printf("append %d %08x human=%d slot=%d\n", c, input, human, slot);
        _mm_setcsr(0x1f80); uint64_t result = append(input, human, slot); uint32_t csr = _mm_getcsr();
        print_state("appended", c, result, csr);
        int parent = (int)(rnd() % NI), child = (int)(rnd() % NI);
        put(items + parent * 0x1B80, 0x34, (uint32_t)children[c % (sizeof children / sizeof *children)]);
        put(items + child * 0x1B80, 0x14, c % 3 == 0 ? 17 : c % 3 == 1 ? 18 : rnd() % NT);
        printf("attach %d %d %d\n", c, parent, child);
        _mm_setcsr(0x1f80); result = attach(parent, child); csr = _mm_getcsr();
        print_state("attached", c, result, csr);
        /* Transfers start fresh so append/attach cannot create bad old slots. */
        setup(c, real);
        parent = (int)(rnd() % NI); child = (int)(rnd() % NI);
        target_human = (int)(rnd() % NH); target_slot = c % 6; mode = (c / 6) % 3;
        uint8_t *p = items + parent * 0x1B80, *q = items + child * 0x1B80;
        int operation = c % 4;
        if (operation < 3) {
            child = -1;
            if (operation == 0) { target_human = -1; }
            else {
                put(inventory(target_human, target_slot), 0, (uint32_t)((c / 4) % 4));
                if (c % 7 == 0) { put(p, 0x24, target_human); put(p, 0x2C, target_slot); }
            }
        } else {
            put(p, 0x34, (uint32_t)((c / 4) % 10));
            put(q, 0x14, c % 3 == 0 ? 17 : c % 3 == 1 ? 18 : rnd() % NT);
        }
        if (c % 41 == 0) parent = -1;
        else if (c % 43 == 0) parent = 1024;
        else if (c % 47 == 0) {
            memcpy(items + 1023 * 0x1B80, p, 0x1B80);
            changes[1023] = (int32_t)rnd();
            parent = 1023;
        }
        printf("transfer %d %d child=%d human=%d slot=%d mode=%d\n", c, parent, child, target_human, target_slot, mode);
        _mm_setcsr(0x1f80); result = transfer(parent, child, target_human, target_slot); csr = _mm_getcsr();
        print_state("transferred", c, result, csr);
    }
}
int main(int argc, char **argv) {
    init_image(argc, argv); setvbuf(stdout, NULL, _IOFBF, 1 << 20);
    items = &G(uint8_t, 0x182BBB180ULL); humans = &G(uint8_t, 0x18329E308ULL);
    types = &G(uint8_t, 0x182A7E180ULL); bodies = &G(uint8_t, 0x1449816E0ULL);
    changes = &G(int32_t, 0x18329B1E0ULL);
    memset(items, 0, NI * 0x1B80); memset(humans, 0, NH * 0x6FF8);
    memset(types, 0, NT * 0x13D0); memset(bodies, 0, NI * 0xBC); memset(changes, 0, NI * 4);
    memset(items + 1023 * 0x1B80, 0, 0x1B80); changes[1023] = 0;
    int real = 0;
#ifdef ITEM_REAL_HANDLING
    real = 1;
#else
    hook(0x1400CA9B0ULL, detach); hook(0x1400CA7C0ULL, drop);
#endif
    int cases = argc > 3 ? atoi(argv[3]) : 5000;
    cash_cases(cases); inventory_cases(cases, real);
    fprintf(stderr, "[%s] %d cases per routine; real=%d\n", img_name, cases, real);
    return 0;
}
