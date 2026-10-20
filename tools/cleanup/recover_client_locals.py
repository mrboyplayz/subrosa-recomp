"""Recover scoped C local names from their uses, without changing expressions.

Preview by default. --apply writes reviewed and structural role names into
local_names.tsv and updates complete address-marked client blocks. --check
verifies the resulting mapping and reports remaining C identifiers matching
v<number>. Comments, string literals, numeric literals and expressions are
never rewritten. Each changed block must round-trip byte-for-byte through
its inverse identifier mapping before any file is written.
"""
import argparse
import collections
import json
import re
from pathlib import Path
from split_client_modules import CLIENT, PROJECT, blocks

TOKEN = re.compile(r'(?P<comment>/\*[\s\S]*?\*/|//[^\n]*)|'
                   r'(?P<string>(?:u8|[LuU])?"(?:\\[\s\S]|[^"\\])*"|(?:[LuU])?\'(?:\\[\s\S]|[^\'\\])*\')|'
                   r'(?P<number>\b(?:0[xX][0-9a-fA-F]+(?:\.[0-9a-fA-F]*)?(?:[pP][+-]?\d+)?|\d+(?:\.\d*)?(?:[eE][+-]?\d+)?)[uUlLfF]*)|'
                   r'(?P<identifier>\b[A-Za-z_]\w*\b)')
LOCAL = re.compile(r'v\d+\Z')
KNOWN_ARGS = {
    'memcpy': ('destination_buffer', 'source_buffer', 'byte_count'),
    'crt_memcpy': ('destination_buffer', 'source_buffer', 'byte_count'),
    'memmove': ('destination_buffer', 'source_buffer', 'byte_count'),
    'memset': ('destination_buffer', 'fill_byte', 'byte_count'),
    'crt_memset': ('destination_buffer', 'fill_byte', 'byte_count'),
    'memcmp': ('left_buffer', 'right_buffer', 'byte_count'),
    'malloc': ('allocation_size',), 'sr_path_malloc': ('allocation_size',),
    'calloc': ('element_count', 'element_size'),
    'sr_directory_calloc': ('element_count', 'element_size'),
    'realloc': ('allocation_buffer', 'allocation_size'), 'free': ('allocation_buffer',),
    'strlen': ('text_cursor',), 'wcslen': ('wide_text_cursor',),
    'strcmp_sr': ('left_text', 'right_text'), 'strcmp': ('left_text', 'right_text'),
    'strncmp': ('left_text', 'right_text', 'character_count'),
    'strchr': ('text_cursor', 'character_code'),
    'strcpy': ('destination_text', 'source_text'),
    'strncpy': ('destination_text', 'source_text', 'character_count'),
    'fread_sr': ('destination_buffer', 'element_size', 'element_count', 'file_handle'),
    'crt_fread': ('destination_buffer', 'element_size', 'element_count', 'file_handle'),
    'fwrite': ('source_buffer', 'element_size', 'element_count', 'file_handle'),
    'crt_fclose': ('file_handle',),
    'sin': ('angle_radians',), 'cos': ('angle_radians',),
    'sqrt': ('squared_value',), 'fsqrt': ('squared_value',),
    'sr_math_quat_from_mat3': ('quaternion', 'rotation_matrix'),
    'sr_math_mat3_from_quat': ('rotation_matrix', 'quaternion'),
    'sr_net_read_bits': ('decoded_value', 'bit_count'),
    'sr_net_read_bits_scaled': ('decoded_value', 'bit_count', 'scale'),
    'sr_net_write_bits': ('encoded_value', 'bit_count'),
    'sr_net_write_bits_scaled': ('encoded_value', 'bit_count', 'divisor'),
    'sr_net_read_bytes': ('destination_buffer', 'element_size', 'element_count'),
    'sr_net_write_bytes': ('source_buffer', 'element_size', 'element_count'),
    'sr_audio_load_pcm16': ('sound_id', 'byte_count', 'pcm_samples', 'sound_gain'),
    'sr_wave_load': ('file_handle', 'close_file', 'wave_format', 'pcm_data', 'pcm_byte_count'),
    'sr_wave_free': ('pcm_data',),
    'sr_wave_file': ('file_name', 'open_mode'),
    'sr_text_draw_recovered': ('text', 'text_x', 'text_y', 'text_size', 'text_flags',
                               'text_red', 'text_green', 'text_blue', 'text_alpha', 'format_arguments'),
}
STRIDES = {1760: 'item_record_offset', 7166: 'human_record_offset',
           3597: 'player_record_offset', 278720: 'audio_channel_offset',
           47224: 'replication_peer_offset', 263004: 'block_record_offset',
           16387: 'packet_record_offset', 1048782: 'socket_record_offset'}
