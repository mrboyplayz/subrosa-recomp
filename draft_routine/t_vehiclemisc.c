/* The vehicle misc routines: the packet bit writer (0x14006C360), the
   bytes transfer (0x14006C5E0), the callsign/voice record (0x14006CCA0),
   the engine start (0x140077660), the helicopter vehicle type (0x14014A8E0),
   the train type fields (0x140145BB0 tail) and the speech-ring alert
   (0x1400A2C00). Bit widths 1..32 and 0/negative, cursor 0..7 and
   wrapping, byte counts at the 64 KiB edge from both sides, the
   re-read-cursor overlap, garbage and random streams, and the voice list
   with matching/mismatching callsigns. The engine start, the two vehicle
   type setups and the callee effects (city pass, the vehicle types' asset
   and part-list calls) are recording stubs in both builds, so only the
   state the ports themselves touch is compared. The packet transfers and
   the alert call the engine ports in the port build and the original
   addresses in the native build. */
#include <string.h>
#include "nc.h"
#include "vehicles.h"
#include "player_ring.h"

/* The draft file's routines and the two engine ports it also covers. */
int64_t vehicles_engine_start(char flags);
void vehicles_texture_slot_pass(uint32_t *slot);
void vehicles_callsign_set(const uint8_t *callsign, float channel);
uint32_t vehicles_packet_bits_write(int index, uint32_t *value, int bits, int option);
uint64_t vehicles_packet_bytes_transfer(int index, void *buffer, int element_size,
                                        int count, int write);
uint32_t vehicles_alert_post(int player, int type);
int64_t vehicles_setup_helicopter_type(void);

/* The train type's fields: the draft keeps the routine static, so every
   build calls it through this pointer (the native build sets it to its own
   forwarder, the port build to the draft's routine). */
void (*vehicles_setup_train_fields_fn)(void);

#ifdef NC_NATIVE
/* The native build has no port of the train fields; this forwarder makes
   the same stores the draft's routine and the original's tail make, over
   the type table the case seeds. */
static void vehicles_setup_train_fields_port(void);
/* The engine's ports are not in the native build; the original addresses
   stand in for the two routines that already have one. */
#define packet_bits_write(i, v, b, o) \
    ((uint32_t (*)(int, uint32_t *, int, int))NC_ADDR(0x14006C360))(i, v, b, o)
#define packet_bytes_transfer(i, buf, es, n, w) \
    ((uint64_t (*)(int, void *, int, int, int))NC_ADDR(0x14006C5E0))(i, buf, es, n, w)
#define callsign_set(s, c) \
    ((void (*)(const uint8_t *, float))NC_ADDR(0x14006CCA0))(s, c)
#define engine_start(f) \
    ((int64_t (*)(char))NC_ADDR(0x140077660))(f)
#define alert_post(p, t) \
    ((uint32_t (*)(int, int))NC_ADDR(0x1400A2C00))(p, t)
#define type_helicopter() \
    ((int64_t (*)(void))NC_ADDR(0x14014A8E0))()
#define type_train() vehicles_setup_train_fields_fn()
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14006C360(int, unsigned int *, int, int);
long long sub_14006C5E0(int, void *, int, int, int);
void sub_14006CCA0(const unsigned char *, float);
long long sub_140077660(char);
long long sub_1400A2C00(int, int);
long long sub_14014A8E0(void);
static uint32_t packet_bits_write(int i, uint32_t *v, int b, int o)
{
    return (uint32_t)sub_14006C360(i, v, b, o);
}
#define packet_bytes_transfer(i, buf, es, n, w) \
    ((uint64_t)(unsigned long long)sub_14006C5E0(i, buf, es, n, w))
#define callsign_set(s, c) sub_14006CCA0(s, c)
#define engine_start(f) sub_140077660(f)
#define alert_post(p, t) ((uint32_t)(unsigned long long)sub_1400A2C00(p, t))
#define type_helicopter() sub_14014A8E0()
#define type_train() vehicles_setup_train_fields_fn()
#else
/* The port build compiles the draft file with the engine, so the ports
   come from there. */
uint64_t vehicles_packet_bytes_transfer(int index, void *buffer, int element_size,
                                        int count, int write);
