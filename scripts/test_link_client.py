"""Check constant recovery boundaries before source generation."""
from types import SimpleNamespace as NS
import unittest

from link_client import constant_groups


class ConstantTests(unittest.TestCase):
    def image(self, flags=0x40000040, relocation=None):
        section = NS(Characteristics=flags, VirtualAddress=0x1000, SizeOfRawData=0x100)
        return NS(OPTIONAL_HEADER=NS(ImageBase=0x140000000),
                  get_section_by_rva=lambda rva: section,
                  get_data=lambda rva, size: bytes(range(size)),
                  DIRECTORY_ENTRY_BASERELOC=[] if relocation is None else
                      [NS(entries=[NS(rva=relocation, type=10)])])

    def test_overlapping_aliases_share_a_group(self):
        groups = constant_groups(self.image(), ['xmmword_140001010', 'qword_140001018'])
        self.assertEqual(len(groups), 1)
        self.assertEqual(groups[0]['end'] - groups[0]['start'], 16)
        self.assertEqual(len(groups[0]['entries']), 2)

    def test_mutable_executable_and_unreadable_regions_are_rejected(self):
        for flags in (0xc0000040, 0x60000020, 0):
            with self.subTest(flags=flags), self.assertRaises(ValueError):
                constant_groups(self.image(flags), ['qword_140001010'])

    def test_partial_relocation_overlap_is_rejected(self):
        with self.assertRaises(ValueError):
            constant_groups(self.image(relocation=0x100c), ['qword_140001010'])

    def test_file_backed_boundary_is_enforced(self):
        with self.assertRaises(ValueError):
            constant_groups(self.image(), ['xmmword_1400010f8'])


if __name__ == '__main__':
    unittest.main()