GENERIC_ARGUMENTS = re.compile(r'^(?:a\d+|v\d+|param_\d+|arg\d+|value|result|input|output|out|p|s|v|a|b|c|d)$')


def identifiers(text):
    return [m.group() for m in TOKEN.finditer(text) if m.lastgroup == 'identifier']


def code_only(text):
    return TOKEN.sub(lambda m: re.sub(r'[^\n]', ' ', m.group())
                     if m.lastgroup in ('comment', 'string') else m.group(), text)


def rename(text, mapping):
    return TOKEN.sub(lambda m: mapping.get(m.group(), m.group())
                     if m.lastgroup == 'identifier' else m.group(), text)


def argument_list(text, start):
    """Balanced argument slices, including nested casts, arrays and calls."""
    depth, begin, parts = 0, start + 1, []
    for pos in range(start, len(text)):
        char = text[pos]
        if char in '([{': depth += 1
        elif char in ')]}':
            depth -= 1
            if depth == 0:
                parts.append(text[begin:pos].strip())
                return parts, pos
        elif char == ',' and depth == 1:
            parts.append(text[begin:pos].strip())
            begin = pos + 1
    return [], start


def parameter_roles():
    roles = dict(KNOWN_ARGS)
    # The readable engine interfaces supply additional evidence for their
    # client adapters. Ignore address names and single-letter parameters.
    for path in (PROJECT / 'src/engine').glob('*.h'):
        text = code_only(path.read_text(encoding='utf-8'))
        for match in re.finditer(r'^\w[^;{}\n]*?\b([a-z]\w+)\s*\(', text, re.M):
            function = match.group(1)
            arguments, end = argument_list(text, match.end() - 1)
            if not arguments or text[end + 1:].lstrip()[:1] != ';': continue
            names = []
            for argument in arguments:
                argument = re.sub(r'\[[^]]*\]', '', argument)
                tokens = re.findall(r'\b[A-Za-z_]\w*\b', argument)
                candidate = tokens[-1] if tokens else ''
                names.append('' if GENERIC_ARGUMENTS.fullmatch(candidate) else candidate)
            roles.setdefault(function, tuple(names))
            roles.setdefault('sr_' + function, tuple(names))
    return roles


def declarations(code, variables):
    found = {}
    for match in re.finditer(r'^\s*([A-Za-z_][A-Za-z_0-9 \t*]*?)\b(v\d+)\s*(\[[^;\n]*\])?\s*;', code, re.M):
        if match.group(2) in variables:
            found[match.group(2)] = (match.group(1).strip(), bool(match.group(3)))
    for variable in variables:
        macro = re.search(r'^#define\s+' + variable + r'\s+([^\n]+)', code, re.M)
        if macro:
            # Stack macros preserve exactly the existing shared frame layout.
            type_match = re.search(r'\(\*\(\s*([A-Za-z_][\w \t*]*?)\s*\(\*', macro.group(1))
            found[variable] = (type_match.group(1).strip() if type_match else 'stack_value',
                               bool(re.search(r'\(\*\)\s*\[', macro.group(1))))
        elif re.search(r'\(\s*\*\s*' + variable + r'\s*\)\s*\(', code):
            found[variable] = ('callback_pointer*', False)
    return found


def useful_name(name):
    return bool(name and not GENERIC_ARGUMENTS.fullmatch(name)
                and not re.search(r'(?:^|_)(?:sub|unk|dword|qword|g|off|byte|sr_mem)_?[0-9A-Fa-f]{6}', name)
                and not name.startswith(('sr_frame_', 'LABEL_')))


