"""Restore effect and particle vectors used by the recovered native tick."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects, vector


def repair(source):
    pe=pinned_pe()
    check(pe,0x1597f0,'4c8bdc')
    check(pe,0x158cd0,'4c8bdc')
    a,b,body=region(source,0x1597f0)
    body=objects(body,[vector('sr_effect_previous_position',195),
        ('  _Alignas(16) unsigned sr_effect_rotation[12];',[
            ('v198','((_OWORD *)(void *)sr_effect_rotation)'),
            ('v199','sr_effect_rotation[8]')])])
    source=source[:a]+body+source[b:]
    a,b,body=region(source,0x158cd0)
    body=objects(body,[vector('sr_particle_direction',100)])
    return source[:a]+body+source[b:],{'recovered_tick_effect_objects':3}
