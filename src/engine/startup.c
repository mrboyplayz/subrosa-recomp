/* Startup-time helpers that only compute or fill state, each one the same,
   bit for bit, as the routine of the original executable named next to it.
   The patch mesh builder keeps the original's floating-point operation
   order and types throughout (src/engine/README.md, verified by the
   startup1 native suite). */
#include <string.h>

#include "arith.h"
#include "startup.h"

/* The curve point and derivative of the game's Bezier-style polynomials
   (math_curve.c, verified by the curve native suite). */
extern float math_curve_point(int degree, float t, float point0, float point1, float point2, float point3);
extern float math_curve_derivative(int degree, float t, float point0, float point1, float point2, float point3);

/* Copies one mesh vertex's four arrays. Each word is read and then written,
   as the original does, so a source and destination that overlap still
   copy the same words. */
static void startup_mesh_copy_vertex(unsigned int source, unsigned int destination)
{
    *startup_mesh_position(destination) = *startup_mesh_position(source);
    startup_mesh_position(destination)[1] = startup_mesh_position(source)[1];
    startup_mesh_position(destination)[2] = startup_mesh_position(source)[2];
    *startup_mesh_uv(destination) = *startup_mesh_uv(source);
    startup_mesh_uv(destination)[1] = startup_mesh_uv(source)[1];
    *startup_mesh_normal(destination) = *startup_mesh_normal(source);
    startup_mesh_normal(destination)[1] = startup_mesh_normal(source)[1];
    startup_mesh_normal(destination)[2] = startup_mesh_normal(source)[2];
    *startup_mesh_frame(destination) = *startup_mesh_frame(source);
    startup_mesh_frame(destination)[1] = startup_mesh_frame(source)[1];
    startup_mesh_frame(destination)[2] = startup_mesh_frame(source)[2];
}

/* Whether the text names one of the recorded extensions: the text's length
   capped at 24 bytes is compared against each 112-byte record until one
   begins with it. An empty or absent list gives no match. 0x14001E30 */
int startup_extension_prefix_match(const char *text)
{
    int length = -1;
    do
        ++length;
    while (text[length]);
    if (length > 24)
        length = 24;
    if (startup_extension_count <= 0)
        return 0;
    int index = 0;
    while (strncmp(text, startup_extension_record(index), (size_t)length) != 0)
    {
        if (++index >= startup_extension_count)
            return 0;
    }
    return 1;
}

/* Whether the processor supports SSE4.1: cpuid leaf 1's ECX bit 19, with the
   original's quirk of testing leaf 1's EAX before querying leaf 1 again.
   0x14068F80 */
uint32_t startup_cpu_has_sse41(void)
{
    uint32_t eax = 1, ebx, ecx = 0, edx;
    __asm__ volatile("cpuid" : "+a"(eax), "=b"(ebx), "+c"(ecx), "=d"(edx));
    if ((int32_t)eax < 1)
        return 0;
    eax = 1;
    ecx = 0;
    __asm__ volatile("cpuid" : "+a"(eax), "=b"(ebx), "+c"(ecx), "=d"(edx));
    return (ecx >> 19) & 1;
}

/* The world patch mesh builder: tessellates a Bezier-style patch grid into
   the mesh's vertex arrays and emits one index record per quad. Each row
   evaluates the four column curves of the 4x4 control grid at the row's
   fraction, writing the column's point, uv blend and derivative to the
   tessellation scratch; each column then evaluates the column curve through
   those four results, writing the vertex position, the uv blend of the two
   end columns, the cross-product normal and the normalized derivative, and
   normalizing the normal in place. The records duplicate the quad's corners
   into fresh vertex slots unless a record reaches back to the patch's own
   first row or left column, which keep the patch's absolute vertex numbers.
   Returns the row count; when no records are emitted the original's result
   register holds the last vertex written (or, when the tessellation is
   skipped entirely, an unobserved stack address the clean engine replaces
   with a defined value). 0x14001F20 */
