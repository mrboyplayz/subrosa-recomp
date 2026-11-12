// NC_WRAPPERS: 140008E40 140008BB0 14012C1F0 140009340
/* Traffic router: the road-graph builder 0x140009340, the best-first search
 * 0x14012C1F0, the route assembler with its intersection U-turn detection
 * 0x140008E40 and the stop-line speed limit 0x140008BB0.
 *
 * 0x1400038E0's inputs are the whole city block maze; its outputs (street
 * cell records, intersection records with the four road-cell slots) are
 * seeded here directly instead, exactly as its callers write them, so the
 * graph builder and everything above it run on realistic state.
 *
 * Word map (dword_140404A6C blob, verified against the vanilla asm):
 *   cell records    225426056 + 396*cell: w0/w1 intersection ids (-1 none),
 *                   w2 orientation, w3/w4 lanes per direction, w5 lane
 *                   count (anchor lane index for dir-0 nodes), lane i
 *                   endpoints w7+7i..w9 / w10+7i..w12, marker w6+7i,
 *                   stop-line waiting list w130 count, w131.. car ids.
 *   intersections   225391230 + 34*isec: center w0..w2, *4 floats w3..w5,
 *                   road-cell slots w6..w9, per-direction lane maxima
 *                   w10..w13 (filled exactly like 0x1400038E0 does).
 *   road nodes      132793862 + 18*node, count g_15FE96280 at 132793861:
 *                   pos w0..w2, degree w3, neighbours w4..w11, state w12,
 *                   cost w13, parent w14, cell w15, direction w16,
 *                   dead-end penalty w17 (U-turn twin costs +256).
 *   (cell,dir)->node table 133384713 + 2*cell + dir.
 *   car records     132400638 + 383*car: position floats w38..40 (words
 *                   132400644..646), route node index w132400670, node count
 *                   w132400671, route nodes 20 bytes each from word
 *                   132400672 (cell +0, direction +2, turn/light +4),
 *                   route lane w132400996, floats w132401004/005,
 *                   lane bitmask w132401010.
 *   route search    start/dest/flag/path words 133383686.. (path g_1600D6290
 *                   at 133383689).
 *   stop-line copy  count g_15FD06200 132384229, buffer 132384230+. */
#include <string.h>
#include "nc.h"
#include "memory.h"

#define CELL_CAP 16
#define LANE_BATCHES 6                  /* lane endpoint batches seeded per cell */
#define ISEC_CAP 12
#define NODE_CAP (2 * CELL_CAP + 8)
#define CAR_CAP 6
#define CAR_SLUG 16                     /* car ids in stop lists stay below this */
#define PATH_CAP (2 * CELL_CAP + 8)

#define CELL_COUNT_W dword_140404A6C[225426046]          /* g_175FF3464 */
#define CELL_W(c, k) dword_140404A6C[225426056 + 396 * (c) + (k)]
#define ISEC_W(i, k) dword_140404A6C[225391230 + 34 * (i) + (k)]
#define NODE_COUNT dword_140404A6C[132793861]           /* g_15FE96280 */
#define TABLE_W(x) dword_140404A6C[133384713 + (x)]
#define SEARCH_W(k) dword_140404A6C[133383686 + (k)]    /* start, dest, flag, path... */
#define CAR_W(c, k) dword_140404A6C[132400638 + 383 * (c) + (k)]
#define CAR_NODE(c, k, f) dword_140404A6C[132400672 + 5 * (k) + (f) + 383 * (c)]
#define COPY_COUNT dword_140404A6C[132384229]           /* g_15FD06200 */

#define CAR_ROUTE_COUNT(c) CAR_W(c, 33)                 /* 132400671 */
#define CAR_ROUTE_LANE(c) dword_140404A6C[132400996 + 383 * (c)]
#define CAR_ROUTE_BITS(c) dword_140404A6C[132401010 + 383 * (c)]

/* The original's TLS rand at 0x14023B1B0 (none of the four routines above
 * calls it; both builds meet the same stub if anything ever does). */
static unsigned rand_calls;
static int stub_rand(void) { return (int)(0x1234u + 7u * ++rand_calls); }

#ifdef NC_NATIVE
#define build_graph() ((void (*)(void))NC_ADDR(0x140009340))()
#define plan_route(car, sc, sd, dc, dd) \
    ((void (*)(int, int, int, int, int))NC_ADDR(0x140008E40))(car, sc, sd, dc, dd)
