/* How a distance decides a speed or a chance: 0x140019000.

   The distance between two points is compared against 128. Fortran? No:
   nothing here is handed to the caller, the routine returns a single float.

     - distance > 128 (or unordered): 0.5
     - distance <= 128: 1.0, unless the level line test between the two
       points reports a hit, in which case also 0.5.

   The comparison is COMISS against the constant followed by JBE, so a NaN
   distance takes the "far" branch and yields 0.5 (COMISS sets the flag bits
   to unordered, CF=1, and JBE is taken). See src/engine/distance_class.h. */
#ifndef SR_ENGINE_DISTANCE_CLASS_H
#define SR_ENGINE_DISTANCE_CLASS_H

/* The near/far factor between two points, 1.0 near and 0.5 far or blocked.
   0x140019000 */
float distance_class_factor(const float *from, const float *to);

#endif
