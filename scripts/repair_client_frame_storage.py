"""Restore contiguous data used by the native cubemap filtering pass."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects


def repair(source):
    pe = pinned_pe()
    check(pe, 0x1b918, 'c74424500000803f')
    check(pe, 0x1b923, '0f114424300f11442440')
    check(pe, 0x1bafb, '4c8d4c2460')
    a, b, body = region(source, 0x1b6a0)
    if b'sr_cube_filter_vertices' in body:
        return repair_pass_matrices(source), {'recovered_frame_stack_objects': 5}
    aliases = [('v14', '((uint64_t *)(void *)sr_cube_filter_vertices)')]
    offsets = {15:4,16:5,17:6,18:7,19:8,20:10,21:11,22:12,
               23:13,24:15,25:16,26:17,27:18,28:19,29:21,
               30:22,31:23,32:24,33:25,34:27}
    pairs = {19,23,28,33}
    integers = {18,24,29,34}
    for variable, offset in offsets.items():
        cast = 'uint64_t' if variable in pairs else 'unsigned' if variable in integers else 'float'
        aliases.append((f'v{variable}', f'(*({cast} *)(void *)(sr_cube_filter_vertices+{offset}))'))
    body = objects(body, [
        ('  _Alignas(16) unsigned sr_cube_filter_rotation[12];', [
            ('v12', '(*(__m256i *)(void *)sr_cube_filter_rotation)'),
            ('v13', '(*(float *)(void *)(sr_cube_filter_rotation+8))')]),
        ('  _Alignas(16) unsigned sr_cube_filter_vertices[28];', aliases)])
    return repair_pass_matrices(source[:a]+body+source[b:]), {'recovered_frame_stack_objects': 5}


def repair_pass_matrices(source):
    pe=pinned_pe()
    check(pe,0x1237e2,'488d55c7')
    check(pe,0x1238a8,'488d55c7')
    check(pe,0x19477d,'4c8d4c2430')
    a,b,body=region(source,0x123190)
    if b'sr_stencil_pass_matrix' not in body:
        body=objects(body,[('  _Alignas(16) unsigned sr_stencil_pass_matrix[16];',[
            (f'v{i}',f'(*(__int128 *)(void *)(sr_stencil_pass_matrix+{4*(i-103)}))') for i in range(103,107)])])
        source=source[:a]+body+source[b:]
    a,b,body=region(source,0x1945f0)
    if b'sr_screen_sample_matrix' not in body:
        body=objects(body,[
            ('  _Alignas(16) unsigned sr_screen_sample_matrix[16];',[
                ('v14','(*(__m256i *)(void *)sr_screen_sample_matrix)'),
                ('v15','(*(__int128 *)(void *)(sr_screen_sample_matrix+8))'),
                ('v16','(*(__int128 *)(void *)(sr_screen_sample_matrix+12))')]),
            ('  _Alignas(16) unsigned sr_screen_sample_result[16];',[
                ('v18','(*(__m256i *)(void *)sr_screen_sample_result)'),
                ('v19','(*(__int128 *)(void *)(sr_screen_sample_result+8))'),
                ('v20','(*(__int128 *)(void *)(sr_screen_sample_result+12))')])])
        source=source[:a]+body+source[b:]
    return source


def repair_stencil_vertices(source):
    """Native XMM0/1/2 carry three float coordinates, not integer registers."""
    import re
    pe=pinned_pe()
    check(pe,0x7d42f,'0f28f20f297c24300f28f9440f29442420440f28c0')
    check(pe,0x123e62,'f30f10359e4d1500')
    check(pe,0x123e97,'0f57d20f28cf0f28c7e87b95f5ff')
    source=source.replace(b'sub_14007D420(__int64 a1, __int64 a2, __int64 a3)',
                          b'sub_14007D420(float a1, float a2, float a3)')
    a,b,body=region(source,0x7d420)
    if b'memcpy(&v3, &a1, 4);' not in body:
        body=body.replace(b'  v6 = dword_140404A6C[456217207];',
             b'  memcpy(&v3, &a1, 4);\n  memcpy(&v4, &a2, 4);\n  memcpy(&v5, &a3, 4);\n  v6 = dword_140404A6C[456217207];',1)
        body=body.replace(b'sub_14006E0D0(a1, a2, a3);',b'sub_14006E0D0(0, 0, 0);')
        source=source[:a]+body+source[b:]
    a,b,body=region(source,0x123190)
    calls=list(re.finditer(rb'sub_14007D420\([^;]+\);',body))
    if len(calls)!=4:raise ValueError('Stencil quad call inventory changed')
    values=('-1.0f, 1.0f, 0.0f','1.0f, 1.0f, 0.0f',
            '1.0f, -1.0f, 0.0f','-1.0f, -1.0f, 0.0f')
    for call,value in reversed(list(zip(calls,values))):
        body=body[:call.start()]+('sub_14007D420('+value+');').encode()+body[call.end():]
    return source[:a]+body+source[b:]
