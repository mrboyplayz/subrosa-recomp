/* Bounded string lengths (strnlen 0x140254CCC, wcsnlen 0x140254F48).
 *
 * The original picks between a plain loop, an SSE2 loop and an AVX2 loop by
 * the processor it runs on. All three return the same thing: the index of the
 * first zero element, or the limit when there is none before it.
 */
#include "crt.h"

size_t crt_strnlen(const char *text, size_t limit)
{
    const char *end = text + limit;
    const char *at = text;

    while (at != end && *at != 0)
        at++;
    return (size_t)(at - text);
}

size_t crt_wcsnlen(const uint16_t *text, size_t limit)
{
    const uint16_t *end = text + limit;
    const uint16_t *at = text;

    while (at != end && *at != 0)
        at++;
    return (size_t)(at - text);
}
