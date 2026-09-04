#ifndef SR_GEOMETRY_H
#define SR_GEOMETRY_H

#include <stddef.h>
#include <stdint.h>

typedef struct SrVertex {
    float x;
    float y;
    float z;
    float u;
    float v;
    float layer;
    float nx;
    float ny;
    float nz;
} SrVertex;

typedef struct SrFace {
    uint32_t vertex_count;
    uint32_t indices[4];
    uint32_t flags[2];
} SrFace;

typedef struct SrMesh {
    SrVertex *vertices;
    SrFace *faces;
    size_t vertex_count;
    size_t face_count;
    uint32_t version;
    char source_format[8];
} SrMesh;

int sr_mesh_load_cmo(const char *path, SrMesh *mesh);
int sr_mesh_load_sbv_points(const char *path, SrMesh *mesh);
int sr_mesh_load_any(const char *path, SrMesh *mesh);
void sr_mesh_free(SrMesh *mesh);
void sr_mesh_bounds(const SrMesh *mesh, float minv[3], float maxv[3]);

#endif
