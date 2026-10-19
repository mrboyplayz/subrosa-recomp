/* Item actions, sharing the client layout declared in world.h. */
#ifndef SR_ENGINE_ITEM_H
#define SR_ENGINE_ITEM_H

#include "world.h"

/* The timer counts to 60 before an item settles (RosaServer field name;
   the client's comparisons at 0x1400CA1C0 confirm the offset and threshold). */
#define item_settled_timer(i) SR_GLOBAL(int32_t, 0x182BBB18CULL + 0x1B80ULL * (uint64_t)(int64_t)(i))

/* Cash bills are packed as three-bit denominations. 0x1400CA740 removes
   one entry. Count zero expires the item; a negative count is left alone.
   Returns the original's zero-extended EAX, including paths without a shift. */
#define item_cash_bill_count(i) SR_GLOBAL(int32_t, 0x182BBB424ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_cash_bill_values(i) SR_GLOBAL(uint32_t, 0x182BBB428ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
uint64_t item_remove_cash_bill(int item, int bill);

/* Cash insertion increments the stored last-bill index (9 is full).
   The value routine includes bill zero even when that index is zero.
   Shift counts and integer sums wrap as in the original instructions. */
#define item_cash_spread(i) SR_GLOBAL(int32_t, 0x182BBB420ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
extern int32_t dword_1402B2960[8];
#define item_cash_denominations dword_1402B2960
uint64_t item_insert_cash_bill(int item, int bill, uint32_t denomination);
uint64_t item_cash_value(int item);

/* All inventory slots share HumanHand's 40-byte layout, including body
   slots beyond the two hands exposed in WorldHuman. These accessors also
   preserve the native signed indices without C array bounds assumptions. */
#define item_inventory_slot(human, slot) (&SR_GLOBAL(HumanHand, 0x1832A4DD8ULL + 0x6FF8ULL * (uint64_t)(int64_t)(human) + 40ULL * (uint64_t)(int64_t)(slot)))
#define item_inventory_entry(human, slot, entry) SR_GLOBAL(int32_t, 0x1832A4DDCULL + 0x6FF8ULL * (uint64_t)(int64_t)(human) + 40ULL * (uint64_t)(int64_t)(slot) + 4ULL * (uint64_t)(int64_t)(entry))
#define item_child_entry(item, entry) SR_GLOBAL(int32_t, 0x182BBB1B8ULL + 0x1B80ULL * (uint64_t)(int64_t)(item) + 4ULL * (uint64_t)(int64_t)(entry))
#define item_type_is_gun(type) SR_GLOBAL(int32_t, 0x182A7E190ULL + 0x13D0ULL * (uint64_t)(int64_t)(type))
#define item_type_accepts_child(child_type, parent_type) SR_GLOBAL(int32_t, 0x182A7E29CULL + 0x13D0ULL * (uint64_t)(int64_t)(child_type) + 4ULL * (uint64_t)(int64_t)(parent_type))

/* 0x1400C3C90 appends only the inventory entry; 0x1400E38A0 attaches
   only the item records. 0x1400E35D0 performs the transfer, detachment
   callbacks and connected change counters. Its item argument is the
   parent when child != -1, otherwise the item being held or dropped. */
uint64_t item_append_inventory(uint32_t item, int human, int slot);
uint64_t item_attach_child(int parent, int child);
uint64_t item_transfer(int item, int child, int human, int slot);

/* 0x1400CA1C0: queries voxel candidates, rejects nonoverlapping boxes,
   and solves item/item mesh contacts. A contact involving an item whose
   settle timer is below 60 clears both items' settled flags. */
void item_solve_contacts(int item);

/* 0x1400CA430: type-35 sphere against selected human bones. The original
   takes the contact branch for unordered distance, with zero normal. */
void item_solve_human_contacts(int item);

/* Fields used by 0x1400CE370 (item state/physics tick). Keep the two
   velocity histories separate from WorldItem.velocity at +0x80. */
