/* Drawing a loaded mesh at a position and orientation. The model table is one
 * word per model at 0x183E977C4: the index of the model's entry in the vertex
 * buffer table at 0x183E9B0C0 (8 bytes per entry, the GL buffer number in the
 * first word). The mesh records are 0xE30 bytes each at 0x16AD0BE04, indexed
 * by the model number itself: the vertex stride in floats at +0 and the
 * triangle count at +0xC. */
#ifndef SR_ENGINE_MODEL_DRAW_H
#define SR_ENGINE_MODEL_DRAW_H
#include "memory.h"

#define MODEL_MESH_STRIDE 0xE30ULL
#define model_table (&SR_GLOBAL(int32_t, 0x183E977C4ULL))
#define model_mesh(model) (model_table[(int64_t)(int32_t)(model)])
#define model_meshes (&SR_GLOBAL(ModelMesh, 0x16AD0BE04ULL))
/* The vertex buffer table: 8 bytes per entry, the GL buffer number in the
 * entry's first word. */
#define model_buffers (&SR_GLOBAL(int32_t, 0x183E9B0C0ULL))
#define model_vertex_buffer(model) (model_buffers[2 * (int64_t)(int32_t)(model_mesh(model))])

typedef struct ModelMesh {
    int32_t stride;                 /* +0, floats per vertex */
    uint8_t unknown_4[8];
    int32_t triangle_count;         /* +0xC */
    uint8_t unknown_10[MODEL_MESH_STRIDE - 0x10];
} __attribute__((packed)) ModelMesh;
_Static_assert(sizeof(ModelMesh) == 0xE30, "mesh stride");

/* Places the model at position with orientation (either may be NULL), scales
 * it by size on all axes, uploads the camera's model * view * projection,
 * binds the vertex buffer the table names, draws the triangles, and finishes
 * by putting the model back to the identity and retaking the products.
 * 0x140125270 */
void model_draw_at(int model, const float position[3], const float rotation[9], float size);
#endif
