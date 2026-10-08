/* The bond solver of a physics tick (0x14001D080). See physics.h. */
#include <string.h>
#include "arith.h"
#include "physics.h"

/* Vehicle wheel solvers run in every iteration (still recompiled code). */
extern void sub_14010D610(void);
extern void sub_140107ED0(void);

/* Points closer than this have no direction. */
#define POINT_EPSILON 0.000015258789f   /* 1/65536 */

/* ---- setup ----------------------------------------------------------------- */

/* Shared tail of the point-link and rotation setups. */
static void set_shares(PhysicsConstraint *c, float a, float b, float scale)
{
    c->share_a = b * scale;
    c->share_b = a * scale;
}

static void setup_point_link(const PhysicsBond *bond, PhysicsConstraint *c)
{
    const PhysicsPoint *a = &physics_points[bond->point[0]];
    const PhysicsPoint *b = &physics_points[bond->point[1]];
    float d[3], n[3], length, mass_a, mass_b;

    c->body_b = (uint16_t)bond->point[1];
    c->body_a = (uint16_t)bond->point[0];
    d[0] = b->position[0] - a->position[0];
    d[1] = b->position[1] - a->position[1];
    d[2] = b->position[2] - a->position[2];
    length = sqrt_float((d[1] * d[1] + d[0] * d[0]) + d[2] * d[2]);
    if (length > POINT_EPSILON) {
        float scale = 1.0f / length;
        n[0] = scale * d[0];
        n[1] = scale * d[1];
        n[2] = scale * d[2];
    } else {
        n[0] = n[1] = n[2] = 0.0f;
    }
    c->bias[0] = n[0];
    c->bias[2] = n[2];
    c->bias[1] = n[1];
    memcpy(&c->stiffness, &bond->damping, 4);
    c->depth = (length - bond->distance) * bond->stiffness;
    mass_a = a->mass;
    mass_b = b->mass;
    set_shares(c, mass_a, mass_b, 1.0f / (mass_a + mass_b));
}

static void setup_body_level(const PhysicsBond *bond, PhysicsConstraint *c)
{
    const PhysicsBody *body = &physics_bodies[bond->body];
    const float *l = bond->local_point;
    const float *r = body->rotation;
    float k = bond->stiffness;
    float w[3];

    c->body_a = (uint16_t)bond->body;
    w[0] = (l[0] * r[0] + l[1] * r[3]) + l[2] * r[6];
    w[1] = (l[1] * r[4] + l[0] * r[1]) + l[2] * r[7];
    w[2] = (l[1] * r[5] + l[0] * r[2]) + l[2] * r[8];
    c->offset_a[0] = w[0];
    c->offset_a[1] = w[1];
    c->offset_a[2] = w[2];
    c->bias[0] = ((w[0] + body->position[0]) - bond->world_point[0]) * k;
    c->bias[1] = ((w[1] + body->position[1]) - bond->world_point[1]) * k;
    c->bias[2] = ((w[2] + body->position[2]) - bond->world_point[2]) * k;
    memcpy(&c->stiffness, &bond->damping, 4);
}

