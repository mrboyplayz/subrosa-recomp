"""Direct C edits survive inventory reads; ownership mistakes stop compilation."""
import json
from pathlib import Path
import tempfile
import unittest
from client_sources import load_modules, read_client_source


class ClientSourceTests(unittest.TestCase):
    def fixture(self, directory):
        directory.joinpath('shared_client.h').write_bytes(b'extern int shared;\nint first(void);\nint second(void);\n')
        directory.joinpath('client_data.c').write_bytes(b'#include "shared_client.h"\nint shared = 3;\n')
        directory.joinpath('client_humans.c').write_bytes(b'#include "shared_client.h"\n//----- (0000000140001000)\nint first(void) { return shared; }\n')
        directory.joinpath('client_vehicles.c').write_bytes(b'#include "shared_client.h"\n//----- (0000000140021000)\nint second(void) { return first() + 1; }\n')
        record = {'layout': 'maintained_c_modules', 'functions': [
            {'name': 'first', 'module': 'client_humans.c', 'source_line': 1},
            {'name': 'second', 'module': 'client_vehicles.c', 'source_line': 2}],
            'translation_units': [{'path': n} for n in ('client_data.c', 'client_humans.c', 'client_vehicles.c')]}
        directory.joinpath('manifest.json').write_text(json.dumps(record))
        return record

    def test_direct_edits_are_read_without_regeneration_or_monolith(self):
        with tempfile.TemporaryDirectory() as td:
            directory = Path(td)
            self.fixture(directory)
            first = load_modules(directory)
            c = directory / 'client_humans.c'
            c.write_bytes(c.read_bytes().replace(b'return shared;', b'return shared + 20;'))
            snapshots = {p: (p.read_bytes(), p.stat().st_mtime_ns) for p in directory.iterdir()}
            second = load_modules(directory)
            self.assertNotEqual(first['translation_units'][1]['sha256'], second['translation_units'][1]['sha256'])
            source = read_client_source(directory)
            self.assertIn(b'return shared + 20;', source)
            self.assertLess(source.index(b'(0000000140001000)'), source.index(b'(0000000140021000)'))
            self.assertFalse((directory / 'subrosa.c').exists())
            for p, (content, mtime) in snapshots.items():
                self.assertEqual(p.read_bytes(), content)
                self.assertEqual(p.stat().st_mtime_ns, mtime)

    def test_missing_duplicate_and_misrouted_definitions_fail(self):
        with tempfile.TemporaryDirectory() as td:
            directory = Path(td)
            record = self.fixture(directory)
            c = directory / 'client_vehicles.c'
            original = c.read_bytes()
            c.write_bytes(b'#include "shared_client.h"\n')
            with self.assertRaisesRegex(ValueError, 'ownership'): load_modules(directory)
            c.write_bytes(original.replace(b'second(void)', b'first(void)'))
            with self.assertRaisesRegex(ValueError, 'Duplicate C body'): load_modules(directory)
            c.write_bytes(original)
            record['functions'][0]['module'] = 'client_vehicles.c'
            directory.joinpath('manifest.json').write_text(json.dumps(record))
            with self.assertRaisesRegex(ValueError, 'ownership'): load_modules(directory)
            record['translation_units'][0]['path'] = '../escape.c'
            directory.joinpath('manifest.json').write_text(json.dumps(record))
            with self.assertRaisesRegex(ValueError, 'Invalid'): load_modules(directory)


if __name__ == '__main__': unittest.main()
