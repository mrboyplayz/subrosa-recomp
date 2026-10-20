/* The body as a whole: the joints that hold a human's bones together, and
 * each tick the centre, the mean velocities and the smoothed rotation the
 * walking and balance routines steer by.
 */
#include <string.h>
#include "arith.h"
#include "human.h"
#include "math3d.h"
#include "physics.h"

enum { HUMAN_BONE_ARM = 4, HUMAN_BONE_LEG = 10 };   /* first bone of the left limb; the right one is 3 on */

int human_create_joint_bond(int human, int parent_bone, int child_bone, const float anchor[3])
{
    WorldHuman *h = &world_humans[human];
    const HumanSkeletonBone *skeleton = &human_skeleton[child_bone - 1];
    PhysicsBond *bond;
    HumanBondEntry *entry;
    int index;

    for (index = 0; physics_bonds[index].active; index++)
        if (index == PHYSICS_BOND_CAPACITY - 1)
            return -1;

    entry = &h->bonds[h->bond_count++];
    entry->bond = index;
    entry->parent_bone = parent_bone;
    entry->child_bone = child_bone;

    bond = &physics_bonds[index];
    memset((uint8_t *)bond + 4, 0, sizeof *bond - 4);
    bond->active = 1;
    bond->type = PHYSICS_BOND_JOINT;
    bond->lifetime = 0x10000;
    bond->unknown_a0 = human;
    memset(&physics_constraints[index], 0, sizeof physics_constraints[index]);
    bond->body = h->bones[parent_bone].body;
    bond->other_body = h->bones[child_bone].body;
    bond->stiffness = 0.25f;
    bond->damping = 0.375f;
    bond->local_point[0] = anchor[0];
    bond->local_point[1] = anchor[1];
    bond->local_point[2] = anchor[2];
    bond->other_local_point[0] = anchor[0] - skeleton->unknown_28[0];
    bond->other_local_point[1] = anchor[1] - skeleton->unknown_28[1];
    bond->other_local_point[2] = anchor[2] - skeleton->unknown_28[2];
    return index;
}

/* The joint into child from parent: anchored where the skeleton's record
   before child's says. */
static void create_joint(int human, int parent, int child)
{
    float anchor[3];
    int bond;

    anchor[0] = human_skeleton[child - 1].unknown_34[0];
    anchor[1] = human_skeleton[child - 1].unknown_34[1];
    anchor[2] = human_skeleton[child - 1].unknown_34[2];
    bond = human_create_joint_bond(human, parent, child, anchor);
    if (bond != -1)
        world_humans[human].bones[child].bond = bond;
}

void human_create_joints(int human)
{
    create_joint(human, HUMAN_BONE_PELVIS, HUMAN_BONE_STOMACH);
    create_joint(human, HUMAN_BONE_STOMACH, HUMAN_BONE_CHEST);
    create_joint(human, HUMAN_BONE_CHEST, HUMAN_BONE_HEAD);
    for (int bone = HUMAN_BONE_LEG; bone < 16; bone += 3) {
        create_joint(human, HUMAN_BONE_PELVIS, bone);
        create_joint(human, bone, bone + 1);
        create_joint(human, bone + 1, bone + 2);
    }
    for (int bone = HUMAN_BONE_ARM; bone < 10; bone += 3) {
        create_joint(human, HUMAN_BONE_CHEST, bone);
        create_joint(human, bone, bone + 1);
        create_joint(human, bone + 1, bone + 2);
    }
}

/* The mean of a vector of the pelvis, stomach and chest by mass. */
static void trunk_mean(const WorldHuman *h, int offset, float mean[3])
{
    const HumanBone *b = h->bones;
    const float *pelvis_vector = (const float *)(const void *)((const uint8_t *)&b[0] + offset);
    const float *stomach_vector = (const float *)(const void *)((const uint8_t *)&b[1] + offset);
    const float *chest_vector = (const float *)(const void *)((const uint8_t *)&b[2] + offset);
    float total = (b[0].mass + b[1].mass) + b[2].mass;

    mean[0] = b[2].mass * chest_vector[0] + (stomach_vector[0] * b[1].mass + pelvis_vector[0] * b[0].mass);
    mean[1] = b[2].mass * chest_vector[1] + (b[1].mass * stomach_vector[1] + b[0].mass * pelvis_vector[1]);
    mean[2] = b[2].mass * chest_vector[2] + (b[1].mass * stomach_vector[2] + b[0].mass * pelvis_vector[2]);
    if (total > 0.0f) {
        float scale = 1.0f / total;
        mean[0] = mean[0] * scale;
        mean[1] = mean[1] * scale;
        mean[2] = mean[2] * scale;
    }
}

