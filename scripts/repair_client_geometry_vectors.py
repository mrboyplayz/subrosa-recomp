"""Recover five unaligned vector reads/writes in vehicle convex weights."""
import hashlib
import pefile
from capstone import Cs,CS_ARCH_X86,CS_MODE_64
from capstone.x86 import X86_OP_MEM
from prepare_rebuild import Language,Parser,tree_sitter_c
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014002E730)'
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Geometry requires original client')
 pe=pefile.PE(str(binary),fast_load=True);d=Cs(CS_ARCH_X86,CS_MODE_64);d.detail=True
 ins=list(d.disasm(pe.get_data(0x2e730,0x6c0),0x14002e730))
 if sum(i.mnemonic=='movups' and i.operands[0].type==X86_OP_MEM for i in ins)!=5 or sum(i.mnemonic=='movups' and i.operands[1].type==X86_OP_MEM for i in ins)!=5:raise ValueError('Native geometry MOVUPS inventory changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b];tree=Parser(Language(tree_sitter_c.language())).parse(r);counts=[0,0]
 def text(n):return r[n.start_byte:n.end_byte]
 def memory(n):
  if n.type=='pointer_expression' and text(n).lstrip().startswith(b'*'):
   cast=n.child_by_field_name('argument')
   if cast.type=='cast_expression' and b'__m128 *' in text(cast.child_by_field_name('type')):return text(cast.child_by_field_name('value'))
  return None
 def rewrite(n):
  if n.type=='assignment_expression':
   target=memory(n.child_by_field_name('left'))
   if target is not None:
    counts[1]+=1;return b'_mm_storeu_ps((float *)(void *)('+target+b'), '+rewrite(n.child_by_field_name('right'))+b')'
  address=memory(n)
  if address is not None:counts[0]+=1;return b'_mm_loadu_ps((const float *)(const void *)('+address+b'))'
  chunks=[];cursor=n.start_byte
  for child in n.children:chunks.extend([r[cursor:child.start_byte],rewrite(child)]);cursor=child.end_byte
  chunks.append(r[cursor:n.end_byte]);return b''.join(chunks)
 r=rewrite(tree.root_node)
 if counts!=[5,5]:raise ValueError('Geometry C vector inventory changed: '+str(counts))
 return source[:a]+r+source[b:],{'recovered_geometry_unaligned_loads':5,'recovered_geometry_unaligned_stores':5}