static void setup_body_points(PhysicsBond *bond, PhysicsConstraint *c)
{
    const PhysicsBody *a = &physics_bodies[bond->body];
    const PhysicsBody *b = &physics_bodies[bond->other_body];
    const float *l = bond->local_point;
    const float *m = bond->other_local_point;
    const float *ra = a->rotation;
    const float *rb = b->rotation;
    float wa[3], wb[3], d[3], n[3], e[3];
    float length, scale, stiffness, total;

    c->body_b = (uint16_t)bond->other_body;
    c->body_a = (uint16_t)bond->body;
    wa[0] = (l[1] * ra[3] + l[0] * ra[0]) + l[2] * ra[6];
    wa[1] = (l[1] * ra[4] + l[0] * ra[1]) + l[2] * ra[7];
    wa[2] = (l[1] * ra[5] + l[0] * ra[2]) + l[2] * ra[8];
    wb[0] = (m[0] * rb[0] + m[1] * rb[3]) + m[2] * rb[6];
    wb[1] = (m[1] * rb[4] + m[0] * rb[1]) + m[2] * rb[7];
    wb[2] = (m[1] * rb[5] + m[0] * rb[2]) + m[2] * rb[8];
    memcpy(c->offset_a, wa, sizeof wa);
    memcpy(c->offset_b, wb, sizeof wb);
    d[0] = (wa[0] + a->position[0]) - (wb[0] + b->position[0]);
    d[1] = (wa[1] + a->position[1]) - (wb[1] + b->position[1]);
    d[2] = (wa[2] + a->position[2]) - (wb[2] + b->position[2]);
    length = sqrt_float((d[0] * d[0] + d[1] * d[1]) + d[2] * d[2]);
    if (is_zero_or_nan(length)) {
        n[0] = n[1] = n[2] = 0.0f;
    } else {
        float inverse = 1.0f / length;
        n[0] = d[0] * inverse;
        n[1] = d[1] * inverse;
        n[2] = d[2] * inverse;
    }

    /* The bond's own stiffness and damping are reset here. */
    scale = 0.1875f;
    stiffness = 0.1875f;
    bond->stiffness = 0.1875f;
    bond->damping = 0.1875f;
    e[2] = n[2] * -bond->distance + d[2];
    e[0] = n[0] * -bond->distance + d[0];
    e[1] = n[1] * -bond->distance + d[1];
    if (a->type == PHYSICS_BODY_CAR && b->type == PHYSICS_BODY_CAR) {
        scale = 0.00390625f;
        stiffness = 0.125f;
        bond->stiffness = 0.00390625f;
        bond->damping = 0.125f;
    }
    if (b->type == PHYSICS_BODY_ITEM) {
        float limit = sqrt_float((e[1] * e[1] + e[0] * e[0]) + e[2] * e[2]);
        if (limit > 0.125f) {
            e[0] = e[0] * (0.125f / limit);
            e[1] = e[1] * (0.125f / limit);
            e[2] = e[2] * (0.125f / limit);
        }
    }
    c->bias[0] = e[0] * scale;
    c->bias[1] = e[1] * scale;
    c->bias[2] = e[2] * scale;
    total = 1.0f / (b->mass + a->mass);
    c->stiffness = stiffness;
    c->share_a = total * b->mass;
    c->share_b = total * a->mass;
}

static void setup_rotation(const PhysicsBond *bond, PhysicsConstraint *c)
{
    const PhysicsBody *a = &physics_bodies[bond->body];
    const PhysicsBody *b = &physics_bodies[bond->other_body];
    float total, share_b_mass, share_a_mass;

    c->body_a = (uint16_t)bond->body;
    c->body_b = (uint16_t)bond->other_body;
    c->stiffness = 0.875f;
    total = 1.0f / (a->mass + b->mass);
    share_b_mass = b->mass * total;
    share_a_mass = a->mass * total;
    c->bias[0] = c->bias[0] * 0.875f;
    c->bias[1] = c->bias[1] * 0.875f;
    c->bias[2] = c->bias[2] * 0.875f;
    set_shares(c, share_a_mass, share_b_mass,
               min_float((share_a_mass + share_a_mass) * b->unknown_9c,
                         (share_b_mass + share_b_mass) * a->unknown_9c));
}

/* ---- point constraints ----------------------------------------------------- */

/* Friction: the tangential part t of an impulse is corrected by at most
   friction times the normal part n. */
static void apply_friction(float n[3], const float t[3], float friction)
{
    float length = sqrt_float((t[1] * t[1] + t[0] * t[0]) + t[2] * t[2]);

    if (length > 0.0f) {
        float limit = min_float(sqrt_float((n[1] * n[1] + n[0] * n[0]) + n[2] * n[2]) * friction, length);
        float inverse = 1.0f / length;
        n[0] = n[0] + inverse * t[0] * limit;
        n[1] = n[1] + inverse * t[1] * limit;
        n[2] = n[2] + inverse * t[2] * limit;
    }
}

static void add3(float *to, float scale, const float v[3])
{
    to[0] = scale * v[0] + to[0];
    to[1] = scale * v[1] + to[1];
    to[2] = scale * v[2] + to[2];
}