/* Half way from kept to value (the first element by one rounding less). */
static void halve_toward(float kept[3], const float value[3])
{
    kept[1] = kept[1] * 0.5f;
    kept[2] = kept[2] * 0.5f;
    kept[0] = (value[0] + kept[0]) * 0.5f;
    kept[1] = value[1] * 0.5f + kept[1];
    kept[2] = value[2] * 0.5f + kept[2];
}

void human_update_centre(int human)
{
    WorldHuman *h = &world_humans[human];
    HumanBone *b = h->bones;
    float mean[3], q[4], x, y, z, w, total;
    double length;

    /* The centre of the pelvis, stomach and chest. */
    for (int k = 0; k < 3; k++)
        h->centre[k] = b[0].mass * b[0].position[k];
    for (int k = 0; k < 3; k++)
        h->centre[k] = b[1].mass * b[1].position[k] + h->centre[k];
    for (int k = 0; k < 3; k++)
        h->centre[k] = b[2].mass * b[2].position[k] + h->centre[k];
    total = (b[0].mass + b[1].mass) + b[2].mass;
    if (total > 0.0f) {
        float scale = 1.0f / total;
        for (int k = 0; k < 3; k++)
            h->centre[k] = h->centre[k] * scale;
    }

    /* Their velocity, smoothed, and relative to the ground stood on. */
    trunk_mean(h, __builtin_offsetof(HumanBone, velocity), mean);
    halve_toward(h->unknown_678c, mean);
    for (int k = 0; k < 3; k++)
        h->centre_velocity[k] = h->unknown_678c[k] - h->ground_velocity[k];

    trunk_mean(h, __builtin_offsetof(HumanBone, angular_velocity), mean);
    halve_toward(h->smoothed_angular_velocity, mean);

    /* The angular velocity of all bones by mass. */
    mean[0] = 0.0f;
    mean[1] = 0.0f;
    mean[2] = 0.0f;
    total = 0.0f;
    for (int i = 0; i < HUMAN_BONE_COUNT; i++) {
        mean[0] = mean[0] + b[i].mass * b[i].angular_velocity[0];
        mean[1] = mean[1] + b[i].mass * b[i].angular_velocity[1];
        mean[2] = mean[2] + b[i].mass * b[i].angular_velocity[2];
        total = total + b[i].mass;
    }
    if (total > 0.0f) {
        float scale = 1.0f / total;
        mean[0] = mean[0] * scale;
        mean[1] = mean[1] * scale;
        mean[2] = mean[2] * scale;
    }
    h->mean_angular_velocity[0] = mean[0];
    h->mean_angular_velocity[1] = mean[1];
    h->mean_angular_velocity[2] = mean[2];

    /* The pelvis's rotation, half way from the one kept (as quaternions,
       the nearer of the two signs). */
    for (int k = 0; k < 9; k++)
        h->smoothed_rotation[k] = b[0].rotation[k];
    math_quat_from_mat3(q, h->smoothed_rotation);
    if (!((q[3] * h->smoothed_quat[3] + q[2] * h->smoothed_quat[2])
          + (q[1] * h->smoothed_quat[1] + q[0] * h->smoothed_quat[0]) >= 0.0f)) {
        q[0] = -q[0];
        q[1] = -q[1];
        q[2] = -q[2];
        q[3] = -q[3];
    }
    z = q[2] + h->smoothed_quat[2];
    y = q[1] + h->smoothed_quat[1];
    w = q[3] + h->smoothed_quat[3];
    x = q[0] + h->smoothed_quat[0];
    q[0] = x * 0.5f;
    q[1] = y * 0.5f;
    q[2] = z * 0.5f;
    q[3] = w * 0.5f;
    length = sqrt_double((double)(((x * x + y * y) + (z * z + w * w)) * 0.25f));
    if (!(length < 0.0 || length > 0.0)) {
        q[0] = 0.0f;
        q[1] = 0.0f;
        q[2] = 0.0f;
        q[3] = 1.0f;
    } else {
        double scale = 1.0 / length;
        for (int k = 0; k < 4; k++)
            q[k] = (float)((double)q[k] * scale);
    }
    for (int k = 0; k < 4; k++)
        h->smoothed_quat[k] = q[k];
    math_mat3_from_quat(h->smoothed_rotation, q);
}