static float call_stop_limit(int car, int cell, int mask, float ahead, int flag)
{
    return ((float (*)(int, int, int, float, int))NC_ADDR(0x140008BB0))(car, cell, mask, ahead, flag);
}
#else
extern void sub_140009340(void);
extern void sub_140008E40(int car, int start_cell, int start_dir, int dest_cell, int dest_dir);
extern float sub_140008BB0(int car, int cell, int mask, float ahead, int flag);
#define build_graph() sub_140009340()
#define plan_route(car, sc, sd, dc, dd) sub_140008E40(car, sc, sd, dc, dd)
#define call_stop_limit(car, cell, mask, ahead, flag) sub_140008BB0(car, cell, mask, ahead, flag)
#ifndef NC_CLIENT_WRAPPERS
int rand(void) { return stub_rand(); }   /* plain port: same stub as the redirected original */
#endif
#endif

static int cells, isecs;

static float lane_float(void)
{
    /* Ordinary geometry mostly; edges exercise the BFS distance paths. */
    return nc_chance(6) ? nc_float(-64.0f, 64.0f) : nc_float_plain(-64.0f, 64.0f);
}

static void new_isec(int x, int z)
{
    ISEC_W(isecs, 0) = x;
    ISEC_W(isecs, 1) = 32;
    ISEC_W(isecs, 2) = z;
    *(float *)&ISEC_W(isecs, 3) = (float)(4 * x);
    *(float *)&ISEC_W(isecs, 4) = 128.0f;
    *(float *)&ISEC_W(isecs, 5) = (float)(4 * z);
    for (int k = 6; k < 14; k++)
        ISEC_W(isecs, k) = -1;
    isecs++;
}

static void add_cell(int a, int b, int lanes_ab, int lanes_ba)
{
    int c = cells++;
    for (int k = 0; k < 396; k++)
        CELL_W(c, k) = 0;
    /* 0x1400038E0's orientation: x delta <= z delta means the z-straddling
     * slot pair, and the same maxima mapping. */
    int vertical = b >= 0 && ISEC_W(b, 2) - ISEC_W(a, 2) >= ISEC_W(b, 0) - ISEC_W(a, 0);
    CELL_W(c, 0) = a;
    CELL_W(c, 1) = b;
    CELL_W(c, 2) = vertical;
    CELL_W(c, 3) = lanes_ab;
    CELL_W(c, 4) = lanes_ba;
    int total = lanes_ab + lanes_ba;
    if (nc_chance(15)) {
        total = (int)(nc_rand() & 7);                       /* wrong/lean lane count */
        if (nc_chance(30)) total = -(int)(nc_rand() & 7);  /* negative: anchor reads the words before */
    }
    CELL_W(c, 5) = total;
    for (int i = 0; i < LANE_BATCHES; i++) {               /* both node anchors stay in seeded words */
        CELL_W(c, 6 + 7 * i) = i < lanes_ab ? 0 : 1;
        for (int e = 0; e < 6; e++)
            *(float *)&CELL_W(c, 7 + 7 * i + e) = lane_float();
    }
    if (a >= 0) {
        ISEC_W(a, vertical ? 7 : 6) = c;
        if (ISEC_W(a, vertical ? 10 : 11) < (vertical ? lanes_ab : lanes_ba))
            ISEC_W(a, vertical ? 10 : 11) = vertical ? lanes_ab : lanes_ba;
        if (ISEC_W(a, vertical ? 12 : 13) < (vertical ? lanes_ba : lanes_ab))
            ISEC_W(a, vertical ? 12 : 13) = vertical ? lanes_ba : lanes_ab;
    }
    if (b >= 0) {
        ISEC_W(b, vertical ? 9 : 8) = c;
        if (ISEC_W(b, vertical ? 10 : 11) < (vertical ? lanes_ab : lanes_ba))
            ISEC_W(b, vertical ? 10 : 11) = vertical ? lanes_ab : lanes_ba;
        if (ISEC_W(b, vertical ? 12 : 13) < (vertical ? lanes_ba : lanes_ab))
            ISEC_W(b, vertical ? 12 : 13) = vertical ? lanes_ba : lanes_ab;
    }
}

