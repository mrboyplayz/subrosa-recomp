/* Shared game state.
 *
 * The original executable keeps nearly all of its state in one flat region
 * that starts at 0x140404A6C. The recompiled client reproduces that region as
 * dword_140404A6C[], so code that has not been ported yet and the code in
 * this directory read and write the same memory.
 *
 * SR_GLOBAL names a piece of that region by its address in the original
 * executable, which is the address a disassembler shows. Engine modules wrap
 * each use in a named accessor (see renderer.h) so the rest of the code never
 * mentions an address.
 */
#ifndef SR_ENGINE_MEMORY_H
#define SR_ENGINE_MEMORY_H

#include <stdint.h>

extern unsigned int dword_140404A6C[];

#define SR_STATE_BASE 0x140404A6CULL
#define SR_GLOBAL(type, address) \
    (*(type *)((unsigned char *)dword_140404A6C + ((address) - SR_STATE_BASE)))

#endif
