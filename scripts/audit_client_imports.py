"""Compare the recorded import inventory with the original PE import table."""
import hashlib
import json
import argparse
from pathlib import Path

import pefile

PROJECT = Path(__file__).resolve().parent.parent
REFERENCE_SHA256 = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--executable', type=Path,
                        help='also check that a rebuilt executable imports every original API from its original DLL')
    args = parser.parse_args()
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
    if args.executable:
        rebuilt = pefile.PE(str(args.executable))
        wanted = {(dll, name) for dll, address, name in actual}
        observed = {(module(d.dll.decode()), i.name.decode() if i.name else '#'+str(i.ordinal))
                    for d in rebuilt.DIRECTORY_ENTRY_IMPORT for i in d.imports}
        missing = sorted(wanted - observed)
        if missing:
            raise RuntimeError('Rebuilt client is missing original DLL imports: '+str(missing))
        report['rebuilt'] = {'path': str(args.executable.resolve()),
                             'sha256': hashlib.sha256(args.executable.read_bytes()).hexdigest(),
                             'all_original_dll_imports_present': True,
                             'original_api_count': len(wanted),
                             'additional_api_count': len(observed-wanted)}
    output = PROJECT / 'reports/client-import-check-20261001/verification.json'
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, indent=2)+'\n', encoding='utf-8')
    print(f'All {len(actual)} import names and IAT addresses match after IDA name normalization.')
    if args.executable:
        print(f'Rebuilt client imports all {len(wanted)} original APIs from their original DLLs.')


if __name__ == '__main__':
    main()
