/* Round mode (game type 3) settings and their file, config_round.txt.
 *
 * The five words are what the server menu and the round update read: the
 * round length in minutes (the round timer starts at 3600 ticks per minute
 * in 0x1400F6C50), the starting cash, and three values named after their
 * keys whose effects are not established yet.
 */
#ifndef SR_ENGINE_ROUND_SETTINGS_H
#define SR_ENGINE_ROUND_SETTINGS_H

#include <stdint.h>
#include "memory.h"

typedef struct RoundSettings {
    int32_t round_minutes;  /* roundtime=, kept within 1..60 */
    int32_t start_cash;     /* startcash= */
    int32_t weekly;         /* weekly=; nonzero makes 0x140095B00 hand out start_cash */
    int32_t bonus_ratio;    /* bonusratio= */
    int32_t team_damage;    /* teamdamage=, kept within 0..200 */
} RoundSettings;
_Static_assert(sizeof(RoundSettings) == 0x14, "RoundSettings size");
#define round_settings (&SR_GLOBAL(RoundSettings, 0x183F7A5ACULL))

/* Writes the settings to config_round.txt when save is nonzero, otherwise
   resets them to the defaults and reads the file over them. Either way the
   round length and team damage are then clamped, except when the file
   cannot be opened for writing. 0x1400EC410 */
void round_settings_file(int save);
#endif