static void solve_point_link(const PhysicsConstraint *c)
{
    PhysicsPointScratch *a = &physics_point_scratch[c->body_a];
    PhysicsPointScratch *b = &physics_point_scratch[c->body_b];
    const float *n = c->bias;
    float relative = ((b->velocity[1] - a->velocity[1]) * n[1] + (b->velocity[0] - a->velocity[0]) * n[0]
                      + (b->velocity[2] - a->velocity[2]) * n[2]) * c->stiffness + c->depth;
    float impulse_b = relative * c->share_b;
    float impulse_a = relative * c->share_a;

    a->change[0] = impulse_a * n[0] + a->change[0];
    a->change[1] = impulse_a * n[1] + a->change[1];
    a->change[2] = impulse_a * n[2] + a->change[2];
    b->change[0] = -impulse_b * n[0] + b->change[0];
    b->change[1] = -impulse_b * n[1] + b->change[1];
    b->change[2] = -impulse_b * n[2] + b->change[2];
}

static void solve_point_level(const PhysicsBond *bond)
{
    PhysicsPointScratch *p = &physics_point_scratch[bond->point[0]];
    const float *n = bond->normal;
    float push = bond->distance * bond->stiffness;
    float damping = -bond->damping;
    float u[3], along;

    u[0] = (damping * p->velocity[0] + push * n[0]) + bond->damping * bond->target_velocity[0];
    u[1] = (damping * p->velocity[1] + push * n[1]) + bond->damping * bond->target_velocity[1];
    u[2] = (damping * p->velocity[2] + push * n[2]) + bond->damping * bond->target_velocity[2];
    along = (u[0] * n[0] + u[1] * n[1]) + u[2] * n[2];
    if (along > 0.0f) {
        float i[3], t[3];

        i[1] = along * n[1];
        i[0] = along * n[0];
        t[1] = u[1] - along * n[1];
        i[2] = along * n[2];
        t[0] = u[0] - i[0];
        t[2] = u[2] - i[2];
        apply_friction(i, t, bond->friction);
        p->change[0] = i[0] + p->change[0];
        p->change[1] = i[1] + p->change[1];
        p->change[2] = i[2] + p->change[2];
    }
}

static void solve_point_point(const PhysicsBond *bond)
{
    int ia = bond->point[0], ib = bond->point[1];
    PhysicsPointScratch *a = &physics_point_scratch[ia];
    PhysicsPointScratch *b = &physics_point_scratch[ib];
    const float *n = bond->normal;
    float k = bond->damping;
    float push = bond->distance * bond->stiffness;
    float u[3], d[3], length, mass_b, mass_a, scale, along;

    u[0] = (-k * a->velocity[0] + push * n[0]) + k * b->velocity[0];
    u[2] = (-k * a->velocity[2] + push * n[2]) + k * b->velocity[2];
    u[1] = (-k * a->velocity[1] + push * n[1]) + k * b->velocity[1];
    length = sqrt_float((u[1] * u[1] + u[0] * u[0]) + u[2] * u[2]);
    if (length > POINT_EPSILON) {
        float inverse = 1.0f / length;
        d[0] = inverse * u[0];
        d[1] = inverse * u[1];
        d[2] = inverse * u[2];
    } else {
        d[0] = d[1] = d[2] = 0.0f;
    }
    mass_b = physics_points[ib].mass;
    mass_a = physics_points[ia].mass;
    scale = length / (mass_a + mass_b);
    along = (d[0] * n[0] + d[1] * n[1]) + d[2] * n[2];
    if (along > 0.0f) {
        float i[3], t[3];

        i[0] = along * n[0];
        i[1] = along * n[1];
        i[2] = along * n[2];
        t[0] = d[0] - i[0];
        t[1] = d[1] - i[1];
        t[2] = d[2] - i[2];
        apply_friction(i, t, bond->friction);
        add3(a->change, mass_b * scale, i);
        add3(b->change, -(mass_a * scale), i);
    }
}

