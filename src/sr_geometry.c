#include "sr_geometry.h"

#include "sr_binary.h"
#include "sr_formats.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int sr_read_cmo_vertex(SrReader *reader, SrVertex *v) {
    return sr_read_f32(reader, &v->x) &&
           sr_read_f32(reader, &v->y) &&
           sr_read_f32(reader, &v->z) &&
           sr_read_f32(reader, &v->u) &&
           sr_read_f32(reader, &v->v) &&
           sr_read_f32(reader, &v->layer);
}

static const char *sr_path_ext(const char *path) {
    const char *dot = strrchr(path, '.');
    return dot ? dot : "";
}

int sr_mesh_load_cmo(const char *path, SrMesh *mesh) {
    SrReader reader;
    char magic[4];
    uint32_t version;
    uint32_t vertex_count;
    memset(mesh, 0, sizeof(*mesh));
    if (!sr_open(&reader, path)) {
        perror(path);
        return 0;
    }
    if (!sr_read_exact(&reader, magic, sizeof(magic)) ||
        memcmp(magic, "CMod", 4) != 0 ||
        !sr_read_u32(&reader, &version) ||
        !sr_read_u32(&reader, &vertex_count)) {
        fprintf(stderr, "%s: invalid .cmo header\n", path);
        sr_close(&reader);
        return 0;
    }
    if (vertex_count == 0 || vertex_count > 1000000) {
        fprintf(stderr, "%s: unreasonable .cmo vertex count %u\n", path, vertex_count);
        sr_close(&reader);
        return 0;
    }
    mesh->vertices = (SrVertex *)calloc(vertex_count, sizeof(*mesh->vertices));
    if (!mesh->vertices) {
        sr_close(&reader);
        return 0;
    }
    mesh->vertex_count = vertex_count;
    mesh->version = version;
    strcpy(mesh->source_format, "cmo");
    for (uint32_t i = 0; i < vertex_count; i++) {
        if (!sr_read_cmo_vertex(&reader, &mesh->vertices[i])) {
            fprintf(stderr, "%s: truncated .cmo vertex stream at %u\n", path, i);
            sr_mesh_free(mesh);
            sr_close(&reader);
            return 0;
        }
        mesh->vertices[i].nx = 0.0f;
        mesh->vertices[i].ny = 1.0f;
        mesh->vertices[i].nz = 0.0f;
    }

    uint32_t face_count = 0;
    if (sr_read_u32(&reader, &face_count) && face_count > 0 && face_count < 1000000) {
        mesh->faces = (SrFace *)calloc(face_count, sizeof(*mesh->faces));
        if (!mesh->faces) {
            sr_mesh_free(mesh);
            sr_close(&reader);
            return 0;
        }
        mesh->face_count = face_count;
        for (uint32_t i = 0; i < face_count; i++) {
            SrFace *face = &mesh->faces[i];
            if (!sr_read_u32(&reader, &face->vertex_count) ||
                !sr_read_u32(&reader, &face->indices[0]) ||
                !sr_read_u32(&reader, &face->indices[1]) ||
                !sr_read_u32(&reader, &face->indices[2]) ||
                !sr_read_u32(&reader, &face->flags[0]) ||
                !sr_read_u32(&reader, &face->flags[1])) {
                fprintf(stderr, "%s: truncated .cmo face stream at %u\n", path, i);
                sr_mesh_free(mesh);
                sr_close(&reader);
                return 0;
            }
            face->indices[3] = face->indices[2];
        }
    }
    sr_close(&reader);
    return 1;
}

