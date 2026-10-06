"""Preserve the original cell-ray triangle vertex buffers."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects, vector


def repair(source):
    pe = pinned_pe()
    # Original cell geometry passes stack vectors at 60h, 50h and 40h.
    check(pe, 0xdc7d6, '488d442440')
    check(pe, 0xdc7e0, '488d442450')
    a, b, body = region(source, 0xdc650)
    body = objects(body, [vector('sr_cell_ray_vertex_c', 39),
                          vector('sr_cell_ray_vertex_b', 42)])
    return source[:a] + body + source[b:], {'cell_ray_vertex_buffers': 2}
