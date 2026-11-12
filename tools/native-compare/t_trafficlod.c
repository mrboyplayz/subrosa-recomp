/* Traffic LOD pass: 0x14018A3E0 (with the cell-corner precompute
 * 0x14018B680 it calls first).
 *
 * Per frame it, in order: recycles the traffic-light slot rotation,
 * rebuilds each car's corner points / containing cell / stop-line words,
 * classifies every car 0/1/2 by distance from every human seat (four seats
 * per human, 64 humans always scanned), attaches a vehicle body for class 2
 * cars without one, expires bodies of class 0 cars, copies the body state of
 * attached cars (heading via atan2f(-m22, -m20) and the active-only extra
 * vehicle words), and integrates the rest kinematically: bicycle-model
 * heading update wrapped to [-pi, pi] with double compares, speed servo,
 * position integration, two terrain rays, an identity matrix rebuilt by
 * sr_math_mat3_rotate_rows(pi/2) then rotate_rows(heading), and a slope
 * correction rotating about the matrix's first row when the second ray
 * hits.
 *
 * Callees outside this pair are recording stubs installed in the image and
 * met identically by both builds: rand 0x14023B1B0, tan 0x1402437E0 (both
 * builds forward to the same host tan), sub_140009E30, sub_140008E40,
 * sub_1400DC050 (writes the shared ragdoll height word) and sr_CreateVehicle
 * 0x14005BCA0 (returns a seeded fake vehicle slot). sub_1401F8AC0 (sincosf),
 * sub_14023F704 (atan2f) and sr_math_mat3_rotate_rows are the original
 * machine code in both builds through their address symbols.
 *
 * Every input word other than the wrap-crossing kind (1) and the constant-ulp
 * kind (9) comes from NaN-free pools; the kinematic parameters sweep whole
 * pools deterministically (case index times car index), covering headings at
 * float bit granularity around 0, +-pi/2, +-pi, +-2pi and beyond, both
 * steer signs from tiny to huge, both servo branches at exact threshold
 * bits, all three classes (close, boundary, far humans), vehicle ids -1 and
 * 0..2, attach results -1 and 0..2, light counters around their 800 wrap,
 * cells 0..2 and 67, lot/light/car-of-record tables and expire body slots.
 *
 * EXPECTED DIVERGENCES until the client source is fixed (both proven against
 * vanilla asm):
 *  - kind 1 (wrap crossing): client_vehicles.c's heading wrap stores
 *    `state_address_8[2] = LODWORD(component_delta);` where component_delta
 *    is a double: the port stores the raw low 32 bits of the wrapped double,
 *    while vanilla 0x14018AF7F converts first (cvtpd2ps; movss [rdi+8]).
 *    Any far (kinematic) traffic car whose heading crosses +-pi gets its
 *    heading word replaced by mantissa-bit garbage: the sudden U-turn.
 *  - kind 9 (and rare servo reached elsewhere): the servo amounts
 *    (float)(fminf(...) * 0.0013888889) and * -0.0027777778 multiply with
 *    the C double literals (one double rounding) where vanilla multiplies
 *    with the float constants 0x3AB60B61 / 0xBB360B61 (mulss, 0x14018B027,
 *    0x14018AFEB): one-ulp differences in the stored velocity.
 * After both fixes, the full suite must be identical line for line. */
/* 14018B680 is listed first: it has no frame-macros, so its extraction must
   precede sub_14018A3E0's (whose #define float_word_2 would otherwise leak
   into 14018B680's same-named local; in client_vehicles.c the #undef lines
   between the two separate them, but the extraction only spans one body). */
// NC_WRAPPERS: 14018B680 14018A3E0
#include <string.h>
#include <math.h>
#include "nc.h"

/* dword_140404A6C: the game's giant state array. */
#define DW(i) (((unsigned *)(uintptr_t)0x140404A6CULL)[(size_t)(i)])