#define item_is_static(i) SR_GLOBAL(int32_t, 0x182BBB190ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_in_pocket(i) SR_GLOBAL(int32_t, 0x182BBB1B0ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_previous_velocity(i) (&SR_GLOBAL(float, 0x182BBB1F4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i)))
#define item_previous_angular_velocity(i) (&SR_GLOBAL(float, 0x182BBB254ULL + 0x1B80ULL * (uint64_t)(int64_t)(i)))
#define item_unknown_158(i) SR_GLOBAL(int32_t, 0x182BBB2D8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_type_bounds_half_size(type) (&SR_GLOBAL(float, 0x182A7E284ULL + 0x13D0ULL * (uint64_t)(int64_t)(type)))
#define item_collision_layer_active(layer) SR_GLOBAL(int32_t, 0x15ADA9240ULL + 0x100D70ULL * (uint64_t)(int64_t)(layer))
#define item_hit_layer SR_GLOBAL(int32_t, 0x151A848D4ULL)
#define item_hit_voxel (&SR_GLOBAL(int32_t, 0x151A848D8ULL))
#define item_hit_block SR_GLOBAL(uint32_t, 0x151A84900ULL)
#define item_hit_block_turn SR_GLOBAL(uint32_t, 0x151A84904ULL)
#define item_hit_block_part SR_GLOBAL(int32_t, 0x151A84908ULL)
#define item_hit_unknown_7c SR_GLOBAL(int32_t, 0x151A848FCULL)
#define item_block_part_count(block) SR_GLOBAL(int32_t, 0x1812C20CCULL + 0xED0ULL * (uint64_t)(int64_t)(block))
void item_update_physics(void);

/* 0x1400C3BA0 registers a link at slot, or the first free slot when -1.
   Per-peer and local masks are cleared so that link will be sent again.
   Its legacy return is a mask, a word index, or a pointer after the final
   peer mask depending on the path; existing callers do not dereference it. */
#define item_link_value(i, slot) SR_GLOBAL(uint32_t, 0x182BBB2F8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(slot))
#define item_link_mask_word(i, word) SR_GLOBAL(uint32_t, 0x182BBB2F0ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(word))
#define item_link_peer_count SR_GLOBAL(int32_t, 0x1AD04ADA0ULL)
#define item_peer_link_mask(peer, i, word) SR_GLOBAL(uint32_t, 0x1A8E3F7CCULL + 0x2E1E0ULL * (uint64_t)(int64_t)(peer) + 20ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(word))
#define item_local_link_mask(i, word) SR_GLOBAL(uint32_t, 0x1ABC2F5ECULL + 20ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(word))
uintptr_t item_register_link(int item, uint32_t link, int32_t slot);

/* Where an item was broken off a block, at item + 0x31C. */
typedef struct ItemBlockOrigin {
    int32_t layer;
    int32_t voxel[3];
    uint32_t block;                      /* low 10 bits: type; bits 24..25: quarter turns */
    int32_t part;
} ItemBlockOrigin;

#define item_block_origin(i) (&SR_GLOBAL(ItemBlockOrigin, 0x182BBB49CULL + 0x1B80ULL * (uint64_t)(int64_t)(i)))
#define item_layer_voxel_size(layer) SR_GLOBAL(float, 0x15ADA9280ULL + 0x100D70ULL * (uint64_t)(int64_t)(layer))

typedef struct ItemBlockPart {
    int32_t item_type;
    float position[3];
    float rotation[9];
    uint8_t unknown_34[0x74 - 0x34];
} ItemBlockPart;

#define item_block_part(block, part) (&SR_GLOBAL(ItemBlockPart, 0x1812C2110ULL + 0xED0ULL * ((uint64_t)(block) & 0x3FFULL) + 0x74ULL * (uint64_t)(int64_t)(part)))

