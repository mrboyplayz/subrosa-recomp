/* What a human's bones run into: the level, items and other humans.
 *
 * Each bone is a capsule (HumanBone.segment, the skeleton's radius). Once a
 * tick the capsules are tested against the level's triangles near the
 * human, against the meshes of the items near it, and against the capsules
 * of every human after it in the list; each hit becomes a contact for the
 * bond solver.
 */
#include "arith.h"
#include "collision.h"
#include "human.h"
#include "physics.h"
#include "world.h"

/* ---- still recompiled code ------------------------------------------------- */

/* The level's triangles in a box: a count, then records of twelve floats
   (three corners and a fourth vector), at most 1,024; a last word counts
   those that did not fit. */
typedef struct LevelTriangles {
    int32_t count;
    float triangles[1024][12];
    int32_t unknown_c004;
} LevelTriangles;
extern long long sub_140188900(int *triangles, float *box_min, float *box_max, int unknown);
/* A contact between a body and the level. */
extern long long sub_140005160(short body, unsigned int *offset, unsigned int *normal, float depth,
                               unsigned int friction_bits, float depth_scale, unsigned int stiffness_bits);
/* The items listed in a box of voxels: a count in the first eight bytes,
   then eight bytes per item whose first word is the item. */
extern void sub_140038230(int *list, int *voxel_min, int *voxel_max);
/* Places an item type's collision mesh at a position and rotation, into
   the buffer the triangles use. */
extern long long sub_14011BF40(long long placed, long long mesh, float *position, float *rotation);
/* Sweeps a capsule against a placed mesh: point (3), normal (3), a word
   not used here, and the distance. The radius is passed as its bits. */
extern long long sub_140033BE0(float *hit, long long mesh, long long placed, float *from, float *to, int radius_bits);

/* The collision mesh of an item type. Item type + 0xF08 */
#define item_type_mesh(type) ((long long)(intptr_t)&SR_GLOBAL(uint8_t, 0x182A7F088ULL + 0x13D0ULL * (uint64_t)(int64_t)(type)))

enum { HUMAN_STATE_2 = 2 };

static uint32_t float_bits(float value)
{
    uint32_t bits;
    __builtin_memcpy(&bits, &value, 4);
    return bits;
}

/* Shins (11, 14) only collide with the level when the human is down, dead
   or badly hurt; feet (12, 15) never do. */
static int bone_meets_level(const WorldHuman *h, int bone)
{
    if (bone == 12 || bone == 15)
        return 0;
    if (bone == 11 || bone == 14)
        return h->movement_state == HUMAN_STATE_2 || h->old_health <= 0 || h->health < 50;
    return 1;
}

static void collide_level(WorldHuman *h, LevelTriangles *level)
{
    for (int i = 0; i < HUMAN_BONE_COUNT; i++) {
        HumanBone *bone = &h->bones[i];
        float radius, nearest = 65536.0f, point[3] = {0.0f, 0.0f, 0.0f}, normal[3] = {0.0f, 0.0f, 0.0f};

        if (!bone_meets_level(h, i))
            continue;
        radius = human_skeleton[i].radius;
        for (int t = 0; t < level->count; t++) {
            const float *triangle = level->triangles[t];
            float a[3], b[3], c[3], hit_point[3], hit_normal[3], distance;

            for (int k = 0; k < 3; k++) {
                a[k] = triangle[k];
                b[k] = triangle[3 + k];
                c[k] = triangle[6 + k];
                hit_normal[k] = triangle[9 + k];
            }
            if (collision_sphere_triangle(hit_point, hit_normal, &distance, bone->segment[0], bone->segment[1], radius,
                                          a, b, c)
                    && nearest > distance) {
                nearest = distance;
                for (int k = 0; k < 3; k++) {
                    point[k] = hit_point[k];
                    normal[k] = hit_normal[k];
                }
            }
        }
        if (level->count > 0 && !(nearest >= 65536.0f)) {
            const PhysicsBody *body = &physics_bodies[bone->body];
            float offset[3];

            offset[0] = point[0] - body->position[0];
            offset[1] = point[1] - body->position[1];
            offset[2] = point[2] - body->position[2];
            sub_140005160((short)bone->body, (unsigned int *)(void *)offset, (unsigned int *)(void *)normal,
                          human_skeleton[i].radius - nearest, 0x3ECCCCCDu, 0.03125f, 0x3D800000u);
        }
    }
}

static int boxes_overlap(const float min_a[3], const float max_a[3], const float min_b[3], const float max_b[3])
{
    return !(min_a[0] > max_b[0]) && max_a[0] >= min_b[0]
        && !(min_a[2] > max_b[2]) && max_a[2] >= min_b[2]
        && !(min_a[1] > max_b[1]) && max_a[1] >= min_b[1];
}

