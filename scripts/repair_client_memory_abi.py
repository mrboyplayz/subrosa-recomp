"""Recover byte-buffer interfaces and reviewed memset/strncmp semantics."""
import hashlib
from pathlib import Path
import re
import pefile

PROJECT=Path(__file__).resolve().parent.parent
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def region(source,address):
    marker=b'//----- (%016X)'%address
    start=source.index(marker)
    end=source.find(b'//----- (',start+len(marker))
    return start,len(source) if end<0 else end


def repair(source,report=None):
    from prepare_rebuild import Language, Parser, nodes, tree_sitter_c
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Memory ABI requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x1fcd10,16)!=bytes.fromhex('578bc2488bf9498bc8f3aa498bc35fc3'):
        raise ValueError('REP STOSB helper changed')
    if pe.get_data(0x1fcd30,20)!=bytes.fromhex('4c8bd90fb6d249b901010101010101014c0fafca'):
        raise ValueError('Byte-fill entry changed')
    # Public destination type; retain the existing word-scaled local cursor.
    pattern=rb'_WORD \*([ \t]+)sub_1401FCD30\(_WORD \*a1,'
    source,count=re.subn(pattern,rb'void *\1sub_1401FCD30(void *destination,',source)
    if count!=1:
        raise ValueError('Byte-fill interface inventory changed')
    start,end=region(source,0x1401fcd30)
    body=source[start:end].replace(b'\r\n',b'\n')
    body=body.replace(b'\n{\n',b'\n{\n  _WORD *a1 = (_WORD *)destination;\n',1)
    if body.count(b'__int64 v11;')!=1:
        raise ValueError('Byte replication local changed')
    body=body.replace(b'__int64 v11;',b'uint64_t v11;')
    body=body.replace(b'0x101010101010101LL * a2',b'UINT64_C(0x101010101010101) * a2')
    old=b'v4 = (__m128)_mm_unpacklo_epi8(_mm_cvtsi32_si128((int)(v11)), _mm_cvtsi32_si128((int)(v11)));'
    if body.count(old)!=1:
        raise ValueError('MOVQ byte replication construction changed')
    body=body.replace(old,b'v4 = _mm_castsi128_ps(_mm_unpacklo_epi8(_mm_cvtsi64_si128((long long)v11), _mm_cvtsi64_si128((long long)v11)));')
    # The native routine uses unaligned stores for the short path and tail.
    # Pointer casts to __m128 incorrectly allowed GCC to emit MOVAPS there.
    stores={b'*(__m128 *)a1 = v4;':(1,b'_mm_storeu_ps((float *)a1, v4);'),
            b'*(__m128 *)v5 = v4;':(2,b'_mm_storeu_ps(v5, v4);'),
            b'*(__m128 *)((char *)v5 + v8 - 16) = v4;':
                (1,b'_mm_storeu_ps((float *)((char *)v5 + v8 - 16), v4);')}
    for n in (1,-6,-5,-4,-3,-2,-1):
        old=b'*((__m128 *)v5 '+(b'+ ' if n>0 else b'- ')+str(abs(n)).encode()+b') = v4;'
        new=b'_mm_storeu_ps(v5 '+(b'+ ' if n>0 else b'- ')+str(4*abs(n)).encode()+b', v4);'
        stores[old]=(1,new)
    for old,(expected,new) in stores.items():
        if body.count(old)!=expected:
            raise ValueError('Native SIMD store inventory changed')
        body=body.replace(old,new)
    source=source[:start]+body+source[end:]
    # Native helper returns R11, established as the destination by its sole
    # native caller. Its C caller passes that destination explicitly.
    if source.count(b'sub_1401FCD10(')!=3:
        raise ValueError('REP helper has an unreviewed caller')
    start,end=region(source,0x1401fcd10)
    body=source[start:end].replace(b'\r\n',b'\n')
    old=b'  __int64 v3; // r11\n\n  memset(a1, a2, a3);\n  return v3;'
    if body.count(old)!=1:
        raise ValueError('REP helper C body changed')
    body=body.replace(old,b'  return (__int64)(uintptr_t)memset(a1, (unsigned char)a2, a3);')
    source=source[:start]+body+source[end:]
    old=b'strncmp_sr(_QWORD *a1, __int64 a2,'
    if source.count(old)!=1:
        raise ValueError('String comparison interface inventory changed')
    source=source.replace(old,b'strncmp_sr(const char *left, const char *right,')
    start,end=region(source,0x140236ff0)
    body=source[start:end].replace(b'\r\n',b'\n')
    body=body.replace(b'\n{\n',b'\n{\n  const _QWORD *a1 = (const _QWORD *)(const void *)left;\n  uintptr_t a2 = (uintptr_t)right;\n',1)
    body=body.replace(b'__int64 v3;',b'uintptr_t v3;').replace(b'__int64 v5;',b'uint64_t v5;')
    body=body.replace(b'(unsigned __int8)a1',b'(uintptr_t)a1')
    body=body.replace(b'(_WORD)v3 + (_WORD)a1',b'v3 + (uintptr_t)a1')
    source=source[:start]+body+source[end:]
    tree=Parser(Language(tree_sitter_c.language())).parse(source)
    edits=[];calls={'sub_1401FCD30':0,'strncmp_sr':0}
    for node in nodes(tree.root_node):
        if node.type!='call_expression':
            continue
        function=node.child_by_field_name('function')
        if function is None:
            continue
        name=source[function.start_byte:function.end_byte].decode()
        if name not in calls:
            continue
        args=node.child_by_field_name('arguments').named_children
        if len(args)!=3:
            raise ValueError('Memory/string caller arity changed')
        calls[name]+=1
        for index,target in ((0,b'void *'),) if name=='sub_1401FCD30' else ((0,b'const char *'),(1,b'const char *')):
            argument=args[index];value=source[argument.start_byte:argument.end_byte]
            edits.append((argument.start_byte,argument.end_byte,b'('+target+b')(uintptr_t)('+value+b')'))
    for start,end,new in sorted(edits,reverse=True):
        source=source[:start]+new+source[end:]
    if report is not None:
        updates={'sub_1401FCD30':0,'strncmp_sr':0}
        declarations=[]
        for declaration in report['forward_declarations']:
            if 'sub_1401FCD30(' in declaration:
                declaration,count=re.subn(pattern.decode(),r'void *\1sub_1401FCD30(void *destination,',declaration)
                updates['sub_1401FCD30']+=count
            if 'strncmp_sr(' in declaration:
                declaration,count=re.subn(re.escape(old.decode()),
                    'strncmp_sr(const char *left, const char *right,',declaration)
                updates['strncmp_sr']+=count
            declarations.append(declaration)
        if updates!={'sub_1401FCD30':1,'strncmp_sr':1}:
            raise ValueError('Memory/string forward declarations changed')
        report['forward_declarations']=declarations
    return source,{'recovered_byte_fill_calls':calls['sub_1401FCD30'],
                   'recovered_string_compare_calls':calls['strncmp_sr'],
                   'recovered_unaligned_fill_stores':sum(n for n,_ in stores.values()),
                   'recovered_fill_movq_constructions':1,
                   'recovered_rep_fill_returns':1}
