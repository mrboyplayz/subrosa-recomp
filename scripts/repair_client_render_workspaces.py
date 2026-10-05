"""Restore contiguous matrix, clip-plane and small-vector workspaces."""
import re
from repair_client_menu_actions import pinned_pe,region,check


def repair(source):
    pe=pinned_pe()
    for rva,h in [(0x94cea,'488d542440'),(0x94d04,'4c8d4594'),
                  (0x95782,'4c8d4580'),(0x957a3,'4c8d4580'),
                  (0x11ff23,'488d542450'),(0x120525,'488d442460'),
                  (0x120552,'488d442460'),(0x1205b7,'488d45b0'),
                  (0x12083b,'488d442470'),(0x120848,'4c8d45b4')]:check(pe,rva,h)
    groups={0x94a90:[
        (64,'  _Alignas(16) __int128 sr_visibility_matrix[4];',[(f'v{93+i}',f'sr_visibility_matrix[{i}]') for i in range(4)]),
        (64,'  _Alignas(16) __int128 sr_visibility_basis[4];',[(f'v{100+i}',f'sr_visibility_basis[{i}]') for i in range(4)]),
        (16,'  _Alignas(16) unsigned char sr_visibility_clip[16];',[
            ('v97','(*(int32_t *)(sr_visibility_clip+0))'),
            ('v98','(*(int64_t *)(sr_visibility_clip+4))'),
            ('v99','(*(float *)(sr_visibility_clip+12))')])],
        0x11fd00:[
        (12,'  _Alignas(16) uint32_t sr_world_direction[3];',[
            ('v271','sr_world_direction[0]'),('v272','(*(float *)&sr_world_direction[1])'),('v273','sr_world_direction[2]')]),
        (8,'  uint32_t sr_world_material_pair[2];',[
            ('v274','sr_world_material_pair[0]'),('v275','sr_world_material_pair[1]')]),
        (72,'  _Alignas(16) unsigned char sr_world_matrix_backing[80];',[
            ('v276','((uint64_t *)(sr_world_matrix_backing+8))'),
            ('v277','(*(__int128 *)(sr_world_matrix_backing+32))'),
            ('v278','(*(__int128 *)(sr_world_matrix_backing+48))'),
            ('v279','(*(__int128 *)(sr_world_matrix_backing+64))')]),
        (64,'  _Alignas(16) __int128 sr_world_matrix[4];',[(f'v{280+i}',f'sr_world_matrix[{i}]') for i in range(4)])]}
    total=0
    for fn,objects in groups.items():
        a,b,body=region(source,fn);body=body.replace(b'\r',b'')
        for size,decl,aliases in objects:
            for n,(name,expr) in enumerate(aliases):
                pattern=rb'^  (?:__int128|__int64|_QWORD|unsigned int|int|float) '+name.encode()+rb'(?:\[3\])?; // \[rsp[^\n]+\n'
                body,count=re.subn(pattern,(decl+'\n').encode() if n==0 else b'',body,flags=re.M)
                if count!=1:raise ValueError('Render workspace declaration changed: '+name)
            for name,expr in aliases:body=re.sub(rb'\b'+name.encode()+rb'\b',expr.encode(),body)
            total+=size
        source=source[:a]+body+source[b:]
    return source,{'recovered_render_workspace_objects':7,'recovered_render_workspace_bytes':total}
