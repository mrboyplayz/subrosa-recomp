#pragma once
/* This test does not execute vector math; calls remain unresolved at link time. */
namespace glm {
struct vec3 { float x, y, z; vec3(float, float, float); };
vec3 cross(const vec3&, const vec3&);
}