/* Car record words: index k counts from 132400638 + 383 * car. */
#define CW(c, k)   (132400638 + 383 * (c) + (k))
#define CAR_COUNT  132792829               /* world_unknown_15fd16260_count */
/* Human seat words, seat k of human h: HUM + 28664*h + off. */
#define HUM         280651442               /* g_18329E534, stride 28664 */
static const int SEAT[4][3] = {
    {-139, -137, -124}, {7027, 7029, 7042}, {14193, 14195, 14208}, {21359, 21361, 21374}
};
static const int SEAT_POS[4] = {-2, 7164, 14330, 21496};
#define PLAYER_BASE 71859139                /* dword[3597 * seat_id + base] */
/* Fake vehicle records, vid 0..2: base 129716716 + 5210 * vid. */
#define VEH(v)      (129716716 + 5210 * (v))
#define BODY(b)     (346708247 + 24944 * (b))
#define RAGDOLL     73006982                /* ragdoll_unknown_height */
/* Cells: record 0 starts at 225426046 (the count global shares cell 0 +0). */
#define CELL(c)     (225426046 + 396 * (c))
#define CELL_COUNT  225426046               /* g_175FF3464 */
#define LIGHT_COUNT 225391228               /* g_175FD145C */
#define LIGHT(c)    (225391233 + 34 * (c))  /* 34-word light/lot record */
#define LOT(c)      (225391257 + 34 * (c))  /* floats scanned from g_175FD14E0 */
#define GATE        179992046               /* g_16B2A2224: skips sub_14018B680 */
#define TRAM        284024893               /* g_183F7CB60: forces class 0 in cells 67/68 */
#define EXPIRE_B(b) (280651317 + 7166 * (b)) /* body slot expired for class 0 cars */

static unsigned bits(float f) { unsigned b; memcpy(&b, &f, 4); return b; }

/* ---- shared stubs --------------------------------------------------------- */

int rand(void)
{
    int value = (int)nc_rand_below(32768);
    nc_line("call rand -> %d", value);
    return value;
}

double tan(double x)     /* traces the arguments and a sin/cos quotient */
{
    double s = sin(x), c = cos(x);
    double result = s / c;
    unsigned long long xi, ri;
    memcpy(&xi, &x, 8);
    memcpy(&ri, &result, 8);
    nc_line("call tan %016llx -> %016llx", xi, ri);
    return result;
}

static double host_tan(double x) { return tan(x); }

static long long stub_createvehicle(int style, float *position, unsigned *velocity,
                                    unsigned *matrix, unsigned arg5)
{
    nc_line("call createveh %d pos %08x %08x %08x vel %08x %08x %08x style %d",
            style,
            position ? bits(position[0]) : 0u, position ? bits(position[1]) : 0u,
            position ? bits(position[2]) : 0u,
            velocity ? velocity[0] : 0u, velocity ? velocity[1] : 0u,
            velocity ? velocity[2] : 0u, arg5);
    nc_line("   rot %08x %08x %08x %08x %08x %08x %08x %08x %08x",
            matrix[0], matrix[1], matrix[2], matrix[3], matrix[4],
            matrix[5], matrix[6], matrix[7], matrix[8]);
    unsigned mix = ((unsigned)style * 2654435761u ^ (unsigned)arg5 * 40503u) >> 28;
    long long result = mix == 0 ? -1 : (long long)(mix % 3);   /* -1 or slot 0..2 */
    nc_line("   returns %lld", result);
    return result;
}

#ifdef NC_NATIVE
#define tick(a, b, c) ((long long (*)(long long, long long, double))NC_ADDR(0x14018A3E0))((long long)(a), (long long)(b), (double)(c))
#else
long long sub_14018A3E0(long long, long long, double);
#define tick(a, b, c) sub_14018A3E0((long long)(a), (long long)(b), (double)(c))
long long sr_CreateVehicle(int style, float *position, unsigned *velocity,
                           unsigned *matrix, unsigned arg5)
{ return stub_createvehicle(style, position, velocity, matrix, arg5); }
#endif

static void stub_e930(int car) { nc_line("call e930 %d", car); }
static void stub_e40(int car, int cell, int zero, int value, int parity)
{ nc_line("call e40 %d %d %d %d %d", car, cell, zero, value, parity); }

static unsigned stub_ray(float *origin, float *direction, int zero)
{
    unsigned words[6];
    memcpy(words, origin, 12);
    memcpy(words + 3, direction, 12);
    nc_line("call ray %08x %08x %08x | %08x %08x %08x %d",
            words[0], words[1], words[2], words[3], words[4], words[5], zero);
    float height = origin[1] - direction[1] * 0.03125f + origin[0] * 0.125f;
    DW(RAGDOLL) = bits(height);
    return (words[0] ^ words[2] ^ words[3]) & 1;
}

/* ---- input pools ---------------------------------------------------------- */

