/* Particles: small rigid pieces thrown off vehicles that fly, bounce off the
 * level and, once they lie still, are drawn as part of a static mesh.
 *
 * A piece has no physics body. It is a position, a velocity and a rotation
 * that the tick moves by itself; the only collision is a ray against the
 * level along each tick's move.
 */
#ifndef SR_ENGINE_PARTICLE_H
#define SR_ENGINE_PARTICLE_H

#include <stdint.h>
#include "memory.h"

#define WORLD_PARTICLE_CAPACITY 0x4000

/* What a piece is: which mesh it is drawn with, and where it is kept once
   it rests. Type 0 also makes a sound when it lands hard and settles flat. */
enum {
    WORLD_PARTICLE_TYPE_0 = 0,
    WORLD_PARTICLE_TYPE_1 = 1
};

/* 0x1A70AE580, 104 bytes each; the count at 0x1A724E700. */
typedef struct WorldParticle {
    int32_t type;                        /* WORLD_PARTICLE_TYPE_* */
    int32_t lifetime;                    /* ticks; only the unused routine 0x140159730 counts it down */
    int32_t active;                      /* cleared when the piece comes to rest */
    float position[3];
    float velocity[3];                   /* per tick */
    float rotation[9];                   /* rows are the piece's axes */
    float spin[3];                       /* axis scaled by radians per tick */
    uint8_t unknown_54[0x58 - 0x54];
    float gravity;                       /* taken off the vertical velocity each tick */
    float drag;                          /* the velocity is scaled by this each tick */
    uint8_t unknown_60[0x68 - 0x60];
} WorldParticle;

#define world_particles      (&SR_GLOBAL(WorldParticle, 0x1A70AE580ULL))
#define world_particle_count SR_GLOBAL(int32_t, 0x1A724E700ULL)

/* A vertex of the pieces at rest: two growing lists, one per type, each
   drawn as triangles. */
typedef struct WorldParticleVertex {
    float position[3];
    uint32_t texture[2];                 /* copied from the mesh as they are */
    float normal[3];
} WorldParticleVertex;

#define WORLD_PARTICLE_RESTING_0_CAPACITY 0xFE00
#define WORLD_PARTICLE_RESTING_1_CAPACITY 0x7E00
#define world_particle_resting_0_count SR_GLOBAL(int32_t, 0x1A72FE728ULL)
#define world_particle_resting_0_uploaded SR_GLOBAL(int32_t, 0x1A72FE72CULL)   /* the count the GL buffer holds */
#define world_particle_resting_0       (&SR_GLOBAL(WorldParticleVertex, 0x1A72FE730ULL))
#define world_particle_resting_1_count SR_GLOBAL(int32_t, 0x1A74FE730ULL)
#define world_particle_resting_1_uploaded SR_GLOBAL(int32_t, 0x1A74FE734ULL)
#define world_particle_resting_1       (&SR_GLOBAL(WorldParticleVertex, 0x1A74FE738ULL))

/* A loaded mesh (3,632 bytes from 0x16AD0BE04; only the fields the
   particles read): vertices of `stride` floats (position, two texture
   words, normal) and triangles of three vertex numbers. */
typedef struct WorldMesh {
    int32_t stride;                      /* floats per vertex */
    const float *vertices;
    int32_t triangle_count;
    uint8_t unknown_10[4];
    const int32_t *triangles;
    uint8_t unknown_1c[0xE30 - 0x1C];
} __attribute__((packed)) WorldMesh;

#define world_meshes (&SR_GLOBAL(WorldMesh, 0x16AD0BE04ULL))
/* The meshes of the two particle types. */
#define world_particle_mesh_0 SR_GLOBAL(int32_t, 0x183EBC044ULL)
#define world_particle_mesh_1 SR_GLOBAL(int32_t, 0x183EBC350ULL)

/* Adds a piece at position with velocity (null: none) and rotation; its
   spin is random about its first two axes. Returns its index, or -1 when
   all 16,384 are in use. 0x14005F150 */
int world_spawn_particle(int type, const float position[3], const float velocity[3], const float rotation[9]);

/* Moves every flying piece for a tick: spin, drag and gravity, then the
   bounce off the level. A piece that hits ground flatter than about 45
   degrees slower than 1/120 comes to rest and its mesh is added to the
   resting list of its type. 0x140158CD0 */
void world_update_particles(void);

/* Draws the pieces at rest: uploads each list to its GL buffer when it has
   grown, then draws both as triangles, with position alone when
   depth_only is set and with texture coordinates, normals and the shading
   textures otherwise. 0x1401259B0 */
void world_draw_resting_particles(int depth_only);

_Static_assert(sizeof(WorldParticle) == 0x68, "WorldParticle size");
_Static_assert(__builtin_offsetof(WorldParticle, spin) == 0x48, "WorldParticle layout");
_Static_assert(__builtin_offsetof(WorldParticle, gravity) == 0x58, "WorldParticle layout");
_Static_assert(sizeof(WorldParticleVertex) == 32, "WorldParticleVertex size");
_Static_assert(sizeof(WorldMesh) == 0xE30, "WorldMesh size");
_Static_assert(__builtin_offsetof(WorldMesh, vertices) == 4, "WorldMesh layout");
_Static_assert(__builtin_offsetof(WorldMesh, triangle_count) == 0xC, "WorldMesh layout");
_Static_assert(__builtin_offsetof(WorldMesh, triangles) == 0x14, "WorldMesh layout");

#endif
