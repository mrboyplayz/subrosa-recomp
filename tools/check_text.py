"""Check tracked text files for invalid UTF-8 and leftover merge markers.

    python tools/check_text.py

Reads every file git tracks with a text extension. A file saved in a
legacy code page (a lone 0xB7 for a middle dot, for example) fails the
UTF-8 decode; a conflict that was committed unresolved fails the marker
check.
"""
import re
import subprocess
import sys
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent
TEXT = {'.c', '.h', '.py', '.md', '.tsv', '.txt', '.cmake', '.yml', '.yaml',
        '.json', '.mutations', '.glsl', '.vert', '.frag', '.ps1', '.sh'}
MARKER = re.compile(r'^(<<<<<<< |=======$|>>>>>>> )', re.M)


def main():
    files = subprocess.run(['git', 'ls-files', '-z'], cwd=PROJECT, check=True,
                           capture_output=True).stdout.decode('utf-8').split('\0')
    problems = []
    checked = 0
    for name in files:
        path = PROJECT / name
        if not name or path.suffix.lower() not in TEXT or not path.is_file():
            continue
        checked += 1
        data = path.read_bytes()
        try:
            text = data.decode('utf-8')
        except UnicodeDecodeError as e:
            line = data[:e.start].count(b'\n') + 1
            problems.append('%s:%d: not valid UTF-8 (byte 0x%02X)' % (name, line, data[e.start]))
            continue
        for m in MARKER.finditer(text):
            problems.append('%s:%d: merge conflict marker' % (name, text.count('\n', 0, m.start()) + 1))
    for p in problems:
        print(p)
    print('%d text files checked, %d problems' % (checked, len(problems)))
    return 1 if problems else 0


if __name__ == '__main__':
    raise SystemExit(main())
