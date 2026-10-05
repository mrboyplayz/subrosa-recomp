"""Restore all native glDrawElementsBaseVertex offsets and fifth arguments."""
from repair_client_menu_actions import pinned_pe, region, check

DRAW = b'((void (*)(unsigned,int,unsigned,const void *,int))unk_1404047F0)'


def repair(source):
    pe = pinned_pe()
    for rva, data in [
        (0xd2591, '428b8c2f8cf70f414533c9428b842f84f70f4141b805140000410fafcf8d1440894c2420418d4904ff1531223300'),
        (0xd2d53, '428b8c338cf70f414533c9428b843384f70f4141b8051400000fafce8d1440894c2420418d4904ff15701a3300'),
        (0x11dea9, '4b63ac2a980fb14a'),
        (0x11dec4, '4f63842af86f034d'),
        (0x11ded3, '0faf2db210df49'),
        (0x11dee9, '4203ac289ceff049'),
        (0x11df00, '440faf05e470314c'),
        (0x11df10, '428b8428fc4f434c'),
        (0x11e014, '8bc541b8051400009983e23f03c28b5308c1f80689442420418d0c5403d18b4b04c1e2024c63ca8d1449b904000000ff15a7672e00'),
    ]:
        check(pe, rva, data)
    for rva, resource, slot in [(0xd22e0, 'v9', 'v10'), (0xd2c90, 'v4', 'v3')]:
        a, b, body = region(source, rva)
        old = f'unk_1404047F0(4, 3 * dword_140404A6C[24582 * {resource} + 271838022], 5125);'.encode()
        new = DRAW + f'(4,(int32_t)(3u*dword_140404A6C[24582*{resource}+271838022]),5125,NULL,(int32_t)(dword_140404A6C[24582*{resource}+271838024]*(uint32_t){slot}));'.encode()
        if body.count(old) != 1:
            raise ValueError('Terrain base-vertex call changed: ' + hex(rva))
        source = source[:a] + body.replace(old, new) + source[b:]
    a, b, body = region(source, 0x11ddb0)
    body = body.replace(b'\r', b'')
    old = b'''            result = dword_140404A6C[318816608] * dword_140404A6C[2 * result + 321964387]
                   + dword_140404A6C[3074 * dword_140404A6C[2 * result + 321964387]
                                   + 318816612
                                   + 3 * dword_140404A6C[2 * result + 321964388]];'''
    new = b'''            /* Original EBP holds vertex bytes; R12D holds element indices. */
            int32_t sr_building_vertex_bytes = (int32_t)(
                dword_140404A6C[309078344] * dword_140404A6C[2*result+312226123]
                + dword_140404A6C[309078348+3074*(int64_t)(int32_t)dword_140404A6C[2*result+312226123]
                    +3*(int64_t)(int32_t)dword_140404A6C[2*result+312226124]]);
            int32_t sr_building_index_bytes = (int32_t)(
                dword_140404A6C[318816608] * dword_140404A6C[2*result+321964387]
                + dword_140404A6C[318816612+3074*(int64_t)(int32_t)dword_140404A6C[2*result+321964387]
                    +3*(int64_t)(int32_t)dword_140404A6C[2*result+321964388]]);'''
    if body.count(old) != 1:
        raise ValueError('Building vertex/index address block changed')
    body = body.replace(old, new)
    old = b'result = unk_1404047F0(4, 3 * v10[1], 5125);'
    new = DRAW + b'(4,(int32_t)(3u*v10[1]),5125,(const void *)(intptr_t)(int32_t)(4u*((uint32_t)(sr_building_index_bytes/4)+3u*v10[2])),sr_building_vertex_bytes/64);'
    if body.count(old) != 1:
        raise ValueError('Building base-vertex call changed')
    return source[:a] + body.replace(old, new) + source[b:], {
        'recovered_base_vertex_draw_calls': 3,
        'recovered_building_vertex_index_offsets': 2,
    }