/* 0x1400CDFF0: when the item is within 1/8 unit of its original block
   part, clears that part's gone bit and requests the block update. The
   original also takes this branch for NaN distance. */
void item_restore_block_part(int item);

/* 0x1400CDBD0: breaks a block part into an item, marks its gone bit,
   and stores its origin. Returns a zero-extended item index, or UINT32_MAX
   if the part is already gone or item allocation fails. */
uint64_t item_break_block_part(uint32_t block, int part, int layer, int x, int y, int z);

/* Region records used for type-39 items. The exact meaning of their
   per-voxel value is unknown. Kind 1 also supplies the computer's team. */
typedef struct ItemBlockRegionEntry {
    int32_t voxel[3];
    int32_t unknown_c;
} ItemBlockRegionEntry;

typedef struct ItemBlockRegion {
    int32_t kind;
    uint8_t unknown_4[0x40 - 0x4];
    float bounds_min[3];
    float bounds_max[3];
    uint8_t unknown_58[0x1E8 - 0x58];
    int32_t computer_team;
    uint8_t unknown_1ec[0xCAC8 - 0x1EC];
    int32_t entry_count;
    ItemBlockRegionEntry entries[260];
} ItemBlockRegion;

#define item_block_region_count SR_GLOBAL(int32_t, 0x1760C55F4ULL)
#define item_block_regions (&SR_GLOBAL(ItemBlockRegion, 0x1760C5638ULL))
#define item_block_region_value(i) SR_GLOBAL(int32_t, 0x182BBB4B4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_computer_team(i) SR_GLOBAL(int32_t, 0x182BBC7D8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))

/* ---- item states for a tick (item_tick.c) ----------------------------------- */

/* Buttons pressed on an item this tick (bit 0: use, bit 1: second use),
   and those of the tick before; a press is a bit set now and clear before. */
#define item_input(i)          SR_GLOBAL(uint32_t, 0x182BBB2D0ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_previous_input(i) SR_GLOBAL(uint32_t, 0x182BBB2D4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
/* A countdown or progress counter whose use depends on the type: a phone's
   wait after a failed call, a grenade's fuse, a first aid kit's progress. */
#define item_timer(i)          SR_GLOBAL(int32_t, 0x182BBB2BCULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
/* Grenade: above 0 while the pin is in. First aid and type 30: uses left. */
#define item_charges(i)        SR_GLOBAL(int32_t, 0x182BBB2C4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
/* The player a grenade's pin was pulled by (-1: none). */
#define item_player(i)         SR_GLOBAL(int32_t, 0x182BBB1A0ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))

/* Phones (types 25 and 33). State 0 idle, 1 dialling, 2 ringing (caller
   and called), 3 in a call, 4 engaged tone. */
#define ITEM_TYPE_PHONE   25
#define ITEM_TYPE_PHONE_2 33
#define item_call_state(i)     SR_GLOBAL(int32_t, 0x182BBB3FCULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_call_partner(i)   SR_GLOBAL(int32_t, 0x182BBB2DCULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_phone_number(i)   SR_GLOBAL(int32_t, 0x182BBB2E0ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_call_ticks(i)     SR_GLOBAL(int32_t, 0x182BBB2E4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_call_number(i)    SR_GLOBAL(int32_t, 0x182BBB2E8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))   /* the other end's number */
#define item_dialled_number(i) SR_GLOBAL(int32_t, 0x182BBB2ECULL + 0x1B80ULL * (uint64_t)(int64_t)(i))   /* complete from 1000 */

/* An item carried on the body (any slot but the two hands) lies against
   the chest (bone 2): turned with it (the chest's first row, its third
   row negated, its second row), a quarter unit along its new second row
   back and an eighth along its first; it moves with the pelvis (bone 0),
   and its previous position is the pelvis's, or the vehicle's when the
   human sits in one. Its body takes the velocity and stops turning (angular
   momentum and velocity cleared).
   0x1401380F0 */
void item_follow_body(int item, int human);