static const unsigned hedge[] = {          /* [NBENIGN heads) are NaN/Inf tails */
    0x3FC90FDA, 0x3FC90FDB, 0x3FC90FDC, 0xBFC90FDA, 0xBFC90FDB, 0xBFC90FDC,   /* +-pi/2 +-ulp */
    0x40490FDA, 0x40490FDB, 0x40490FDC, 0xC0490FDA, 0xC0490FDB, 0xC0490FDC,   /* +-pi   +-ulp */
    0x40C90FDA, 0x40C90FDB, 0x40C90FE2, 0xC0C90FDA, 0xC0C90FDB,               /* +-2pi */
    0x4116FE50, 0xC116FE50, 0x41490FE0, 0xC1490FE0,                            /* +-3pi */
    0x00000000, 0x80000000, 0x39888889, 0xB9888889,                            /* 0, -0, tiny */
    0x43B48000, 0x4B7FFFFF, 0xCB7FFFFF, 0x322CCCCD,                            /* 360, max, small */
    0x7F800000, 0xFF800000, 0x7FC00000,                                        /* inf, NaN */
};
#define NHEDGE (sizeof hedge / sizeof hedge[0])
#define NBENIGN (NHEDGE - 3)
static const int hsafe[] = {0, 1, 2, 3, 4, 5, 21, 22, 23, 24, 28};  /* heading + slow omega stays strictly inside the wrap band */
#define NHSAFE (sizeof hsafe / sizeof hsafe[0])
static const int lsafe[] = {0, 1, 2, 4, 5, 8, 9};                        /* L keeps |omega| < pi with the slow speeds */
#define NLSAFE (sizeof lsafe / sizeof lsafe[0])

static const unsigned steer_bits[] = {
    0x00000000, 0x80000000, 0x3C23D70A, 0xBC23D70A, 0x3E4CCCCD, 0xBE4CCCCD,
    0x3F490FDB, 0xBF490FDB, 0x3FC90FDA, 0x3FC90FDB, 0x3FC90FDC, 0xBFC90FDB,
    0x4020DF32, 0xC020DF32, 0x40490FDB, 0xC0490FDB, 0x42480000, 0xC2480000,
    0x4B7FFFFF, 0x00800000, 0x00400000,
    0x7F800000, 0x7FC00000,                                                    /* tails */
};
#define NSTEER (sizeof steer_bits / sizeof steer_bits[0])
#define SBENIGN (NSTEER - 2)

static const unsigned length_bits[] = {
    0x40266666, 0x40266667, 0x3FC00000, 0xBF800000, 0x3F800000, 0x3F000000,
    0x3E800000, 0x39010000, 0x42C80000, 0x477FFF00, 0x00000000,
    0x7F800000,                                                                 /* tail */
};
#define NLENGTH (sizeof length_bits / sizeof length_bits[0])
#define LBENIGN (NLENGTH - 1)
static const unsigned target_bits[] = {
    0x00000000, 0x3C23D70A, 0x3D088888, 0x3D088889, 0x3D08888A, 0x3D555553,
    0x3C888889, 0x3C88888A, 0x3E800000, 0x3F800000, 0x40490FDB, 0xC0000000,
    0x50000000, 0x3D4CCCCC, 0x3D4CCCCD, 0x3D4CCCCE,
    0x7F800000, 0x7FC00000,                                                     /* tails */
};
#define NTARGET (sizeof target_bits / sizeof target_bits[0])
#define TBENIGN (NTARGET - 2)

static const unsigned axis_bits[] = {        /* follow sweep: m22 from sin, m20 from cos */
    0x00000000, 0x3F800000, 0xBFC90FDB, 0x3FC90FDB, 0xC0490FDB, 0x40490FDB,
    0xC0C90FDB, 0x40C90FDB, 0x00000001, 0x80000001, 0x33800000, 0x80000000,
    0xB3800000, 0xBF800000,
    0x7F800000, 0x7FC00000,                           /* tails */
};
#define NAXIS (sizeof axis_bits / sizeof axis_bits[0])
#define ABENIGN (NAXIS - 2)

/* Targets (t) for the accel servo whose amount rounds differently in the
 * decompiled (float)(fminf(x,1.0) * 0.0013888889) [double constant] than in
 * the original's mulss with the float 0x3AB60B61: with heading 0 and
 * vel_x 0 the amount lands in the stored velocity and position words. */
