"""Keep 3x3 joint rotation matrices and vector outputs in native-sized objects."""
from repair_client_menu_actions import pinned_pe,region,check
from repair_client_swept_collision import objects,vector


def matrix(name,first):
    return ('  _Alignas(16) unsigned '+name+'[12];',[
        (f'v{first}','(*(__int128 *)(void *)'+name+')'),
        (f'v{first+1}','(*(__int128 *)(void *)('+name+'+4))'),
        (f'v{first+2}','(*(float *)&'+name+'[8])')])


def repair(source):
    pe=pinned_pe()
    check(pe,0xb1450,'488bc4488958205556574154415541564157')
    a,b,body=region(source,0xb1450)
    body=objects(body,[matrix('sr_joint_rotation',154)])
    source=source[:a]+body+source[b:]
    a,b,body=region(source,0xad2b0)
    body=objects(body,[vector('sr_limb_target',461),vector('sr_limb_velocity',473),
        vector('sr_limb_offset',502),matrix('sr_limb_rotation',499),
        ('  _Alignas(16) unsigned sr_limb_matrix_a[12];',[('v495','((_OWORD *)(void *)sr_limb_matrix_a)'),('v496','sr_limb_matrix_a[8]')]),
        ('  _Alignas(16) unsigned sr_limb_matrix_b[12];',[('v507','((_OWORD *)(void *)sr_limb_matrix_b)'),('v508','sr_limb_matrix_b[8]')]),
        ('  int sr_limb_cell[3];',[(f'v{i}',f'sr_limb_cell[{i-481}]') for i in range(481,484)]),
        ('  unsigned sr_limb_contact[3];',[(f'v{i}',f'sr_limb_contact[{i-485}]') for i in range(485,488)])])
    source=source[:a]+body+source[b:]
    a,b,body=region(source,0xb2e70)
    check(pe,0xb2f31,'488d8d20080000e8c3590d00')
    check(pe,0xb2f0a,'4489b520080000')
    check(pe,0xb2f14,'4489b524c80000')
    check(pe,0xb3216,'488d4d10e81150f8ff')
    body=objects(body,[
        ('  int sr_joint_triangles[12290];',[('v135','sr_joint_triangles'),
            ('v136','(*(char *)(void *)(sr_joint_triangles+3))'),('v137','sr_joint_triangles[12289]')]),
        ('  unsigned sr_joint_vehicle_list[516];',[('v133','sr_joint_vehicle_list[0]'),('v134','((unsigned char *)(void *)(sr_joint_vehicle_list+1))')]),
        ('  unsigned sr_joint_contact_a[3];',[('v106','(*(float *)&sr_joint_contact_a[0])'),('v107','(*(uint64_t *)(void *)(sr_joint_contact_a+1))')]),
        ('  unsigned sr_joint_contact_b[3];',[('v113','(*(float *)&sr_joint_contact_b[0])'),('v114','(*(uint64_t *)(void *)(sr_joint_contact_b+1))')]),
        vector('sr_joint_contact_offset',110),vector('sr_joint_contact_point',115),
        ('  unsigned sr_joint_collision[9];',[(f'v{i}',f'(*(float *)&sr_joint_collision[{i-119}])') for i in (119,120,121,122)]+
            [('v123','(*(uint64_t *)(void *)(sr_joint_collision+4))')]+[(f'v{i}',f'(*(float *)&sr_joint_collision[{i-118}])') for i in (124,125,126)]),
        ('  unsigned sr_joint_triangle_b[3];',[('v128','(*(uint64_t *)(void *)sr_joint_triangle_b)'),('v129','sr_joint_triangle_b[2]')]),
        ('  unsigned sr_joint_triangle_a[3];',[('v131','(*(uint64_t *)(void *)sr_joint_triangle_a)'),('v132','(*(float *)&sr_joint_triangle_a[2])')])
    ])
    source=source[:a]+body+source[b:]
    return source,{'recovered_joint_matrix_vector_objects':18}
