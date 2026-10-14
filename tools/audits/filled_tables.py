import re, struct, subprocess
def pe(path):
    raw = open(path, 'rb').read(); p = struct.unpack_from('<I', raw, 0x3C)[0]
    n, opt = struct.unpack_from('<H', raw, p + 6)[0], struct.unpack_from('<H', raw, p + 20)[0]
    base = struct.unpack_from('<Q', raw, p + 48)[0]; secs = []
    for i in range(n):
        e = p + 24 + opt + 40 * i; vs, rva, rs, ra = struct.unpack_from('<IIII', raw, e + 8); secs.append((base + rva, min(vs, rs) if rs else 0, ra))
    def rd(a, size):
        for va, sz, off in secs:
            if va <= a < va + sz: return raw[off + a - va:off + a - va + size]
        return None
    return rd
orig = pe('re/binaries/subrosa-vanilla.exe'); new = pe('reports/current/link/client-link-probe.exe')
syms = {}
for l in subprocess.run(['nm', 'reports/current/link/client-link-probe.exe'], capture_output=True, text=True).stdout.splitlines():
    part = l.split()
    if len(part) == 3: syms.setdefault(part[2], int(part[0], 16))
text = open('src/client/client_data.c', encoding='utf-8').read()
ok = bad = 0
for m in re.finditer(r'unsigned char (?:sr_bytes_)?((?:unk|off)_(1[4B][0-9A-F]{7}))\[(\d+)\]', text):
    name, addr, size = m.group(1), int(m.group(2), 16), int(m.group(3))
    a, b = orig(addr, size), new(syms[name], size) if name in syms else None
    if a == b: ok += 1
    else: bad += 1; print('DIFFERENT', name, size, 'no symbol' if name not in syms else '')
for name, size in [('unk_140284A60',16),('unk_140284A70',16),('unk_140284B00',16),('unk_140284B10',16),('unk_140284B20',16),('unk_1402B26C0',4)]:
    a, b = orig(int(name.split('_')[1], 16), size), new(syms[name], size)
    ok += a == b; bad += a != b
    if a != b: print('DIFFERENT', name)
print('byte_1402B26C3 is', syms['byte_1402B26C3'] - syms['unk_1402B26C0'], 'bytes into unk_1402B26C0')
print(ok, 'objects match the original byte for byte;', bad, 'differ')
