"""Preserve recovered allocation sizes across the native malloc tail thunk."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN


def repair(source):
    from prepare_rebuild import Language, Parser, tree_sitter_c, nodes
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Malloc thunk recovery requires pinned original')
    pe = pefile.PE(str(binary), fast_load=True)
    if pe.get_data(0x23acf8, 5) != bytes.fromhex('e963920100'):
        raise ValueError('Native malloc tail thunk changed')
    if pe.get_data(0x25a0bc, 6) != bytes.fromhex('48895c240857'):
        raise ValueError('Native realloc entry changed')
    if pe.get_data(0x25a0d1, 8) != bytes.fromhex('488bcae8879effff'):
        raise ValueError('Native realloc size forwarding changed')
    if b'sr_path_malloc(unsigned __int64 v0)' not in source:
        raise ValueError('Typed native allocator is missing')
    tree = Parser(Language(tree_sitter_c.language())).parse(source)
    edits = []
    missing = 0
    for node in nodes(tree.root_node):
        if node.type != 'call_expression':
            continue
        function = node.child_by_field_name('function')
        if source[function.start_byte:function.end_byte] != b'j__malloc_base':
            continue
        arguments = node.child_by_field_name('arguments').named_children
        if not arguments:
            missing += 1
            continue
        if len(arguments) != 1:
            raise ValueError('Unexpected malloc call arity')
        edits.append((function.start_byte, function.end_byte, b'sr_path_malloc'))
    if not edits or not missing:
        raise ValueError('Malloc call inventory changed')
    for start, end, new in sorted(edits, reverse=True):
        source = source[:start] + new + source[end:]
    start = source.index(b'//----- (000000014025A0BC)')
    end = source.index(b'//----- (', start + 10)
    body = source[start:end]
    old = b'if ( !a1 )\r\n    return malloc_base();'
    if body.count(old) != 1:
        raise ValueError('Native realloc NULL allocation path changed')
    body = body.replace(old, b'if ( !a1 )\r\n    return sr_path_malloc(a2);')
    source = source[:start] + body + source[end:]
    source = b'__int64 sr_path_malloc(unsigned __int64 size);\n' + source
    return source, {'recovered_malloc_size_calls': len(edits), 'remaining_malloc_missing_size_calls': missing,
                    'recovered_realloc_null_size_calls': 1}