void vehicles_callsign_set(const uint8_t *callsign, float channel);
int64_t vehicles_engine_start(char flags);
uint32_t vehicles_alert_post(int player, int type);
int64_t vehicles_setup_helicopter_type(void);
void vehicles_setup_train_fields(void);
static uint32_t packet_bits_write(int i, uint32_t *v, int b, int o)
{
    return vehicles_packet_bits_write(i, v, b, o);
}
#define packet_bytes_transfer vehicles_packet_bytes_transfer
#define callsign_set vehicles_callsign_set
#define engine_start vehicles_engine_start
#define alert_post vehicles_alert_post
#define type_helicopter vehicles_setup_helicopter_type
#define type_train() vehicles_setup_train_fields()
#endif

/* The packet streams, the voice list and the speech rings, restored before
   every case so each starts from the same memory. */
#define PACKET_BASE   0x1607B5380ULL
#define PACKET_SPAN   (VEHICLES_PACKET_OUT_SIZE * 4ULL)
#define VOICE_BASE    0x160722360ULL
#define VOICE_SPAN    (0x8CULL * 128ULL)
#define RING_BASE     0x151620E14ULL

static void make_callsign(uint8_t *out, int n)
{
    static const uint8_t table[] = {
        0x41, 0x42, 0x43, 0x00, 0x61, 0x62, 0x63, 0x00,
        0x2A, 0x00, 0x2A, 0x2A, 0x00, 0x7F, 0x80, 0xFF
    };
    if (n == 0) {
        out[0] = 0;
    } else if (n == 1) {
        memcpy(out, "alpha", 6);
    } else if (n == 2) {
        memcpy(out, "alpha", 6);
    } else if (n == 3) {
        memset(out, 'x', 127);
        out[127] = 0;
    } else if (n == 4) {
        for (int k = 0; k < 128; k++)
            out[k] = (uint8_t)('A' + (k % 26));
    } else {
        for (int k = 0; k < 16; k++)
            out[k] = table[(n + k) % 16];
        out[nc_rand_below(17)] = 0;
        out[15] = (uint8_t)nc_rand();
    }
}

/* The vehicle type setups' callees: the sbv loader, the .tst loader, the
   box-point builder, the part-list dedup and the type reset. All are
   recording stubs behind the same jump in both builds, so the calls the
   ports make land on the same log. */
static unsigned long long type_calls;
static void redirect_type_callees(void);

static void stub_sbv(int type, const char *name)
{
    uint64_t args[2] = {(uint64_t)type, (uint64_t)(uintptr_t)name};
    nc_call("sbv", 2, args);
}

static void stub_tst(int type, const char *name)
{
    uint64_t args[2] = {(uint64_t)type, (uint64_t)(uintptr_t)name};
    nc_call("tst", 2, args);
}

static void stub_points(int type, float a, float b, unsigned c)
{
    uint32_t bits_a, bits_b;
    memcpy(&bits_a, &a, 4);
    memcpy(&bits_b, &b, 4);
    uint64_t args[4] = {(uint64_t)type, bits_a, bits_b, c};
    nc_call("points", 4, args);
}

static long long stub_part_add(int type)
{
    uint64_t args[1] = {(uint64_t)type};
    nc_call("partadd", 1, args);
    return 0;
}

/* The native build's forwarder of the train type's fields (the draft's
   stores, over the same addresses). */
static void vehicles_setup_train_fields_port(void)
{
    SR_GLOBAL(uint32_t, 0x192FD7154ULL) = 0x6E696152u;         /* "Train" bytes 4..7 */
    SR_GLOBAL(uint32_t, 0x192FD7140ULL) = 1u;                  /* the type's id word */
    SR_GLOBAL(uint32_t, 0x192FD7174ULL) = 1000u;               /* price */
    SR_GLOBAL(uint32_t, 0x192FD7148ULL) = 0u;                  /* the model's word */
    *(float *)(void *)(uintptr_t)0x192FD7178ULL = 320000.0f;   /* origin point */
    stub_sbv(13, "train04");
    stub_points(13, 0.375f, 12.0f, 0u);
}

#ifdef NC_NATIVE
/* The original's part-list routine returns a pointer-like value both
   callers drop; the stub's 0 stands in for it. */
static void redirect_type_callees(void)
{
    nc_redirect(0x140192EC0, (void *)stub_sbv);
    nc_redirect(0x140103270, (void *)stub_tst);
    nc_redirect(0x14014D6D0, (void *)stub_points);
    nc_redirect(0x14014E9C0, (void *)stub_points);
    nc_redirect(0x14014AAE0, (void *)stub_part_add);
    nc_redirect(0x140145E20, (void *)stub_part_add);
}
#endif