def call_result_role(function):
    if function in ('malloc', 'calloc', 'realloc', 'sr_path_malloc', 'sr_directory_calloc'): return 'allocated_buffer'
    if function in ('sin', 'sinf'): return 'sine_value'
    if function in ('cos', 'cosf'): return 'cosine_value'
    if function in ('fabs', 'fabsf', 'abs'): return 'absolute_value'
    if function in ('sqrt', 'sqrtf', 'fsqrt'): return 'square_root'
    if function in ('fmin', 'fminf', 'fmax', 'fmaxf'): return 'limited_value'
    if function in ('strlen', 'wcslen', 'strnlen', 'crt_wcsnlen'): return 'text_length'
    if function in ('strcmp', 'strcmp_sr', 'strncmp', 'memcmp'): return 'comparison_result'
    if function in ('strchr', 'strrchr', 'strstr'): return 'matched_text'
    if function in ('fopen', 'crt_fopen', 'crt_fsopen'): return 'file_handle'
    if function in ('fread_sr', 'crt_fread', 'fwrite'): return 'transferred_count'
    if function in ('fclose', 'crt_fclose'): return 'close_status'
    if function == 'sizeof': return 'byte_size'
    if function.startswith('_bittest'): return 'bit_test_result'
    if function.startswith('_mm_'):
        if 'movemask' in function: return 'lane_mask'
        if 'load' in function: return 'loaded_vector'
        if 'shuffle' in function or 'unpack' in function: return 'reordered_vector'
        if 'cmp' in function: return 'comparison_vector'
        if 'cvt' in function:
            if function.endswith(('_si32', '_si64')): return 'converted_integer'
            if function.endswith(('_f32', '_f64')): return 'converted_float'
            return 'converted_vector'
        if 'xor' in function: return 'xor_vector'
        return 'vector_result'
    if function.startswith('gl'):
        if 'Location' in function: return 'shader_location'
        if 'Create' in function: return 'graphics_object'
        if 'Get' in function: return 'graphics_query_result'
    if function in ('socket_sr', 'accept_sr'): return 'socket_handle'
    if function in ('recv_sr', 'recvfrom_sr'): return 'received_byte_count'
    if function in ('send_sr', 'sendto_sr'): return 'sent_byte_count'
    if function.startswith(('CreateThread', '_beginthread')): return 'thread_handle'
    if function in ('GetLastError', 'WSAGetLastError'): return 'error_code'
    if function.startswith(('GetModuleHandle', 'LoadLibrary')): return 'module_handle'
    if function == 'GetProcAddress': return 'procedure_address'
    if function.startswith(('memcpy', 'memmove', 'crt_memcpy', 'memset', 'crt_memset')): return 'destination_buffer'
    if function.startswith(('SR_VEC_', 'COERCE_', 'LODWORD', 'HIDWORD')): return ''
    if useful_name(function) and not function.startswith(('sub_', 'j_')):
        stem = re.sub(r'^(?:sr_|crt_|math_|physics_|world_|menu_|renderer_|collision_)', '', function)
        stem = re.sub(r'^(?:get_|read_|find_|create_|allocate_|decode_)', '', stem)
        return stem[:40] + '_result' if len(stem) < 34 else 'named_call_result'
    return ''


