/* The vehicle spawn and net-replication machinery: the 1024-record vehicle
 * slot table, the 256-slot spawn-name list and the per-type part lists.
 * Typed interface for the routines of src/engine/vehicle_state.c.
 */
#ifndef SR_ENGINE_VEHICLE_STATE_H
#define SR_ENGINE_VEHICLE_STATE_H

#include <stdint.h>

/* Finds the first free record in the vehicle slot table — 1024 records,
 * 0x328 bytes each at 0x1601172A0 (the table ends at 0x1601E12A0), the
 * first word the in-use flag — zeroes the record's words past the flag and
 * fills: in-use = 1, kind, a -1 timer word pair, the position triple and
 * the float. Returns the slot index, or 0xFFFFFFFF when all 1024 records
 * are in use. 0x14004DA50 */
uint32_t vehicle_alloc_slot(uint32_t kind, const uint32_t *position, float value);

/* Appends a named entry to the 256-slot spawn-name list at 0x192E8F660
 * (0x98 bytes each; the wrapping u8 cursor 0x192E98E60 sits right behind
 * the table): the id, the selection code (600 when id & 0xFFFFFFFB is 0,
 * i.e. id is 0 or 4, else 480), the name's length and then the name's
 * bytes with the terminator, then value and value2. The cursor wraps at
 * 8 bits; the return is cursor + 1 unmasked. 0x1400588F0 */
uint32_t vehicle_name_slot_add(uint32_t id, const char *name,
                               uint32_t value, uint32_t value2);

/* Adds (first, second) to a vehicle type's dedup list at 0x192E9A680
 * (0x185C0 bytes per type, the count word at 0x854, entries of three words
 * at 0x858): when no entry already holds the pair in either order, id,
 * first and second are appended and the count increments. Returns the
 * second word's address, the matched entry's or the new one's.
 * 0x14010C850 */
uint32_t *vehicle_type_part_add(int type, uint32_t id,
                                uint32_t first, uint32_t second);

#endif