static void layouts(int n)
{
    int lanes_ab = 1 + (int)nc_rand_below(2);
    int lanes_ba = (int)nc_rand_below(3);
    switch (n % 8) {
    case 0: {   /* 2x2 loop plus one dead-end spoke and an open road */
        for (int z = 0; z < 2; z++)
            for (int x = 0; x < 2; x++)
                new_isec(64 * x, 64 * z);
        add_cell(0, 1, lanes_ab, lanes_ba);
        add_cell(2, 3, lanes_ab, lanes_ba);
        add_cell(0, 2, lanes_ab, lanes_ba);
        add_cell(1, 3, lanes_ab, lanes_ba);
        new_isec(192, 64);
        add_cell(1, 4, lanes_ab, lanes_ba);   /* isec 4 only feeds back through cell 4 */
        add_cell(4, -1, 1, 1);                /* open road leaving the map */
        break;
    }
    case 1: {   /* full 3x3 grid */
        for (int z = 0; z < 3; z++)
            for (int x = 0; x < 3; x++)
                new_isec(64 * x, 64 * z);
        for (int z = 0; z < 3; z++)
            for (int x = 0; x < 3; x++) {
                int i = 3 * z + x;
                if (x < 2) add_cell(i, i + 1, lanes_ab, lanes_ba);
                if (z < 2) add_cell(i, i + 3, lanes_ab, lanes_ba);
            }
        break;
    }
    case 2: {   /* parallel cells between the same intersection pairs */
        for (int z = 0; z < 2; z++)
            for (int x = 0; x < 2; x++)
                new_isec(64 * x, 64 * z);
        add_cell(0, 2, lanes_ab, lanes_ba);
        add_cell(0, 2, lanes_ab, lanes_ba);   /* parallel duplicate */
        add_cell(1, 3, lanes_ab, lanes_ba);
        add_cell(1, 3, lanes_ab, lanes_ba);   /* parallel duplicate */
        add_cell(0, 1, lanes_ab, lanes_ba);
        add_cell(2, 3, lanes_ab, lanes_ba);
        break;
    }
    case 3: {   /* grid plus a road looping back into the same intersection */
        for (int z = 0; z < 2; z++)
            for (int x = 0; x < 2; x++)
                new_isec(64 * x, 64 * z);
        add_cell(0, 1, lanes_ab, lanes_ba);
        add_cell(2, 3, lanes_ab, lanes_ba);
        add_cell(0, 2, lanes_ab, lanes_ba);
        add_cell(1, 3, lanes_ab, lanes_ba);
        add_cell(0, 0, 1, 0);                 /* w0 == w1: both slots of isec 0 */
        break;
    }
    case 4: {   /* star: one junction with dead-end and open spokes */
        new_isec(0, 0);
        for (int i = 0; i < 5; i++) {
            new_isec(64 * (int)nc_rand_below(3) - 64, 64 * (int)nc_rand_below(3) - 64);
            add_cell(0, isecs - 1, lanes_ab, lanes_ba);
            if (nc_chance(40)) add_cell(isecs - 1, -1, 1, 0);   /* open road off the map */
        }
        break;
    }
    case 5: {   /* two disconnected grids */
        for (int g = 0; g < 2; g++)
            for (int i = 0; i < 4; i++)
                new_isec(64 * (i & 1) + 256 * g, 64 * (i >> 1));
        for (int g = 0; g < 2; g++) {
            int b = 4 * g;
            add_cell(b, b + 1, lanes_ab, lanes_ba);
            add_cell(b + 2, b + 3, lanes_ab, lanes_ba);
            add_cell(b, b + 2, lanes_ab, lanes_ba);
            add_cell(b + 1, b + 3, lanes_ab, lanes_ba);
        }
        break;
    }
    case 6: {   /* random: repeats, missing ends, self-loops, odd slots */
        int count = 2 + (int)nc_rand_below(5);
        for (int i = 0; i < count; i++)
            new_isec(56 * i - 64, 56 * (int)nc_rand_below(4) - 64);
        int roads = 4 + (int)nc_rand_below(6);
        for (int c = 0; c < roads; c++) {
            int a = (int)nc_rand_below(isecs);
            int b = nc_chance(20) ? a : (int)nc_rand_below(isecs);   /* self-loop sometimes */
            if (nc_chance(12)) b = -1;
            add_cell(a, b, 1 + (int)nc_rand_below(2), (int)nc_rand_below(2));
        }
        break;
    }
    default: {  /* minimal: one junction, one looping road */
        new_isec(0, 0);
        add_cell(0, 0, 2, 2);                 /* both ends the same intersection */
        if (nc_chance(30)) add_cell(0, -1, 1, 0);
        break;
    }
    }
    if (n % 11 == 0 && cells > 0)             /* lane header words as the dir-0 node anchor */
        CELL_W((int)nc_rand_below(cells), 5) = 0;
    if (n % 7 == 0 && isecs > 0 && cells > 1) /* the same cell pinned in two slots */
        ISEC_W((int)nc_rand_below(isecs), 8) = (int)nc_rand_below(cells);
    if (n % 13 == 0 && nc_chance(50))
        isecs = 0;                            /* junction count chaos after seeding */
}

