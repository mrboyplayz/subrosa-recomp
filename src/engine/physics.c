/* Rigid-body physics. See physics.h. */
#include "arith.h"
#include "math3d.h"
#include "physics.h"

/* ---- shared steps ---------------------------------------------------------- */

/* Velocity of the point at offset r (world axes) from the body's position:
   v + w x r, written as the original computes it. */
static void point_velocity(float out[3], const PhysicsBody *body, const float r[3])
{
    const float *w = body->angular_velocity;
    const float *v = body->velocity;

    out[0] = (w[2] * r[1] - w[1] * r[2]) + v[0];
    out[1] = (w[0] * r[2] - w[2] * r[0]) + v[1];
    out[2] = (w[1] * r[0] - w[0] * r[1]) + v[2];
}

/* Corrects the relative velocity of a constraint's two points toward bias:
   computes the difference, limits it to 1/30 per tick, and adds the impulse
   to a and the opposite impulse to b, each weighted by its share. */
static void apply_point_impulse(const PhysicsConstraint *c, const float bias[3])
{
    PhysicsBody *a = &physics_bodies[c->body_a];
    PhysicsBody *b = &physics_bodies[c->body_b];
    const float *ra = c->offset_a;
    const float *rb = c->offset_b;
    float k = c->stiffness;
    float pa[3], pb[3], v[3];
    float length, share;

    point_velocity(pa, a, ra);
    point_velocity(pb, b, rb);
    v[0] = (pa[0] * k + bias[0]) + pb[0] * -k;
    v[1] = (pa[1] * k + bias[1]) + pb[1] * -k;
    v[2] = (pa[2] * k + bias[2]) + pb[2] * -k;

    length = sqrt_float((v[1] * v[1] + v[0] * v[0]) + v[2] * v[2]);
    if (length > 0.033333335f) {
        float scale = 0.033333335f / length;
        v[0] = scale * v[0];
        v[1] = scale * v[1];
        v[2] = scale * v[2];
    }

    /* Each body is read again after the other is written, as in the
       original; that matters when a and b are the same body. */
    share = -c->share_a;
    a->velocity_change[0] = v[0] * share + a->velocity_change[0];
    a->velocity_change[1] = v[1] * share + a->velocity_change[1];
    a->velocity_change[2] = v[2] * share + a->velocity_change[2];
    a->angular_velocity_change[0] = (ra[2] * v[1] - ra[1] * v[2]) * share + a->angular_velocity_change[0];
    a->angular_velocity_change[1] = (ra[0] * v[2] - ra[2] * v[0]) * share + a->angular_velocity_change[1];
    a->angular_velocity_change[2] = (ra[1] * v[0] - ra[0] * v[1]) * share + a->angular_velocity_change[2];

    share = c->share_b;
    b->velocity_change[0] = share * v[0] + b->velocity_change[0];
    b->velocity_change[1] = share * v[1] + b->velocity_change[1];
    b->velocity_change[2] = share * v[2] + b->velocity_change[2];
    b->angular_velocity_change[0] = (rb[2] * v[1] - rb[1] * v[2]) * share + b->angular_velocity_change[0];
    b->angular_velocity_change[1] = (rb[0] * v[2] - rb[2] * v[0]) * share + b->angular_velocity_change[1];
    b->angular_velocity_change[2] = (rb[1] * v[0] - rb[0] * v[1]) * share + b->angular_velocity_change[2];
}

/* ---- joints ---------------------------------------------------------------- */

void physics_prepare_joint(int bond_index)
{
    const PhysicsBond *bond = &physics_bonds[bond_index];
    PhysicsConstraint *c = &physics_constraints[bond_index];
    const PhysicsBody *a = &physics_bodies[bond->body];
    const PhysicsBody *b = &physics_bodies[bond->other_body];
    float d[3];
    float length;
    float total;

    c->body_a = (uint16_t)bond->body;
    c->body_b = (uint16_t)bond->other_body;
    math_vec3_multiply_mat3(c->offset_a, bond->local_point, a->rotation);
    math_vec3_multiply_mat3(c->offset_b, bond->other_local_point, b->rotation);

    /* Separation of the two points, at most 1/16 (1/64 for tight joints). */
    d[0] = (c->offset_a[0] + a->position[0]) - (c->offset_b[0] + b->position[0]);
    d[1] = (c->offset_a[1] + a->position[1]) - (c->offset_b[1] + b->position[1]);
    d[2] = (c->offset_a[2] + a->position[2]) - (c->offset_b[2] + b->position[2]);
    length = sqrt_float((d[1] * d[1] + d[0] * d[0]) + d[2] * d[2]);
    if (length > 0.0625f) {
        float scale = 1.0f / length;
        d[0] = d[0] * scale * 0.0625f;
        d[1] = d[1] * scale * 0.0625f;
        d[2] = d[2] * scale * 0.0625f;
    }
    if (bond->unknown_a4 == PHYSICS_BOND_TIGHT) {
        length = sqrt_float((d[1] * d[1] + d[0] * d[0]) + d[2] * d[2]);
        if (length > 0.015625f) {
            float scale = 1.0f / length;
            d[0] = scale * d[0] * 0.015625f;
            d[1] = scale * d[1] * 0.015625f;
            d[2] = scale * d[2] * 0.015625f;
        }
    }
    c->position_bias[0] = d[0] * 0.1875f;
    c->position_bias[1] = d[1] * 0.1875f;
    c->position_bias[2] = d[2] * 0.1875f;
    c->stiffness = 0.1875f;

    total = 1.0f / (b->mass + a->mass);
    c->share_b = total * a->mass;
    c->share_a = total * b->mass;
    c->angular_bias[0] = c->bias[0] * 0.875f;
    c->angular_bias[1] = c->bias[1] * 0.875f;
    c->angular_bias[2] = c->bias[2] * 0.875f;
    c->angular_scale = min_float((c->share_b + c->share_b) * b->unknown_9c,
                                 (c->share_a + c->share_a) * a->unknown_9c);
}

