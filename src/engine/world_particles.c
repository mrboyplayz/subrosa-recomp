/* Particles: see particle.h. */
#include "arith.h"
#include "collision.h"
#include "gl.h"
#include "math3d.h"
#include "particle.h"

/* ---- still recompiled code ------------------------------------------------- */

/* Whether something moving from one point to the other passes through the
   level; the hit is left in collision_hit. */
extern int sub_1400DC050(float *from, float *to, int unknown);
/* Plays a sound at a point: sound, position, 0, volume, pitch. */
extern long long sub_14005ED40(int sound, float *position, long long unknown, float volume, float pitch);
extern int rand(void);                   /* the original's own, 0x14023B1B0 */

/* ---- state ------------------------------------------------------------------- */

/* The sound of a piece landing. 0x183E936CC */
#define particle_landing_sound SR_GLOBAL(int32_t, 0x183E936CCULL)

static const float up[3] = {0.0f, 1.0f, 0.0f};

/* ANDPS with the sign bit cleared. */
static float fabsf_bits(float value)
{
    return _mm_cvtss_f32(_mm_and_ps(_mm_set_ss(value), _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))));
}


int world_spawn_particle(int type, const float position[3], const float velocity[3], const float rotation[9])
{
    int index = world_particle_count;
    WorldParticle *p;
    float about_second, about_first;

    if (index >= WORLD_PARTICLE_CAPACITY)
        return -1;
    p = &world_particles[index];
    p->type = type;
    p->position[0] = position[0];
    p->position[1] = position[1];
    p->position[2] = position[2];
    if (velocity) {
        p->velocity[0] = velocity[0];
        p->velocity[1] = velocity[1];
        p->velocity[2] = velocity[2];
    } else {
        p->velocity[0] = 0.0f;
        p->velocity[1] = 0.0f;
        p->velocity[2] = 0.0f;
    }
    for (int k = 0; k < 9; k++)
        p->rotation[k] = rotation[k];
    p->gravity = 0.0027222223f;          /* 9.8 / 3600 */
    p->drag = 0.9975f;

    /* A spin of 1/5 to 1/3 radian a tick about the second axis and the
       same, the other way round, about the first. */
    about_second = (0.06666667f - (float)math_noise_next() * 6.2088175e-11f) + 0.20000002f;
    p->spin[0] = about_second * rotation[3];
    p->spin[1] = about_second * rotation[4];
    p->spin[2] = about_second * rotation[5];
    about_first = -0.20000002f - ((float)math_noise_next() * -6.2088175e-11f + 0.06666667f);
    p->spin[0] = about_first * rotation[0] + p->spin[0];
    p->spin[1] = about_first * rotation[1] + p->spin[1];
    p->spin[2] = about_first * rotation[2] + p->spin[2];

    world_particle_count = index + 1;
    p->active = 1;
    return index;
}

/* Adds the piece's mesh, placed as the piece lies, to a resting list. */
static void keep_resting(const WorldParticle *p, const WorldMesh *mesh, WorldParticleVertex *list, int32_t *count,
                         int capacity)
{
    const float *r = p->rotation;
    const int32_t *corner = mesh->triangles;
    int stride = mesh->stride;
    const float *vertices = mesh->vertices;

    if (*count >= capacity)
        return;
    for (long long triangle = mesh->triangle_count; triangle > 0; triangle--) {
        for (int k = 0; k < 3; k++) {
            const float *v = &vertices[multiply_int(stride, *corner++)];
            WorldParticleVertex *out = &list[*count];
            float x = v[0], y = v[1], z = v[2];
            float nx = v[5], ny = v[6], nz = v[7];

            out->position[0] = ((r[0] * x + p->position[0]) + r[3] * y) + r[6] * z;
            out->position[1] = ((r[1] * x + p->position[1]) + r[4] * y) + r[7] * z;
            out->position[2] = ((r[2] * x + p->position[2]) + r[5] * y) + r[8] * z;
            out->texture[0] = ((const uint32_t *)(const void *)v)[3];
            out->texture[1] = ((const uint32_t *)(const void *)v)[4];
            out->normal[0] = (r[3] * ny + r[0] * nx) + r[6] * nz;
            out->normal[1] = (r[4] * ny + r[1] * nx) + r[7] * nz;
            out->normal[2] = (r[5] * ny + r[2] * nx) + r[8] * nz;
            *count = *count + 1;
        }
    }
}

