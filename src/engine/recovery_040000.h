/* Shape builders for the mesh being built. Each zeroes the mesh build
 * (the vertex and triangle counts and their cursors), writes the leading
 * vertex and its normal, zero-fills the triangle records of the fresh
 * mesh, and tails into the routine that reads the records back
 * (0x1401449C0). All three are the original's one routine shape: the
 * leading vertex is the only caller-supplied data, the tail call passes
 * the caller's first argument with the builder's "no callback" flag.
 *
 * Each function is a rewrite of one routine of the original executable and
 * produces the same memory contents and the same return value. The original
 * address is given next to every declaration.
 */
#ifndef SR_ENGINE_RECOVERY_040000_H
#define SR_ENGINE_RECOVERY_040000_H

#include <stdint.h>
#include "memory.h"

/* The disassembler's address-named symbols kept next to their users
   (math3d.h's fixed-sine table, math_random.c's cursor). */
__int64 sub_140002D00(float *a1, float a2, float a3, float a4);
double sub_1401449C0(int a1, int a2);

/* 0x14005D4C0. Zeroes the mesh build, writes the leading vertex as
   [0, 0, a4 ^ signbit] (the 0x140279870 sign flip, not a subtract), and
   zero-fills the triangle records of the mesh the build is about to fill. */
double recovery_mesh_builder_origin(int a1, float a2, float a3, float a4);

/* 0x14005F370. Zeroes the mesh build; when a2 is 1 the leading vertex is
   zeroed and the 0x140278160 constant 0.02f is passed over a2/a3/a4.
   Zero-fills the triangle records. */
double recovery_mesh_builder_020(int a1, int a2);

/* 0x1400521A0. Zeroes the mesh build and writes the leading vertex
   [0.0, -0.03125, a4 * -0.5] (the 0x140278B60 constant in the Y slot,
   0x140278BD0's -0.5 on a4). Zero-fills the triangle records. */
double recovery_mesh_builder_03125(int a1, float a2, float a3, float a4);

#endif
