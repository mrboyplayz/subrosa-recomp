"""Restore copy helper SIMD access alignment and forward REP register flow."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT, PIN

HELPERS = b'''static __int128 sr_copy_load128(const void *p) {
  __int128 v; __builtin_memcpy(&v, p, 16); return v;
}
static void sr_copy_store128(void *p, __int128 v) {
  __builtin_memcpy(p, &v, 16);
}
'''


def repair(source):
    import prepare_rebuild
    from tree_sitter import Language, Parser
    import tree_sitter_c
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Copy recovery requires pinned original')
    pe = pefile.PE(str(binary))
    if pe.get_data(0x1fc900, 16) != bytes.fromhex('5756498bc3488bf9498bc8498bf2f3a4') or pe.get_data(0x1fc960, 18) != bytes.fromhex('0f1002420f104c02f00f1101420f114c01f0'):
        raise ValueError('Native copy REP or short SIMD path changed')
    marker = b'//----- (00000001401FC900)'
    start = source.index(marker)
    end = source.index(b'//----- (', start + len(marker))
    region = source[start:end]
    if region.count(b'qmemcpy(a1, v3, a3);') != 1 or region.count(b'return v4;') != 1:
        raise ValueError('Dropped REP copy registers changed')
    body = b'''__int64 sub_1401FC900(void *a1, __int64 offset, unsigned __int64 count)
{
  unsigned char *destination = (unsigned char *)a1;
  const unsigned char *source = (const unsigned char *)((uintptr_t)a1 + (uintptr_t)offset);
  for (unsigned __int64 i = 0; i < count; ++i) destination[i] = source[i];
  return (__int64)(uintptr_t)a1;
}
'''
    source = source[:start] + marker + b' ---------------------------------------------\n' + body + source[end:]
    marker = b'//----- (00000001401FC920)'
    start = source.index(marker)
    end = source.index(b'//----- (', start + len(marker))
    region = source[start:end]
    tree = Parser(Language(tree_sitter_c.language())).parse(region)
    counts = {'recovered_copy_vector_loads': 0, 'recovered_copy_vector_stores': 0,
              'recovered_copy_stream_addresses': 0, 'recovered_copy_rep_registers': 1}

    def original(node):
        return region[node.start_byte:node.end_byte]

    def memory(node):
        if node.type == 'pointer_expression':
            arg = node.child_by_field_name('argument')
            if original(node).lstrip().startswith(b'*'):
                if arg.type == 'identifier' and original(arg) in (b'a1', b'a2', b'v50'):
                    return ('wide' if original(arg) == b'v50' else 'int', original(arg))
                if arg.type == 'cast_expression':
                    type_text = original(arg.child_by_field_name('type'))
                    kind = ('int' if b'__m128i' in type_text else 'float' if b'__m128' in type_text else 'wide' if b'_OWORD' in type_text else None)
                    if kind:
                        return kind, original(arg.child_by_field_name('value'))
        if node.type == 'subscript_expression' and original(node.child_by_field_name('argument')) == b'v28':
            return 'int', b'&' + original(node)
        return None

    def rewrite(node):
        if node.type == 'assignment_expression':
            left = node.child_by_field_name('left')
            target = memory(left)
            if target:
                kind, address = target
                value = rewrite(node.child_by_field_name('right'))
                counts['recovered_copy_vector_stores'] += 1
                if kind == 'wide':
                    return b'sr_copy_store128((void *)(' + address + b'), ' + value + b')'
                name, type_name = (b'_mm_storeu_si128', b'__m128i') if kind == 'int' else (b'_mm_storeu_ps', b'float')
                return name + b'((' + type_name + b' *)(void *)(' + address + b'), ' + value + b')'
        if node.type == 'call_expression':
            function = original(node.child_by_field_name('function'))
            if function == b'_mm_prefetch':
                return original(node)  # Address-only vector expression, not a load.
            if function == b'_mm_stream_ps':
                args = node.child_by_field_name('arguments').named_children
                match = re.search(rb'v28\[(-\d+)\]', original(args[0]))
                if not match:
                    raise ValueError('Streaming copy address changed')
                counts['recovered_copy_stream_addresses'] += 1
                return b'_mm_stream_ps((float *)(void *)&v28[' + match[1] + b'], ' + rewrite(args[1]) + b')'
        access = memory(node)
        if access:
            kind, address = access
            counts['recovered_copy_vector_loads'] += 1
            if kind == 'wide':
                return b'sr_copy_load128((const void *)(' + address + b'))'
            name, type_name = (b'_mm_loadu_si128', b'__m128i') if kind == 'int' else (b'_mm_loadu_ps', b'float')
            return name + b'((const ' + type_name + b' *)(const void *)(' + address + b'))'
        chunks = []
        cursor = node.start_byte
        for child in node.children:
            chunks.extend((region[cursor:child.start_byte], rewrite(child)))
            cursor = child.end_byte
        chunks.append(region[cursor:node.end_byte])
        return b''.join(chunks)

    region = rewrite(tree.root_node)
    for old, new in [(b'v5 = a2 < a1;', b'v5 = (uintptr_t)a2 < (uintptr_t)a1;'),
                     (b'v6 = (char *)a2 - (char *)a1;', b'v6 = (uintptr_t)a2 - (uintptr_t)a1;')]:
        if region.count(old) != 1:
            raise ValueError('Copy address ordering changed')
        region = region.replace(old, new)
    if counts['recovered_copy_vector_loads'] < 30 or counts['recovered_copy_vector_stores'] < 30 or counts['recovered_copy_stream_addresses'] != 8:
        raise ValueError('Copy SIMD inventory changed: ' + str(counts))
    return source[:start] + HELPERS + region + source[end:], counts
