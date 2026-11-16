// NC_WRAPPERS: 1400C58E0 1400C5610 1400C5360 1400C9120 1400C5750 1400C3E00
/* The computer item's terminal: the mission-slot hit ratio, the word copy
 * through the letter-to-slot table (raw and coloured paths), the selection
 * list rows, and the snake game's keys (extension-bit letters, Ctrl-X
 * reset, the four arrows and the reversal refusal).
 *
 * The per-item records, the text link record pool head, the peer and local
 * link masks are restored per case and filled with random junk; the
 * computer slots (the letter-to-slot table, 'A'..'Z' over the same words),
 * the link values and the peer count stay within their tables so every
 * read stays in bounds and deterministic. */
#include <string.h>
#include "nc.h"
#include "item.h"

/* The engine ports (declared by their client wrappers; no header). */
float terminal_mission_hit_ratio(int item);
long long terminal_word_copy_mapped(int item, int line, const char *text, int coloured);
long long terminal_selection_list_draw(int item);
void terminal_snake_key(int item, int key);

#ifdef NC_NATIVE
#define mission_hit_ratio(item) ((float (*)(int))NC_ADDR(0x1400C58E0))(item)
#define word_copy_mapped(item, line, text, coloured) \
    ((long long (*)(int, int, const char *, int))NC_ADDR(0x1400C5610))(item, line, text, coloured)
#define selection_list_draw(item) ((long long (*)(int))NC_ADDR(0x1400C5360))(item)
#define snake_key(item, key) ((void (*)(int, int))NC_ADDR(0x1400C9120))(item, key)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400C5610(int, int, long long, int);
float sub_1400C58E0(int);
long long sub_1400C5360(int);
void sub_1400C9120(int, int);

#define mission_hit_ratio(item) sub_1400C58E0(item)
#define word_copy_mapped(item, line, text, coloured) \
    sub_1400C5610(item, line, (long long)(uintptr_t)(text), coloured)
#define selection_list_draw(item) sub_1400C5360(item)
#define snake_key(item, key) sub_1400C9120(item, key)
#else
#define mission_hit_ratio(item) terminal_mission_hit_ratio(item)
#define word_copy_mapped(item, line, text, coloured) terminal_word_copy_mapped(item, line, text, coloured)
#define selection_list_draw(item) terminal_selection_list_draw(item)
#define snake_key(item, key) terminal_snake_key(item, key)
#endif

/* One item's record: link masks and values, text and colour lines, the
   computer slot/letter, used and owner tables, the computer state, the
   snake direction and the selected slot. 0x182BBB2F0..0x182BBCE70. */
#define RECORD_BASE 0x182BBB2F0ULL
#define RECORD_SIZE 0x1B80ULL
#define ITEMS 8

/* The text link record pool, the peer count and the link masks
   item_register_link clears. */
#define POOL_BASE 0x1857BD740ULL
#define POOL_HEAD (512 * sizeof(ItemLinkRecord))
#define PEER_COUNT 0x1AD04ADA0ULL
#define PEER_MASKS 0x1A8E3F7CCULL
#define LOCAL_MASKS 0x1ABC2F5ECULL
#define PEERS 4
#define MASK_SPAN (20 * ITEMS + 8)

static char text[64];

/* The selected slot and the snake direction, private to the engine's
   terminal.c: addressed directly here. */
#define selected_slot(i)   SR_GLOBAL(int32_t, 0x182BBCBE8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define snake_direction(i) SR_GLOBAL(int32_t, 0x182BBC7F4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))

/* Random junk over the saved state, then the tables whose values index
   other tables: the computer slots (the letter-to-slot table) into the
   owner table, the link values into the record pool head, and the peer
   count into the saved peer range. */
