"""Pinned, scoped repairs for CPU registers, startup inspection and addresses."""
import re
import hashlib
from pathlib import Path
import pefile


def function_ranges(source):
    markers = list(re.finditer(rb'(?m)^//----- \(([0-9A-Fa-f]+)\)', source))
    return {int(m[1], 16): (m.end(), markers[i+1].start() if i+1<len(markers) else len(source))
            for i,m in enumerate(markers)}


def repair(source):
    ranges = function_ranges(source)
    edits = []
    counters = {'recovered_cpu_register_scopes': 3, 'restored_cpuid_subleaf_inputs': 6,
                'restored_xgetbv_indices': 1, 'recovered_cpu_probe_entries': 4,
                'recovered_float_double_coercions': 3, 'recovered_pe_readonly_entry': 1}
    # Four decompiler thunk names already have recovered local target bodies.
    # Check each original rel32 tail jump before rebinding the exported call.
    binary = Path(__file__).resolve().parent.parent.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e':
        raise ValueError('Thunk recovery requires the pinned original client')
    pe = pefile.PE(str(binary), fast_load=True)
    for address, target, old, new in (
        (0x14025EB78, 0x14025D680,
         b'sr_m____common_expand_argv_wildcards_D__YAHQEAPEADQEAPEAPEAD_Z', b'common_expand_argv_wildcards__char'),
        (0x14025EB80, 0x14025D88C,
         b'sr_m____common_expand_argv_wildcards__W__YAHQEAPEA_WQEAPEAPEA_W_Z', b'common_expand_argv_wildcards__wchar_t'),
        (0x1402609C8, 0x140260288,
         b'sr_m____common_set_variable_in_environment_nolock__W__YAHQEA_WH_Z', b'common_set_variable_in_environment_nolock__wchar_t'),
        (0x14025301C, 0x140252E94, b'_lseeki64_nolock', b'lseeki64_nolock')):
        raw = pe.get_data(address-pe.OPTIONAL_HEADER.ImageBase, 8)
        if raw[:1] != b'\xe9' or address+5+int.from_bytes(raw[1:5], 'little', signed=True) != target or raw[5:] != b'\xcc'*3:
            raise ValueError(f'Native thunk changed at {address:#x}')
        start, end = ranges[address]
        body = source[start:end]
        if body.count(old+b'(') != 1 or new+b'(' not in source[ranges[target][0]:ranges[target][1]]:
            raise ValueError('Thunk export or target definition changed')
        edits.append((start, end, body.replace(old+b'(', new+b'(')))
    counters['recovered_crt_thunk_bindings'] = 4
    local_cpu = {0x140001330: (2,0), 0x14016DFD0: (1,0),
                 0x1401F8B64: (3,1)}
    for address,(cpuid_count,xget_count) in local_cpu.items():
        start,end=ranges[address]; body=source[start:end]
        cpuid=rb'(?m)^([ \t]*)__asm__ volatile\("cpuid"'
        xget=rb'(?m)^([ \t]*)__asm__ volatile\("\.byte 0x0f, 0x01, 0xd0"'
        if len(re.findall(cpuid,body))!=cpuid_count or len(re.findall(xget,body))!=xget_count:
            raise ValueError(f'CPU instruction inventory changed at {address:#x}')
        body=re.sub(cpuid,rb'\1_RCX = 0;\n\g<0>',body)
        body=re.sub(xget,rb'\1_RCX = 0;\n\g<0>',body)
        opening=body.index(b'{')+1
        body=body[:opening]+b'\n  unsigned __int64 _RAX = 0, _RBX = 0, _RCX = 0, _RDX = 0;'+body[opening:]
        edits.append((start,end,body))
    replacements = {
        0x140068F80: b'\n_BOOL8 sub_140068F80(void) { return sr_client_cpu_sse41_probe(); }\n\n',
        0x14015E240: b'\n__int64 sub_14015E240(void) { return sr_client_cpu_leaf1_edx(); }\n\n',
        0x14016E150: b'\n__int64 sub_14016E150(void) { return sr_client_cpu_sse2_probe(); }\n\n',
        0x14025C460: b'\n__int64 sub_14025C460(void) {\n'
            b' return sr_client_initialize_math_cpu(&dword_140404A6C[19065823], &dword_140404A6C[19065824]);\n}\n\n',
        0x1401F8FF8: b'\nbool sub_1401F8FF8(__int64 address) {\n'
            b'  return sr_client_image_address_readonly(GetModuleHandleW(NULL), (uintptr_t)address);\n}\n\n',
        0x1401F8AC0: b'\n__m128 sub_1401F8AC0(double a1, __int64 a2, double a3) {\n'
            b'  uint64_t bits; __m128 pair; double packed;\n'
            b'  memcpy(&bits, &a1, sizeof(bits));\n'
            b'  if (sr_client_angle_pair_prepare(bits, &pair)) return pair;\n'
            b'  memcpy(&packed, &pair, sizeof(packed));\n'
            b'  return dword_140302080 >= 2 ? sub_1401FAAC0(packed) : sub_1401FA180(packed);\n}\n\n',
        0x1401FC140: b'\nint sub_1401FC140(void) { return sr_client_zero_callback(); }\n\n',
        0x1401F8A50: b'\n__m128d sub_1401F8A50(double a1, __int64 a2, double a3) {\n'
            b'  uint64_t bits; __m128d pair; memcpy(&bits, &a1, sizeof(bits));\n'
            b'  if (sr_client_double_angle_pair_prepare(bits, &pair)) return pair;\n'
            b'  return dword_140302080 >= 2 ? sub_1401F9B00(pair) : (__m128d)sub_1401F9480(pair);\n}\n\n'}
    counters['recovered_double_angle_preparation'] = 1
    counters['recovered_angle_pair_preparation'] = 1
    for address,body in replacements.items():
        start,end=ranges[address]
        if b'\n{' not in source[start:end]:
            raise ValueError(f'Entry shape changed at {address:#x}')
        edits.append((start,end,body))
    for address,old,new in (
        (0x14023F704,b'COERCE_UNSIGNED_INT64(result)',b'COERCE_UNSIGNED_INT64((double)result)'),
        (0x14023F704,b'COERCE_UNSIGNED_INT64(a2)',b'COERCE_UNSIGNED_INT64((double)a2)'),
        (0x14025C2F8,b'COERCE__INT64(v14)',b'COERCE__INT64((double)v14)')):
        start,end=ranges[address]
        if source[start:end].count(old)!=1:
            raise ValueError(f'Coercion site changed at {address:#x}')
        pos=source.index(old,start,end);edits.append((pos,pos+len(old),new))
    start,end=ranges[0x14014B2A0]
    pattern=rb'\(\*\(unsigned __int64 \*\)&(sr_mem_[0-9a-f]+)\[0\]\)'
    matches=list(re.finditer(pattern,source[start:end]))
    if len(matches)!=27:
        raise ValueError(f'Expected 27 shader address loads, found {len(matches)}')
    for match in matches:
        edits.append((start+match.start(),start+match.end(),b'(uintptr_t)'+match[1]))
    counters['recovered_shader_source_addresses']=len(matches)
    start,end=ranges[0x140077710]
    for alias in (b'sr_mem_1402b21b0',b'sr_mem_1402b2320'):
        old=b'(*(unsigned __int64 *)&'+alias+b'[0])'
        if source[start:end].count(old)!=1:
            raise ValueError('Shader preview source address changed')
        pos=source.index(old,start,end)
        edits.append((pos,pos+len(old),b'(uintptr_t)'+alias))
    counters['recovered_shader_source_addresses']+=2
    # Native CRT formatting indexes sixteen consecutive pointer slots. The
    # export retained only slot zero as an independently allocated scalar.
    old = b'_UNKNOWN *off_14028B000 = &unk_14028B080; // weak'
    if source.count(old) != 1:
        raise ValueError('CRT floating spelling table declaration changed')
    pos = source.index(old)
    edits.append((pos, pos + len(old), b'extern _UNKNOWN *off_14028B000[16]; // recovered contiguous table'))
    table_uses = list(re.finditer(rb'&off_14028B000\b', source))
    if len(table_uses) != 4:
        raise ValueError('CRT spelling table use inventory changed')
    for match in table_uses:
        edits.append((match.start(), match.end(), b'off_14028B000'))
    counters['recovered_crt_spelling_tables'] = 1
    # These exports reuse an eight-byte local as an XMM2 bit container. The
    # native callees consume its float lane: MOVSS at 07b2ba/12bd4a and
    # CVTSS2SD at 0055bf. Restrict repairs to whole third-argument bit casts.
    reviewed_calls = {b'1400054F0': {2: 4}, b'14007B2A0': {2: 129}, b'14012BD30': {2: 2},
        b'14006CFF0': {0: 16, 1: 16}, b'140081DA0': {2: 9}, b'14007B4D0': {2: 8},
        b'140066EE0': {2: 4}, b'1400555C0': {2: 1}, b'140054750': {1: 2}, b'14018C6A0': {2: 5},
        b'140082110': {2: 2}, b'1400891B0': {2: 1}}
    # Additional reviewed float consumers: ADDSS/SUBSS at 06d06b/06d085,
    # CVTSS2SD at 081e4b, MOVSS at 07b4e6, 066ee8, 0555d0, 054760,
    # and CVTSS2SD at 18c76c. Their remaining inference errors stay visible.
    for target, expected in reviewed_calls.items():
        counts = {index: 0 for index in expected}
        for match in re.finditer(rb'sub_' + target + rb'\(', source):
            depth, at, arg_start = 1, match.end(), match.end()
            arguments = []
            while depth:
                char = source[at:at+1]
                if char == b'(': depth += 1
                elif char == b')': depth -= 1
                if (char == b',' and depth == 1) or depth == 0:
                    arguments.append((arg_start, at)); arg_start = at + 1
                at += 1
            for index in expected:
                if len(arguments) <= index: continue
                begin, end = arguments[index]
                argument = source[begin:end].strip()
                if not argument.startswith(b'COERCE_DOUBLE('): continue
                if not argument.endswith(b')'):
                    raise ValueError('Float lane argument shape changed')
                pos = source.index(b'COERCE_DOUBLE', begin, end)
                edits.append((pos, pos + len(b'COERCE_DOUBLE'), b'sr_export_float_lane_container'))
                counts[index] += 1
        if counts != expected:
            raise ValueError(f'Float lane call inventory changed at {target!r}: {counts}')
    counters['recovered_float_lane_call_containers'] = 135
    counters['recovered_additional_float_lane_containers'] = 61
    counters['recovered_final_float_lane_containers'] = 3
    # These four constant inputs are attached to phantom XMM2 parameters.
    # 1f8a50 overwrites XMM2 from XMM0, 13c920 only forwards to 1f8ac0,
    # and 139e90 forwards to 052240, which overwrites its reused a3 local.
    for target, old, expected in (
        (b'1401F8A50', b'COERCE_DOUBLE(1139671040)', 1),
        (b'140139E90', b'COERCE_DOUBLE(1126170624)', 2),
        (b'14013C920', b'COERCE_DOUBLE(1065353216)', 1)):
        matches = []
        for match in re.finditer(rb'sub_' + target + rb'\([^;]+;', source):
            pos = source.find(old, match.start(), match.end())
            if pos >= 0: matches.append(pos)
        if len(matches) != expected:
            raise ValueError('Phantom argument inventory changed')
        for pos in matches: edits.append((pos, pos + len(old), b'0.0 /* unused native input */'))
    counters['removed_phantom_constant_coercions'] = 4
    # The two-lane input was incorrectly allocated as an eight-byte double.
    # Only this dispatcher calls either packed helper; retain all 128 bits.
    for target in (b'1401F9480', b'1401F9B00'):
        matches = list(re.finditer(rb'sub_' + target + rb'\(double a1\)', source))
        if len(matches) != 2:
            raise ValueError('Packed double signature inventory changed')
        for match in matches:
            old = match.group(); new = old.replace(b'double a1', b'__m128d a1')
            edits.append((match.start(), match.end(), new))
    counters['recovered_packed_double_inputs'] = 2
    start, end = ranges[0x1401F9284]
    pattern = rb'\(\*\(void \(\s*\*\*\)\(_QWORD, __int64\)\)v4\)\(0, 2\);'
    matches = list(re.finditer(pattern, source[start:end]))
    if len(matches) != 1:
        raise ValueError('Startup TLS callback boundary changed')
    match = matches[0]
    # 1f9335 XOR R8D; 1f9338 EDX=2; 1f933c XOR ECX. Preserve the
    # reserved null argument omitted by the exported two-argument call.
    edits.append((start + match.start(), start + match.end(),
                  b'(*(void (**)(void *, unsigned, void *))v4)(NULL, 2, NULL);'))
    counters['restored_startup_tls_arguments'] = 1
    for old, new in (
        (b'_UNKNOWN unk_14026E6B0; // weak', b'extern _UNKNOWN unk_14026E6B0[24]; // recovered initializer window'),
        (b'_UNKNOWN unk_14026E6C8; // weak', b'extern _UNKNOWN unk_14026E6C8; // recovered initializer window'),
        (b'__int64 First = 0LL; // weak', b'extern __int64 First[7]; // recovered initializer window'),
        (b'__int64 Last = 0LL; // weak', b'extern __int64 Last; // recovered initializer window')):
        if source.count(old) != 1:
            raise ValueError('Startup initializer declaration changed')
        pos = source.index(old); edits.append((pos, pos + len(old), new))
    counters['recovered_startup_initializer_aliases'] = 4
    # The initializer returns EAX=0 on success; the export cut off its INT3
    # failure tail and lost the final thunk's result.
    start, end = ranges[0x1401F918C]
    body = source[start:end]
    for old, new in (
        (b'void sub_1401F918C()', b'int sub_1401F918C(void)'),
        (b'CMFCToolBarImages__UpdateInternalImage(v2)', b'CMFCToolBarImages__UpdateInternalImage(NULL)'),
        (b'  sub_1401FC140();', b'  v5 = sub_1401FC140();'),
        (b'    JUMPOUT(0x1401F9241LL);', b'    __asm__ volatile("int3");\n    __builtin_unreachable();')):
        if body.count(old) != 1:
            raise ValueError('CRT initializer control flow changed')
        body = body.replace(old, new)
    close = body.index(b'\n}')
    body = body[:close] + b'\n  return v5;' + body[close:]
    edits.append((start, end, body))
    # Neither entry had an argument and the thunk's original target is XOR
    # EAX,EAX;RET at 1fc1b0. Match the reviewed return contracts forwards.
    for old, new in ((b'void sub_1401F918C();', b'int sub_1401F918C(void);'),
                     (b'void sub_1401FC140();', b'int sub_1401FC140(void);')):
        if source.count(old) != 1:
            raise ValueError('Startup initializer forward changed')
        pos = source.index(old); edits.append((pos, pos + len(old), new))
    counters['recovered_startup_initializer_control'] = 1
    counters['recovered_startup_zero_thunks'] = 1
    for start,end,body in sorted(edits,reverse=True):
        source=source[:start]+body+source[end:]
    return source,counters
