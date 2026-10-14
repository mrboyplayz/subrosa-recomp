/* Item tick, sphere/human contacts and link registration. The dependencies
   use recording callbacks in both images; ITEM_WRAPPERS enters the linked
   client entry points. No game startup. */
#include "peload.h"
#include <xmmintrin.h>
#ifdef ENGINE
MS void item_update_physics(void);
MS void item_solve_human_contacts(int);
MS uintptr_t item_register_link(int, uint32_t, int32_t);
#endif
#define G(type, addr) (*(type *)D(addr))
static const int ids[5] = {0,13,257,900,1023}, human_ids[4] = {0,5,100,255};
static uint8_t *items, *humans, *bodies, *types, *events, *hit, *peer_masks, *local_masks;
static uint32_t random_state = 1234567, calls, case_number;
static int target_item;
static float points[4][3];
static uint32_t rnd(void) { random_state = random_state * 1664525u + 1013904223u; return random_state; }
static float value(void) { return ((int)(rnd() >> 16) - 32768) / 4096.0f; }
static void put(void *p, int off, uint32_t v) { memcpy((uint8_t *)p + off, &v, 4); }
static void putf(void *p, int off, float v) { memcpy((uint8_t *)p + off, &v, 4); }
static int32_t get(const void *p, int off) { int32_t v; memcpy(&v, (const uint8_t *)p + off, 4); return v; }
static float getf(const void *p, int off) { float v; memcpy(&v, (const uint8_t *)p + off, 4); return v; }
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
static int body_number(const void *p) { return (int)(((const uint8_t *)p - bodies - 0x18) / 0xBC); }
static MS void mesh(int item) {
    printf("mesh %d\n", item); calls++;
    if (case_number % 17 == 0) put(items + item * 0x1B80, 0x14, 44);
    if (case_number % 19 == 0) put(items + item * 0x1B80, 0x58, 70);
}
static MS void human_boundary(int item) {
    printf("human-boundary %d\n", item); calls++;
    for (int k = 0; k < 6; k++) putf(hit, 4 * k, value());
}
static MS int sphere(float out[3], float normal[3], float *distance, int layer, const float centre[3], float radius) {
    printf("sphere %d body=%d centre", layer, body_number(centre)); words(centre, 3); printf(" radius"); words(&radius, 1);
    for (int k = 0; k < 3; k++) { out[k] = value(); normal[k] = value(); }
    static const float d[] = {65536.0f,0.11f,0.0625f,-0.25f,0.0f,0.125f};
    *distance = d[(calls + case_number + layer) % 6];
    if (case_number % 31 == 0) put(distance, 0, 0x7fc00001u);
    if (case_number % 29 == 0) put(hit, 0x1C, 0x7fc00001u);
    uint32_t result = ((calls++ + case_number) % 3) != 0;
    printf(" -> %u dist", result); words(distance, 1); printf(" point"); words(out, 3); printf(" normal"); words(normal, 3); printf("\n");
    return (int)result;
}
static MS uint32_t ray(const float from[3], const float to[3], int mode) {
    printf("ray body=%d mode=%d from", body_number(from), mode); words(from, 3); printf(" to"); words(to, 3);
    for (int k = 0; k < 3; k++) {
        putf(hit, 4 * k, to[k] + (k + 1) * 0.03125f);
        putf(hit, 0xC + 4 * k, (k + 1) * 0.25f);
    }
    G(int32_t, 0x151A848D4ULL) = (int32_t)(calls % 4);
    for (int k = 0; k < 3; k++) put(hit, 0x58 + 4 * k, rnd() % 16);
    put(hit, 0x80, calls % 4); put(hit, 0x84, (calls + case_number) % 4);
    put(hit, 0x88, calls % 2 ? 1u : UINT32_MAX);
    uint32_t result = (calls++ + case_number) % 3;
    printf(" -> %u\n", result); return result;
}
static MS void world_contact(int16_t body, const float offset[3], const float normal[3], float depth,
                             float friction, float damping, float stiffness) {
    printf("world-contact %d off", body); words(offset, 3); printf(" normal"); words(normal, 3);
    printf(" parameters"); words(&depth, 1); words(&friction, 1); words(&damping, 1); words(&stiffness, 1); printf("\n");
    uint8_t *p = bodies + (int)body * 0xBC;
    put(p, 0x30, (uint32_t)get(p, 0x30) ^ ++calls);
}
static MS uint64_t block_part(uint32_t block, int part, int layer, int x, int y, int z) {
    printf("block %08x part=%d layer=%d voxel=%d,%d,%d\n", block, part, layer, x, y, z); calls++;
    if (case_number % 11 == 0) put(hit, 0x80, 0); /* reload the count/type after a callback */
    if (case_number % 13 == 0) put(hit, 0x84, (uint32_t)get(hit, 0x84) + 1u);
    return UINT32_MAX;
}
static MS long long body_contact(int a, int b, const float oa[3], const float ob[3], const float n[3],
                                 float depth, float friction, float damping, float stiffness) {
    printf("body-contact %d %d off-a", a, b); words(oa, 3); printf(" off-b"); words(ob, 3); printf(" normal"); words(n, 3);
    printf(" parameters"); words(&depth, 1); words(&friction, 1); words(&damping, 1); words(&stiffness, 1); printf("\n");
    put(bodies + a * 0xBC, 0x30, (uint32_t)get(bodies + a * 0xBC, 0x30) ^ ++calls);
    if (case_number % 7 == 0) {
        uint8_t *p = items + target_item * 0x1B80;
        putf(p, 0x5C, getf(p, 0x5C) + 0.03125f);
    }
    return 0x123456789abcdefLL;
}
static void print_state(const char *label, int c, uint32_t csr) {
    printf("%s %d csr=%08x calls=%u hit=%016llx bodies=%016llx events=%016llx/%016llx count=%d\n",
           label,c,csr,calls,(unsigned long long)hash(hit,0x90),(unsigned long long)hash(bodies,80*0xBC),
           (unsigned long long)hash(events,16*128),(unsigned long long)hash(events+65535*128,128),G(int32_t,0x189C1DC64ULL));
    printf("items"); for (int k = 0; k < 5; k++) printf(" %016llx", (unsigned long long)hash(items+ids[k]*0x1B80,0x1B80));
    printf(" humans"); for (int k = 0; k < 4; k++) printf(" %016llx", (unsigned long long)hash(humans+human_ids[k]*0x6FF8,0x6FF8)); printf("\n");
}
static void setup(int c) {
    calls = 0; case_number = (uint32_t)c;
    for (int b = 0; b < 80; b++) {
        uint8_t *p = bodies + b * 0xBC;
        for (int k = 0; k < 0xBC; k += 4) put(p,k,rnd());
        for (int k = 0x18; k < 0xA0; k += 4) putf(p,k,value());
    }
    for (int t = 0; t < 48; t++) {
        uint8_t *p = types + t * 0x13D0;
        put(p,0xC,(uint32_t)(c+t)%2);
        for (int k = 0; k < 3; k++) putf(p,0x104+4*k,(k+1)*0.0625f);
        put(p,0xF08,(uint32_t)(c+t)%5);
        uintptr_t q = (uintptr_t)points; memcpy(p+0xF10,&q,8);
    }
    for (int k = 0; k < 4; k++) for (int a = 0; a < 3; a++) points[k][a] = value();
    static const int timers[] = {INT32_MIN,-1,0,1,58,59,60,61,INT32_MAX};
    static const int item_types[] = {0,15,25,26,28,35,39,40,42,43,44,45,47};
    for (int n = 0; n < 5; n++) {
        uint8_t *p = items + ids[n]*0x1B80;
        for (int k = 0; k < 0x1B80; k += 4) put(p,k,rnd());
        put(p,0,(uint32_t)(c+n)%7 ? 1u + (uint32_t)(c+n)%2 : 0u); put(p,8,(uint32_t)(c/5+n)%4 == 0);
        put(p,0xC,(uint32_t)timers[(c+n)%9]); put(p,0x10,(uint32_t)(c/7+n)%5 == 0);
        put(p,0x14,item_types[(c+n)%13]); put(p,0x1C,1234); put(p,0x138,(uint32_t)(c+n)%3);
        put(p,0x158,(uint32_t)timers[(c+2*n)%9]); put(p,0x58,n);
        put(p,0x24,(uint32_t)(c+n)%4 == 0 ? (uint32_t)human_ids[n%4] : UINT32_MAX);
        put(p,0x28,(uint32_t)(c+n)%6 == 0 ? (uint32_t)ids[(n+1)%5] : UINT32_MAX);
        put(p,0x2C,(uint32_t)(c+n)%5);
        for (int k = 0x5C; k < 0xE0; k += 4) putf(p,k,value());
        for (int k = 0; k < 3; k++) { putf(p,0x80+4*k,(c+n)%3 ? 0.0f : 0.001f); putf(p,0xC8+4*k,0.0f); }
        if ((c+n)%17 == 0) putf(p,0x60,-33.0f); /* position y */
        if ((c+n)%37 == 0) putf(p,0x60,-32.0f);
        if ((c+n)%19 == 0) put(p,0x60,0x7fc00001u);
        if ((c+n)%23 == 0) put(p,0x80,0x7fc00001u);
        if ((c+n)%29 == 0) putf(p,0x80,0.0041666669f);
        if ((c+n)%31 == 0) put(p,0xC8,0x7fc00001u);
    }
    for (int h = 0; h < 4; h++) {
        uint8_t *p = humans+human_ids[h]*0x6FF8;
        for (int k = 0; k < 0x6FF8; k += 4) put(p,k,rnd());
        put(p,0,(c+h)%3 ? 1u + (uint32_t)(c+h)%2 : 0u); put(p,0x28,(uint32_t)(c+h)%2 ? UINT32_MAX : 0);
        for (int b = 0; b < 16; b++) {
            uint8_t *bone = p+0x220+b*0x138;
            put(bone,0,8+h*16+b);
            for (int k = 4; k < 0x64; k += 4) putf(bone,k,value());
        }
    }
    for (int k = 0; k < 4; k++) G(int32_t,0x15ADA9240ULL+k*0x100D70ULL) = (c+k)%3;
    for (int k = 0; k < 4; k++) G(int32_t,0x1812C20CCULL+k*0xED0ULL) = k;
    for (int k = 0; k < 0x90; k += 4) put(hit,k,rnd());
    for (int k = 0; k < 6; k++) putf(hit,k*4,value());
    for (int k = 0; k < 16*128; k += 4) put(events,k,rnd());
    for (int k = 0; k < 128; k += 4) put(events+65535*128,k,rnd());
    G(int32_t,0x189C1DC64ULL) = c%11 == 0 ? 65535 : c%8;
    G(int32_t,0x183EBFD34ULL) = (int32_t)rnd();
    G(int32_t,0x1AD04ADC0ULL) = c%3-1;
}
static void physics_cases(int cases) {
    hook(0x1400CA1C0ULL,mesh); hook(0x1400CA430ULL,human_boundary);
    for (int c = 0; c < cases; c++) {
        setup(c); printf("tick %d\n",c); _mm_setcsr(0x1f80);
#if defined(ENGINE) && !defined(ITEM_WRAPPERS)
        item_update_physics();
#else
        ((MS void (*)(void))F(0x1400CE370ULL))();
#endif
        uint32_t csr = _mm_getcsr(); print_state("tick-result",c,csr);
    }
}
static void human_cases(int cases) {
    for (int c = 0; c < cases; c++) {
        setup(c); target_item = ids[1];
        uint8_t *item = items+target_item*0x1B80;
        for (int k = 0; k < 3; k++) putf(item,0x5C+4*k,0.0f);
        for (int h = 0; h < 4; h++) for (int b = 0; b < 16; b++) {
            uint8_t *bone = humans+human_ids[h]*0x6FF8+0x220+b*0x138;
            static const float distances[] = {0.0f,0.125f,0.35999998f,0.36000001f,0.5f,-0.25f};
            putf(bone,4,distances[(c+h+b)%6]); putf(bone,8,0); putf(bone,12,0);
            if (c%5 == 1) { putf(bone,8,value()*0.03125f); putf(bone,12,value()*0.015625f); }
            if ((c+h+b)%17 == 0) put(bone,4,0x7fc00001u);
        }
        printf("human %d\n",c); _mm_setcsr(0x1f80);
#if defined(ENGINE) && !defined(ITEM_WRAPPERS)
        item_solve_human_contacts(target_item);
#else
        /* The tick's human-contact boundary was hooked, so use the
           saved original bytes restored by main before this phase. */
        ((MS void (*)(int))F(0x1400CA430ULL))(target_item);
#endif
        uint32_t csr = _mm_getcsr(); print_state("human-result",c,csr);
    }
}
static void link_cases(int cases) {
    static const int32_t slots[] = {-1,0,1,31,32,33,63,64,65};
    for (int c = 0; c < cases; c++) {
        int index = ids[c%5], slot = slots[(c/5)%9], peers = c%6-2;
        uint8_t *p = items+index*0x1B80;
        for (int k = 0; k < 0x1B80; k += 4) put(p,k,rnd());
        if (slot == -1) {
            uint64_t mask = c%7 == 0 ? UINT64_MAX : c%11 == 0 ? 0xFFFFFFFFULL : (1ULL<<((c/45)%64))-1;
            memcpy(p+0x170,&mask,8);
        }
        /* Explicit slot zero must overwrite that slot even when occupied;
           automatic allocation must choose a different free slot. */
        if (slot == 0) put(p,0x170,(uint32_t)get(p,0x170) | 1u);
        for (int peer = 0; peer < 4; peer++) for (int k = 0; k < 5; k++) put(peer_masks+peer*0x2E1E0+20*index,4*k,rnd());
        for (int k = 0; k < 5; k++) put(local_masks+20*index,4*k,rnd());
        G(int32_t,0x1AD04ADA0ULL) = peers;
        uint32_t link = rnd(); printf("link %d item=%d slot=%d peers=%d value=%08x\n",c,index,slot,peers,link);
        _mm_setcsr(0x1f80); uintptr_t result;
#if defined(ENGINE) && !defined(ITEM_WRAPPERS)
        result = item_register_link(index,link,slot);
#else
        result = ((MS uintptr_t (*)(int,uint32_t,int32_t))F(0x1400C3BA0ULL))(index,link,slot);
#endif
        uint32_t csr = _mm_getcsr();
        if (peers > 0 && result >= (uintptr_t)peer_masks && result < (uintptr_t)peer_masks+8*0x2E1E0)
            printf("link-return offset=%llu",(unsigned long long)(result-(uintptr_t)peer_masks));
        else printf("link-return value=%016llx",(unsigned long long)result);
        printf(" csr=%08x item=%016llx local=%016llx peers",csr,(unsigned long long)hash(p,0x1B80),(unsigned long long)hash(local_masks+20*index,20));
        for (int peer = 0; peer < 4; peer++) printf(" %016llx",(unsigned long long)hash(peer_masks+peer*0x2E1E0+20*index,20)); printf("\n");
    }
}
int main(int argc, char **argv) {
    init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
    items=&G(uint8_t,0x182BBB180ULL); humans=&G(uint8_t,0x18329E308ULL); bodies=&G(uint8_t,0x1449816E0ULL);
    types=&G(uint8_t,0x182A7E180ULL); events=&G(uint8_t,0x1873DE460ULL); hit=&G(uint8_t,0x151A84880ULL);
    peer_masks=&G(uint8_t,0x1A8E3F7CCULL); local_masks=&G(uint8_t,0x1ABC2F5ECULL);
    memset(items,0,1024*0x1B80); memset(humans,0,256*0x6FF8); memset(types,0,48*0x13D0);
    uint8_t saved[16]; memcpy(saved,F(0x1400CA430ULL),16);
    hook(0x140151190ULL,sphere); hook(0x1400DC050ULL,ray); hook(0x140005160ULL,world_contact);
    hook(0x1400CDBD0ULL,block_part); hook(0x1400052C0ULL,body_contact);
    int cases=argc>3?atoi(argv[3]):500;
    physics_cases(cases); memcpy(F(0x1400CA430ULL),saved,16); human_cases(cases); link_cases(cases);
    printf("whole-final items=%016llx humans=%016llx\n",(unsigned long long)hash(items,1024*0x1B80),(unsigned long long)hash(humans,256*0x6FF8));
    fprintf(stderr,"[%s] %d cases per routine\n",img_name,cases); return 0;
}