static void seed_case(int n)
{
    cells = 0;
    isecs = 0;
    layouts(n);
    if (cells > CELL_CAP) cells = CELL_CAP;
    CELL_COUNT_W = nc_chance(8) ? -(int)(nc_rand() & 3) : cells;

    /* Stop-line waiting lists (cell w130/w131..: written by the traffic
     * manager at 0x14018C1A1, not ported). */
    for (int c = 0; c < cells; c++) {
        int raw = nc_chance(60) ? (int)nc_rand_below(19) - 2 : 0;   /* -2..16 */
        CELL_W(c, 130) = raw;
        int staged = raw < 0 ? 0 : raw > 16 ? 16 : raw;             /* never overflow the copy buffer */
        for (int k = 0; k < staged; k++)
            CELL_W(c, 131 + k) = nc_chance(70) ? (int)nc_rand_below(CAR_CAP)
                                              : (int)nc_rand_below(CAR_SLUG);
    }
    /* Cars. */
    for (int id = 0; id < CAR_SLUG; id++) {
        for (int k = 0; k < 383; k++)
            CAR_W(id, k) = (uint32_t)nc_rand();
        for (int a = 0; a < 3; a++)
            *(float *)&dword_140404A6C[132400644 + a + 383 * id] =
                nc_chance(5) ? nc_float(-256.0f, 256.0f) : nc_float_plain(-256.0f, 256.0f);
        *(float *)&dword_140404A6C[132401004 + 383 * id] = nc_float_plain(-400.0f, 400.0f);
        *(float *)&dword_140404A6C[132401005 + 383 * id] = nc_float_plain(-60.0f, 60.0f);
        CAR_ROUTE_LANE(id) = (int)nc_rand_below(9) - 1;
        CAR_ROUTE_BITS(id) = (uint32_t)nc_rand();
    }
}

static void hash_regions(const char *label)
{
    nc_line("%s count %d isecs %d nodes %d %016llx %016llx %016llx %016llx",
            label, (int)CELL_COUNT_W, isecs, (int)NODE_COUNT,
            (unsigned long long)nc_hash(&dword_140404A6C[132793861], 4 * (18 * NODE_CAP + 1)),
            (unsigned long long)nc_hash(&dword_140404A6C[133384713], 4 * (2 * CELL_CAP + 4)),
            (unsigned long long)nc_hash(&dword_140404A6C[133383686], 4 * (PATH_CAP + 290)),
            (unsigned long long)nc_hash(&dword_140404A6C[132400638], 4 * 383 * CAR_SLUG));
    nc_line("%s streets %016llx",
            label,
            (unsigned long long)(nc_hash(&dword_140404A6C[225391230], 4 * 34 * ISEC_CAP + 8)
                                 ^ nc_hash(&dword_140404A6C[225426046], 4 * (396 * CELL_CAP + 14))
                                 ^ nc_hash(&dword_140404A6C[132384229], 4 * 72)));
}

static void report_route(int n, int run, int car, int sc, int sd, int dc, int dd)
{
    int count = (int)CAR_ROUTE_COUNT(car);
    nc_line("route %d.%d car %d %d,%d->%d,%d len %d flag %d nodes %d",
            n, run, car, sc, sd, dc, dd, count, (int)SEARCH_W(2), (int)NODE_COUNT);
    for (int k = 0; k < count && k < 17; k++)
        nc_line("  node %d cell %d dir %d turn %d",
                k, (int)CAR_NODE(car, k, 0), (int)CAR_NODE(car, k, 2), (int)CAR_NODE(car, k, 4));
    if (count > 17)
        nc_line("  tail %016llx",
                (unsigned long long)nc_hash(&CAR_NODE(car, 17, 0), 4 * 5 * (size_t)(count - 17)));
    for (int k = 0; k + 1 < count && k < 12; k++) {
        /* The transition the assembler scored: end intersection of node k
         * (dir != 0 -> cell w0, else w1), last slot holding each cell. */
        int cur = (int)CAR_NODE(car, k, 0), cur_dir = (int)CAR_NODE(car, k, 2);
        int next = (int)CAR_NODE(car, k + 1, 0);
        if (cur < 0 || cur >= CELL_CAP || next < 0 || next >= CELL_CAP) continue;
        int isec = cur_dir ? (int)CELL_W(cur, 0) : (int)CELL_W(cur, 1);
        int slot_cur = -9, slot_next = -9;
        if (isec >= 0 && isec < ISEC_CAP)
            for (int j = 0; j < 4; j++) {
                if ((int)ISEC_W(isec, 6 + j) == cur) slot_cur = j;
                if ((int)ISEC_W(isec, 6 + j) == next) slot_next = j;
            }
        int delta = slot_cur - slot_next;
        if (delta < -1) delta += 4;
        else if (delta > 1) delta -= 4;
        nc_line("  step %d isec %d slots %d-%d delta %d", k, isec, slot_cur, slot_next, delta);
    }
    nc_line("  path %016llx mxcsr %08x",
            (unsigned long long)nc_hash(&SEARCH_W(3), 4 * (size_t)(count > 0 ? count + 1 : 1)),
            nc_get_mxcsr());
}

