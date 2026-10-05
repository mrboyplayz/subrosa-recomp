"""Recover the native view and cubemap camera's contiguous stack objects."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects, vector


def repair(source):
    pe=pinned_pe()
    check(pe,0x7beff,'488d542420')
    check(pe,0x7bf30,'f30f11442450')
    check(pe,0x7bf3b,'f30f114c245c')
    check(pe,0x7bf53,'f30f11442454f30f114c2458')
    check(pe,0x93f90,'0f57db0f28d70f28cf0f28c7ff158ecd8e04')
    check(pe,0x93fda,'0f114424300f11442440')
    a,b,body=region(source,0x7be20)
    body=objects(body,[('  _Alignas(16) unsigned sr_view_translation[16];',[
        ('v7','((_OWORD *)(void *)sr_view_translation)'),
        ('v8','(*(float *)&sr_view_translation[12])'),
        ('v9','(*(float *)&sr_view_translation[13])'),
        ('v10','(*(float *)&sr_view_translation[14])'),
        ('v11','sr_view_translation[15]')])])
    source=source[:a]+body+source[b:]
    a,b,body=region(source,0x93e60)
    body=objects(body,[
        ('  _Alignas(16) unsigned sr_cube_rotation[12];',[
            ('v21','(*(__int128 *)(void *)sr_cube_rotation)'),
            ('v22','(*(__int128 *)(void *)(sr_cube_rotation+4))'),
            ('v23','sr_cube_rotation[8]')]),
        vector('sr_cube_light',24),
        ('  _Alignas(16) unsigned sr_cube_translation[16];',[
            ('v27','((_OWORD *)(void *)sr_cube_translation)'),
            ('v28','sr_cube_translation[12]'),('v29','(*(float *)&sr_cube_translation[13])'),
            ('v30','(*(float *)&sr_cube_translation[14])'),('v31','sr_cube_translation[15]')])])
    old=b'(*(void (           **)(__int64, __int64, __int64, __int64))&dword_140404A6C[18215089])(v2, v1, v3, v4);'
    if body.count(old)!=1:raise ValueError('Cubemap clear-color call changed')
    body=body.replace(old,b'(*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(1.0f,1.0f,1.0f,0.0f);')
    source=repair_scene_draw_storage(source[:a]+body+source[b:])
    return source,{'recovered_view_storage_objects':7,'recovered_cubemap_clear_color':1}


def repair_scene_draw_storage(source):
    """Preserve the position and rotation passed to the world draw queue."""
    pe=pinned_pe()
    check(pe,0x213f3,'4c8d4c2440')
    check(pe,0x21d67,'e8c49f1000')
    check(pe,0x21da0,'4c8d4c2440')
    a,b,body=region(source,0x212e0)
    body=objects(body,[
        ('  _Alignas(8) unsigned sr_scene_draw_position[3];',[
            ('v208','(*(uint64_t *)(void *)sr_scene_draw_position)'),
            ('v209','(*(float *)&sr_scene_draw_position[2])')]),
        ('  _Alignas(16) unsigned sr_scene_draw_rotation[12];',[
            ('v216','(*(__int128 *)(void *)sr_scene_draw_rotation)'),
            ('v217','(*(__int128 *)(void *)(sr_scene_draw_rotation+4))'),
            ('v218','(*(float *)&sr_scene_draw_rotation[8])')]),
        ('  unsigned sr_scene_draw_textures[4];',[
            ('v206','sr_scene_draw_textures[0]'),('v207','sr_scene_draw_textures[1]')])])
    return source[:a]+body+source[b:]