def infer_roles(block, variables, role_arguments):
    all_code = code_only(block)
    types = declarations(all_code, variables)
    code = re.sub(r'^\s*#(?:define|undef)[^\n]*', '', all_code, flags=re.M)
    candidates = {v: [] for v in variables}
    def offer(variable, role, score, evidence):
        if variable in candidates and role:
            role = re.sub(r'[^a-zA-Z0-9_]', '_', role).lower().strip('_')
            role = re.sub(r'_+', '_', role)
            if len(role) <= 52 and not LOCAL.fullmatch(role): candidates[variable].append((score, role, evidence))
    # Names proved by known call argument positions, not by filename guesses.
    for match in re.finditer(r'\b([A-Za-z_]\w*)\s*\(', code):
        function = match.group(1)
        if function not in role_arguments: continue
        arguments, _ = argument_list(code, match.end() - 1)
        for index, (argument, role) in enumerate(zip(arguments, role_arguments[function])):
            locals_in_arg = set(re.findall(r'\bv\d+\b', argument)) & variables
            if len(locals_in_arg) != 1 or not role: continue
            # An expression such as x*y is not itself either input variable.
            stripped = re.sub(r'\([^()]*\*[^()]*\)', '', argument)
            stripped = re.sub(r'\([^()]*(?:int|float|double|BYTE|WORD|__m128)[^()]*\)', '', stripped)
            if not re.fullmatch(r'\s*&?\s*v\d+\s*', stripped): continue
            variable = next(iter(locals_in_arg))
            offer(variable, role, 90 if '&' in stripped else 78,
                  '%s argument %d (%s)' % (function, index + 1, role))
    assignments = collections.defaultdict(list)
    for match in re.finditer(r'\b(v\d+)\s*=(?!=)\s*', code):
        if match.group(1) not in variables: continue
        # An assignment embedded in a condition or initializer ends at its
        # first un-nested comma/semicolon/closing parenthesis.
        depth, end = 0, match.end()
        while end < len(code):
            char = code[end]
            if char in '([{': depth += 1
            elif char in ')]}':
                if not depth: break
                depth -= 1
            elif not depth and char in ',;': break
            end += 1
        assignments[match.group(1)].append(code[match.end():end].strip())
    lines_by_local = collections.defaultdict(list)
    for line in code.splitlines():
        for variable in set(re.findall(r'\bv\d+\b', line)) & variables:
            lines_by_local[variable].append(line)
    for variable in variables:
        escaped = re.escape(variable)
        ctype, is_array = types.get(variable, ('', False))
        uses = lines_by_local[variable]
        live = [line for line in uses if not re.match(r'\s*(?:#define|#undef)', line)
                and not re.match(r'\s*[A-Za-z_][\w \t*]*\b' + escaped + r'(?:\[[^]]+\])?\s*;', line)]
        pointer = '*' in ctype
        floating = any(t in ctype for t in ('float', 'double'))
        vector = any(t in ctype for t in ('__m128', '__int128', '_OWORD'))
        if not live:
            macro = re.search(r'^#define\s+' + escaped + r'[^\n]*sr_frame_\w+\s*\+\s*(\d+)', all_code, re.M)
            orphan = re.search(r'^#undef\s+' + escaped + r'\b', all_code, re.M) and not re.search(r'^#define\s+' + escaped + r'\b', all_code, re.M)
            offer(variable, 'unused_frame_slot_' + macro.group(1) if macro else
                  'unused_macro_alias' if orphan else 'unused_local', 100, 'no executable uses')
        if re.search(r'\b' + escaped + r'\s*\(', code) and not re.search(r'^\s*(?:void|int|__int64)\s+' + escaped, code, re.M):
            offer(variable, 'callback_function', 88, 'invoked as a function pointer')
        if 'callback_pointer' in ctype:
            offer(variable, 'callback_function', 87, 'declared function pointer')
        if re.search(r'\b' + escaped + r'\s*\|=|\b' + escaped + r'\s*&=', code):
            offer(variable, 'option_flags', 66, 'updated with bitwise flags')
        if re.search(r'\b' + escaped + r'\s*>>=', code):
            offer(variable, 'remaining_bits', 68, 'consumed by repeated right shifts')
        if re.search(r'\b' + escaped + r'\s*\+=', code):
            offer(variable, 'running_total', 49, 'accumulated across assignments')
        if re.search(r'\b' + escaped + r'\s*-=', code):
            offer(variable, 'remaining_amount', 50, 'decreased across assignments')
        if re.search(r'(?:\+\+|--)\s*' + escaped + r'\b|\b' + escaped + r'\s*(?:\+\+|--)', code):
            if pointer: offer(variable, 'text_cursor' if 'char' in ctype else 'buffer_cursor', 76, 'incremented pointer')
            elif re.search(r'--\s*' + escaped + r'\b|\b' + escaped + r'\s*--', code):
                offer(variable, 'remaining_count', 73, 'decrementing loop count')
            elif re.search(r'\[[^]\n]*\b' + escaped + r'\b', code): offer(variable, 'element_index', 75, 'incrementing array index')
            else: offer(variable, 'iteration_count', 68, 'incrementing counter')
        if re.search(r'\b' + escaped + r'\s*\+=\s*(?:4|8|12|16|24|32|36|48|64)\b', code):
            offer(variable, 'record_byte_offset', 74, 'advances by a fixed record stride')
        if re.search(r'\breturn\s+' + escaped + r'\s*;', code): offer(variable, 'return_value', 25, 'returned from function')
        if re.search(r'(?:_bittest|_bittestandset)\s*\(\s*&' + escaped, code): offer(variable, 'bit_mask', 86, 'bit-test input')
        if re.search(r'\b' + escaped + r'\s*=\s*L?"', block):
            offer(variable, 'literal_text', 81, 'string literal assignment')
        if re.search(r'\b(?:LODWORD|HIDWORD)\s*\(\s*' + escaped + r'\s*\)\s*=', code):
            offer(variable, 'packed_word_bits', 46, 'writes through an integer-word view')
        if re.search(r'\(float\s*\*\)\s*&' + escaped + r'\b|\*\s*\(float\s*\*\)\s*&' + escaped, code):
            offer(variable, 'float_word', 52, 'float bits carried in another scalar type')
        for expression in assignments[variable]:
            calls = re.findall(r'\b([A-Za-z_]\w*)\s*\(', expression)
            for call in calls:
                role = call_result_role(call)
                if role: offer(variable, role, 82 if not call.startswith(('sub_', 'SR_VEC_')) else 50, 'result of ' + call)
                elif call.startswith(('sub_', 'j_')):
                    offer(variable, 'returned_pointer' if pointer else 'call_result', 39, 'result of an unnamed recovered callee')
                elif re.match(r'(?:off|qword)_', call):
                    offer(variable, 'callback_result', 40, 'result of an indirect function call')
            stride = re.match(r'(\d+)(?:LL|ULL|u|LLu)?\s*\*\s*(?:\([^)]*\)\s*)?a\d+\b', expression)
            if stride:
                count = int(stride.group(1))
                offer(variable, STRIDES.get(count, 'record_word_offset'), 86 if count in STRIDES else 60, 'record stride %d' % count)
            component = re.fullmatch(r'(?:\([^)]*\)\s*)*(a\d+|[A-Za-z_]\w*)\s*\[\s*([0-3])\s*\]', expression)
            if component and floating:
                offer(variable, 'source_component_' + 'xyzw'[int(component.group(2))], 70, 'float source element ' + component.group(2))
            member = re.search(r'->\s*([A-Za-z_]\w*)|\.\s*([A-Za-z_]\w*)', expression)
            if member:
                field = member.group(1) or member.group(2)
                if useful_name(field): offer(variable, 'cached_' + field, 80, 'read named member ' + field)
            single = re.fullmatch(r'(?:\([^)]*\)\s*)*([A-Za-z_]\w*)', expression)
            if single and useful_name(single.group(1)) and single.group(1) not in ('nullptr', 'NULL', 'true', 'false'):
                offer(variable, 'cached_' + single.group(1).removeprefix('sr_'), 77, 'copy of named value ' + single.group(1))
            if single and re.fullmatch(r'(?:g|dword|qword|word|byte|flt|dbl)_[0-9A-Fa-f]+', single.group(1)):
                offer(variable, 'state_pointer' if pointer else 'state_scalar' if floating else 'state_word', 42, 'read of recovered global state')
            if re.match(r'(?:\([^)]*\)\s*)*&\s*\w+', expression):
                offer(variable, 'state_address', 65, 'address of recovered storage')
            if re.fullmatch(r'(?:\([^)]*\)\s*)*a\d+', expression):
                offer(variable, 'input_cursor' if pointer else 'input_value', 32, 'copy of function input')
            if re.fullmatch(r'(?:\([^)]*\)\s*)*result', expression):
                offer(variable, 'saved_call_status', 40, 'saved function result/status')
            if re.fullmatch(r'\*\s*(?:\([^)]*\)\s*)*(?:v\d+|a\d+)(?:\+\+)?', expression):
                offer(variable, 'loaded_float' if floating else 'input_byte' if 'char' in ctype else 'loaded_word',
                      44, 'dereference of input storage')
            if floating and re.search(r'\b(v\d+|a\d+)\b\s*\*\s*\1\b', expression):
                offer(variable, 'squared_length' if '+' in expression else 'squared_component', 67, 'sum of squared components' if '+' in expression else 'squared component')
            if floating and '*' in expression and '-' in expression and '+' in expression:
                offer(variable, 'combined_products', 48, 'floating-point products, differences and sum')
            elif floating and '*' in expression and '-' in expression:
                offer(variable, 'product_difference', 50, 'floating-point multiplication and subtraction')
            elif floating and '*' in expression and '+' in expression:
                offer(variable, 'weighted_sum', 51, 'sum of floating-point products')
            elif floating and '/' in expression: offer(variable, 'scaled_ratio', 55, 'floating-point division')
            elif floating and '*' in expression: offer(variable, 'scaled_value', 45, 'floating-point multiplication')
            elif floating and '-' in expression: offer(variable, 'component_delta', 47, 'floating-point subtraction')
            elif floating and '+' in expression: offer(variable, 'component_sum', 43, 'floating-point addition')
            if re.search(r'<<|>>', expression): offer(variable, 'shifted_bits', 63, 'bit shift')
            if re.search(r'\^', expression): offer(variable, 'xor_value', 61, 'bitwise XOR')
            if re.search(r'[\w)]\s*&\s*[\w(]', expression) and not pointer and not floating:
                offer(variable, 'masked_bits', 58, 'bitwise mask')
            if re.search(r'(?:==|!=|<=|>=|(?<![<])<(?![<])|(?<![>])>(?![>]))', expression) and not calls:
                offer(variable, 'comparison_result', 64, 'comparison expression')
            if re.search(r'\*\s*\([^)]*\*\)', expression):
                offer(variable, 'loaded_record_pointer' if pointer else 'loaded_float' if floating else 'loaded_word', 41, 'typed memory load')
            if re.match(r'&\s*\w+\s*\[', expression): offer(variable, 'record_cursor', 57, 'indexed record address')
            if re.search(r'\[', expression) and not floating: offer(variable, 'table_value', 35, 'indexed table read')
            if not floating and not pointer and not vector:
                if '/' in expression: offer(variable, 'integer_quotient', 38, 'integer division')
                elif '*' in expression: offer(variable, 'scaled_index', 37, 'integer multiplication')
                elif '-' in expression: offer(variable, 'integer_difference', 36, 'integer subtraction')
                elif '+' in expression: offer(variable, 'integer_sum', 34, 'integer addition')
        if is_array: offer(variable, 'float_buffer' if floating else 'scratch_buffer', 28, 'local array')
        # Explicitly distinguish write-only recovery slots and missing
        # register/ABI inputs from values whose domain meaning is known.
        reads = []
        for line in live:
            stripped = re.sub(r'\b' + escaped + r'\s*=(?!=)', '', line)
            if re.search(r'\b' + escaped + r'\b', stripped): reads.append(line)
        if live and not reads:
            offer(variable, 'unused_written_slot', 85, 'written but never read in recovered code')
        if not assignments[variable] and not re.search(r'&\s*' + escaped + r'\b', code) and not is_array:
            declaration_uses = sum(1 for line in uses if re.match(r'\s*[A-Za-z_][\w \t*]*\b' + escaped + r'\s*;', line))
            if declaration_uses and live:
                offer(variable, 'unrecovered_register_value', 31, 'read without an initializer in the decompiler output')
        if re.search(r'&\s*' + escaped + r'\b', code) and not pointer and not vector and not floating:
            offer(variable, 'callee_output_word', 29, 'address passed to another operation')
        if re.search(r'\[[^]\n]*\b' + escaped + r'\b', code) and not pointer and not floating:
            offer(variable, 'lookup_index', 30, 'used to index storage')
        constants = assignments[variable]
        if constants and all(re.fullmatch(r'(?:0[xX][0-9A-Fa-f]+|\d+)(?:[uUlL]*)', value) for value in constants):
            offer(variable, 'selection_flag' if set(constants) <= {'0', '1'} else 'selection_code',
                  33, 'selected literal flag/code values')
        if vector: offer(variable, 'packed_vector', 23, 'packed SIMD storage')
        elif pointer:
            offer(variable, 'file_handle' if 'FILE' in ctype else 'wide_text_cursor' if 'wchar' in ctype else
                  'byte_cursor' if 'char' in ctype or '_BYTE' in ctype else 'record_pointer', 21, 'pointer storage and uses')
        elif floating: offer(variable, 'scalar_value', 11, 'floating-point storage')
        elif 'bool' in ctype or 'BOOL' in ctype: offer(variable, 'condition_flag', 22, 'boolean storage')
        else: offer(variable, 'integer_value', 10, 'integer or raw-word storage')
    # Copies inherit a known computational role without implying a new game
    # meaning. Use the previous pass so cycles cannot inflate their scores.
    best = {v: max(candidates[v], key=lambda x: (x[0], -len(x[1]))) for v in variables}
    for variable in variables:
        for expression in assignments[variable]:
            match = re.fullmatch(r'(?:\([^)]*\)\s*)*(v\d+)', expression)
            if match and match.group(1) in best and best[match.group(1)][0] >= 40:
                score, role, _ = best[match.group(1)]
                offer(variable, 'saved_' + role, min(score - 1, 66), 'copy of ' + match.group(1))
    return {v: max(candidates[v], key=lambda x: (x[0], -len(x[1]))) for v in variables}