int main(void)
{
    nc_map_image();
#ifdef NC_NATIVE
    nc_redirect(0x14023B1B0, (void *)stub_rand);
#endif
    nc_save(&dword_140404A6C[225391230], 4 * 34 * ISEC_CAP + 8);
    nc_save(&dword_140404A6C[225426046], 4 * (396 * CELL_CAP + 14));
    nc_save(&dword_140404A6C[132793861], 4 * (18 * NODE_CAP + 1));
    nc_save(&dword_140404A6C[133384713], 4 * (2 * CELL_CAP + 4));
    nc_save(&dword_140404A6C[133383686], 4 * (PATH_CAP + 290));
    nc_save(&dword_140404A6C[132400638], 4 * 383 * CAR_SLUG);
    nc_save(&dword_140404A6C[132384229], 4 * 72);
    int cases = nc_cases(240);
    for (int n = 0; n < cases; n++) {
        nc_seed(0x51D0B5E7ULL + 0x9E3779B9ULL * n);
        nc_restore();
        seed_case(n);
        uint32_t csr = 0x1f80 | ((n % 4) << 13) | ((n / 4 % 2) << 6) | ((n / 8 % 2) << 15);
        nc_set_mxcsr(csr);
        nc_line("case %d layout %d", n, n % 8);
        build_graph();
        hash_regions("graph");        int runs = 2 + n % 2;
        for (int run = 0; run < runs; run++) {
            int car = (int)nc_rand_below(CAR_CAP);
            int sc = cells > 0 && nc_chance(90) ? (int)nc_rand_below(cells)
                                                : (int)nc_rand_below(CELL_CAP);
            int sd = (int)nc_rand_below(2);
            int dc = cells > 0 && nc_chance(90) ? (int)nc_rand_below(cells)
                                                : (int)nc_rand_below(CELL_CAP);
            int dd = (int)nc_rand_below(2);
            if (n % 8 == 5 && run == 0) { dc = (sc + 4) % 8; dd = sd; }   /* other component: no path */
            if (n % 7 == 0 && run == 0) { dc = sc; dd = sd; }             /* outright U-turn request */
            if (n % 11 == 3 && run == 0) { dc = sc; dd = sd ^ 1; }        /* same cell, other direction */
            plan_route(car, sc, sd, dc, dd);
            report_route(n, run, car, sc, sd, dc, dd);
            if (n % 9 == 4 && run == 0) {   /* rebuild the road graph, route it back */
                build_graph();
                plan_route(car, dc, dd, sc, sd);
                report_route(n, 100 + run, car, dc, dd, sc, sd);
            }
        }
        for (int s = 0; s < 2; s++) {
            int car = (int)nc_rand_below(CAR_CAP);
            int cell = nc_chance(15) ? -1 : (int)nc_rand_below(CELL_CAP);
            int mask = (int)((nc_rand() & 0x7f) | (nc_rand() & 0x10000));
            union { float f; uint32_t b; } ahead;
            ahead.b = (uint32_t)nc_rand();
            if (nc_chance(20)) ahead.b = 0;
            else if (nc_chance(50)) ahead.f = nc_float(-400.0f, 400.0f);
            int flag = (int)nc_rand_below(2);
            nc_set_mxcsr(csr);
            float limit = call_stop_limit(car, cell, mask, ahead.f, flag);
            uint32_t bits, arg_bits;
            memcpy(&bits, &limit, 4);
            memcpy(&arg_bits, &ahead.f, 4);
            nc_line("stop %d.%d car %d cell %d mask %08x ahead %08x flag %d limit %08x mxcsr %08x",
                    n, s, car, cell, (uint32_t)mask, arg_bits, flag, bits, nc_get_mxcsr());
            nc_line("  copy %d %016llx", (int)COPY_COUNT,
                    (unsigned long long)nc_hash(&dword_140404A6C[132384229], 4 * 72));
        }
        hash_regions("final");
    }
    nc_line("rand calls %u", rand_calls);
    return 0;
}
