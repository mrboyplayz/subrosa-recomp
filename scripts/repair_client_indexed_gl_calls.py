"""Restore table-derived vertex and element-buffer offsets from native blocks."""
import json
from repair_client_menu_actions import PROJECT,pinned_pe,region,check

MANIFEST=PROJECT/'src/rebuild/client_indexed_gl_calls.json'
ATTRIB='((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)'
DRAW='(*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])'


def offset_expression(row):
    slot=row['slot_expression'];base=row['offset_table_index'];stride=row['block_size_index']
    block='(int64_t)(int32_t)dword_140404A6C['+slot+']'
    item='(int64_t)(int32_t)dword_140404A6C[('+slot+')+1]'
    # Native 64-bit LEA addressing, then wrapping ADD/IMUL in EAX and CDQE.
    return '(intptr_t)(int32_t)(dword_140404A6C['+str(base)+'+3074*('+block+')+3*('+item+')]+(uint32_t)('+block+')*dword_140404A6C['+str(stride)+'])'


def replacement(row):
    offset='(const void *)('+offset_expression(row)+')'
    if row['kind']=='vertex':return ATTRIB+'(0,3,5126,0,64,'+offset+');'
    return DRAW+'(12,(int)(uint32_t)('+row['count_expression']+'),5125,'+offset+');'


def repair(source):
    pe=pinned_pe();counts={'recovered_indexed_vertex_offsets':0,'recovered_indexed_draw_offsets':0}
    for row in json.loads(MANIFEST.read_text(encoding='utf-8'))['calls']:
        check(pe,int(row['native_start'],16),row['native_bytes'])
        a,b,body=region(source,int(row['function'],16)-0x140000000)
        old=row['old'].encode()
        if body.count(old)!=1:raise ValueError('Indexed GL call inventory changed')
        body=body.replace(old,replacement(row).encode())
        source=source[:a]+body+source[b:]
        counts['recovered_indexed_'+('vertex' if row['kind']=='vertex' else 'draw')+'_offsets']+=1
    return source,counts
