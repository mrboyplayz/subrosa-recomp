"""Malformed ownership sheets must fail before source emission."""
import csv
import tempfile
from pathlib import Path
import unittest
from client_sheet_book import BOOK,load_book,read_sheet,write_sheet,SCHEMAS


class SheetBookTests(unittest.TestCase):
    def test_duplicate_primary_key_is_rejected(self):
        with tempfile.TemporaryDirectory() as td:
            path=Path(td)/'decisions.tsv'
            row={'id':'one','section':'D1','decision':'keep C','reason':'user scope'}
            write_sheet(path,'decisions',SCHEMAS['decisions'],[row,row])
            with self.assertRaisesRegex(ValueError,'E-L0-KEY'):read_sheet(path)

    def test_crlf_is_rejected(self):
        with tempfile.TemporaryDirectory() as td:
            path=Path(td)/'bad.tsv';path.write_bytes(b'# sheet: bad\r\nid:string*\tx:string\r\na\tb\r\n')
            with self.assertRaisesRegex(ValueError,'E-L0-ENCODING'):read_sheet(path)

    def test_unknown_status_and_schema_drift_are_rejected(self):
        with tempfile.TemporaryDirectory() as td:
            directory=Path(td)
            for p in BOOK.glob('*.tsv'):(directory/p.name).write_bytes(p.read_bytes())
            path=directory/'03-impl.tsv';original=path.read_bytes()
            path.write_bytes(original.replace(b'\tpartial\t',b'\tfinished\t',1))
            with self.assertRaisesRegex(ValueError,'E-L1-ENUM'):load_book(directory)
            path.write_bytes(original.replace(b'status:enum',b'status:string',1))
            with self.assertRaisesRegex(ValueError,'E-SCHEMA-DRIFT'):load_book(directory)


if __name__=='__main__':unittest.main()