static void fill_state(void)
{
    uint32_t *words = (uint32_t *)(uintptr_t)RECORD_BASE;
    for (size_t i = 0; i < RECORD_SIZE * ITEMS / 4; i++)
        words[i] = (uint32_t)nc_rand();
    words = (uint32_t *)(uintptr_t)POOL_BASE;
    for (size_t i = 0; i < POOL_HEAD / 4; i++)
        words[i] = (uint32_t)nc_rand();
    words = (uint32_t *)(uintptr_t)PEER_MASKS;
    for (size_t i = 0; i < 0x2E1E0ULL * PEERS / 4; i++)
        words[i] = (uint32_t)nc_rand();
    words = (uint32_t *)(uintptr_t)LOCAL_MASKS;
    for (size_t i = 0; i < MASK_SPAN / 4; i++)
        words[i] = (uint32_t)nc_rand();
    for (int item = 0; item < ITEMS; item++) {
        for (int slot = 0; slot < 26; slot++)
            item_computer_slot(item, slot) = nc_rand_below(120);
        for (int line = 0; line < 32; line++)
            item_link_value(item, line) = nc_rand_below(512);
        /* Owners small enough to sometimes match their slot, sometimes -1. */
        for (int k = 0; k < 120; k++)
            item_computer_owner(item, k) = nc_chance(15) ? -1 : (int32_t)nc_rand_below(41);
        selected_slot(item) = (int32_t)nc_rand_below(26);
        snake_direction(item) = (int32_t)nc_rand_below(4);
        /* An empty terminal sometimes: the 1.0 share of nothing. */
        if (nc_chance(4)) {
            for (int slot = 0; slot < 26; slot++)
                item_computer_used(item, slot) = -(int32_t)nc_rand_below(3);
            for (int k = 0; k < 120; k++)
                item_computer_owner(item, k) = -1;
        }
    }
    *(int32_t *)(uintptr_t)PEER_COUNT = (int32_t)nc_rand_below(PEERS + 1);
}

int main(void)
{
    nc_map_image();
    nc_save((void *)(uintptr_t)RECORD_BASE, RECORD_SIZE * ITEMS);
    nc_save((void *)(uintptr_t)POOL_BASE, POOL_HEAD);
    nc_save((void *)(uintptr_t)PEER_COUNT, 4);
    for (int peer = 0; peer < PEERS; peer++)
        nc_save((void *)(uintptr_t)(PEER_MASKS + 0x2E1E0ULL * peer), MASK_SPAN);
    nc_save((void *)(uintptr_t)LOCAL_MASKS, MASK_SPAN);

    int cases = nc_cases(1000);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        nc_restore();
        fill_state();

        int kind = (int)nc_rand_below(4);
        int item = (int)nc_rand_below(ITEMS);
        nc_line("case %d kind %d item %d", n, kind, item);
        if (kind == 0) {
            float ratio = mission_hit_ratio(item);
            nc_floats("ratio", &ratio, 1);
        } else if (kind == 1) {
            /* Letters exercise the letter-to-slot mapping, other bytes are
               written unchanged, an early zero stops the copy. */
            unsigned int length = nc_rand_below(63);
            for (unsigned int i = 0; i < length; i++) {
                unsigned char c = (unsigned char)nc_rand_below(256);
                if (!c || nc_chance(80))
                    c = (unsigned char)('A' + nc_rand_below(26));
                if (nc_chance(10)) {
                    do
                        c = (unsigned char)nc_rand_below(256);
                    while (!c);
                }
                text[i] = (char)c;
            }
            text[length] = 0;
            int line = (int)nc_rand_below(24);
            int coloured = nc_chance(50);
            nc_line("text length %u %016llx line %d coloured %d",
                    length, nc_hash(text, length), line, coloured);
            long long copied = word_copy_mapped(item, line, text, coloured);
            nc_line("copied %lld", copied);
        } else if (kind == 2) {
            long long drawn = selection_list_draw(item);
            nc_line("drawn %lld", drawn);
        } else {
            unsigned int pick = nc_rand_below(10);
            int key;
            if (pick < 5)
                key = 16 + (int)nc_rand_below(4);              /* the four arrows */
            else if (pick < 8)
                key = 0x100 | ('a' + (int)nc_rand_below(26));  /* 'x' exits */
            else
                key = (int)nc_rand_below(256);                 /* plain keys */
            nc_line("key %d", key);
            snake_key(item, key);
        }
        nc_line("record %016llx", nc_hash((void *)(uintptr_t)RECORD_BASE, RECORD_SIZE * ITEMS));
        nc_line("pool %016llx", nc_hash((void *)(uintptr_t)POOL_BASE, POOL_HEAD));
        nc_line("peer %016llx", nc_hash((void *)(uintptr_t)PEER_MASKS, 0x2E1E0ULL * PEERS));
        nc_line("local %016llx", nc_hash((void *)(uintptr_t)LOCAL_MASKS, MASK_SPAN));
    }
    return 0;
}