static void solve_point_triangle(const PhysicsBond *bond)
{
    PhysicsPointScratch *p = &physics_point_scratch[bond->point[0]];
    PhysicsPointScratch *q[3];
    const float *n = bond->normal;
    const float *w = bond->point_weight;
    float k = bond->damping;
    float wk[3], u[3], d[3], length, inverse, mass_p, mass_q, scale, along;

    for (int j = 0; j < 3; j++)
        q[j] = &physics_point_scratch[bond->point[j + 1]];
    wk[1] = w[1] * k;
    wk[0] = w[0] * k;
    wk[2] = k * w[2];
    for (int j = 0; j < 3; j++)
        u[j] = (((-k * p->velocity[j] + bond->distance * bond->stiffness * n[j]) + wk[0] * q[0]->velocity[j])
                + wk[1] * q[1]->velocity[j]) + wk[2] * q[2]->velocity[j];
    length = sqrt_float((u[1] * u[1] + u[0] * u[0]) + u[2] * u[2]);
    inverse = 1.0f / length;
    d[0] = inverse * u[0];
    d[1] = inverse * u[1];
    d[2] = inverse * u[2];
    mass_p = physics_points[bond->point[0]].mass;
    mass_q = (w[0] * physics_points[bond->point[1]].mass + w[1] * physics_points[bond->point[2]].mass)
             + w[2] * physics_points[bond->point[3]].mass;
    scale = length / (mass_q + mass_p);
    along = (n[0] * d[0] + n[1] * d[1]) + n[2] * d[2];
    if (along > 0.0f) {
        float i[3], t[3], share_p, back;

        i[0] = n[0] * along;
        i[1] = n[1] * along;
        i[2] = n[2] * along;
        t[0] = d[0] - i[0];
        t[1] = d[1] - i[1];
        t[2] = d[2] - i[2];
        apply_friction(i, t, bond->friction);
        share_p = mass_q * scale;
        back = mass_p * scale;
        p->change[0] = i[0] * share_p + p->change[0];
        p->change[1] = i[1] * share_p + p->change[1];
        p->change[2] = i[2] * share_p + p->change[2];
        for (int j = 0; j < 3; j++) {
            float s = -(w[j] * back);
            q[j]->change[0] = i[0] * s + q[j]->change[0];
            q[j]->change[1] = i[1] * s + q[j]->change[1];
            q[j]->change[2] = i[2] * s + q[j]->change[2];
        }
    }
}

/* ---- body constraints ------------------------------------------------------ */

static void solve_body_level(const PhysicsConstraint *c)
{
    PhysicsBody *body = &physics_bodies[c->body_a];
    const float *r = c->offset_a;
    const float *w = body->angular_velocity;
    float k = c->stiffness;
    float e[3];

    e[0] = (((w[2] * r[1]) - (r[2] * w[1])) + body->velocity[0]) * k + c->bias[0];
    e[1] = (((r[2] * w[0]) - (w[2] * r[0])) + body->velocity[1]) * k + c->bias[1];
    e[2] = (((w[1] * r[0]) - (w[0] * r[1])) + body->velocity[2]) * k + c->bias[2];
    body->velocity_change[0] = body->velocity_change[0] - e[0];
    body->velocity_change[1] = body->velocity_change[1] - e[1];
    body->velocity_change[2] = body->velocity_change[2] - e[2];
    body->angular_velocity_change[0] = body->angular_velocity_change[0] - (e[1] * r[2] - e[2] * r[1]);
    body->angular_velocity_change[1] = body->angular_velocity_change[1] - (e[2] * r[0] - e[0] * r[2]);
    body->angular_velocity_change[2] = body->angular_velocity_change[2] - (e[0] * r[1] - e[1] * r[0]);
}

/* Adds an impulse i at offset r to a body's gathered changes, scaled. */
static void add_body_impulse(PhysicsBody *body, const float i[3], const float r[3], float scale)
{
    body->velocity_change[0] = i[0] * scale + body->velocity_change[0];
    body->velocity_change[1] = i[1] * scale + body->velocity_change[1];
    body->velocity_change[2] = i[2] * scale + body->velocity_change[2];
    body->angular_velocity_change[0] = (r[2] * i[1] - i[2] * r[1]) * scale + body->angular_velocity_change[0];
    body->angular_velocity_change[1] = (i[2] * r[0] - r[2] * i[0]) * scale + body->angular_velocity_change[1];
    body->angular_velocity_change[2] = (i[0] * r[1] - i[1] * r[0]) * scale + body->angular_velocity_change[2];
}