/* The piece's first and third axes turned level, its second straight up. */
static void lie_flat(WorldParticle *p)
{
    float *r = p->rotation;

    r[6] = up[2] * r[1] - up[1] * r[2];
    r[7] = up[0] * r[2] - up[2] * r[0];
    r[8] = up[1] * r[0] - up[0] * r[1];
    math_vec3_normalize(&r[6], &r[6]);
    r[0] = up[1] * r[8] - up[2] * r[7];
    r[1] = up[2] * r[6] - up[0] * r[8];
    r[2] = up[0] * r[7] - up[1] * r[6];
    math_vec3_normalize(&r[0], &r[0]);
    r[3] = up[0];
    r[4] = up[1];
    r[5] = up[2];
}

void world_update_particles(void)
{
    for (int i = 0; i < world_particle_count; i++) {
        WorldParticle *p = &world_particles[i];
        float from[3], vx, vy, vz, nx, ny, nz, into, tx, ty, tz, slide, bounce, speed;
        double grip;

        if (!p->active)
            continue;

        speed = sqrt_float((p->spin[1] * p->spin[1] + p->spin[0] * p->spin[0]) + p->spin[2] * p->spin[2]);
        if (speed > 0.000015258789f) {
            float scale = 1.0f / speed, axis[3];
            axis[0] = p->spin[0] * scale;
            axis[1] = p->spin[1] * scale;
            axis[2] = p->spin[2] * scale;
            math_mat3_rotate_rows(p->rotation, axis, speed);
        }

        p->velocity[0] = p->drag * p->velocity[0];
        p->velocity[1] = (p->velocity[1] - p->gravity) * p->drag;
        p->velocity[2] = p->drag * p->velocity[2];
        from[0] = p->position[0];
        from[1] = p->position[1];
        from[2] = p->position[2];
        p->position[0] = p->velocity[0] + from[0];
        p->position[1] = from[1] + p->velocity[1];
        p->position[2] = p->velocity[2] + from[2];
        if (!sub_1400DC050(from, p->position, 0))
            continue;

        /* Back to just off the surface; the velocity into it is turned
           round at a quarter of its size, the slide along it loses 0.7 of
           that size, and the whole 1/16. */
        vx = p->velocity[0];
        vy = p->velocity[1];
        vz = p->velocity[2];
        nx = collision_hit.normal[0];
        nz = collision_hit.normal[2];
        ny = collision_hit.normal[1];
        p->position[0] = nx * 0.001953125f + collision_hit.point[0];
        p->position[1] = ny * 0.001953125f + collision_hit.point[1];
        p->position[2] = nz * 0.001953125f + collision_hit.point[2];
        into = (vy * ny + vx * nx) + nz * vz;
        ty = ny * -into + vy;
        tz = nz * -into + vz;
        tx = nx * -into + vx;
        slide = sqrt_float((ty * ty + tx * tx) + tz * tz);
        grip = (double)fabsf_bits(into) * 0.699999988079071;
        if ((double)slide > grip) {
            if (is_zero_or_nan(slide)) {
                tx = 0.0f;
                ty = 0.0f;
                tz = 0.0f;
            } else {
                tx = tx / slide;
                ty = ty / slide;
                tz = tz / slide;
            }
            tx *= (float)grip;
            ty *= (float)grip;
            tz *= (float)grip;
        }
        bounce = into * -1.25f;
        p->velocity[0] = ((bounce * nx + vx) - tx) * 0.9375f;
        p->velocity[1] = ((ny * bounce + vy) - ty) * 0.9375f;
        p->velocity[2] = ((nz * bounce + vz) - tz) * 0.9375f;

        if (p->type == WORLD_PARTICLE_TYPE_0) {
            /* A hard landing is heard, louder the harder. */
            if (!((ny * vy + vx * nx) + nz * vz >= -0.016666668f)) {
                float impact = (vx * nx + ny * vy) + nz * vz;
                int chance = rand();
                sub_14005ED40(particle_landing_sound, p->position, 0, impact * -3.75f,
                              (float)(chance & 0x7F) * 0.0009765625f + 1.0f);
                ny = collision_hit.normal[1];
            }
            if (p->type == WORLD_PARTICLE_TYPE_0)
                lie_flat(p);
        }

        if (ny > 0.69999999f) {
            speed = sqrt_float((p->velocity[0] * p->velocity[0] + p->velocity[1] * p->velocity[1])
                               + p->velocity[2] * p->velocity[2]);
            if (!(speed >= 0.0083333338f)) {
                p->active = 0;
                if (p->type == WORLD_PARTICLE_TYPE_0)
                    keep_resting(p, &world_meshes[world_particle_mesh_0], world_particle_resting_0,
                                 &world_particle_resting_0_count, WORLD_PARTICLE_RESTING_0_CAPACITY);
                else if (p->type == WORLD_PARTICLE_TYPE_1)
                    keep_resting(p, &world_meshes[world_particle_mesh_1], world_particle_resting_1,
                                 &world_particle_resting_1_count, WORLD_PARTICLE_RESTING_1_CAPACITY);
            }
        }
    }
}