/* The trunk, head, shoulders and legs against the items near the human. */
static void collide_items(WorldHuman *h, LevelTriangles *scratch)
{
    int32_t list[516];

    sub_140038230(list, h->voxel_min, h->voxel_max);
    for (int n = 0; n < list[0]; n++) {
        int item = list[2 + 2 * n];
        WorldItem *it = &world_items[item];

        if (!boxes_overlap(it->bounds_min, it->bounds_max, h->bounds_min, h->bounds_max))
            continue;
        for (int i = 0; i < HUMAN_BONE_COUNT; i++) {
            HumanBone *bone = &h->bones[i];
            long long mesh;
            float radius, hit[8];

            if (!(i == 7 || i <= 4 || i >= 10))
                continue;
            radius = human_skeleton[i].radius;
            mesh = item_type_mesh(it->type);
            sub_14011BF40((long long)(intptr_t)scratch, mesh, physics_bodies[it->body].position,
                          physics_bodies[it->body].rotation);
            if (sub_140033BE0(hit, mesh, (long long)(intptr_t)scratch, bone->segment[0], bone->segment[1],
                              (int)float_bits(radius))) {
                int body = bone->body, item_body = it->body;
                float normal[3], offset[3], item_offset[3];

                for (int k = 0; k < 3; k++) {
                    normal[k] = hit[3 + k];
                    offset[k] = hit[k] - physics_bodies[body].position[k];
                    item_offset[k] = hit[k] - physics_bodies[item_body].position[k];
                }
                physics_add_contact(body, item_body, offset, item_offset, normal, human_skeleton[i].radius - hit[7],
                                    0.40000001f, 0.0625f, 0.125f);
                __builtin_memset(&it->unknown_8, 0, 8);
            }
        }
    }
}

static int bone_meets_humans(int bone)
{
    return bone == 13 || bone <= 10 || bone >= 16;
}

/* A bone's capsule: its centre -+ half the skeleton's length along its axis. */
static void capsule(const HumanBone *bone, int index, float from[3], float to[3])
{
    const float *axis = &bone->rotation[3 * human_skeleton[index].axis_row];
    float back = human_skeleton[index].length * -0.5f, ahead = human_skeleton[index].length * 0.5f;

    from[0] = back * axis[0] + bone->position[0];
    to[1] = ahead * axis[1] + bone->position[1];
    from[1] = back * axis[1] + bone->position[1];
    from[2] = back * axis[2] + bone->position[2];
    to[0] = ahead * axis[0] + bone->position[0];
    to[2] = ahead * axis[2] + bone->position[2];
}

/* Against every human later in the list that is on foot and near. */
static void collide_humans(int human)
{
    WorldHuman *h = &world_humans[human];

    for (int other = human + 1; other < WORLD_HUMAN_CAPACITY; other++) {
        WorldHuman *o = &world_humans[other];

        if (!o->active || o->vehicle != -1 || !boxes_overlap(o->bounds_min, o->bounds_max, h->bounds_min, h->bounds_max))
            continue;
        for (int i = 0; i < HUMAN_BONE_COUNT; i++) {
            float from[3], to[3];

            if (!bone_meets_humans(i))
                continue;
            capsule(&h->bones[i], i, from, to);
            for (int j = 0; j < HUMAN_BONE_COUNT; j++) {
                float other_from[3], other_to[3], on_mine[3], on_other[3], distance, reach;
                float dx, dy, dz, length, offset[3], other_offset[3];
                int body, other_body;

                if (!bone_meets_humans(j))
                    continue;
                reach = human_skeleton[i].radius + human_skeleton[j].radius;
                capsule(&o->bones[j], j, other_from, other_to);
                if (!collision_segment_segment(on_mine, on_other, &distance, from, to, other_from, other_to, reach))
                    continue;
                dx = on_other[0] - on_mine[0];
                dy = on_other[1] - on_mine[1];
                dz = on_other[2] - on_mine[2];
                length = sqrt_float((dy * dy + dx * dx) + dz * dz);
                if (is_zero_or_nan(length)) {
                    dx = 0.0f;
                    dy = 0.0f;
                    dz = 0.0f;
                } else {
                    float scale = 1.0f / length;
                    dx = scale * dx;
                    dy = scale * dy;
                    dz = scale * dz;
                }
                other_body = o->bones[j].body;
                body = h->bones[i].body;
                collision_hit.normal[2] = dz;
                collision_hit.normal[0] = dx;
                collision_hit.point[0] = (on_other[0] + on_mine[0]) * 0.5f;
                collision_hit.point[1] = (on_other[1] + on_mine[1]) * 0.5f;
                collision_hit.point[2] = (on_other[2] + on_mine[2]) * 0.5f;
                collision_hit.normal[1] = dy;
                for (int k = 0; k < 3; k++) {
                    other_offset[k] = collision_hit.point[k] - physics_bodies[other_body].position[k];
                    offset[k] = collision_hit.point[k] - physics_bodies[body].position[k];
                }
                physics_add_contact(other_body, body, other_offset, offset, collision_hit.normal, reach - distance,
                                    0.40000001f, 0.03125f, 0.0625f);
            }
        }
    }
}

void human_collide(int human)
{
    /* The triangles and each item's placed mesh share one large buffer. */
    static LevelTriangles scratch;
    WorldHuman *h = &world_humans[human];

    scratch.count = 0;
    scratch.unknown_c004 = 0;
    sub_140188900((int *)(void *)&scratch, h->bounds_min, h->bounds_max, 4);
    collide_level(h, &scratch);
    collide_items(h, &scratch);
    collide_humans(human);
}
