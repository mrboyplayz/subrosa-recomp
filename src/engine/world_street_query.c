/* Finding the street triangles near something: the track and railway
 * surfaces a human's bones are tested against.
 *
 * Streets are filed in 64 x 64 cells of the map (world_file_street); a query
 * walks the cells its box covers, keeps the streets whose bounds meet the
 * box, and copies their triangles whose own boxes meet it.
 */
#include "arith.h"
#include "world_streets.h"

/* The box tests follow the original's COMISS branches: "min > other max"
   rejects only when ordered, "max < other min" rejects when unordered too. */
static int box_meets(const float low[3], const float high[3], const float box_min[3], const float box_max[3])
{
    for (int k = 0; k < 3; k++)
        if (low[k] > box_max[k])
            return 0;
    for (int k = 0; k < 3; k++)
        if (!(high[k] >= box_min[k]))
            return 0;
    return 1;
}

void world_street_triangles_in_box(StreetTriangleList *list, const float box_min[3], const float box_max[3],
                                   int street, int range)
{
    const Street *s = &world_streets[street];

    for (int t = s->range_first[range]; t < s->range_end[range]; t++) {
        StreetTriangle *out;

        if (list->count >= STREET_TRIANGLE_LIST_CAPACITY)
            continue;
        if (!box_meets(&s->triangle_bounds[t][0], &s->triangle_bounds[t][3], box_min, box_max))
            continue;
        out = &list->triangle[list->count];
        for (int corner = 0; corner < 3; corner++)
            for (int k = 0; k < 3; k++)
                out->corner[corner][k] = s->vertex[s->triangle[t][corner]][k];
        list->count++;
    }
}

void world_street_triangles(StreetTriangleList *list, const float box_min[3], const float box_max[3], int ranges)
{
    int found[64];
    int found_count = 0;
    int first_column = truncate_float(box_min[0] * 0.015625f);
    int last_column = truncate_float(box_max[0] * 0.015625f);
    int first_row = truncate_float(box_min[2] * 0.015625f);
    int last_row = truncate_float(box_max[2] * 0.015625f);

    if (first_row <= last_row) {
        /* The original counts rows and columns in 32 bits and tests each
           sign-extended index as unsigned, so negative ones are skipped. */
        int64_t row = first_row;
        uint64_t rows = (uint32_t)((uint32_t)last_row - (uint32_t)first_row + 1u);

        do {
            if ((uint64_t)row < STREET_CELLS_ACROSS && first_column <= last_column) {
                int64_t column = first_column;
                uint64_t columns = (uint32_t)((uint32_t)last_column - (uint32_t)first_column + 1u);

                do {
                    if ((uint64_t)column < STREET_CELLS_ACROSS) {
                        const StreetCell *cell = &world_street_cells[row * STREET_CELLS_ACROSS + column];
                        /* The count is trusted: entries past the cell's eight
                           run on into the next cell, as in the original. */
                        const int32_t *entry = (const int32_t *)(const void *)cell + 1;
                        int64_t count = cell->count;

                        for (int64_t j = 0; j < count; j++)
                            if (found_count < 64)
                                found[found_count++] = entry[j];
                    }
                    column++;
                } while (--columns);
            }
            row++;
        } while (--rows);
    }

    for (int i = 0; i < found_count; i++) {
        int street = found[i];
        const Street *s = &world_streets[street];

        if (!box_meets(s->bounds_min, s->bounds_max, box_min, box_max))
            continue;
        if (ranges & 1)
            world_street_triangles_in_box(list, box_min, box_max, street, 0);
        if (ranges & 2)
            world_street_triangles_in_box(list, box_min, box_max, street, 1);
        if (ranges & 4)
            world_street_triangles_in_box(list, box_min, box_max, street, 2);
    }
}
