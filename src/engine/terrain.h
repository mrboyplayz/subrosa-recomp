#ifndef SR_ENGINE_TERRAIN_H
#define SR_ENGINE_TERRAIN_H

#include <stdint.h>
#include "memory.h"

/* ---- terrain heights and mesh records (terrain.c) -------------------------- */

/* The height samples the vehicles flatten: one float per unit, 4096 per row
   (x + y * 4096). 0x17CE6F5F8 */
#define terrain_heights (&SR_GLOBAL(float, 0x17CE6F5F8ULL))

/* The terrain record the height update answers with when it only raised
   samples. 0x175FD1400 */
#define terrain_record (&SR_GLOBAL(unsigned int, 0x175FD1400ULL))

/* The x and y ranges the quarter masks track (0x175FD1444, 0x175FD144C,
   0x175FD1450, 0x175FD1458). */
#define terrain_flat_min_x SR_GLOBAL(int32_t, 0x175FD1444ULL)
#define terrain_flat_min_y SR_GLOBAL(int32_t, 0x175FD144CULL)
#define terrain_flat_max_x SR_GLOBAL(int32_t, 0x175FD1450ULL)
#define terrain_flat_max_y SR_GLOBAL(int32_t, 0x175FD1458ULL)

/* While set, the height update leaves the samples alone. 0x183F7CB60 */
#define terrain_frozen SR_GLOBAL(uint32_t, 0x183F7CB60ULL)

/* One 16-bit mask per 4 x 4 block of the 4096 x 4096 quarter grid; the bit
   for a raised corner is cleared so the block's mesh is rebuilt. The pointer
   is kept here. 0x181290050 */
#define terrain_quarter_masks SR_GLOBAL(uint16_t *, 0x181290050ULL)

/* Per layer: one count word, then 3 floats per vertex, 2310 words per
   layer. The last vertex of a full record writes its z over the next
   layer's count word. 0x1A75FE784 */
#define terrain_vertex_records ((int32_t *)&SR_GLOBAL(unsigned char, 0x1A75FE784ULL))

/* Per layer: one count word, then 6 words per triangle (a weight of 4 and
   four vertex indices), 2310 words per layer. 0x1A75FF388 */
#define terrain_triangle_records ((int32_t *)&SR_GLOBAL(unsigned char, 0x1A75FF388ULL))

/* Raises the four height samples around a cell to height (a sample only
   grows) and clears the quarter mask bit of a raised corner inside the
   flatten ranges. Returns the mask bit on the mask path, the terrain record
   otherwise; outside the sample grid or while frozen it changes nothing and
   the original's result register is left over from earlier calls, so the
   port returns the record pointer with the guard printed separately.
   0x14003FA40 */
unsigned int *terrain_height_update(int cell_x, int cell_y, float height);

/* Appends the eight corners and six triangles of one terrain box to a
   layer's mesh records: the corners are the corner table's triplets scaled
   by the sizes and moved by the offsets, the triangles index them through
   the table's index words, and the record counts grow by 8 and 6. Returns
   385 * layer + the triangle count after the six. 0x14003FB90 */
int64_t terrain_triangle_add(int layer, float offset_x, float offset_y, float offset_z,
                             float size_x, float size_y, float size_z);

/* Writes one height into its tile's 2049 x 2049 grid, and into the
   neighbouring tiles' grids when it lies on their shared first row or
   column. Samples outside the 8 x 8 tiles are ignored. 0x1400D2DB0 */
void terrain_grid_put(int x, int y, float height);

/* Spreads the 2049 x 2049 source heights over the tile grids (8 cells per
   source step, bilinear), runs the vehicle flatten passes unless frozen,
   builds the 64 chunk meshes and resets the cell and ring tables. Returns
   what the original leaves in its result register. 0x1400D12E0 */
unsigned int *terrain_init(void);

#endif