static const unsigned ulp_targets[] = {
    0x38a285c2, 0x38a29567, 0x38a2a50c, 0x38a2b4b1, 0x38a2c456, 0x38a2d3fb,
    0x38a2e3a0, 0x38a2f345, 0x38a302ea, 0x38a3128f, 0x38a32234, 0x38a331d9,
    0x38a3417e, 0x38a35123, 0x38a360c8, 0x38a3706d, 0x38a38012, 0x38a38fb7,
    0x38a39f5c, 0x38a3af01, 0x38a3bea6, 0x38a3ce4b, 0x38a3ddf0, 0x38a3ed95,
    0x38a3fd3a, 0x38a40cdf, 0x38a41c84, 0x38a42c29, 0x38a43bce,
};
#define NULP (sizeof ulp_targets / sizeof ulp_targets[0])

static const unsigned pos_bits[] = {        /* NaN-free positions */
    0x00000000, 0x3F000000, 0x40000000, 0x40490FDB, 0x41200000, 0x41800000,
    0x41800001, 0x42480000, 0x427FFFFF, 0x42C00000, 0x42BFFFFF, 0xC2C00000,
    0xC2BFFFFF, 0x00000001, 0x80000000, 0x3D088889,
};
#define NPOS (sizeof pos_bits / sizeof pos_bits[0])

static const unsigned vel_bits[] = {        /* NaN-free velocities */
    0x00000000, 0x3C23D70A, 0x3C88888A, 0x3D555553, 0x3E4CCCCD, 0x40490FDB,
    0x42480000, 0x3D088889, 0x3C888886, 0x00000001, 0x01C9E1D6,
};
#define NVEL (sizeof vel_bits / sizeof vel_bits[0])
static const unsigned slow_bits[] = {       /* speeds safe with any L for the no-wrap kinds */
    0x00000000, 0x3C23D70A, 0x3C88888A, 0x3D088889, 0x3D555553, 0x3E4CCCCD,
    0x00000001, 0x01C9E1D6, 0x3D088885,
};
#define NSLOW (sizeof slow_bits / sizeof slow_bits[0])

/* ---- seeding ------------------------------------------------------------- */

static void zero_words(long first, long last)
{
    memset(&DW(first), 0, (size_t)(last - first + 1) * 4);
}

static unsigned mirror(unsigned word, unsigned parity) { return parity & 1 ? word ^ 0x80000000u : word; }

static unsigned draw(const unsigned *table, int count)
{ return table[nc_rand_below((uint32_t)count)]; }

static void seed_car_base(int car)
{
    zero_words(CW(car, -9), CW(car, 382));
    DW(CW(car, -1)) = nc_rand_below(4) - 1;               /* B-1 body idx -1..2 */
    DW(CW(car, 0)) = 0xFFFFFFFFu;                          /* B+0 driver seat */
    DW(CW(car, 1)) = 0xFFFFFFFFu;                          /* B+1 vehicle id */
    DW(CW(car, 2)) = nc_rand() & 3;                        /* B+2 class (recomputed) */
    DW(CW(car, 30)) = nc_rand() & 3;                       /* B+30 active */
    DW(CW(car, 31)) = nc_rand() & 1;                       /* B+31 expire flag */
    DW(CW(car, 373)) = nc_rand_below(16);                  /* B+373 style word */
    DW(CW(car, 363)) = 180 + nc_rand_below(120);           /* B+363 active-extra read */
    DW(CW(car, 19)) = 0;                                   /* B+19 steer */
    DW(CW(car, 20)) = 0;                                   /* B+20 target speed */
    DW(CW(car, 23)) = 0x40266666;                          /* B+23 wheelbase */
    DW(CW(car, 21)) = draw(pos_bits, NPOS);
    DW(CW(car, 22)) = draw(pos_bits, NPOS);
    for (int k = 0; k < 3; k++) DW(CW(car, 3 + k)) = draw(pos_bits, NPOS);
    for (int k = 0; k < 3; k++) DW(CW(car, 6 + k)) = mirror(draw(vel_bits, NVEL), (unsigned)nc_rand());
    DW(CW(car, 9)) = hedge[hsafe[nc_rand_below((uint32_t)NHSAFE)]];
}

static void seed_vehicle(int vid, unsigned sin_index, unsigned cos_index)
{
    long v = VEH(vid);
    zero_words(v, v + 5209);
    for (int k = 0; k < 3; k++) DW(v + 4 + k) = draw(pos_bits, NPOS);
    DW(v + 10) = axis_bits[cos_index % NAXIS];
    DW(v + 11) = 0x3F800000;
    DW(v + 12) = 0;
    DW(v + 13) = 0;
    DW(v + 14) = 0x3F800000;
    DW(v + 15) = axis_bits[sin_index % NAXIS] ^ 0x80000000u;
    DW(v + 16) = axis_bits[cos_index % NAXIS];
    DW(v + 17) = 0;
    DW(v + 18) = axis_bits[sin_index % NAXIS];
    DW(v + 28) = nc_rand();
    DW(v + 29) = nc_rand();
    DW(v + 30) = nc_rand();
}

