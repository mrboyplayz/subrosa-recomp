"""Restore all four native GLboolean arguments in the remaining color-mask calls."""
import re
from repair_client_menu_actions import pinned_pe, region, check

# Per-function calls in native instruction order; alpha is often deliberately off.
CALLS={
 0x99dd0:[(0x9a0f7,'41b101410fb6d1450fb6c10fb6caff15456c8e04','1,1,1,1'),
          (0x9a17e,'41b101450fb6c1','1,1,1,1'),
          (0x9a239,'41b1014533c033d233c9ff15076b8e04','0,0,0,1'),
          (0x9a2b8,'41b0014533c9410fb6d00fb6caff15856a8e04','1,1,1,0')],
 0x9c040:[(0x9c2cf,'41b101410fb6d1450fb6c10fb6caff156d4a8e04','1,1,1,1'),
          (0x9c3a8,'41b0014533c9410fb6d00fb6caff1595498e04','1,1,1,0'),
          (0x9c5f5,'41b0014533c9410fb6d00fb6caff1548478e04','1,1,1,0')],
 0x9c680:[(0x9c934,'41b101450fb6c1410fb6d1410fb6c9ff1507448e04','1,1,1,1'),
          (0x9cb0c,'41b0014533c9410fb6d0410fb6c8ff1530428e04','1,1,1,0'),
          (0x9cc77,'41b0014533c9410fb6d0410fb6c8ff15c5408e04','1,1,1,0')],
 0x9cd10:[(0x9d166,'41b0014533c9410fb6d00fb6caff15d73b8e04','1,1,1,0')],
 0x9d210:[(0x9d6e5,'41b0014533c9410fb6d00fb6caff1558368e04','1,1,1,0')],
 0x9da10:[(0x9dcbb,'41b101410fb6d1450fb6c10fb6caff1581308e04','1,1,1,1'),
          (0x9dd1a,'41b0014533c9410fb6d00fb6caff1523308e04','1,1,1,0'),
          (0x9ddef,'41b0014533c9410fb6d00fb6caff154e2f8e04','1,1,1,0')],
 0xa6df0:[(0xa6dff,'41b0014533c9410fb6d00fb6caff153e9f8d04','1,1,1,0')],
 0xa6e90:[(0xa6e9f,'41b0014533c9410fb6d00fb6caff159e9e8d04','1,1,1,0')],
 0xa6f30:[(0xa6f3f,'41b0014533c9410fb6d00fb6caff15fe9d8d04','1,1,1,0')],
 0xa6fb0:[(0xa6fbf,'4533c94533c033d233c9ff15819d8d04','0,0,0,0')],
 0x122690:[(0x1226a4,'41b001','1,1,1,0')],
 0x122ca0:[(0x122caa,'41b001','1,1,1,0')],
}


def repair(source):
    pe=pinned_pe();count=0
    for rva,calls in CALLS.items():
        a,b,body=region(source,rva);body=body.replace(b'\r',b'')
        matches=list(re.finditer(rb'\(\*\(void[^\n]+18215097[^\n]+;',body))
        if len(matches)!=len(calls):raise ValueError('Color-mask call inventory changed: '+hex(rva))
        for match,(at,pin,values) in reversed(list(zip(matches,calls))):
            check(pe,at,pin)
            new=b'(*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])('+values.encode()+b');'
            body=body[:match.start()]+new+body[match.end():];count+=1
        source=source[:a]+body+source[b:]
    return source,{'recovered_remaining_color_mask_calls':count}