static void solve_body_contact(const PhysicsConstraint *c)
{
    PhysicsBody *body = &physics_bodies[c->body_a];
    const float *n = c->bias;
    const float *r = c->offset_a;
    const float *w = body->angular_velocity;
    float k = -c->stiffness;
    float u[3], along;

    u[0] = (((w[2] * r[1]) - (r[2] * w[1])) + body->velocity[0]) * k + n[0] * c->depth;
    u[1] = (((r[2] * w[0]) - (r[0] * w[2])) + body->velocity[1]) * k + n[1] * c->depth;
    u[2] = (((r[0] * w[1]) - (r[1] * w[0])) + body->velocity[2]) * k + n[2] * c->depth;
    along = (n[0] * u[0] + n[1] * u[1]) + n[2] * u[2];
    if (along > 0.0f) {
        float i[3], t[3], tangential, work = 0.0f;

        i[0] = n[0] * along;
        i[1] = n[1] * along;
        i[2] = n[2] * along;
        t[0] = u[0] - i[0];
        t[1] = u[1] - i[1];
        t[2] = u[2] - i[2];
        tangential = sqrt_float((t[1] * t[1] + t[0] * t[0]) + t[2] * t[2]);
        if (tangential > 0.0f) {
            float inverse = 1.0f / tangential;
            float dir[3] = { inverse * t[0], inverse * t[1], inverse * t[2] };
            float normal = sqrt_float((i[1] * i[1] + i[0] * i[0]) + i[2] * i[2]);
            float limit = normal * c->friction;

            /* Sliding beyond what friction holds, and beyond 0.0068 per
               tick, is converted into friction work. */
            if (tangential > limit) {
                float before = tangential;
                tangential = normal * c->friction;
                work = ((before - limit) * normal) * 480.0f;
            }
            if (tangential > 0.0068055559f) {
                work = work + ((tangential - 0.0068055559f) * normal) * 480.0f;
                tangential = 0.0068055559f;
            }
            i[0] = i[0] + tangential * dir[0];
            i[1] = i[1] + tangential * dir[1];
            i[2] = i[2] + tangential * dir[2];
        }
        body->friction_work = work + body->friction_work;
        body->velocity_change[0] = i[0] + body->velocity_change[0];
        body->velocity_change[1] = i[1] + body->velocity_change[1];
        body->velocity_change[2] = i[2] + body->velocity_change[2];
        body->angular_velocity_change[0] = (r[2] * i[1] - i[2] * r[1]) + body->angular_velocity_change[0];
        body->angular_velocity_change[1] = (i[2] * r[0] - r[2] * i[0]) + body->angular_velocity_change[1];
        body->angular_velocity_change[2] = (i[0] * r[1] - i[1] * r[0]) + body->angular_velocity_change[2];
    }
}

static void solve_body_body_contact(const PhysicsConstraint *c)
{
    PhysicsBody *a = &physics_bodies[c->body_a];
    PhysicsBody *b = &physics_bodies[c->body_b];
    const float *n = c->bias;
    const float *ra = c->offset_a;
    const float *rb = c->offset_b;
    const float *wa = a->angular_velocity;
    const float *wb = b->angular_velocity;
    float k = c->stiffness;
    float u[3], along;

    u[0] = ((((wa[2] * ra[1]) - (ra[2] * wa[1])) + a->velocity[0]) * -k + c->depth * n[0])
           + (((wb[2] * rb[1]) - (wb[1] * rb[2])) + b->velocity[0]) * k;
    u[2] = ((((wa[1] * ra[0]) - (wa[0] * ra[1])) + a->velocity[2]) * -k + c->depth * n[2])
           + (((wb[1] * rb[0]) - (wb[0] * rb[1])) + b->velocity[2]) * k;
    u[1] = ((((ra[2] * wa[0]) - (wa[2] * ra[0])) + a->velocity[1]) * -k + c->depth * n[1])
           + (((wb[0] * rb[2]) - (wb[2] * rb[0])) + b->velocity[1]) * k;
    along = (n[0] * u[0] + n[1] * u[1]) + u[2] * n[2];
    if (along > 0.0f) {
        float i[3], t[3];

        i[0] = along * n[0];
        i[2] = along * n[2];
        t[0] = u[0] - i[0];
        i[1] = along * n[1];
        t[2] = u[2] - i[2];
        t[1] = u[1] - i[1];
        apply_friction(i, t, c->friction);
        add_body_impulse(a, i, ra, c->share_a);
        add_body_impulse(b, i, rb, -c->share_b);
    }
}