unsigned long long startup_patch_mesh_build(const float *controls, const float *uv_controls,
                                            int columns, int curve_degree, int rows,
                                            int row_curve_degree, unsigned int record_tag)
{
    unsigned int vertex_base = startup_mesh_vertex_count;
    float row_fraction = 0.0f;
    float saved_row_fraction = 0.0f;
    float column_step = 1.0 / (float)columns;

    if (rows >= 0)
    {
        const float *point_row = controls + 24;
        const float *uv_row = uv_controls + 1;
        unsigned int remaining_rows = (unsigned int)(rows + 1);
        int last_row;
        do
        {
            float blend = 1.0 - row_fraction;
            int column;
            for (column = 0; column < 4; column++)
            {
                *startup_patch_point(column, 0) = math_curve_point(row_curve_degree, row_fraction,
                                                                  controls[3 * column], controls[12 + 3 * column],
                                                                  controls[24 + 3 * column], controls[36 + 3 * column]);
                *startup_patch_point(column, 1) = math_curve_point(row_curve_degree, row_fraction,
                                                                  controls[1 + 3 * column], controls[13 + 3 * column],
                                                                  controls[25 + 3 * column], controls[37 + 3 * column]);
                *startup_patch_point(column, 2) = math_curve_point(row_curve_degree, row_fraction,
                                                                  controls[2 + 3 * column], controls[14 + 3 * column],
                                                                  controls[26 + 3 * column], controls[38 + 3 * column]);
                *startup_patch_uv(column, 0) = (float)(row_fraction * uv_controls[24 + 2 * column])
                                             + (float)(blend * uv_controls[2 * column]);
                *startup_patch_uv(column, 1) = (float)(row_fraction * uv_controls[25 + 2 * column])
                                             + (float)(blend * uv_controls[1 + 2 * column]);
                *startup_patch_frame(column, 0) = math_curve_derivative(row_curve_degree, row_fraction,
                                                                  controls[3 * column], controls[12 + 3 * column],
                                                                  controls[24 + 3 * column], controls[36 + 3 * column]);
                *startup_patch_frame(column, 1) = math_curve_derivative(row_curve_degree, row_fraction,
                                                                  controls[1 + 3 * column], controls[13 + 3 * column],
                                                                  controls[25 + 3 * column], controls[37 + 3 * column]);
                *startup_patch_frame(column, 2) = math_curve_derivative(row_curve_degree, row_fraction,
                                                                  controls[2 + 3 * column], controls[14 + 3 * column],
                                                                  controls[26 + 3 * column], controls[38 + 3 * column]);
            }
            if (columns >= 0)
            {
                /* The column pass's controls: the four scratch results. */
                float point0_x = *startup_patch_point(0, 0), point0_y = *startup_patch_point(0, 1), point0_z = *startup_patch_point(0, 2);
                float point1_x = *startup_patch_point(1, 0), point1_y = *startup_patch_point(1, 1), point1_z = *startup_patch_point(1, 2);
                float point2_x = *startup_patch_point(2, 0), point2_y = *startup_patch_point(2, 1), point2_z = *startup_patch_point(2, 2);
                float point3_x = *startup_patch_point(3, 0), point3_y = *startup_patch_point(3, 1), point3_z = *startup_patch_point(3, 2);
                float uv0_u = *startup_patch_uv(0, 0), uv0_v = *startup_patch_uv(0, 1);
                float uv3_u = *startup_patch_uv(3, 0), uv3_v = *startup_patch_uv(3, 1);
                float frame0_x = *startup_patch_frame(0, 0), frame0_y = *startup_patch_frame(0, 1), frame0_z = *startup_patch_frame(0, 2);
                float frame1_x = *startup_patch_frame(1, 0), frame1_y = *startup_patch_frame(1, 1), frame1_z = *startup_patch_frame(1, 2);
                float frame2_x = *startup_patch_frame(2, 0), frame2_y = *startup_patch_frame(2, 1), frame2_z = *startup_patch_frame(2, 2);
                float frame3_x = *startup_patch_frame(3, 0), frame3_y = *startup_patch_frame(3, 1), frame3_z = *startup_patch_frame(3, 2);
                float column_fraction = 0.0f;
                unsigned int remaining_columns = (unsigned int)(columns + 1);
                do
                {
                    unsigned int vertex = startup_mesh_vertex_count;
                    *startup_mesh_position(vertex) = math_curve_point(curve_degree, column_fraction, point0_x, point1_x, point2_x, point3_x);
                    startup_mesh_position(vertex)[1] = math_curve_point(curve_degree, column_fraction, point0_y, point1_y, point2_y, point3_y);
                    startup_mesh_position(vertex)[2] = math_curve_point(curve_degree, column_fraction, point0_z, point1_z, point2_z, point3_z);
                    *startup_mesh_uv(vertex) = (float)(uv0_u * (float)(1.0 - column_fraction))
                                             + (float)(uv3_u * column_fraction);
                    startup_mesh_uv(vertex)[1] = (float)(uv0_v * (float)(1.0 - column_fraction))
                                               + (float)(uv3_v * column_fraction);
                    float derivative_x = math_curve_derivative(curve_degree, column_fraction, point0_x, point1_x, point2_x, point3_x);
                    float derivative_y = math_curve_derivative(curve_degree, column_fraction, point0_y, point1_y, point2_y, point3_y);
                    float derivative_z = math_curve_derivative(curve_degree, column_fraction, point0_z, point1_z, point2_z, point3_z);
                    float frame_x = math_curve_point(curve_degree, column_fraction, frame0_x, frame1_x, frame2_x, frame3_x);
                    float frame_y = math_curve_point(curve_degree, column_fraction, frame0_y, frame1_y, frame2_y, frame3_y);
                    float frame_z = math_curve_point(curve_degree, column_fraction, frame0_z, frame1_z, frame2_z, frame3_z);
                    *startup_mesh_normal(vertex) = (float)(frame_y * derivative_z) - (float)(frame_z * derivative_y);
                    startup_mesh_normal(vertex)[1] = (float)(derivative_x * frame_z) - (float)(frame_x * derivative_z);
                    startup_mesh_normal(vertex)[2] = (float)(frame_x * derivative_y) - (float)(derivative_x * frame_y);
                    float normal_x = *startup_mesh_normal(vertex);
                    float normal_y = startup_mesh_normal(vertex)[1];
                    float normal_z = startup_mesh_normal(vertex)[2];
                    float square_root = sqrt_float((float)((float)(normal_x * normal_x) + (float)(normal_y * normal_y))
                                                 + (float)(normal_z * normal_z));
                    float normal_inverse_x, normal_inverse_y, normal_inverse_z;
                    if (square_root == 0.0f)
                    {
                        normal_inverse_x = 0.0f;
                        normal_inverse_y = 0.0f;
                        normal_inverse_z = 0.0f;
                    }
                    else
                    {
                        float inverse = 1.0 / square_root;
                        normal_inverse_z = (float)(1.0 / square_root) * normal_z;
                        normal_inverse_y = inverse * normal_y;
                        normal_inverse_x = inverse * normal_x;
                    }
                    *startup_mesh_normal(vertex) = normal_inverse_x;
                    startup_mesh_normal(vertex)[1] = normal_inverse_y;
                    startup_mesh_normal(vertex)[2] = normal_inverse_z;
                    float square_root_2 = sqrt_float((float)((float)(derivative_x * derivative_x) + (float)(derivative_y * derivative_y))
                                                   + (float)(derivative_z * derivative_z));
                    float frame_inverse_x, frame_inverse_y, frame_inverse_z;
                    if (square_root_2 == 0.0f)
                    {
                        frame_inverse_x = 0.0f;
                        frame_inverse_y = 0.0f;
                        frame_inverse_z = 0.0f;
                    }
                    else
                    {
                        frame_inverse_z = (float)(1.0 / square_root_2) * derivative_z;
                        frame_inverse_y = (float)(1.0 / square_root_2) * derivative_y;
                        frame_inverse_x = (float)(1.0 / square_root_2) * derivative_x;
                    }
                    *startup_mesh_frame(vertex) = frame_inverse_x;
                    column_fraction = column_fraction + column_step;
                    startup_mesh_frame(vertex)[1] = frame_inverse_y;
                    startup_mesh_frame(vertex)[2] = frame_inverse_z;
                    ++startup_mesh_vertex_count;
                    --remaining_columns;
                }
                while (remaining_columns);
                row_fraction = saved_row_fraction;
            }
            last_row = remaining_rows-- == 1;
            row_fraction = row_fraction + (float)(1.0 / (float)rows);
            saved_row_fraction = row_fraction;
        }
        while (!last_row);
    }
    if (rows <= 0)
        return (unsigned long long)(unsigned int)(startup_mesh_vertex_count - 1);
    {
        /* One index record per quad. The corners are duplicated into fresh
           vertex slots unless the record reaches back to the patch's own
           first row or left column. */
        unsigned int record = startup_mesh_record_count;
        int row = 0;
        do
        {
            if (columns > 0)
            {
                int row_end = (columns + 1) * (row + 1);
                int row_first = (int)((unsigned int)record - (unsigned int)record
                                    + (unsigned int)(columns + 1) * (unsigned int)row);
                int corner = row_end + (int)startup_mesh_vertex_count - (int)startup_mesh_vertex_count
                           + (int)row_first + 1;
                int edge = ~row_end - row_first;
                int source_vertex = row_first;
                do
                {
                    if (edge + corner <= 0 && row == 0)
                        startup_mesh_record(record)[0] = -(columns + 1) - 1 + corner;
                    else
                    {
                        startup_mesh_copy_vertex(source_vertex, startup_mesh_vertex_count);
                        startup_mesh_record(record)[0] = startup_mesh_vertex_count;
                        ++startup_mesh_vertex_count;
                    }
                    if (row == 0)
                        startup_mesh_record(record)[1] = corner - (columns + 1);
                    else
                    {
                        startup_mesh_copy_vertex(source_vertex + 1, startup_mesh_vertex_count);
                        startup_mesh_record(record)[1] = startup_mesh_vertex_count;
                        ++startup_mesh_vertex_count;
                    }
                    startup_mesh_record(record)[2] = corner;
                    if (edge + corner <= 0)
                        startup_mesh_record(record)[3] = corner - 1;
                    else
                    {
                        startup_mesh_copy_vertex(source_vertex + (columns + 1), startup_mesh_vertex_count);
                        startup_mesh_record(record)[3] = startup_mesh_vertex_count;
                        ++startup_mesh_vertex_count;
                    }
                    ++corner;
                    ++source_vertex;
                    *startup_mesh_record_tag(record) = record_tag;
                    *startup_mesh_record_flag(record) = 0;
                    record = ++startup_mesh_record_count;
                }
                while (edge + corner < columns);
            }
            ++row;
        }
        while (row < (int)rows);
    }
    return (unsigned long long)(unsigned int)rows;
}

void startup_mesh_remove_record(int record)
{
    if (record < 0 || record >= (int)startup_mesh_record_count) return;
    unsigned int last = --startup_mesh_record_count;
    for (int k = 0; k < 4; k++)
        startup_mesh_record(record)[k] = startup_mesh_record(last)[k];
    *startup_mesh_record_tag(record) = *startup_mesh_record_tag(last);
    *startup_mesh_record_flag(record) = *startup_mesh_record_flag(last);
    for (int k = 0; k < 3; k++)
        startup_mesh_record_vector(record)[k] = startup_mesh_record_vector(last)[k];
}

/* The message box the original's startup failure path shows: SDL's simple
   message box (flags, title, message, window), the import table's entry,
   reached through 0x140198F95, with a null window. */
#define startup_message_box \
    ((int (__stdcall *)(unsigned int, const char *, const char *, void *))SR_GLOBAL(void *, 0x14026E4D0ULL))

/* The fatal startup error: shows the game's stock message box and returns
   null, as the original's first routine does. The box is shown whatever
   SDL answers; the original ignores the answer too. 0x140001000. */
void *startup_fatal_error(void)
{
    startup_message_box(16, "Fatal Error", "Out of memory - aborting", 0);
    return 0;
}

