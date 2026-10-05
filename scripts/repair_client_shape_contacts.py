"""Restore the paired shape contact buffers and native collision Boolean."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects, vector


def repair(source):
    pe = pinned_pe()
    check(pe, 0x4a86e, '488d9df8000000')
    check(pe, 0x4abe3, '4c8d85f0180000')
    check(pe, 0x4bf3a, '8b442474eb03418bc5')
    check(pe, 0x4bf5b, '488b8df03800004833cc')
    a, b, body = region(source, 0x4a7a0)
    body = objects(body, [
        ('  _Alignas(8) unsigned sr_shape_offset_b[3];', [
            ('v310', '(*(uint64_t *)(void *)sr_shape_offset_b)'),
            ('v311', '(*(float *)&sr_shape_offset_b[2])')]),
        vector('sr_shape_offset_a', 312),
        vector('sr_shape_center_a', 320),
        ('  _Alignas(8) unsigned sr_shape_edge_normal[3];', [
            ('v323', '(*(int64_t *)(void *)sr_shape_edge_normal)'),
            ('v324', '(*(float *)&sr_shape_edge_normal[2])')]),
        ('  _Alignas(8) unsigned sr_shape_edge_a[3];', [
            ('v340', '(*(uint64_t *)(void *)sr_shape_edge_a)'),
            ('v341', '(*(float *)&sr_shape_edge_a[2])')]),
        ('  _Alignas(8) unsigned sr_shape_edge_b[3];', [
            ('v342', '(*(uint64_t *)(void *)sr_shape_edge_b)'),
            ('v343', '(*(float *)&sr_shape_edge_b[2])')]),
        ('  float sr_shape_contact[7];', [
            (f'v{i}', f'sr_shape_contact[{i-344}]') for i in range(344, 350)]),
        ('  _Alignas(8) unsigned sr_shape_vertices_a[1536];', [
            ('v353', 'sr_shape_vertices_a'),
            ('v354', '((float *)(void *)(sr_shape_vertices_a+2))')]),
        ('  _Alignas(8) unsigned sr_shape_vertices_b[2048];', [
            ('v355', 'sr_shape_vertices_b'),
            ('v356', '((float *)(void *)(sr_shape_vertices_b+2))')]),
    ])
    old = b'return sub_1401F8B20((unsigned __int64)&v306 ^ v357);'
    if body.count(old) != 2:
        raise ValueError('Paired shape return inventory changed')
    # Original early exit returns R13D; the full path returns its saved value.
    body = body.replace(old, b'return (uint32_t)v9;', 1)
    body = body.replace(old, b'return (uint32_t)v316;', 1)
    source = source[:a]+body+source[b:]
    check(pe, 0xdaee5, '488d4c2448')
    check(pe, 0xdaf03, 'f30f10442448f30f104c244cf30f1103f30f10442450')
    a, b, body = region(source, 0xdad20)
    body = objects(body, [('  int sr_shape_triangle_point[3];', [
        (f'v{i}', f'sr_shape_triangle_point[{i-44}]') for i in range(44,47)])])
    return source[:a]+body+source[b:], {
        'recovered_shape_contact_objects': 10,
        'recovered_shape_contact_returns': 2,
    }