/* ---- drawing ------------------------------------------------------------------------ */

/* Set while the world is drawn with its GL buffers in place. Meaning not
   settled. 0x151E46208 */
#define draw_unknown_151e46208 SR_GLOBAL(int32_t, 0x151E46208ULL)
/* GL buffer names, one per 8 bytes (as world_streets.h), and the buffers
   of the two resting lists. */
#define draw_buffer_name(index) (&SR_GLOBAL(uint32_t, 0x183E9B0C0ULL))[2 * (index)]
#define resting_buffer_0 SR_GLOBAL(int32_t, 0x183E98BC4ULL)
#define resting_buffer_1 SR_GLOBAL(int32_t, 0x183E98BC8ULL)
/* GL texture names, one per 176 bytes, and the textures used here: one per
   list, and two bound for shading (a 2D texture on unit 1 and a cube map
   on unit 2). */
#define draw_texture_name(index) SR_GLOBAL(uint32_t, 0x183F7CC2CULL + 176ULL * (uint64_t)(int64_t)(index))
#define resting_texture_0 SR_GLOBAL(int32_t, 0x183EBF118ULL)
#define resting_texture_1 SR_GLOBAL(int32_t, 0x183EBC414ULL)
#define shading_texture   SR_GLOBAL(int32_t, 0x183EBE408ULL)
#define shading_cube_map  SR_GLOBAL(int32_t, 0x183EBE42CULL)

static void upload_resting(int buffer, const WorldParticleVertex *list, int32_t count, int32_t *uploaded)
{
    if (*uploaded != count) {
        glBindBuffer(GL_ARRAY_BUFFER, draw_buffer_name(buffer));
        glBufferSubData(GL_ARRAY_BUFFER, 0, (GLsizeiptr)multiply_int(count, 32), list);
        glBindBuffer(GL_ARRAY_BUFFER, 0);
    }
    *uploaded = count;
}

static void draw_resting(int depth_only, int texture, int buffer, int32_t count, int unbind)
{
    glBindTexture(GL_TEXTURE_2D, draw_texture_name(texture));
    glEnableVertexAttribArray(0);
    if (!depth_only) {
        glEnableVertexAttribArray(1);
        glEnableVertexAttribArray(2);
        glActiveTexture(GL_TEXTURE0 + 1);
        glBindTexture(GL_TEXTURE_2D, draw_texture_name(shading_texture));
        glActiveTexture(GL_TEXTURE0 + 2);
        glBindTexture(GL_TEXTURE_CUBE_MAP, draw_texture_name(shading_cube_map));
    }
    glBindBuffer(GL_ARRAY_BUFFER, draw_buffer_name(buffer));
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(WorldParticleVertex), (const void *)0);
    if (depth_only) {
        glDrawArrays(GL_TRIANGLES, 0, count);
        if (unbind)
            glBindBuffer(GL_ARRAY_BUFFER, 0);
    } else {
        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(WorldParticleVertex), (const void *)12);
        glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(WorldParticleVertex), (const void *)20);
        glDrawArrays(GL_TRIANGLES, 0, count);
        if (unbind)
            glBindBuffer(GL_ARRAY_BUFFER, 0);
        glActiveTexture(GL_TEXTURE0);
        glDisableVertexAttribArray(1);
        glDisableVertexAttribArray(2);
    }
    glDisableVertexAttribArray(0);
}

void world_draw_resting_particles(int depth_only)
{
    if (!draw_unknown_151e46208)
        return;
    upload_resting(resting_buffer_0, world_particle_resting_0, world_particle_resting_0_count,
                   &world_particle_resting_0_uploaded);
    upload_resting(resting_buffer_1, world_particle_resting_1, world_particle_resting_1_count,
                   &world_particle_resting_1_uploaded);
    draw_resting(depth_only, resting_texture_0, resting_buffer_0, world_particle_resting_0_count, 0);
    draw_resting(depth_only, resting_texture_1, resting_buffer_1, world_particle_resting_1_count, 1);
}
