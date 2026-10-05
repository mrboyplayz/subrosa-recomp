"""Match exported scalar square-root sites to the pinned client's SQRTSS inventory."""
import hashlib
from client_sources import read_client_source
import json
from pathlib import Path
import re

import capstone
import pefile

PROJECT = Path(__file__).resolve().parent.parent
REFERENCE_SHA256 = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != REFERENCE_SHA256:
        raise RuntimeError('Reference executable changed')
    export = (PROJECT / 'exports/client/subrosa.c').read_bytes()
    prepared = read_client_source()
    def ranges(source):
        markers = list(re.finditer(rb'(?m)^//----- \(([0-9A-Fa-f]+)\)', source))
        return {int(m[1], 16): source[m.end():markers[i+1].start()
                if i+1 < len(markers) else len(source)] for i, m in enumerate(markers)}
    originals, current = ranges(export), ranges(prepared)
    starts = sorted(originals)
    pe = pefile.PE(str(binary), fast_load=True)
    base = pe.OPTIONAL_HEADER.ImageBase
    disassembler = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    inventory = []
    for index, address in enumerate(starts):
        calls = len(re.findall(rb'\bfsqrt\(', originals[address]))
        if not calls:
            continue
        if index+1 == len(starts):
            raise RuntimeError('Final function needs an independently recovered end')
        instructions = disassembler.disasm(
            pe.get_data(address-base, starts[index+1]-address), address)
        sites = [i.address for i in instructions if i.mnemonic == 'sqrtss']
        prepared_calls = len(re.findall(rb'\bfsqrt\(', current[address]))
        if calls != len(sites) or calls != prepared_calls:
            raise RuntimeError(f'SQRTSS inventory differs at {address:#x}')
        inventory.append({'function': hex(address), 'calls': calls,
                          'sqrtss': [hex(site) for site in sites]})
    if len(inventory) != 180 or sum(i['calls'] for i in inventory) != 562:
        raise RuntimeError('Expected scalar square-root coverage changed')
    report = {'reference_sha256': REFERENCE_SHA256,
              'prepared_sha256': hashlib.sha256(prepared).hexdigest(),
              'functions': 180, 'sites': 562, 'inventory': inventory,
              'limit': 'Instruction counts and widths; complete containing functions remain unverified.'}
    output = PROJECT / 'reports/client-sqrt-recovery-20261001/instruction-inventory.json'
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, indent=2)+'\n', encoding='utf-8')
    print(f'Checked {report["sites"]} SQRTSS sites in {report["functions"]} functions')


if __name__ == '__main__':
    main()