static void seed_body(int body)
{
    long b = BODY(body);
    for (int k = 0; k < 3; k++) DW(b + k) = draw(vel_bits, NVEL);
    DW(b + 23571) = 0x3F000000 + (unsigned)body;      /* word +346731818 */
    DW(b + 23574) = 0x3E000000 - (unsigned)body;       /* word +346731821 */
}

static void zero_humans(void)
{
    for (int h = 0; h < 64; h++)
        for (int s = 0; s < 4; s++)
            DW(HUM + 28664 * h + SEAT[s][0]) = 0;
}

static void place_seat(int h, int s, unsigned x, unsigned y, unsigned z, unsigned seat_id)
{
    long base = HUM + 28664 * h;
    DW(base + SEAT[s][0]) = 1;
    DW(base + SEAT[s][1]) = seat_id;
    DW(base + SEAT[s][2]) = 1 + nc_rand_below(4);
    DW(base + SEAT_POS[s] + 0) = x;
    DW(base + SEAT_POS[s] + 1) = y;
    DW(base + SEAT_POS[s] + 2) = z;
    DW(PLAYER_BASE + 3597 * (long)seat_id) = nc_chance(40) ? 1u : 0u;   /* 16 vs 96 radius */
}

static void seed_cell(int c, int light, int inside)
{
    long b = CELL(c);
    DW(b + 10) = light;                                  /* light record index */
    if (inside) {
        DW(b + 134) = 0xC2C00000u;  DW(b + 135) = 0xC2C00000u; DW(b + 136) = 0xC2C00000u;  /* -96 */
        DW(b + 137) = 0x42C00000u;   DW(b + 138) = 0x42C00000u;  DW(b + 139) = 0x42C00000u; /* +96 */
    } else {
        DW(b + 134) = 0x43700000u;   DW(b + 135) = 0x43700000u;  DW(b + 136) = 0x43700000u; /* +240 */
        DW(b + 137) = 0x43900000u;   DW(b + 138) = 0x43900000u;  DW(b + 139) = 0x43900000u; /* +320 */
    }
    DW(b + 128) = 0x3F800000; DW(b + 129) = 0; DW(b + 130) = 0;         /* light anchor */
    DW(b + 15) = nc_rand_below(3);                                     /* signal count */
    for (int k = 0; k < 6; k++) DW(b + 17 + k) = draw(pos_bits, NPOS);
}

static void seed_light(int j, unsigned counter, unsigned slot, int fill_ids)
{
    long b = LIGHT(j);
    DW(b + 3 + (slot & 3)) = 2;                     /* one busy car slot */
    if (fill_ids)
        for (int k = 0; k < 4; k++) DW(b + 3 + k) = k == j ? 0xFFFFFFFFu : (unsigned)(2 + 3 * k);
    DW(b + 14) = slot;                              /* rotating slot byte */
    DW(b + 15) = counter;                           /* 800-wrap counter */
    for (int k = 0; k < 3; k++) DW(b + k) = draw(pos_bits, NPOS);
    for (int k = 0; k < 6; k++) DW(LOT(j) + k) = draw(pos_bits, NPOS);  /* lot bounds */
}

/* ---- driver --------------------------------------------------------------- */

