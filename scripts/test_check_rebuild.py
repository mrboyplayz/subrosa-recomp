"""Regression checks for mixed GCC and assembler diagnostics."""

import importlib.util
import json
from pathlib import Path
import unittest

spec = importlib.util.spec_from_file_location(
    "check_rebuild", Path(__file__).with_name("check-rebuild.py"))
check_rebuild = importlib.util.module_from_spec(spec)
spec.loader.exec_module(check_rebuild)


class DiagnosticTests(unittest.TestCase):
    def test_mixed_output_preserves_drive_letter_and_counts_assembler_errors(self):
        gcc = {"runs": [{"results": [{"level": "warning"}]}]}
        text = json.dumps(gcc) + (
            '\nC:\\tmp\\client.s: Assembler messages:\n'
            'C:\\tmp\\client.s:123: Error: invalid operand\n'
            'C:\\tmp\\client.s:124: Warning: missing newline\n')
        parsed, assembly, diagnostics = check_rebuild.parse_diagnostics(text)
        self.assertEqual(parsed, gcc)
        self.assertIn('invalid operand', assembly)
        self.assertEqual([d['kind'] for d in diagnostics], ['error', 'warning'])
        self.assertEqual(diagnostics[0]['locations'][0]['caret'],
                         {'file': 'C:\\tmp\\client.s', 'line': 123, 'column': None})

    def test_unknown_trailing_output_cannot_hide_failure(self):
        _, _, diagnostics = check_rebuild.parse_diagnostics(
            '{"runs": []}\ngcc: fatal error: terminated')
        self.assertEqual(diagnostics[0]['kind'], 'error')
        self.assertEqual(diagnostics[0]['stage'], 'toolchain')

    def test_empty_output_and_pure_sarif(self):
        self.assertEqual(check_rebuild.parse_diagnostics(''), ({'runs': []}, '', []))
        self.assertEqual(check_rebuild.parse_diagnostics('  {"runs": []}\n'),
                         ({'runs': []}, '', []))

    def test_multiple_gcc_stages_are_sarif_not_assembler_errors(self):
        stage = {'runs': [{'results': [{'level': 'warning'}]}]}
        text = json.dumps(stage) + '\n' + json.dumps(stage)
        parsed, assembly, diagnostics = check_rebuild.parse_diagnostics(text)
        self.assertEqual(len(parsed['runs']), 2)
        self.assertEqual(assembly, '')
        self.assertEqual(diagnostics, [])


if __name__ == '__main__':
    unittest.main()
