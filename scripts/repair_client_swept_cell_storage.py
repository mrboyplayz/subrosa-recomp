"""Restore the independent point, normal, and face vertices of swept cells."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects, vector


def repair(source):
    pe = pinned_pe()
    check(pe, 0x3455b, '488d542450')
    check(pe, 0x34566, '488d4c2460')
    check(pe, 0x34e00, '488d542458')
    check(pe, 0x34e0e, '488d4c2468')
    a, b, body = region(source, 0x34370)
    if b'sr_swept_cell_hit_point' not in body:
        body = objects(body, [
            ('  unsigned sr_swept_cell_hit_normal[3];', [
                (f'v{i}', f'sr_swept_cell_hit_normal[{i-51}]') for i in range(51,54)]),
            ('  unsigned sr_swept_cell_hit_point[3];', [
                (f'v{i}', f'sr_swept_cell_hit_point[{i-54}]') for i in range(54,57)])])
        source = source[:a]+body+source[b:]
    a, b, body = region(source, 0x34ae0)
    if b'sr_swept_mesh_hit_point' not in body:
        body = objects(body, [
            ('  _Alignas(8) unsigned sr_swept_mesh_hit_normal[3];', [
                ('v144', '(*(int64_t *)(void *)sr_swept_mesh_hit_normal)'),
                ('v145', '(*(float *)(void *)(sr_swept_mesh_hit_normal+2))')]),
            ('  unsigned sr_swept_mesh_hit_point[3];', [
                (f'v{i}', f'sr_swept_mesh_hit_point[{i-146}]') for i in range(146,149)]),
            vector('sr_swept_mesh_vertex_c',149),
            vector('sr_swept_mesh_vertex_a',152),
            vector('sr_swept_mesh_vertex_b',155),
            vector('sr_swept_mesh_vertex_d',158)])
        source = source[:a]+body+source[b:]
    return source, {'recovered_swept_cell_objects': 8}
