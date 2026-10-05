"""Keep human tick vectors, rotation and item broadphase lists contiguous."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects, vector
from repair_client_joint_storage import matrix


def repair(source):
    pe=pinned_pe()
    check(pe,0xbf347,'f30f114c247cf30f11442478f30f115d80e8834cf7ff')
    check(pe,0xbec76,'488d8d90000000')
    check(pe,0xca221,'488d4c2440e805e0f6ff')
    check(pe,0xca23f,'488d742448')
    a,b,body=region(source,0xbe010)
    body=objects(body,[vector('sr_human_tick_endpoint',418),
        vector('sr_human_tick_offset',429),vector('sr_human_tick_normal',436),
        vector('sr_human_tick_point',455),matrix('sr_human_tick_rotation',458)])
    source=source[:a]+body+source[b:]
    a,b,body=region(source,0xca1c0)
    body=objects(body,[('  unsigned sr_item_contact_candidates[513];',[
        ('v9','sr_item_contact_candidates[0]'),
        ('v10','(*(char *)(void *)(sr_item_contact_candidates+2))')])])
    return source[:a]+body+source[b:],{'recovered_human_tick_objects':5,
        'recovered_item_contact_candidate_objects':1}
