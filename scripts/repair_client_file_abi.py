"""Restore the untyped fread buffer and explicit 64-bit stream address boundary."""
import hashlib
from pathlib import Path
import pefile

PROJECT=Path(__file__).resolve().parent.parent
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def repair(source):
    from prepare_rebuild import Language, Parser, nodes, tree_sitter_c
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('fread ABI recovery requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    # RCX stays the buffer. R9 (stream) is pushed as argument five for
    # fread_s; RDX receives SIZE_MAX while size/count move into R8/R9.
    expected=bytes.fromhex('4883ec384c894c24204d8bc84c8bc24883caffe8080000004883c438c3')
    if pe.get_data(0x20c0c8,29)!=expected:
        raise ValueError('fread native register-forwarding wrapper changed')
    old=b'fread_sr(__m128i *a1,'
    if source.count(old)!=2:
        raise ValueError('fread declaration/definition inventory changed')
    source=source.replace(old,b'fread_sr(void *a1,')
    tree=Parser(Language(tree_sitter_c.language())).parse(source)
    edits=[]
    for node in nodes(tree.root_node):
        if node.type!='call_expression':
            continue
        function=node.child_by_field_name('function')
        if function is None or source[function.start_byte:function.end_byte]!=b'fread_sr':
            continue
        args=node.child_by_field_name('arguments').named_children
        if len(args)!=4:
            raise ValueError('Unexpected fread arity')
        for argument,target_type in ((args[0],b'void *'),(args[3],b'FILE *')):
            original=source[argument.start_byte:argument.end_byte]
            edits.append((argument.start_byte,argument.end_byte,
                          b'('+target_type+b')(uintptr_t)('+original+b')'))
    if not edits:
        raise ValueError('No fread callers recovered')
    for start,end,new in sorted(edits,reverse=True):
        source=source[:start]+new+source[end:]
    return source,{'recovered_fread_buffer_declarations':2,
                   'recovered_fread_buffer_boundaries':len(edits)//2,
                   'recovered_fread_stream_boundaries':len(edits)//2}
