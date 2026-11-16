/* Matching the names in the city's lists against the names in the game's
 * tables. Each routine clears an output array of dwords, then, for every
 * name of its list, stores the index of the last entry of the other table
 * whose name is equal (the output stays zero when none is). Names are NUL
 * terminated; the comparison is by unsigned byte. */
#ifndef SR_ENGINE_CITY_NAMES_H
#define SR_ENGINE_CITY_NAMES_H
#include "memory.h"

/* Names of 64 bytes each, 0x1AFFDFB58, count at 0x1AFFDFB54, matched against
 * the first 64 entries of the table of 0x3040-byte records at 0x1ABC89C00;
 * the result is 64 dwords at 0x1AFFDFF58. 0x140027690 */
void city_match_names_a(void);
/* 0x1AFFE0F5C (count 0x1AFFE0F58) against the records of 0xED0 bytes at
 * 0x1812C2080 (count 0x181676080); 1024 dwords at 0x1AFFF0F5C. 0x140027A60 */
void city_match_names_b(void);
/* 0x1AFFCEB54 (count 0x1AFFCEB50) against the records of 0xE8 bytes at
 * 0x145098C00 (count 0x14500A700); 1024 dwords at 0x1AFFDEB54. 0x140027B40 */
void city_match_names_c(void);
/* 0x1AFFC9B50 (count 0x1AFFC9B4C) against the records of 0xB8 bytes at
 * 0x1A4CFFCF8 (count 0x1A4CFF560); 256 dwords at 0x1AFFCDB50. 0x140027C20 */
void city_match_names_d(void);
#endif