static void seed_case(int n)
{
    int kind = n % 10;
    int cars = 1 + n % 4;
    nc_seed(0x9E3779B97F4A7C15ull * (unsigned)(n + 1));

    zero_humans();
    DW(CAR_COUNT) = (unsigned)cars;
    DW(GATE) = 0;
    DW(TRAM) = kind == 7 ? 1u : 0u;
    if (kind == 7)      DW(CELL_COUNT) = 69u;
    else if (kind == 5 || kind == 6) DW(CELL_COUNT) = 3u;
    else                DW(CELL_COUNT) = 1u;
    DW(LIGHT_COUNT) = (unsigned)(kind == 6 ? 2 : kind == 7 ? 1 : (n % 3 == 0));

    switch (kind) {
    case 0: case 1: {                                     /* kinematic boundary sweep */
        for (int c = 0; c < cars; c++) {
            seed_car_base(c);
            if (kind == 0) {                              /* whole safe pools, slow speeds */
                DW(CW(c, 9))  = hedge[hsafe[(unsigned)(n * 7 + c * 3) % NHSAFE]];
                DW(CW(c, 19)) = steer_bits[(unsigned)(n * 11 + c * 2) % 8];  /* 0.01..pi/4, signs */
                DW(CW(c, 23)) = length_bits[lsafe[(unsigned)(n * 5 + c) % NLSAFE]];
                DW(CW(c, 20)) = target_bits[(unsigned)(n * 3 + c) % TBENIGN];
                DW(CW(c, 6)) = mirror(draw(slow_bits, NSLOW), (unsigned)(n + c));
                DW(CW(c, 7)) = mirror(draw(slow_bits, NSLOW), (unsigned)(n * 2 + c));
                DW(CW(c, 8)) = mirror(draw(slow_bits, NSLOW), (unsigned)(n * 3 + c));
            } else {                                      /* big omega: poles and wraps (the found store bug fires) */
                DW(CW(c, 9))  = hedge[6 + (unsigned)(n * 2 + c) % 9];        /* +-pi, +-2pi, +-(3pi) */
                DW(CW(c, 19)) = steer_bits[8 + (unsigned)(n + c) % 8];       /* pi/2, around pi, huge */
                DW(CW(c, 23)) = length_bits[(unsigned)(4 + c * 2) % LBENIGN];
                DW(CW(c, 20)) = target_bits[(unsigned)(n * 3 + c * 5) % TBENIGN];
            }
            DW(CW(c, 30)) = 1;
        }
        for (int b = 0; b < 3; b++) seed_body(b);
        seed_cell(0, 0, 1);
        break;
    }
    case 2: {                                             /* servo thresholds, exact bits */
        for (int c = 0; c < cars; c++) {
            seed_car_base(c);
            DW(CW(c, 9)) = hedge[hsafe[(unsigned)(n + c) % NHSAFE]];
            DW(CW(c, 19)) = 0;
            DW(CW(c, 23)) = 0x3FC00000;                  /* L = 1.5 */
            unsigned t = target_bits[(unsigned)(n * 3 + c) % TBENIGN];
            DW(CW(c, 20)) = t;
            DW(CW(c, 6)) = mirror(t, (unsigned)(n + c)); /* speed^2 at the threshold */
            DW(CW(c, 8)) = mirror(t, (unsigned)(n + c));
            DW(CW(c, 30)) = 1;
        }
        for (int b = 0; b < 3; b++) seed_body(b);
        break;
    }
    case 8: {                                             /* Inf/NaN steering matrices (atan2 poles) */
        for (int c = 0; c < cars; c++) {
            seed_car_base(c);
            DW(CW(c, 1)) = (unsigned)(c % 3);             /* follow: heading = atan2 output */
            DW(CW(c, 30)) = (unsigned)(c % 3);
        }
        for (int v = 0; v < 3; v++)
            seed_vehicle(v, (unsigned)(NAXIS - 1 - (n + v) % 6), (unsigned)(v * 5 + n) % NAXIS);
        for (int b = 0; b < 3; b++) seed_body(b);
        break;
    }
    case 9: {                                             /* accel-servo constant ulps */
        for (int c = 0; c < cars; c++) {
            seed_car_base(c);
            DW(CW(c, 9)) = 0x00000000;                   /* heading 0: lanes (sin 0, cos 1) */
            DW(CW(c, 19)) = 0;
            DW(CW(c, 23)) = 0x3FC00000;                  /* L = 1.5 (unused: steer 0) */
            DW(CW(c, 20)) = ulp_targets[(unsigned)(n / 10 + c) % NULP];
            DW(CW(c, 6)) = 0x00000000;                   /* ws13 = 0: pure amount */
            DW(CW(c, 7)) = 0;
            DW(CW(c, 8)) = 0x00000001;                   /* nonzero speed, zero projection */
            DW(CW(c, 30)) = 1;
        }
        for (int b = 0; b < 3; b++) seed_body(b);
        break;
    }
    case 3:                                                /* follow: body state copy */
    case 4: {                                              /* attach: class 2, vehicle id -1 */
        int close = kind == 4;
        for (int c = 0; c < cars; c++) {
            seed_car_base(c);
            for (int k = 0; k < 9; k++) DW(CW(c, 10 + k)) = draw(pos_bits, NPOS);
            if (close) {
                DW(CW(c, 1)) = 0xFFFFFFFFu;
                /* a seat 5 units from the car: class 2 */
                float px, py, pz;
                memcpy(&px, &DW(CW(c, 3)), 4);
                memcpy(&py, &DW(CW(c, 4)), 4);
                memcpy(&pz, &DW(CW(c, 5)), 4);
                place_seat(c * 2, c, bits(px + 5.0f), bits(py), bits(pz),
                           (unsigned)c % 3);
            } else {
                DW(CW(c, 1)) = (unsigned)(c % 3);        /* 0,1,2 */
                DW(CW(c, 30)) = (unsigned)(c % 3);       /* 0,1,2 active modes */
                DW(CW(c, 20)) = target_bits[(unsigned)(n * 5 + c * 2) % 16];  /* incl. the 0.05 boundary */
                DW(CW(c, 19)) = draw(pos_bits, NPOS);    /* ws33 word copied to the vehicle */
            }
        }
        for (int v = 0; v < 3; v++) seed_vehicle(v, (unsigned)(n * 3 + v), (unsigned)(n * 5 + v * 2));
        for (int b = 0; b < 3; b++) seed_body(b);
        seed_cell(0, 0, 1);
        break;
    }
    case 5: {                                              /* expire / rider spawn paths */
        for (int c = 0; c < cars; c++) {
            seed_car_base(c);
            DW(CW(c, 30)) = (unsigned)((n / 9 + c) % 4); /* 0..3 across cases */
            DW(CW(c, 31)) = (unsigned)((n / 27 + c) % 2);
            DW(CW(c, 1)) = nc_chance(50) ? (unsigned)nc_rand_below(3) : 0xFFFFFFFFu;
            DW(CW(c, 0)) = nc_rand_below(3);              /* driver seat id / expire slot */
            DW(CW(c, 373)) = 40 + nc_rand_below(8);
        }
        for (int v = 0; v < 3; v++) seed_vehicle(v, (unsigned)(n * 11 + v), (unsigned)(v * 7 + n));
        for (int c = 0; c < 3; c++) seed_cell(c, c % 2, c != 2);
        for (int b = 0; b < 3; b++) seed_body(b);
        break;
    }
    case 6: {                                              /* cells, lights, corners */
        for (int c = 0; c < cars; c++) {
            seed_car_base(c);
            DW(CW(c, 9)) = hedge[hsafe[(unsigned)(n * 4 + c * 7) % NHSAFE]];
            DW(CW(c, 21)) = length_bits[(unsigned)(n + c) % LBENIGN];
            DW(CW(c, 22)) = length_bits[(unsigned)(n * 2 + c + 1) % LBENIGN];
            DW(CW(c, 30)) = (unsigned)(c % 3);
        }
        for (int c = 0; c < 3; c++) seed_cell(c, c % 2, c != 2);
        static const unsigned counters[] = {0, 1, 671, 672, 799, 800, 801, 0xFFFFFF};
        seed_light(0, counters[(n / 9) % 8], (unsigned)(n % 4), n % 3);
        seed_light(1, counters[(n / 9 + 3) % 8], (unsigned)((n + 2) % 4), 0);
        break;
    }
    case 7: {                                              /* cell 67 forces class 0 */
        for (int c = 0; c < cars; c++) {
            seed_car_base(c);
            DW(CW(c, 30)) = 2;
            DW(CW(c, 373)) = 1;
            place_seat(30 - c, c, draw(pos_bits, NPOS), 0x42000000u, draw(pos_bits, NPOS),
                       (unsigned)c % 3);       /* nearby humans: class 2 without the gate */
            DW(CW(c, 19)) = 0;
            DW(CW(c, 23)) = 0x40266666;
        }
        for (int c = 0; c < 3; c++) seed_cell(c, 0, 0);
        seed_cell(67, 0, 1);
        seed_light(0, (unsigned)(670 + n % 4), (unsigned)(n % 4), 1);
        break;
    }
    }
    if (kind == 0 || kind == 1 || kind == 2)
        if (nc_chance(50)) place_seat(40, 0, 0x42480000u, 0, 0x42480000u, 1);  /* 50 away: class 1 */
    DW(RAGDOLL) = 0x3F800000;
}