/* A grenade goes off: every living human within 4 units dies (the thrower,
   item_player, is charged for a team mate and credited with the kill),
   and every bone of every human within 8 units is pushed away from it,
   less for heavier bones. 0x1400A70B0 */
void item_grenade_explode(int item);

/* Guns. Type fields: ticks between shots (+0x18), the bullet type (+0x1C),
   muzzle speed (+0x28) and spread (+0x2C); the item's mass at +0x18; the
   ticks the trigger has been held at +0x14C. (A bullet type's mass:
   bullet_type_value, bullet.h.) */
#define item_type_fire_delay(type)   SR_GLOBAL(int32_t, 0x182A7E198ULL + 0x13D0ULL * (uint64_t)(int64_t)(type))
#define item_type_bullet(type)       SR_GLOBAL(int32_t, 0x182A7E19CULL + 0x13D0ULL * (uint64_t)(int64_t)(type))
#define item_type_muzzle_speed(type) SR_GLOBAL(float, 0x182A7E1A8ULL + 0x13D0ULL * (uint64_t)(int64_t)(type))
#define item_type_spread(type)       SR_GLOBAL(float, 0x182A7E1ACULL + 0x13D0ULL * (uint64_t)(int64_t)(type))
#define item_mass(i)                 SR_GLOBAL(float, 0x182BBB198ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_trigger_ticks(i)        SR_GLOBAL(int32_t, 0x182BBB2CCULL + 0x1B80ULL * (uint64_t)(int64_t)(i))

/* A gun's tick: counts down to the next shot; while its holder plays
   (game state 2), loads a round from its magazine (its first child) when
   empty, and fires when the trigger has been held for exactly 2 ticks (6
   for type 5; types 5 and 11 fire again while it stays held): the bullet
   leaves along the gun's third row, backwards, at the muzzle speed with a
   random spread, and the recoil pushes the gun back and turns it.
   0x1400CF670 */
void item_gun_tick(int item);

/* Lines of text an item shows (computers): 64 lines of 64 characters at
   +0x374 and a colour byte per character at +0xB74. */
#define item_text_line(i, line)   (&SR_GLOBAL(char, 0x182BBB4F4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 64ULL * (uint64_t)(int64_t)(line)))
#define item_text_colours(i, line) (&SR_GLOBAL(uint8_t, 0x182BBBCF4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 64ULL * (uint64_t)(int64_t)(line)))

/* The raw-record source starts twelve bytes before the screen-text array.
   Its line offset is shifted as a 32-bit word, then sign-extended. */
static inline char *item_record_text_chunk(int item, uint32_t line)
{
    return &SR_GLOBAL(char, 0x182BBB4E8ULL + 0x1B80ULL * (uint64_t)(int64_t)item
                            + (int64_t)(int32_t)(line << 6));
}

/* The shared records items link to (WorldItem.links), 156 bytes from
   0x1857BD740, 16,384 of them: here a line of text being sent. */
typedef struct ItemLinkRecord {
    int32_t used;
    int32_t unknown_4;                   /* cleared with used */
    int32_t unknown_8;                   /* 0 raw text, 1 text with colours */
    int32_t tick;                        /* when the record was filled */
    int32_t item, line;
    int32_t length;                      /* raw text up to 64, linked screen text up to 63 */
    char text[64];
    uint8_t colours[64];
} ItemLinkRecord;
_Static_assert(sizeof(ItemLinkRecord) == 156, "ItemLinkRecord size");
#define ITEM_LINK_RECORD_CAPACITY 16384
#define item_link_records (&SR_GLOBAL(ItemLinkRecord, 0x1857BD740ULL))

/* Allocates a raw text record without clearing unused text or colour bytes.
   length must be nonnegative; it is capped at 64. Returns zero-extended
   UINT32_MAX for a full pool, before reading the source. 0x140051170 */
uint32_t item_allocate_text_record(int item, uint32_t line, int length);