def refine_roles(block, inferred):
    """Refine opaque scalar names through copies, lanes and frame offsets.

    The names describe visible storage/operations when the original game
    field meaning is unavailable. They never infer an entity from a filename.
    """
    code = code_only(block)
    generic = {'integer_value', 'scalar_value'}
    result = dict(inferred)
    copies = collections.defaultdict(list)
    for match in re.finditer(r'\b(v\d+)\s*=\s*(?:\([^();]*\)\s*)*(v\d+)\s*[;,)]', code):
        copies[match.group(1)].append(match.group(2))
    def propagate():
        for _ in range(16):
            changed = False
            for target, sources in copies.items():
                if target not in result or result[target][1] not in generic: continue
                for source in sources:
                    if source == target or source not in result or result[source][1] in generic: continue
                    _, role, _ = result[source]
                    role = re.sub(r'^(?:(?:saved|cached)_)+', '', role)
                    if len(role) > 38: continue
                    result[target] = (43, 'cached_' + role, 'retained copy of ' + source)
                    changed = True
                    break
            if not changed: break
    propagate()
    for variable, (score, role, evidence) in list(result.items()):
        if role not in generic: continue
        floating = role == 'scalar_value'
        assignment = re.search(r'\b' + variable + r'\s*=\s*([^;\n]+)', code)
        expression = assignment.group(1) if assignment else ''
        frame = re.search(r'^#define\s+' + variable + r'[^\n]*sr_frame_\w+\s*\+\s*(\d+)', code, re.M)
        indexed = re.fullmatch(r'(?:v\d+|a\d+)\s*\[\s*(\d+)\s*\]\s*', expression)
        lane = re.search(r'SR_VEC_\w+\(.*\)\s*\[\s*(\d+)\s*\]', expression)
        if floating and indexed:
            role, evidence = 'source_float_' + indexed.group(1), 'read source float element ' + indexed.group(1)
        elif floating and lane:
            role, evidence = 'float_lane_' + lane.group(1), 'read SIMD float lane ' + lane.group(1)
        elif frame:
            kind = 'float' if floating else 'word'
            role, evidence = 'frame_' + kind + '_at_' + frame.group(1), 'field in the shared frame at byte ' + frame.group(1)
        elif re.search(r'\b' + variable + r'\s*=\s*[^;]*\|[^|]', code):
            role, evidence = 'combined_flags', 'bitwise OR of flags'
        elif re.search(r'\b' + variable + r'\s*=\s*-1\b', code):
            role, evidence = 'sentinel_word', 'negative-one sentinel assignment'
        elif re.search(r'\b' + variable + r'\s*=\s*-?\d+(?:\.\d+)?[fFuUlL]*\s*;', code):
            role, evidence = 'selected_scalar' if floating else 'selected_word', 'selected constant or retained word'
        else:
            # Usage descriptions are intentionally less specific than game
            # field names: they remain true even for repurposed registers.
            uses = [line for line in code.splitlines() if re.search(r'\b' + variable + r'\b', line)
                    and not re.match(r'^\s*#', line)]
            text = '\n'.join(uses)
            if re.search(r'\bswitch\s*\(\s*' + variable, text):
                role, evidence = 'dispatch_code', 'switch selector'
            elif re.search(r'\b' + variable + r'\b\s*[<>!=]=?|[<>!=]=?\s*\b' + variable + r'\b', text):
                role, evidence = 'comparison_operand', 'operand of a conditional comparison'
            elif re.search(r'\b' + variable + r'\b\s*[*\/]|[*\/]\s*\b' + variable + r'\b', text):
                role, evidence = 'scale_operand', 'multiplication or division operand'
            elif re.search(r'\b' + variable + r'\b\s*[+-]|[+-]\s*\b' + variable + r'\b', text):
                role, evidence = 'offset_operand', 'addition or subtraction operand'
            elif re.search(r'=\s*' + variable + r'\s*;', text):
                role, evidence = 'transferred_scalar' if floating else 'transferred_word', 'copied between storage locations'
            else:
                role, evidence = 'scalar_argument' if floating else 'word_argument', 'raw input to a recovered operation'
        result[variable] = (41, role, evidence)
    propagate()
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group()
    mode.add_argument('--apply', action='store_true')
    mode.add_argument('--check', action='store_true')
    parser.add_argument('--report', type=Path, default=PROJECT / 'build/all-local-names-20261020/plan.json')
    args = parser.parse_args()
    texts = {p: p.read_bytes().decode('utf-8') for p in CLIENT.glob('client_*.c')}
    roles = parameter_roles()
    overrides_path = Path(__file__).with_name('local_role_overrides.json')
    overrides = json.loads(overrides_path.read_text(encoding='utf-8')) if overrides_path.exists() else {}
    reserved = set()
    for path in (PROJECT / 'src').rglob('*.h'):
        reserved.update(re.findall(r'^\s*#\s*define\s+(\w+)', path.read_text(encoding='utf-8'), re.M))
    report, changed, registry = [], {}, []
    for path, text in texts.items():
        # All generated names avoid existing identifiers throughout the TU,
        # including typedefs and macros from the maintained shared headers.
        file_reserved = reserved | set(identifiers(text))
        head, source_blocks = blocks(text)
        output = [head]
        for address, block in source_blocks:
            variables = {n for n in identifiers(block) if LOCAL.fullmatch(n)}
            if not variables:
                output.append(block)
                continue
            inferred = refine_roles(block, infer_roles(block, variables, roles))
            used = set(file_reserved)
            mapping = {}
            for variable in sorted(variables, key=lambda x: int(x[1:])):
                score, role, evidence = inferred[variable]
                if variable in overrides.get(address, {}):
                    role = overrides[address][variable]
                    score, evidence = 100, 'reviewed function-specific role'
                name, index = role, 2
                while name in used:
                    name = role + '_' + str(index)
                    index += 1
                used.add(name)
                mapping[variable] = name
                registry.append('%s\t%s\t%s\n' % (address, variable, name))
                report.append(dict(address=address, file=path.name, old=variable, name=name,
                                   role=role, score=score, evidence=evidence))
            replacement = rename(block, mapping)
            if rename(replacement, {v: k for k, v in mapping.items()}) != block:
                raise SystemExit('inverse name check failed: ' + address)
            if any(LOCAL.fullmatch(n) for n in identifiers(replacement)):
                raise SystemExit('unmapped local: ' + address)
            output.append(replacement)
        result = ''.join(output)
        if result != text:
            changed[path] = result
            print('%s: %d names planned' % (path.name, sum(r['file'] == path.name for r in report)), flush=True)
    summary = dict(locals=len(report), files=len(changed), functions=len({r['address'] for r in report}),
                   reviewed=sum(r['score'] == 100 and r['evidence'].startswith('reviewed') for r in report),
                   structural_low_confidence=sum(r['score'] < 30 for r in report))
    if args.check:
        remaining = []
        for path in (PROJECT / 'src').rglob('*'):
            if path.suffix not in ('.c', '.h'): continue
            names = sorted({n for n in identifiers(path.read_text(encoding='utf-8')) if LOCAL.fullmatch(n)})
            if names: remaining.append('%s: %s' % (path.relative_to(PROJECT), ', '.join(names)))
        if remaining:
            raise SystemExit('remaining v<number> identifiers:\n' + '\n'.join(remaining))
        print('No v<number> C identifiers in any maintained src/ C file or header.')
        return
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(dict(summary=summary, mappings=report), indent=2), encoding='utf-8')
    print(json.dumps(summary))
    print('Most common roles:', collections.Counter(r['role'] for r in report).most_common(18))
    if not args.apply:
        print('Preview saved to', args.report)
        return
    # Inverse checks above run for every block before the first source write.
    for path, result in changed.items(): path.write_bytes(result.encode('utf-8'))
    with (CLIENT / 'local_names.tsv').open('a', encoding='utf-8', newline='\n') as stream:
        stream.write('\n# Complete scoped local naming pass; evidence in build/all-local-names-20261020/plan.json.\n')
        stream.writelines(registry)
    print('Applied %d scoped names to %d files.' % (len(report), len(changed)))


if __name__ == '__main__':
    main()
