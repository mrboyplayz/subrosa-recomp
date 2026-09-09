#ifndef SR_ORIGINAL_FIXTURE_H
#define SR_ORIGINAL_FIXTURE_H

#include <stdint.h>

/* Test-only mapping. Never starts the game or loads its imports. */
typedef struct { unsigned char *base; } SrOriginalFixture;
int sr_original_fixture_open(SrOriginalFixture *fixture, const char *exe);
void sr_original_fixture_close(SrOriginalFixture *fixture);
float sr_original_angle(SrOriginalFixture *fixture, float first, float second);
void sr_original_spectator(SrOriginalFixture *fixture, int player);
void sr_fixture_write32(SrOriginalFixture *fixture, uint32_t rva, uint32_t value);
uint32_t sr_fixture_read32(const SrOriginalFixture *fixture, uint32_t rva);

#endif