/* The engine start's callee effects: the city pass is a recording stub that
   advances the slot cursor one stride and writes a name; the timer and
   winsock calls go through the names the ports call. */
static void stub_slot_pass(uint32_t *slot)
{
    *slot = 0x4000u + (uint32_t)type_calls;
}

/* The glGenTextures slot the original's engine start calls per texture
   slot: the fixture points it at a stub that records the call and writes a
   name. 0x140404060 */
static void stub_gen_textures(int count, uint32_t *names)
{
    uint64_t args[2] = {(uint64_t)count, (uint64_t)(uintptr_t)names};
    nc_call("glGenTextures", 2, args);
    *names = 0x4000u + (uint32_t)type_calls;
}

/* The engine start's timer: the fixture scripts the frequency and counter
   the stubs return, so the ports' stores are compared. */
static unsigned long long scripted_frequency, scripted_counter;

/* The start case runs the engine start directly in both builds, so the
   timer and winsock names must resolve identically everywhere — the OS
   header's own declarations are the only safe source for those imports. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

/* The vehicle type setups write fields across the type records; the cases
   hash the whole span the setups touch. */
#define TYPE_SPAN_0 0x192FBEB80ULL
#define TYPE_SPAN_1 0x192FD7140ULL

#ifdef NC_NATIVE
/* The native build's forwarder of the train type's fields (the draft's
   stores, over the same addresses). */
static void vehicles_setup_train_fields_port(void)
{
    SR_GLOBAL(uint32_t, 0x192FD7154ULL) = 0x6E696152u;         /* "Train" bytes 4..7 */
    SR_GLOBAL(uint32_t, 0x192FD7140ULL) = 1u;                  /* the type's id word */
    SR_GLOBAL(uint32_t, 0x192FD7174ULL) = 1000u;               /* price */
    SR_GLOBAL(uint32_t, 0x192FD7148ULL) = 0u;                  /* the model's word */
    *(float *)(void *)(uintptr_t)0x192FD7178ULL = 320000.0f;   /* origin point */
    stub_sbv(13, "train04");
    stub_points(13, 0.375f, 12.0f, 0u);
}
#endif

static void run_packet_case(int n)
{
    static const int bits_table[] = {
        1, 2, 3, 4, 7, 8, 9, 15, 16, 17, 24, 31, 32, 33, 0, -1, -8, 256, 512, 1024
    };
    static const int cursor_table[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 16, 32, 0xFFFF, 0x10000, -1};
    nc_seed(0x1A360000ULL + (uint64_t)n * 7919ULL);
    nc_restore();
    int index = n % 4;
    VehiclesPacketOut *stream = vehicles_packet_out(index);
    uint32_t cursor = (uint32_t)cursor_table[nc_rand_below(16)];
    uint32_t byte_count = (uint32_t)cursor_table[nc_rand_below(16)];
    stream->bit = cursor;
    stream->count = byte_count;
    for (int k = 0; k < 64; k++)
        stream->data[k] = (uint8_t)nc_rand();
    uint32_t value = nc_rand();
    int bits = bits_table[nc_rand_below(20)];
    int option = n % 2;
    /* The stream's own tail, the value's slot and the next stream's head
       are all hashed: a write past the data shows. */
    uint32_t result = packet_bits_write(index, &value, bits, option);
    nc_line("bits n%d i%d b%d o%d c%u cnt%u v%08x -> %u %08x %08x %016llx",
            n, index, bits, option, cursor, byte_count, value, result,
            stream->bit, (unsigned)stream->count,
            (unsigned long long)nc_hash(stream, 0x1001CULL));
}

