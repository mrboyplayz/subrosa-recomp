"""Compare the recorded import inventory with the original PE import table."""
import hashlib
import json
from pathlib import Path

import pefile

PROJECT = Path(__file__).resolve().parent.parent
REFERENCE_SHA256 = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    binary = PROJECT.parent / 'subrosa.exe'
    digest = hashlib.sha256(binary.read_bytes()).hexdigest()
    if digest != REFERENCE_SHA256:
        raise RuntimeError('Reference executable changed')
    pe = pefile.PE(str(binary))
    records = json.loads((PROJECT / 'exports/client/imports.json').read_text(encoding='utf-8'))
    def module(name):
        return name.lower().removesuffix('.dll')
    actual = {(module(d.dll.decode()), i.address,
               i.name.decode() if i.name else '#'+str(i.ordinal))
              for d in pe.DIRECTORY_ENTRY_IMPORT for i in d.imports}
    # IDA uses __imp_ names for the 22 Winsock IAT symbols. This is symbol
    # decoration, not part of the name requested from the DLL by the loader.
    expected = {(module(i['module']), int(i['address'], 16), i['name'].removeprefix('__imp_'))
                for i in records}
    if actual != expected:
        raise RuntimeError(f'Import inventory differs: {actual-expected}, {expected-actual}')
    report = {'reference_sha256': digest,
              'entry_point': hex(pe.OPTIONAL_HEADER.ImageBase+pe.OPTIONAL_HEADER.AddressOfEntryPoint),
              'entry_bytes': pe.get_data(pe.OPTIONAL_HEADER.AddressOfEntryPoint, 18).hex(),
              'import_count': len(actual), 'recorded_imports_match': True,
              'name_normalization': 'Strip IDA __imp_ prefix; normalize DLL case and suffix.',
              'modules': [{'name': d.dll.decode(), 'count': len(d.imports)}
                          for d in pe.DIRECTORY_ENTRY_IMPORT],
              'delay_imports': len(getattr(pe, 'DIRECTORY_ENTRY_DELAY_IMPORT', []))}
    output = PROJECT / 'reports/client-import-check-20261001/verification.json'
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, indent=2)+'\n', encoding='utf-8')
    print(f'All {len(actual)} import names and IAT addresses match after IDA name normalization.')


if __name__ == '__main__':
    main()
