"""Instruction-pinned repairs for register-dependent decompiler helpers."""
import hashlib
from pathlib import Path
import re

import pefile


CLIENT_SHA256 = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'
FPREM_TAIL_SHA256 = '82958ee91370aa04a3f2a4fd3085c79ddd9a9f2adc5f9c858d34dc516d8fc592'


def repair(source):
    binary = Path(__file__).resolve().parent.parent.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != CLIENT_SHA256:
        raise ValueError('Register helper recovery requires the pinned client')
    pe = pefile.PE(str(binary), fast_load=True)
    if hashlib.sha256(pe.get_data(0x240B80, 0x3C)).hexdigest() != FPREM_TAIL_SHA256:
        raise ValueError('Native fmod FPREM fallback changed')
    markers = list(re.finditer(rb'(?m)^//----- \(([0-9A-Fa-f]+)\)', source))
    ranges = {int(m[1], 16): (m.end(), markers[i+1].start() if i+1 < len(markers) else len(source))
              for i, m in enumerate(markers)}
    begin, end = ranges[0x1402409A0]
    body = source[begin:end]
    pattern = (rb'(LABEL_16:\s*)'
               rb'__asm__ volatile\("\.intel_syntax noprefix\\n\\tffree   st\\n\\tffree   st\(1\)\\n\\t\.att_syntax prefix"\);\s*'
               rb'v13 = X;\s*'
               rb'__asm__ volatile\("\.intel_syntax noprefix\\n\\tfnclex\\n\\t\.att_syntax prefix"\);\s*'
               rb'do\s*v13 = __FPREM__\(v13, Y\);\s*'
               rb'while \( \(v14 & 0x400\) == 0x400 \);\s*return v13;')
    body, count = re.subn(pattern, rb'\1return sr_client_fmod_x87_tail(X, Y);', body)
    if count != 1 or source.count(b'__FPREM__(') != 1:
        raise ValueError('Expected one reviewed fmod FPREM tail')
    for local in (rb'(?m)^[ \t]*double v13; // st6[^\n]*\n', rb'(?m)^[ \t]*__int16 v14; // fps[^\n]*\n'):
        body, count = re.subn(local, b'', body)
        if count != 1:
            raise ValueError('fmod fallback local inventory changed')
    source = source[:begin] + body + source[end:]
    return source, {'recovered_fmod_x87_tails': 1}