static void run_transfer_case(int n)
{
    static const int sizes[] = {0, 1, 2, 3, 7, 8, 16, 64, 255, 256};
    nc_seed(0x1A5E0000ULL + (uint64_t)n * 104729ULL);
    nc_restore();
    int index = n % 4;
    VehiclesPacketOut *stream = vehicles_packet_out(index);
    stream->bit = (uint32_t)(n % 9);
    uint32_t byte_count = (uint32_t)(nc_rand() % 70000u);
    if (n % 5 == 0)
        byte_count = 65535u;
    if (n % 7 == 0)
        byte_count = 65536u;
    stream->count = byte_count;
    uint8_t buffer[600];
    for (int k = 0; k < 600; k++)
        buffer[k] = (uint8_t)nc_rand();
    int element_size = sizes[nc_rand_below(10)];
    int count = sizes[nc_rand_below(10)];
    int write = n % 2;
    uint64_t result = packet_bytes_transfer(index, buffer, element_size, count, write);
    nc_line("xfer n%d i%d es%d n%d w%d cnt%u b%u -> %llx %016llx %016llx",
            n, index, element_size, count, write, byte_count, stream->bit, (unsigned long long)result,
            (unsigned long long)nc_hash(stream, 0x1001CULL),
            (unsigned long long)nc_hash(buffer, sizeof buffer));
}

static void run_callsign_case(int n)
{
    nc_seed(0x1ACC0000ULL + (uint64_t)n * 31337ULL);
    nc_restore();
    uint32_t records = (uint32_t)(nc_rand() % 133u);
    if (n % 11 == 0)
        records = 127u + (n % 3);
    SR_GLOBAL(uint32_t, VOICE_BASE) = records;
    uint8_t *voice = (uint8_t *)NC_ADDR(VOICE_BASE);
    for (uint32_t k = 4; k < VOICE_SPAN; k++)
        voice[k] = (uint8_t)nc_rand();
    /* Some records in use, some with callsigns the case can match. */
    for (int i = 0; i < 8 && i < (int)records; i++)
        *(uint32_t *)(void *)(voice + 0x8CULL * (uint64_t)i + 0x84) = (n + i) % 2;
    if (records > 2) {
        memcpy(voice + 0x8CULL * 0 + 4, "alpha", 6);
        memcpy(voice + 0x8CULL * 1 + 4, "bravo", 6);
        memcpy(voice + 0x8CULL * 2 + 4, "x", 2);
    }
    uint8_t callsign[130];
    memset(callsign, 0, sizeof callsign);
    int kind = n % 6;
    make_callsign(callsign, kind);
    if (kind == 1 || kind == 2)
        memcpy(callsign, "alpha", 6);
    float channel = nc_float(-2.0f, 130.0f);
    callsign_set(callsign, channel);
    uint32_t count_after = SR_GLOBAL(uint32_t, VOICE_BASE);
    nc_line("voice n%d k%d rec%u -> %u %016llx",
            n, kind, records, count_after,
            (unsigned long long)nc_hash(NC_ADDR(VOICE_BASE), VOICE_SPAN));
}

static void run_start_case(int n)
{
    nc_seed(0x1A770000ULL + (uint64_t)n * 7ULL);
    nc_restore();
    scripted_frequency = nc_rand();
    scripted_counter = nc_rand();
    SR_GLOBAL(uint32_t, 0x160FC4810ULL) = (uint32_t)nc_rand();
    SR_GLOBAL(uint32_t, 0x160FC4824ULL) = 0u;
    SR_GLOBAL(uint32_t, 0x160FC4828ULL) = 0u;
    type_calls = (unsigned long long)nc_rand_below(4);
    int mode = n % 4;
    long long result;
    if (mode == 3) {
        result = (long long)engine_start((char)0x80000000u);
    } else {
        result = (long long)engine_start((char)(mode * 85));
    }
    nc_line("start n%d m%d f%016llx c%016llx en%08x w%u r%u -> %lld %016llx",
            n, mode,
            (unsigned long long)SR_GLOBAL(uint64_t, 0x160FC4830ULL),
            (unsigned long long)SR_GLOBAL(uint64_t, 0x160FC4838ULL),
            SR_GLOBAL(uint32_t, 0x160FC4810ULL),
            SR_GLOBAL(uint32_t, 0x160FC4824ULL),
            SR_GLOBAL(uint32_t, 0x160FC4828ULL),
            result,
            (unsigned long long)nc_hash(NC_ADDR(0x1A8572BC4ULL), 0xA8ULL * 2048ULL));
}

