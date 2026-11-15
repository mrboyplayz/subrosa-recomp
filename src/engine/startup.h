/* Startup-time helpers that only compute or fill state: the world patch
   mesh builder, the extension table prefix search and the CPU probe. The
   state accessors keep each anchor address next to its meaning, as the
   other headers do. */
#ifndef SR_ENGINE_STARTUP_H
#define SR_ENGINE_STARTUP_H

#include <stdint.h>

#include "memory.h"

/* The patch mesh builder's tessellation scratch: the row-curve point, uv
   blend and derivative of each of the four columns, written by the row pass
   and read back as the column pass's controls. 0x14500A3E0..0x14500A46F. */
#define startup_patch_point(column, part) \
    (&SR_GLOBAL(float, 0x14500A440ULL + 12ULL * (uint64_t)(uint32_t)(column) + 4ULL * (uint64_t)(part)))
#define startup_patch_uv(column, part) \
    (&SR_GLOBAL(float, 0x14500A420ULL + 8ULL * (uint64_t)(uint32_t)(column) + 4ULL * (uint64_t)(part)))
#define startup_patch_frame(column, part) \
    (&SR_GLOBAL(float, 0x14500A3E0ULL + 12ULL * (uint64_t)(uint32_t)(column) + 4ULL * (uint64_t)(part)))

/* The mesh vertex the builder writes next, and the index record it writes
   next. 0x1510AB760, 0x1512DB764. */
#define startup_mesh_vertex_count  SR_GLOBAL(unsigned int, 0x1510AB760ULL)
#define startup_mesh_record_count  SR_GLOBAL(unsigned int, 0x1512DB764ULL)

/* The builder's four per-vertex arrays: position (3), uv blend (2), normal
   (3) and normalized derivative (3) floats each. 0x1511AB764, 0x15123B764,
   0x1511DB764, 0x15120B764. */
#define startup_mesh_position(vertex) \
    (&SR_GLOBAL(float, 0x1511AB764ULL + 12ULL * (uint64_t)(uint32_t)(vertex)))
#define startup_mesh_uv(vertex) \
    (&SR_GLOBAL(float, 0x15123B764ULL + 12ULL * (uint64_t)(uint32_t)(vertex)))
#define startup_mesh_normal(vertex) \
    (&SR_GLOBAL(float, 0x1511DB764ULL + 12ULL * (uint64_t)(uint32_t)(vertex)))
#define startup_mesh_frame(vertex) \
    (&SR_GLOBAL(float, 0x15120B764ULL + 12ULL * (uint64_t)(uint32_t)(vertex)))

/* One index record per quad: four vertex words, then the record's tag and
   clear word in arrays of their own. 0x1512DB768, 0x15131B768, 0x15133B768. */
#define startup_mesh_record(record) \
    (&SR_GLOBAL(unsigned int, 0x1512DB768ULL + 16ULL * (uint64_t)(uint32_t)(record)))
#define startup_mesh_record_tag(record) \
    (&SR_GLOBAL(unsigned int, 0x15131B768ULL + 4ULL * (uint64_t)(uint32_t)(record)))
#define startup_mesh_record_flag(record) \
    (&SR_GLOBAL(unsigned int, 0x15133B768ULL + 4ULL * (uint64_t)(uint32_t)(record)))
/* Three more words per record, read as floats by the block mesh's merge
   pass. 0x15134B768. */
#define startup_mesh_record_vector(record) \
    (&SR_GLOBAL(unsigned int, 0x15134B768ULL + 12ULL * (uint64_t)(uint32_t)(record)))

/* The extension count and the 112-byte records the prefix search walks.
   0x160361344, 0x160361360. */
#define startup_extension_count  SR_GLOBAL(int, 0x160361344ULL)
#define startup_extension_record(index) \
    (&SR_GLOBAL(char, 0x160361360ULL + 112ULL * (uint64_t)(uint32_t)(index)))

/* Whether the text begins one of the recorded extension names. 0x14001E30. */
int startup_extension_prefix_match(const char *text);

/* Whether the processor supports SSE4.1. 0x14068F80. */
uint32_t startup_cpu_has_sse41(void);

/* Removes an index record by moving the last one into its place; a
   record outside 0..count-1 is left alone. 0x140184AB0. */
void startup_mesh_remove_record(int record);

/* The world patch mesh builder. 0x14001F20. */
unsigned long long startup_patch_mesh_build(const float *controls, const float *uv_controls,
                                            int columns, int curve_degree, int rows,
                                            int row_curve_degree, unsigned int record_tag);

#endif