static void solve_rotation(const PhysicsBond *bond, const PhysicsConstraint *c)
{
    PhysicsBody *a = &physics_bodies[c->body_a];
    PhysicsBody *b = &physics_bodies[c->body_b];
    float k = c->stiffness;
    float wa[3], wb[3], w[3];
    float share_a, share_b;

    for (int j = 0; j < 3; j++) {
        wa[j] = a->angular_velocity[j];
        wb[j] = b->angular_velocity[j];
    }
    for (int j = 0; j < 3; j++)
        w[j] = (wa[j] * -k + c->bias[j]) + wb[j] * k;

    if (c->has_free_axis) {
        /* Remove the part along the free axis. */
        const float *m = c->free_axis;
        float along = -((w[0] * m[0] + w[1] * m[1]) + w[2] * m[2]);
        w[0] = w[0] + along * m[0];
        w[1] = w[1] + along * m[1];
        w[2] = w[2] + along * m[2];
    }

    if (physics_bone_rotation_limits) {
        float limit = 0.25f;

        if (b->type == PHYSICS_BODY_BONE) {
            int bone_a = a->unknown_10, bone_b = b->unknown_10;
            float length, d[3], spin;

            if (bone_a == 6 || bone_a == 9)
                limit = 0.00390625f;
            if ((uint32_t)(bone_b - 1) <= 2)
                limit = 0.015625f;
            if ((uint32_t)(bone_b - 2) <= 1)
                limit = 0.0078125f;
            if (bone_b == 3)
                limit = 0.00390625f;
            length = sqrt_float((w[1] * w[1] + w[0] * w[0]) + w[2] * w[2]);
            if (length > limit) {
                w[0] = w[0] * (limit / length);
                w[1] = w[1] * (limit / length);
                w[2] = w[2] * (limit / length);
            }
            d[2] = (wb[2] - wa[2]) * 0.125f;
            d[1] = (wb[1] - wa[1]) * 0.125f;
            d[0] = (wb[0] - wa[0]) * 0.125f;
            spin = sqrt_float((((wb[1] - wa[1]) * (wb[1] - wa[1]) + (wb[0] - wa[0]) * (wb[0] - wa[0]))
                               + (wb[2] - wa[2]) * (wb[2] - wa[2])) * 0.015625f);
            if (spin > limit) {
                float scale = limit / spin;
                d[0] = scale * d[0];
                d[1] = scale * d[1];
                d[2] = scale * d[2];
            }
            w[2] = w[2] + d[2];
            w[0] = w[0] + d[0];
            w[1] = w[1] + d[1];
        }
    } else {
        float limit = bond->angular_limit;

        if (!is_zero_or_nan(limit)) {
            float length = sqrt_float((w[1] * w[1] + w[0] * w[0]) + w[2] * w[2]);
            if (length > limit) {
                float scale = limit / length;
                w[0] = w[0] * scale;
                w[1] = w[1] * scale;
                w[2] = w[2] * scale;
            }
            w[0] = w[0] + (wb[0] - wa[0]) * 0.125f;
            w[1] = w[1] + (wb[1] - wa[1]) * 0.125f;
            w[2] = w[2] + (wb[2] - wa[2]) * 0.125f;
        }
    }

    if (c->has_axis) {
        const float *n = c->axis;
        float d[3] = { wb[0] - wa[0], wb[1] - wa[1], wb[2] - wa[2] };
        float length = sqrt_float((n[0] * n[0] + n[1] * n[1]) + n[2] * n[2]);
        float u[3] = { 0.0f, 0.0f, 0.0f };
        float along;

        if (!is_zero_or_nan(length)) {
            float inverse = 1.0f / length;
            u[2] = inverse * n[2];
            u[0] = inverse * n[0];
            u[1] = inverse * n[1];
        }
        along = (u[0] * d[0] + u[1] * d[1]) + u[2] * d[2];
        w[0] = w[0] + (along * u[0] + n[0]) * k;
        w[1] = w[1] + (along * u[1] + n[1]) * k;
        w[2] = w[2] + (along * u[2] + n[2]) * k;
    }

    share_a = c->share_a;
    share_b = -c->share_b;
    for (int j = 0; j < 3; j++)
        a->angular_velocity_change[j] = share_a * w[j] + a->angular_velocity_change[j];
    for (int j = 0; j < 3; j++)
        b->angular_velocity_change[j] = share_b * w[j] + b->angular_velocity_change[j];
}

