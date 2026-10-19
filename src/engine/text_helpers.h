#ifndef SR_ENGINE_TEXT_HELPERS_H
#define SR_ENGINE_TEXT_HELPERS_H
#include "memory.h"

/* Original comparators at 0x14004C4C0 and 0x14006C980. Bytes compare as
   unsigned; return the raw EAX word (0, 1, or 0xffffffff), not a sign-extended
   64-bit -1. */
uint32_t text_compare_bytes(const unsigned char *first, const unsigned char *second);

#define text_label_crc_table (&SR_GLOBAL(uint32_t, 0x144980DC0ULL))
/* CRC32 with caller-supplied initial accumulator. If table[0] is zero the
   256 entries are regenerated, including table[0] remaining zero.
   0x14006C670 */
uint32_t text_label_id(const unsigned char *text, uint32_t seed);

typedef struct TextScan {
    int32_t position;
    int32_t length;
    unsigned char data[];
} TextScan;
#define text_scan (&SR_GLOBAL(TextScan, 0x15F1D91E0ULL))

/* Does needle match the current prefix? Does not advance. 0x14006C870 */
int text_scan_matches(const unsigned char *needle);
/* Searches from the cursor, then advances past needle even when not found.
   True only if the resulting cursor is before length. 0x14006E4C0 */
int text_scan_past(const unsigned char *needle);

/* Copies the entire NUL-terminated source, then terminates its visible
   prefix at ## or 255 bytes. Caller provides room for the complete source;
   disjoint buffers, identical buffers and destination-before-source overlap
   are supported by the native forward copy. Returns visible length.
   0x14006F120 */
uint32_t text_copy_visible_label(unsigned char *out, const unsigned char *source);
#endif