void physics_solve_point_velocity(int constraint)
{
    const PhysicsConstraint *c = &physics_constraints[constraint];

    apply_point_impulse(c, c->bias);
}

void physics_solve_joint(int bond_index)
{
    const PhysicsBond *bond = &physics_bonds[bond_index];
    const PhysicsConstraint *c = &physics_constraints[bond_index];
    PhysicsBody *a;
    PhysicsBody *b;
    float wa[3], wb[3], w[3];
    float limit;
    float share_a, share_b;

    apply_point_impulse(c, c->position_bias);

    /* Angular velocities, read after the point impulse (which changes only
       the *_change fields). */
    a = &physics_bodies[c->body_a];
    b = &physics_bodies[c->body_b];
    wa[0] = a->angular_velocity[0];
    wa[1] = a->angular_velocity[1];
    wa[2] = a->angular_velocity[2];
    wb[0] = b->angular_velocity[0];
    wb[1] = b->angular_velocity[1];
    wb[2] = b->angular_velocity[2];

    w[0] = (c->angular_bias[0] - wa[0] * 0.875f) + wb[0] * 0.875f;
    w[1] = (c->angular_bias[1] - wa[1] * 0.875f) + wb[1] * 0.875f;
    w[2] = (c->angular_bias[2] - wa[2] * 0.875f) + wb[2] * 0.875f;

    limit = bond->angular_limit;
    if (!is_zero_or_nan(limit)) {
        float gain = c->angular_gain;
        float length = sqrt_float((w[1] * w[1] + w[0] * w[0]) + w[2] * w[2]);

        if (length > limit) {
            float scale = limit / length;
            w[0] = scale * w[0];
            w[1] = scale * w[1];
            w[2] = scale * w[2];
        }
        if (is_zero_or_nan(gain)) {
            w[0] = w[0] + (wb[0] - wa[0]) * 0.125f;
            w[1] = w[1] + (wb[1] - wa[1]) * 0.125f;
            w[2] = w[2] + (wb[2] - a->angular_velocity[2]) * 0.125f;
        } else {
            w[0] = w[0] + gain * (wb[0] - wa[0]);
            w[1] = w[1] + gain * (wb[1] - wa[1]);
            w[2] = w[2] + gain * (wb[2] - a->angular_velocity[2]);
        }
    }

    if (c->has_axis) {
        /* Pull the angular difference along the joint's axis. */
        const float *n = c->axis;
        float u[3] = { 0.0f, 0.0f, 0.0f };
        float length = sqrt_float((n[0] * n[0] + n[1] * n[1]) + n[2] * n[2]);
        float along;

        if (!is_zero_or_nan(length)) {
            float scale = 1.0f / length;
            u[0] = n[0] * scale;
            u[1] = n[1] * scale;
            u[2] = n[2] * scale;
        }
        along = ((wb[0] - wa[0]) * u[0] + (wb[1] - wa[1]) * u[1]) + (wb[2] - wa[2]) * u[2];
        w[0] = w[0] + (along * u[0] * 0.875f + n[0] * 0.875f);
        w[1] = w[1] + (along * u[1] * 0.875f + n[1] * 0.875f);
        w[2] = w[2] + (along * u[2] * 0.875f + n[2] * 0.875f);
    }

    w[0] = w[0] * c->angular_scale;
    w[1] = w[1] * c->angular_scale;
    w[2] = c->angular_scale * w[2];
    share_a = c->share_a;
    share_b = c->share_b;
    a->angular_velocity_change[0] = w[0] * share_a + a->angular_velocity_change[0];
    a->angular_velocity_change[1] = w[1] * share_a + a->angular_velocity_change[1];
    a->angular_velocity_change[2] = w[2] * share_a + a->angular_velocity_change[2];
    b->angular_velocity_change[0] = -share_b * w[0] + b->angular_velocity_change[0];
    b->angular_velocity_change[1] = -share_b * w[1] + b->angular_velocity_change[1];
    b->angular_velocity_change[2] = -share_b * w[2] + b->angular_velocity_change[2];
}