static void run_type_case(int n)
{
    nc_seed(0x1AA80000ULL + (uint64_t)n * 2654435761ULL);
    nc_restore();
    SR_GLOBAL(uint32_t, 0x192FD6E98ULL) = (uint32_t)(n % 5);
    type_calls = 0;
    long long result;
    if (n % 2) {
        result = (long long)type_helicopter();
    } else {
        type_train();
        result = 0;
    }
    nc_line("type n%d -> %lld %016llx %016llx %08x %016llx",
            n, result,
            (unsigned long long)nc_hash(NC_ADDR(TYPE_SPAN_0), 0x100ULL),
            (unsigned long long)nc_hash(NC_ADDR(0x192FD63F8ULL), 0x20ULL),
            SR_GLOBAL(uint32_t, 0x192FD6E98ULL),
            (unsigned long long)nc_hash(NC_ADDR(TYPE_SPAN_1), 0x60ULL));
}

static void run_alert_case(int n)
{
    static const int repeat_table[] = {0, 1, 2, 3, 64, 65, 66, 1000, -1, -2, -65, -1000, 0x7FFFFFFF};
    nc_seed(0x1A2C0000ULL + (uint64_t)n * 31ULL);
    nc_restore();
    int player = n % 4;
    int type = (int)(nc_rand() % 32u) - 3;
    int32_t repeat = repeat_table[nc_rand_below(13)];
    vehicles_alert_repeat = repeat;
    vehicles_alert_armed = (uint8_t)(n % 3);
    vehicles_alert_blocked = (uint8_t)(n % 2);
    SR_GLOBAL(int32_t, 0x182BBB420ULL + 4ULL * 1760ULL * (uint64_t)(int64_t)type)
        = (int32_t)(nc_rand() % 7u) - 3;
    for (int k = 0; k < 4; k++)
        player_ring_cursor(k) = (int32_t)nc_rand_below(64);
    uint32_t result = alert_post(player, type);
    nc_line("alert n%d p%d t%d rep%d -> %u %016llx",
            n, player, type, repeat, result,
            (unsigned long long)nc_hash(NC_ADDR(RING_BASE),
                                         4ULL * 3597ULL * 4ULL + 0x54ULL * 64ULL * 4ULL));
}

int main(void)
{
#ifdef NC_NATIVE
    /* The imports must be bound before the image is mapped. The OS header's
       declarations stand in for the fixture's stubs everywhere. */
    nc_bind_import("KERNEL32.dll", "QueryPerformanceFrequency", QueryPerformanceFrequency);
    nc_bind_import("KERNEL32.dll", "QueryPerformanceCounter", QueryPerformanceCounter);
#endif
    nc_map_image();
    redirect_type_callees();
    nc_redirect(0x140077710, (void *)stub_slot_pass);
    /* The texture slots the engine start fills point at the glGenTextures
       stub. */
    SR_GLOBAL(uint64_t, 0x140404060ULL) = (uint64_t)(uintptr_t)stub_gen_textures;
    /* The train fields live in the draft's static routine; the native build
       has no port, so the case runs its own forwarder of the draft's fields
       (the state the original's tail writes is compared, the port's routine
       writes the same fields). */
    vehicles_setup_train_fields_fn = vehicles_setup_train_fields_port;
    nc_save(&SR_GLOBAL(uint8_t, PACKET_BASE), (size_t)PACKET_SPAN);
    nc_save(&SR_GLOBAL(uint8_t, VOICE_BASE), (size_t)VOICE_SPAN);
    nc_save(&SR_GLOBAL(uint8_t, RING_BASE),
            (size_t)(4ULL * 3597ULL * 4ULL + 0x54ULL * 64ULL * 4ULL));
    nc_save(&SR_GLOBAL(uint8_t, 0x160FC4810ULL), 0x40);
    nc_save(&SR_GLOBAL(uint8_t, TYPE_SPAN_0), 0x100ULL);
    nc_save(&SR_GLOBAL(uint8_t, 0x192FD63F8ULL), 0x20ULL);
    nc_save(&SR_GLOBAL(uint8_t, TYPE_SPAN_1), 0x60ULL);
    nc_save(&SR_GLOBAL(uint8_t, 0x1A8572BC4ULL), 0xA8ULL * 2048ULL);
    int cases = nc_cases(200);
    for (int n = 0; n < cases; n++) {
        switch (n % 7) {
        case 0: run_packet_case(n); break;
        case 1: run_transfer_case(n); break;
        case 2: run_callsign_case(n); break;
        case 3: run_start_case(n); break;
        case 4: run_type_case(n); break;
        case 5: run_alert_case(n); break;
        default: run_packet_case(n); run_transfer_case(n); break;
        }
    }
    return 0;
}
