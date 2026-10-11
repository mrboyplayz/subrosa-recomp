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

_Static_assert(sizeof(ItemBlockOrigin) == 0x18, "ItemBlockOrigin layout");
_Static_assert(sizeof(ItemBlockPart) == 0x74, "ItemBlockPart layout");
_Static_assert(sizeof(ItemBlockRegion) == 0xDB0C, "ItemBlockRegion layout");
_Static_assert(__builtin_offsetof(ItemBlockRegion, entry_count) == 0xCAC8, "ItemBlockRegion entries");

#endif
