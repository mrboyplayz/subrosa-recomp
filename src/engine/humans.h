#ifndef SR_ENGINE_HUMANS_H
#define SR_ENGINE_HUMANS_H

#include <stdint.h>

int human_state_read_fields(int human); /* 0x14018D9F0 */
void human_limb_stretch(int human, int limb, float lerp); /* 0x1400B2D20 */
void human_update_state_machine(int human, int amount, int kind); /* 0x1400A9760 */

#endif