/* ---- reporting ------------------------------------------------------------ */

static void report_car(int c)
{
    nc_line("car %d ids %08x %08x %08x %08x act %08x %08x extra %08x %08x cell %08x %08x stop %08x %08x %08x %08x %08x",
            c, DW(CW(c, -1)), DW(CW(c, 0)), DW(CW(c, 1)), DW(CW(c, 2)),
            DW(CW(c, 30)), DW(CW(c, 31)),
            DW(CW(c, 363)), DW(CW(c, 372)), DW(CW(c, 364)), DW(CW(c, 365)),
            DW(CW(c, 366)), DW(CW(c, 367)), DW(CW(c, 368)), DW(CW(c, 371)),
            DW(CW(c, 373)));
    nc_line("  flt %08x %08x %08x %08x %08x %08x head %08x mat %08x %08x %08x %08x %08x %08x %08x %08x %08x",
            DW(CW(c, 3)), DW(CW(c, 4)), DW(CW(c, 5)), DW(CW(c, 6)), DW(CW(c, 7)),
            DW(CW(c, 8)), DW(CW(c, 9)),
            DW(CW(c, 10)), DW(CW(c, 11)), DW(CW(c, 12)), DW(CW(c, 13)), DW(CW(c, 14)),
            DW(CW(c, 15)), DW(CW(c, 16)), DW(CW(c, 17)), DW(CW(c, 18)));
    nc_line("  ctl %08x %08x %08x %08x %08x corner %08x %08x rec %016llx",
            DW(CW(c, 19)), DW(CW(c, 20)), DW(CW(c, 21)), DW(CW(c, 22)), DW(CW(c, 23)),
            DW(CW(c, 24)), DW(CW(c, 25)),
            (unsigned long long)nc_hash(&DW(CW(c, -1)), 383 * 4));
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x14023B1B0, (void *)rand);
    nc_redirect(0x1402437E0, (void *)host_tan);
    nc_redirect(0x140009E30, (void *)stub_e930);
    nc_redirect(0x140008E40, (void *)stub_e40);
    nc_redirect(0x1400DC050, (void *)stub_ray);
    nc_redirect(0x14005BCA0, (void *)stub_createvehicle);

    /* Every word the pair reads lies in these spans; the untouched zero
       state outside them is also deterministic. */
    zero_words(71859080, 71870300);
    zero_words(129716600, 129732700);
    zero_words(132400560, 132402600);
    zero_words(132792820, 132792840);
    zero_words(179992040, 179992060);
    zero_words(225391200, 225391760);
    zero_words(225426000, 225454100);
    zero_words(280651200, 282478800);
    zero_words(346708200, 346783800);
    zero_words(73006970, 73007000);

    int cases = nc_cases(270);
    for (int n = 0; n < cases; n++) {
        seed_case(n);
        nc_line("case %d kind %d cars %d gate %d", n, n % 10, 1 + n % 4, (int)DW(TRAM));
        for (int c = 0; c < 1 + n % 4; c++)
            nc_line("pre %d in %08x %08x %08x %08x %08x %08x %08x %08x %08x %08x %08x %08x %08x %08x",
                    c, DW(CW(c, 1)), DW(CW(c, 3)), DW(CW(c, 4)), DW(CW(c, 5)),
                    DW(CW(c, 6)), DW(CW(c, 7)), DW(CW(c, 8)), DW(CW(c, 9)),
                    DW(CW(c, 19)), DW(CW(c, 20)), DW(CW(c, 21)), DW(CW(c, 22)),
                    DW(CW(c, 23)), DW(CW(c, 30)));
        nc_set_mxcsr(0x1F80);
        tick(0x1357, 0x2468, 2.25);   /* the original's rax is discarded garbage */
        nc_line("  mxcsr %08x", nc_get_mxcsr());
        for (int c = 0; c < 1 + n % 4; c++)
            report_car(c);
        nc_line("  veh %016llx %016llx %016llx %016llx",
                (unsigned long long)nc_hash(&DW(VEH(0) - 4), 5200 * 4),
                (unsigned long long)nc_hash(&DW(VEH(1) - 4), 5200 * 4),
                (unsigned long long)nc_hash(&DW(VEH(2) - 4), 5200 * 4),
                (unsigned long long)nc_hash(&DW(VEH(3)), 300 * 4));
        nc_line("  body %016llx %016llx lights %016llx cells %016llx expire %016llx rag %08x",
                (unsigned long long)nc_hash(&DW(BODY(0)), 24944 * 4 * 2),
                (unsigned long long)nc_hash(&DW(BODY(2)), 24944 * 4),
                (unsigned long long)nc_hash(&DW(225391233), 34 * 2 * 4 + 0x2C),
                (unsigned long long)nc_hash(&DW(225426046), (size_t)(225453100 - 225426046) * 4),
                (unsigned long long)nc_hash(&DW(280651280), (size_t)(280665700 - 280651280) * 4),
                DW(RAGDOLL));
    }
    return 0;
}