static void solve_body_surface(const PhysicsBond *bond)
{
    PhysicsBody *body = &physics_bodies[bond->body];
    const float *n = bond->normal;
    float s = bond->stiffness;
    float push = s * bond->distance;
    float k = bond->damping;
    float u[3], along;

    u[0] = ((s * 0.125f) * bond->local_point[0] + push * n[0]) + (body->velocity[0] - bond->target_velocity[0]) * -k;
    u[2] = ((s * 0.125f) * bond->local_point[2] + push * n[2]) + (body->velocity[2] - bond->target_velocity[2]) * -k;
    u[1] = ((s * 0.125f) * bond->local_point[1] + push * n[1]) + (body->velocity[1] - bond->target_velocity[1]) * -k;
    along = (u[0] * n[0] + u[1] * n[1]) + u[2] * n[2];
    if (along > 0.0f) {
        float i[3], t[3], weight, gain, spin, turn, a_y, b_x;
        float *change = body->angular_velocity_change;
        const float *w = body->angular_velocity;

        i[0] = n[0] * along;
        i[1] = n[1] * along;
        t[0] = u[0] - i[0];
        i[2] = n[2] * along;
        t[1] = u[1] - i[1];
        t[2] = u[2] - i[2];
        apply_friction(i, t, bond->friction);
        weight = bond->point_weight[0];
        body->velocity_change[0] = i[0] + body->velocity_change[0];
        body->velocity_change[1] = i[1] * bond->point_weight[1] + body->velocity_change[1];
        gain = min_float(along * 1024.0f, 1.0f);
        body->velocity_change[2] = i[2] + body->velocity_change[2];
        spin = (weight * s) * gain;
        turn = -((weight * k) * gain);
        a_y = w[1] * turn;
        b_x = spin * bond->world_point[1];
        change[0] = (spin * bond->world_point[0] + turn * w[0]) + change[0];
        {
            float z = spin * bond->world_point[2] + w[2] * turn;
            change[1] = (b_x + a_y) + change[1];
            change[2] = z + change[2];
        }
    }
}

/* ---- integration ----------------------------------------------------------- */

static void integrate_bodies(void)
{
    for (int index = 0; index < PHYSICS_BODY_CAPACITY; index++) {
        PhysicsBody *body = &physics_bodies[index];
        float *l = body->angular_momentum;
        const float *r = body->rotation;
        float limit, length, x, y, z;

        if (!body->active || body->settled)
            continue;
        body->velocity[0] = body->velocity_change[0] + body->velocity[0];
        body->velocity[1] = body->velocity_change[1] + body->velocity[1];
        body->velocity[2] = body->velocity_change[2] + body->velocity[2];
        l[0] = body->angular_velocity_change[0] + l[0];
        l[1] = body->angular_velocity_change[1] + l[1];
        l[2] = body->angular_velocity_change[2] + l[2];

        limit = body->unknown_9c * 8.0f;
        length = sqrt_float((l[1] * l[1] + l[0] * l[0]) + l[2] * l[2]);
        if (length > limit) {
            float scale = limit / length;
            l[0] = l[0] * scale;
            l[1] = l[1] * scale;
            l[2] = l[2] * scale;
        }

        /* Angular velocity: momentum through the inverse inertia, taken in
           the body's own axes. */
        x = ((l[0] * r[0] + l[1] * r[1]) + l[2] * r[2]) * body->inverse_inertia[0];
        y = ((l[1] * r[4] + l[0] * r[3]) + l[2] * r[5]) * body->inverse_inertia[1];
        z = ((l[1] * r[7] + l[0] * r[6]) + l[2] * r[8]) * body->inverse_inertia[2];
        body->angular_velocity[0] = (r[3] * y + x * r[0]) + r[6] * z;
        body->angular_velocity[1] = (y * r[4] + x * r[1]) + z * r[7];
        body->angular_velocity[2] = (y * r[5] + x * r[2]) + z * r[8];
    }
}

static void integrate_points(int count)
{
    for (int index = 0; index < count; index++) {
        PhysicsPointScratch *p = &physics_point_scratch[index];
        int lanes = physics_points_four_lanes ? 4 : 3;

        for (int j = 0; j < lanes; j++)
            p->velocity[j] = p->change[j] + p->velocity[j];
    }
}

/* ---- the solve ------------------------------------------------------------- */