int sr_mesh_load_sbv_points(const char *path, SrMesh *mesh) {
    SrReader reader;
    uint32_t version;
    uint32_t point_count;
    memset(mesh, 0, sizeof(*mesh));
    if (!sr_open(&reader, path)) {
        perror(path);
        return 0;
    }
    if (!sr_read_u32(&reader, &version) || !sr_read_u32(&reader, &point_count)) {
        sr_close(&reader);
        return 0;
    }
    if (point_count == 0 || point_count > 1000000) {
        fprintf(stderr, "%s: unreasonable .sbv point count %u\n", path, point_count);
        sr_close(&reader);
        return 0;
    }
    mesh->vertices = (SrVertex *)calloc(point_count, sizeof(*mesh->vertices));
    if (!mesh->vertices) {
        sr_close(&reader);
        return 0;
    }
    mesh->vertex_count = point_count;
    mesh->version = version;
    strcpy(mesh->source_format, "sbv");
    for (uint32_t i = 0; i < point_count; i++) {
        SrVertex *v = &mesh->vertices[i];
        if (!sr_read_f32(&reader, &v->x) ||
            !sr_read_f32(&reader, &v->y) ||
            !sr_read_f32(&reader, &v->z) ||
            !sr_read_f32(&reader, &v->layer)) {
            fprintf(stderr, "%s: truncated .sbv point stream at %u\n", path, i);
            sr_mesh_free(mesh);
            sr_close(&reader);
            return 0;
        }
        v->u = 0.0f;
        v->v = 0.0f;
        v->nx = 0.0f;
        v->ny = 1.0f;
        v->nz = 0.0f;
    }
    sr_close(&reader);
    return 1;
}

int sr_mesh_load_any(const char *path, SrMesh *mesh) {
    const char *ext = sr_path_ext(path);
    if (strcmp(ext, ".cmo") == 0) {
        return sr_mesh_load_cmo(path, mesh);
    }
    if (strcmp(ext, ".sbv") == 0 || strcmp(ext, ".srv") == 0) {
        return sr_mesh_load_sbv_points(path, mesh);
    }
    fprintf(stderr, "%s: unsupported mesh extension %s\n", path, ext);
    return 0;
}

void sr_mesh_free(SrMesh *mesh) {
    free(mesh->vertices);
    free(mesh->faces);
    memset(mesh, 0, sizeof(*mesh));
}

void sr_mesh_bounds(const SrMesh *mesh, float minv[3], float maxv[3]) {
    if (!mesh->vertex_count) {
        minv[0] = minv[1] = minv[2] = 0.0f;
        maxv[0] = maxv[1] = maxv[2] = 0.0f;
        return;
    }
    minv[0] = maxv[0] = mesh->vertices[0].x;
    minv[1] = maxv[1] = mesh->vertices[0].y;
    minv[2] = maxv[2] = mesh->vertices[0].z;
    for (size_t i = 1; i < mesh->vertex_count; i++) {
        const SrVertex *v = &mesh->vertices[i];
        if (v->x < minv[0]) minv[0] = v->x;
        if (v->y < minv[1]) minv[1] = v->y;
        if (v->z < minv[2]) minv[2] = v->z;
        if (v->x > maxv[0]) maxv[0] = v->x;
        if (v->y > maxv[1]) maxv[1] = v->y;
        if (v->z > maxv[2]) maxv[2] = v->z;
    }
}

int sr_parse_cmo(const char *path) {
    SrMesh mesh;
    float minv[3];
    float maxv[3];
    if (!sr_mesh_load_cmo(path, &mesh)) {
        return 1;
    }
    sr_mesh_bounds(&mesh, minv, maxv);
    printf("%s .cmo\n", sr_basename(path));
    printf("  version: %u\n", mesh.version);
    printf("  vertices: %zu\n", mesh.vertex_count);
    printf("  faces: %zu\n", mesh.face_count);
    printf("  bounds min: %.4f %.4f %.4f\n", minv[0], minv[1], minv[2]);
    printf("  bounds max: %.4f %.4f %.4f\n", maxv[0], maxv[1], maxv[2]);
    for (size_t i = 0; i < mesh.vertex_count && i < 4; i++) {
        SrVertex *v = &mesh.vertices[i];
        printf("  v%zu: pos %.4f %.4f %.4f uv %.4f %.4f %.4f\n",
               i, v->x, v->y, v->z, v->u, v->v, v->layer);
    }
    for (size_t i = 0; i < mesh.face_count && i < 4; i++) {
        SrFace *f = &mesh.faces[i];
        printf("  f%zu: count %u indices %u %u %u flags %u %u\n",
               i, f->vertex_count, f->indices[0], f->indices[1], f->indices[2], f->flags[0], f->flags[1]);
    }
    sr_mesh_free(&mesh);
    return 0;
}
