// NC_WRAPPERS: 140051230 1400512D0 140051480 140051560 1400515E0 140051650 1400516B0 140051730 1400518B0 1400519F0 140051B00 140051BD0 140051CF0 140051DC0 140051F50 140051FF0 140052090
/* Seventeen event constructors against the installed executable. Compare
 * complete reused records (including untouched bytes), source state, the
 * ring cursor and FP status. No recording stubs: native memcpy also runs. */
#include <string.h>
#include "nc.h"
#include "events.h"

#ifdef NC_NATIVE
#define CALL(address, name, signature, ...) ((void (*) signature)NC_ADDR(address))(__VA_ARGS__)
#else
#ifdef NC_CLIENT_WRAPPERS
#include "eventrecords_wrappers.h"
#endif
#define CALL(address, name, signature, ...) name(__VA_ARGS__)
#endif

static void random_bytes(void *p, size_t n)
{
    uint8_t *bytes = p;
    for (size_t k = 0; k < n; k++) bytes[k] = (uint8_t)nc_rand();
}

int main(void)
{
    static const int lengths[] = {0, 1, 30, 31, 32, 62, 63, 64, 65, 127, 128, 255, 511, 1022, 1023};
    static const int positions[] = {0, 1, 17, 32767, 65518, 65534, 65535};
    nc_map_image();
    memset(world_events, 0xA5, EVENT_CAPACITY * sizeof(WorldEvent));
    int cases = nc_cases(2000);
    for (int op = 0; op < 17; op++) for (int n = 0; n < cases; n++) {
        nc_seed((uint64_t)op * 1000000u + (uint64_t)n);
        int start = positions[n % 7];
        world_event_count = start;
        game_connected = n % 11 == 0 ? 0 : n % 11 == 1 ? -1 : 1;
        game_tick = (int32_t)nc_rand();
        for (int k = -1; k < 19; k++)
            random_bytes(&world_events[(start + k) & 65535], sizeof(WorldEvent));
        int player = (int)nc_rand_below(PLAYER_CAPACITY);
        int corporation = (int)nc_rand_below(6), mission = (int)nc_rand_below(16);
        uint8_t *player_record = (uint8_t *)event_player_name(player) - 4;
        EventMission *m = event_mission(corporation, mission);
        random_bytes(player_record, 0x3834);
        random_bytes(m, sizeof *m + 64); /* includes the extra chunk for a 1023-byte text */
        int length = lengths[n % (sizeof lengths / sizeof lengths[0])];
        memset(m->text, 'a' + n % 26, length);
        m->text[length] = 0;
        random_bytes(event_stocks, 6 * sizeof(EventStock));
        for (int k = 0; k < 6; k++) event_stocks[k].price = nc_float(-1e8f, 1e8f);
        uint32_t a[6];
        for (int k = 0; k < 6; k++) a[k] = (uint32_t)nc_rand();
        float vectors[6], volume, pitch;
        random_bytes(vectors, sizeof vectors);
        random_bytes(&volume, sizeof volume);
        random_bytes(&pitch, sizeof pitch);
        const float *p = vectors, *v = vectors + 3;
        /* Word-overlapping copies, and inputs overwritten by type/tick. */
        if (n % 8 == 1) p = (float *)&world_events[start];
        if (n % 8 == 2) p = world_events[start].vector_a - 1;
        if (n % 8 == 3) v = world_events[start].vector_a + 2;
        const float *optional_p = n % 4 < 2 ? NULL : p;
        const float *optional_v = n % 4 % 2 ? NULL : v;
        if (!game_connected) p = v = optional_p = optional_v = NULL;
        char text[1025];
        memset(text, 'A' + n % 26, sizeof text);
        text[length] = 0;
        uint32_t line = (uint32_t)(n % 16);
        int copy_length = n % 7 == 0 ? 0 : n % 7 == 1 ? 1 : n % 7 == 2 ? 63 : n % 7 == 3 ? 64 : 65 + n % 40;
        nc_set_mxcsr(0x1F80);
        switch (op) {
        case 0: CALL(0x140051230, event_bullet, (uint32_t,const float*,const float*,uint32_t), a[0],p,v,a[1]); break;
        case 1: CALL(0x1400512D0, event_bullet_hit, (uint32_t,uint32_t,const float*,const float*), a[0],a[1],p,optional_v); break;
        case 2: CALL(0x140051480, event_message, (uint32_t,const char*,uint32_t,uint32_t), a[0],game_connected?text:NULL,a[1],a[2]); break;
        case 3: CALL(0x140051560, event_block_update, (uint32_t,uint32_t,uint32_t,uint32_t,uint32_t), a[0],a[1],a[2],a[3],a[4]); break;
        case 4: CALL(0x1400515E0, event_sound, (uint32_t,const float*,float,float), a[0],p,volume,pitch); break;
        case 5: CALL(0x140051650, event_item_sound, (uint32_t,uint32_t,float,float), a[0],a[1],volume,pitch); break;
        case 6: CALL(0x1400516B0, event_block_parts, (uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t), a[0],a[1],a[2],a[3],a[4],a[5]); break;
        case 7: CALL(0x140051730, event_block_hit, (uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,const float*,const float*), a[0],a[1],a[2],a[3],a[4],a[5],optional_p,optional_v); break;
        case 8: CALL(0x1400518B0, event_corporation_door, (uint32_t,uint32_t), a[0],a[1]); break;
        case 9: CALL(0x1400519F0, event_mission_update, (int,int), corporation,mission); break;
        case 10: CALL(0x140051B00, event_mission_text_line, (int,int,uint32_t,int), corporation,mission,line,copy_length); break;
        case 11: CALL(0x140051BD0, event_mission_text, (int,int), corporation,mission); break;
        case 12: CALL(0x140051CF0, event_vehicle_removed, (uint32_t,uint32_t,uint32_t,const float*,const float*), a[0],a[1],a[2],optional_p,optional_v); break;
        case 13: CALL(0x140051DC0, event_player_update, (int), player); break;
        case 14: CALL(0x140051F50, event_player_finance, (int), player); break;
        case 15: CALL(0x140051FF0, event_type21, (uint32_t,uint32_t,uint32_t,uint32_t,const float*), a[0],a[1],a[2],a[3],optional_p); break;
        case 16: CALL(0x140052090, event_stock_prices, (void)); break;
        }
        uint32_t csr = nc_get_mxcsr();
        nc_line("op %d case %d count %d csr %08x player %016llx mission %016llx stocks %016llx", op,n,
                world_event_count,csr,(unsigned long long)nc_hash(player_record,0x3834),
                (unsigned long long)nc_hash(m,sizeof *m + 64),
                (unsigned long long)nc_hash(event_stocks,6*sizeof(EventStock)));
        for (int k = -1; k < 19; k++)
            nc_line("slot %d %016llx", k, (unsigned long long)nc_hash(&world_events[(start+k)&65535],sizeof(WorldEvent)));
    }
    nc_line("whole ring %016llx", (unsigned long long)nc_hash(world_events, EVENT_CAPACITY*sizeof(WorldEvent)));
    return 0;
}
