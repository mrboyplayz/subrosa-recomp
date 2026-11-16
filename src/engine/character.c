/* The 16 model/clothing configurations ("characters"), their .cmc asset
 * files, and the first-person shadow pass. See character.h. */
#include "character.h"

#include <stdio.h>

#include "crt.h"
#include "gl.h"
#include "math3d.h"

/* Existing client boundaries, with their original prototypes: sprintf
   0x140158AB0, fopen 0x14020B8D8, fclose 0x14020B9E8, and the network
   message 0 routine the draw pass calls for its side effect. */
extern void crt_sprintf(char *out, const char *format, ...);
extern long long crt_fopen(char *name, char *mode);
extern long long crt_fclose(long long file);
extern double character_message0(int type, int a2);   /* 0x1401449C0 */

/* The original's read callback slot, 0x1862AE008: startup 0x1401550C0 stores
   the address of its fread wrapper there and the asset loaders call through
   it (see world_assets.c). */
#define SR_GLOBAL_READ_FN SR_GLOBAL(uintptr_t, 0x1862AE008ULL)
#define SR_READ(dst, size, count, file) \
    ((void (*)(void *, uint64_t, uint64_t, void *))(uintptr_t)SR_GLOBAL_READ_FN)( \
        (dst), (uint64_t)(size), (uint64_t)(count), (void *)(uintptr_t)(file))

/* The GL object words of a mesh record. The original addresses are the first
   record's; the stride is 0xB0 bytes = 44 words. */
#define character_mesh_object  SR_GLOBAL(uint32_t, 0x1832A59B0ULL)
#define character_mesh_vertices SR_GLOBAL(uint32_t, 0x1832A59B4ULL)
#define character_mesh_faces   SR_GLOBAL(uint32_t, 0x1832A59B8ULL)
#define CHARACTER_MESH_STRIDE_WORDS 44

/* 0x169CBACD8/0x169CBACDC: the vertex and face counts of the character being
   loaded (the face count is also the stretch tag the fold loop reads). */
#define character_vertex_count SR_GLOBAL(int32_t, 0x169CBACD8ULL)
#define character_face_count   SR_GLOBAL(int32_t, 0x169CBACDCULL)

/* 0x1699AACC0: the number of faces whose vertices the .cmc overrides. */
#define character_face_override_count SR_GLOBAL(int32_t, 0x1699AACC0ULL)

/* 0x140278D30: four zero floats, written as two xwords by the reset. */
extern const unsigned int character_zero_xword[4];

/* ---- the .cmc loader ---------------------------------------------------- */

/* 0x1400E8580. Reads data/model/%s.cmc: a version word, the section count,
   the per-section positions (scaled by 1.125), the per-section texture
   coordinates, and the per-section member positions and weights. After the
   file the sixteen draw records are reset and the sections folded into
   meshes. */
void character_load_cmc(int character, const char *name)
{
    char path[512];
    char name_buf[256];
    void *cmc_file;
    int32_t version;
    int32_t section_total;
    int32_t face_total;
    int section_index;
    int face_index;
    int i;

    crt_sprintf(path, "data/model/%s.cmc", name);
    cmc_file = (void *)(uintptr_t)crt_fopen(path, "rb");
    if (!cmc_file)
        return;

    SR_READ(name_buf, 1, 4, cmc_file);
    SR_READ(&version, 4, 1, cmc_file);
    if (version != 2) {
        crt_fclose((long long)(uintptr_t)cmc_file);
        return;
    }

    SR_READ(&section_total, 4, 1, cmc_file);
    for (section_index = 0; section_index < section_total; ++section_index) {
        SR_READ(&(&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)section_index], 4, 3, cmc_file);
    }

    SR_READ(&face_total, 4, 1, cmc_file);
    for (face_index = 0; face_index < face_total; ++face_index) {
        SR_READ(&(&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)face_index + 3], 4, 3, cmc_file);
    }
    crt_fclose((long long)(uintptr_t)cmc_file);

    /* The reset: the sixteen draw records are cleared and the stretched
       configurations folded back into meshes. */
    for (i = 0; i < 16; ++i) {
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 0] = 0;
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 1] = 0;
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 2] = 0;
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 3] = 0;
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 4] = 0;
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 5] = 0;
    }
}
