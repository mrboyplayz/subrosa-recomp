/* The embedded-text reader: prefix match, token search and number reading
 * at the parser cursor window. Typed interface for the routines of
 * src/engine/text_parser.c, one header for the parser's shared state.
 */
#ifndef SR_ENGINE_TEXT_PARSER_H
#define SR_ENGINE_TEXT_PARSER_H

#include <stdint.h>
#include "memory.h"

/* The cursor window of the parser, as the original keeps it: byte position
   and exclusive end compared signed (the cursor can land past the end, and
   the original's arithmetic is 32-bit on both), then the buffer bytes.
   0x1862AE020.. */
typedef struct ParserScan {
    int32_t position;     /* 0x1862AE020 */
    int32_t length;       /* 0x1862AE024 */
    unsigned char data[]; /* 0x1862AE028 */
} ParserScan;
#define parser_scan (&SR_GLOBAL(ParserScan, 0x1862AE020ULL))

/* The scratch the number readers copy runs of characters into: at most 255
   bytes plus the terminator. 0x1863AE028 */
#define parser_number_text ((unsigned char *)&SR_GLOBAL(uint32_t, 0x1863AE028ULL))

/* Does token match the buffer prefix at the cursor? No state change. The
   empty token matches always; a cursor at or past the length leaves the
   match empty. 0x14003C6F0 */
int parser_token_matches(const unsigned char *token);
/* Advances the cursor until the token matches there, then past the token
   even when no position matched (the cursor can land past the length).
   True if the new cursor is before the length. 0x140091DF0 */
int parser_skip_to_token(const unsigned char *token);
/* Skips to the character run of digits and '-' at or after the cursor,
   copies it to the scratch and parses it with the game's integer parser
   (still unported) as a zero-extended 32-bit compat result. 0x140115360 */
uint32_t parser_read_number(void);
/* The same scan, parsed as 64 bits by the original CRT's sscanf. An empty
   or unparseable run leaves the original's returned word as uninitialized
   stack (its callers reach a number first); the clean engine zeroes the
   slot instead. 0x140115410 */
uint64_t parser_read_number64(void);
#endif
