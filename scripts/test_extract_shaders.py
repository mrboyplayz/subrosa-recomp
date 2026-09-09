import hashlib
from pathlib import Path
import struct
import tempfile
import unittest

from extract_shaders import PEData, PROJECT, extract


def fixture(raw=b"hello\0", virtual_size=100):
    data = bytearray(0x200 + len(raw))
    data[:2] = b"MZ"
    struct.pack_into("<I", data, 0x3c, 0x80)
    data[0x80:0x84] = b"PE\0\0"
    struct.pack_into("<HHIIIHH", data, 0x84, 0x8664, 1, 0, 0, 0, 0xf0, 0)
    struct.pack_into("<H", data, 0x98, 0x20b)
    struct.pack_into("<Q", data, 0xb0, 0x140000000)
    struct.pack_into("<8sIIII", data, 0x188, b".data", virtual_size, 0x1000, len(raw), 0x200)
    data[0x200:] = raw
    return bytes(data)


class ShaderExtractionTests(unittest.TestCase):
    def test_file_backed_string(self):
        self.assertEqual(PEData(fixture()).c_string(0x1000), (0x200, b"hello"))

    def test_zero_fill_is_not_a_string(self):
        with self.assertRaises(ValueError):
            PEData(fixture()).c_string(0x1010)

    def test_unterminated(self):
        with self.assertRaises(ValueError):
            PEData(fixture(b"hello")).c_string(0x1000)

    def test_truncation(self):
        for end in (0, 63, 128, 152, 392, 510, 514):
            with self.assertRaises(ValueError):
                PEData(fixture()[:end])

    def test_wrong_hash_writes_nothing(self):
        with tempfile.TemporaryDirectory() as tmp:
            exe = Path(tmp) / "wrong.exe"
            output = Path(tmp) / "output"
            exe.write_bytes(fixture())
            with self.assertRaises(ValueError):
                extract(exe, output)
            self.assertFalse(output.exists())

    def test_original_round_trip(self):
        exe = PROJECT.parent / "subrosa.exe"
        if not exe.exists():
            self.skipTest("Original executable not installed")
        original = exe.read_bytes()
        with tempfile.TemporaryDirectory() as tmp:
            manifest = extract(exe, Path(tmp))
            self.assertEqual(len(manifest["stages"]), 27)
            self.assertEqual({s["program"] for s in manifest["stages"]}, set(range(13)))
            for stage in manifest["stages"]:
                source = (Path(tmp) / stage["file"]).read_bytes()
                offset = stage["file_offset"]
                self.assertEqual(source, original[offset:offset + stage["bytes"]])
                self.assertEqual(original[offset + stage["bytes"]], 0)
                self.assertEqual(hashlib.sha256(source).hexdigest(), stage["sha256"])


if __name__ == "__main__":
    unittest.main()
