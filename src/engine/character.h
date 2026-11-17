/* The 16 model/clothing configurations ("characters") and the .cmc asset
 * files that fill them, plus the first-person shadow pass the original drew
 * straight after resetting them.
 *
 * Each configuration's tables live in the flat shared region: the vertex and
 * face counts at 0x169CBACD8/0x169CBACDC, the fold targets at
 * 0x1832A59B4 (stride 0xB0 bytes), and the face-override count at
 * 0x1699AACC0.
 *
 * Each function is a rewrite of one routine of the original executable and
 * produces the same memory contents and the same OpenGL calls. The original
 * address is given next to every declaration.
 */
#ifndef SR_ENGINE_CHARACTER_H
#define SR_ENGINE_CHARACTER_H

#include <stdint.h>
#include "memory.h"

/* Loads data/model/%s.cmc into the character tables and resets the sixteen
 * draw records. 0x1400E8580 */
void character_load_cmc(int character, const char *name);

/* Draws the two first-person shadow meshes into the current framebuffer and
 * composites the result back into the HDR target. 0x1400FBA50 */
void character_draw_first_person(void);

#endif
