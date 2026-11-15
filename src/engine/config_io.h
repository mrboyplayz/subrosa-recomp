/* The generic config-file entry helpers: one "key=value" line written to the
 * open config file when saving, or read from the parser buffer after a token
 * search when loading. Typed interface for the routines of
 * src/engine/config_io.c.
 */
#ifndef SR_ENGINE_CONFIG_IO_H
#define SR_ENGINE_CONFIG_IO_H

#include <stdint.h>

/* Writes one "%s%d\r\n" line (key, *value) to the file when save is true, or
 * searches key from the loader's cursor, stores the number after it, and
 * resets the parser cursor to 0 either way. Returns the callee's result: the
 * fprintf return when saving; otherwise the parser's 64-bit return when the
 * key matched, or the token-search result when it did not. 0x14010E080 */
long long config_int_entry(int32_t *value, const char *key, long long file, int save);

/* The string variant: writes the NUL-terminated text when saving, or copies
 * the run of characters after key into value, stopping at a carriage return
 * or line feed and at most value_size-1 characters, then NUL-terminates.
 * Returns the copied count; a key that never matched returns 0 and leaves
 * value untouched. The parser cursor resets to 0 either way. 0x14010E0D0 */
long long config_string_entry(char *value, const char *key, int value_size, long long file, int save);

#endif