void physics_solve(void)
{
    int last_active = 0;
    int count;

    /* Constraints of this tick's bonds. */
    for (int index = 0; index < PHYSICS_BOND_CAPACITY; index++) {
        PhysicsBond *bond = &physics_bonds[index];
        PhysicsConstraint *c = &physics_constraints[index];
        int type;

        if (!bond->active || bond->pass_mask > 255)
            continue;
        type = bond->type;
        if (type == PHYSICS_CONSTRAINT_POINT_LINK) {
            setup_point_link(bond, c);
            continue;
        }
        if (type == PHYSICS_CONSTRAINT_BODY_LEVEL) {
            setup_body_level(bond, c);
            continue;
        }
        if (type == PHYSICS_CONSTRAINT_JOINT) {
            physics_prepare_joint(index);
            type = bond->type;
        }
        if (type == PHYSICS_CONSTRAINT_BODY_POINTS)
            setup_body_points(bond, c);
        else if (type == PHYSICS_CONSTRAINT_ROTATION)
            setup_rotation(bond, c);
    }

    count = physics_point_count;
    for (int index = 0; index < count; index++)
        memcpy(physics_point_scratch[index].velocity, physics_points[index].velocity, 12);

    for (int index = 0; index < PHYSICS_BOND_CAPACITY; index++) {
        const PhysicsBond *bond = &physics_bonds[index];
        PhysicsConstraint *c = &physics_constraints[index];

        if (bond->active) {
            last_active = index;
            c->pass_mask = bond->pass_mask;
            c->kind = bond->type;
        }
    }
    for (int index = 0; index < PHYSICS_BODY_CAPACITY; index++)
        if (physics_bodies[index].active)
            physics_bodies[index].friction_work = 0.0f;

    for (int iteration = 0; iteration < 32; iteration++) {
        physics_solver_iteration = iteration;
        for (int index = 0; index < count; index++) {
            PhysicsPointScratch *p = &physics_point_scratch[index];
            p->change[0] = p->change[1] = p->change[2] = 0.0f;
            if (physics_points_four_lanes)
                p->change[3] = 0.0f;
        }
        for (int index = 0; index < PHYSICS_BODY_CAPACITY; index++) {
            PhysicsBody *body = &physics_bodies[index];
            if (body->active) {
                memset(body->velocity_change, 0, sizeof body->velocity_change);
                memset(body->angular_velocity_change, 0, sizeof body->angular_velocity_change);
            }
        }
        sub_14010D610();

        for (int index = 0; index <= last_active; index++) {
            const PhysicsBond *bond = &physics_bonds[index];
            const PhysicsConstraint *c = &physics_constraints[index];
            int kind;

            if (!bond->active || (iteration & c->pass_mask) != c->pass_mask)
                continue;
            switch (c->kind) {
            case PHYSICS_CONSTRAINT_POINT_LINK:
                solve_point_link(c);
                break;
            case PHYSICS_CONSTRAINT_POINT_LEVEL:
                solve_point_level(bond);
                break;
            case PHYSICS_CONSTRAINT_POINT_POINT:
                solve_point_point(bond);
                break;
            case PHYSICS_CONSTRAINT_POINT_TRIANGLE:
                solve_point_triangle(bond);
                break;
            case PHYSICS_CONSTRAINT_BODY_LEVEL:
                solve_body_level(c);
                break;
            case PHYSICS_CONSTRAINT_BODY_CONTACT:
                solve_body_contact(c);
                break;
            case PHYSICS_CONSTRAINT_BODY_BODY_CONTACT:
                solve_body_body_contact(c);
                break;
            case PHYSICS_CONSTRAINT_JOINT:
                physics_solve_joint(index);
                break;
            }
            kind = c->kind;
            if (kind == PHYSICS_CONSTRAINT_BODY_POINTS) {
                physics_solve_point_velocity(index);
                kind = c->kind;
            }
            if (kind == PHYSICS_CONSTRAINT_ROTATION)
                solve_rotation(bond, c);
            if (bond->type == PHYSICS_BOND_BODY_SURFACE)
                solve_body_surface(bond);
        }
        sub_140107ED0();

        count = physics_point_count;
        integrate_points(count);
        integrate_bodies();
    }

    for (int index = 0; index < count; index++)
        memcpy(physics_points[index].velocity, physics_point_scratch[index].velocity, 12);

    /* Bonds without a lifetime last one tick. */
    for (int index = 0; index < PHYSICS_BOND_CAPACITY; index++) {
        PhysicsBond *bond = &physics_bonds[index];
        if (bond->active && !bond->lifetime)
            bond->active = 0;
    }
}
