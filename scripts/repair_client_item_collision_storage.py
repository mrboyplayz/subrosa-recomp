"""Preserve the native three-float endpoint used by item collision queries."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects, vector


def repair(source):
    pe = pinned_pe()
    # Both mesh vertices and box corners write the same twelve-byte object.
    check(pe, 0xcea4d, 'f30f115580')
    check(pe, 0xcea5a, 'f30f115d84f30f117588e8e7d50000')
    check(pe, 0xcecfa, 'f30f115d80f30f116584f30f115588e842d30000')
    a, b, body = region(source, 0xce370)
    body = objects(body, [vector('sr_item_collision_endpoint', 89)])
    source = repair_train_track_hit(source[:a]+body+source[b:])
    return source, {'recovered_item_collision_endpoint': 1,
                    'recovered_train_track_hit_object': 1}


def repair_train_track_hit(source):
    pe = pinned_pe()
    # The train's triangle query writes position, normal and distance together.
    check(pe, 0x10c5f4, '4c8d4c2470')
    check(pe, 0x10c620, '488d8c2490000000')
    check(pe, 0x10c725, 'f30f599c249c000000')
    a, b, body = region(source, 0x10c110)
    body = objects(body, [('  float sr_train_track_hit[12];', [
        ('v66', 'sr_train_track_hit'),
        ('v67', '((unsigned *)(void *)(sr_train_track_hit+3))')])])
    return source[:a]+body+source[b:]