/* Keeps line `line` of an item's text linked to a record holding the same
   text and colours: the line's present record when it still matches
   (same length, up to 63, and the same characters and colours), else the
   first free record, filled now and registered (item_register_link). The
   unmatched old record is freed. Returns the record, or UINT32_MAX when
   none is free. 0x140050F90 */
uint32_t item_link_text_line(int item, int line);

/* Recorded with a phone's state; meaning not settled. */
#define item_unknown_278(i)    SR_GLOBAL(int32_t, 0x182BBB3F8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))

/* When connected, records event 6 with a phone's call state, the other
   end's number and item_unknown_278, and counts the item's change. Items
   above 1023 are ignored. 0x140051940 */
void item_phone_changed(int item);

/* Type 26: low 7 bits pick one of 128 lists the tick rebuilds; type 40: a
   byte that counts up each tick. */
#define item_unknown_368(i)    SR_GLOBAL(uint32_t, 0x182BBB4E8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_unknown_36c(i)    SR_GLOBAL(int32_t, 0x182BBB4ECULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_unknown_3b4(i)    SR_GLOBAL(uint8_t, 0x182BBB534ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))

typedef struct ItemList {
    int32_t count;
    int32_t items[256];
} ItemList;
#define item_type26_lists (&SR_GLOBAL(ItemList, 0x1816760A0ULL))

/* Computers (type 39): a state (0 not set up yet), a countdown, and three
   tables whose meaning is not known yet. */
#define item_computer_state(i)     SR_GLOBAL(int32_t, 0x182BBC7DCULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_computer_countdown(i) SR_GLOBAL(int32_t, 0x182BBCBECULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
#define item_computer_slot(i, k)   SR_GLOBAL(int32_t, 0x182BBC9E8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(k))
#define item_computer_used(i, k)   SR_GLOBAL(int32_t, 0x182BBCAE8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(k))
#define item_computer_owner(i, k)  SR_GLOBAL(int32_t, 0x182BBCB68ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(k))

/* An item of type 27's vehicle: +0x20 cleared while its holder drives it,
   +0x24 then the driver's player. Meaning not settled. */
#define vehicle_unknown_20(v)  SR_GLOBAL(int32_t, 0x15F2D9220ULL + 0x5168ULL * (uint64_t)(int64_t)(v))
#define vehicle_unknown_24(v)  SR_GLOBAL(int32_t, 0x15F2D9224ULL + 0x5168ULL * (uint64_t)(int64_t)(v))

/* An item type's offset along the third row of its holder item's rotation
   for type 39 parents. Type + 0x524. */
#define item_type_unknown_524(type) SR_GLOBAL(float, 0x182A7E6A4ULL + 0x13D0ULL * (uint64_t)(int64_t)(type))
/* Offset along the second row for children of type 39 items. */
#define item_type39_child_offset SR_GLOBAL(float, 0x182AAEB50ULL)

/* Sound or event values the phone events carry (meaning not settled). */
#define item_event_ring       SR_GLOBAL(int32_t, 0x183E93694ULL)
#define item_event_ring_back  SR_GLOBAL(int32_t, 0x183E93668ULL)

/* Each item's state for a tick: the type-26 lists, children following
   their parents, lifetimes, type 27's vehicle, phones, computers, timers,
   grenades, radios (15/16), type 30 and first aid kits; then the buttons
   pressed become the previous ones. 0x1400CC610 */
void item_tick_states(void);

_Static_assert(sizeof(ItemBlockOrigin) == 0x18, "ItemBlockOrigin layout");
_Static_assert(sizeof(ItemBlockPart) == 0x74, "ItemBlockPart layout");
_Static_assert(sizeof(ItemBlockRegion) == 0xDB0C, "ItemBlockRegion layout");
_Static_assert(__builtin_offsetof(ItemBlockRegion, entry_count) == 0xCAC8, "ItemBlockRegion entries");

#endif
