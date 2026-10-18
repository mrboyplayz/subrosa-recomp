"""Check that uncommitted changes leave the compiled code unchanged.

Builds the working tree, then the last commit (the changes are stashed
meanwhile), and compares the .text, .rdata and .data sections of every
object file. Names may differ between the builds: object sections do not
contain symbol names, so a pure rename compares equal, while any change in
the instructions or data does not.

    python tools/cleanup/verify_same_code.py
"""
import filecmp
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent.parent
OBJECTS = PROJECT / 'build/client/objects'


def build():
    result = subprocess.run([sys.executable, 'scripts/build.py'], cwd=PROJECT, capture_output=True, text=True)
    if result.returncode:
        sys.exit('build failed:\n' + result.stdout[-2000:] + result.stderr[-2000:])


def section(obj, name, out):
    subprocess.run(['objcopy', '-O', 'binary', '--only-section=' + name, str(obj), str(out)], check=True,
                   capture_output=True)


def main():
    with tempfile.TemporaryDirectory() as tmp:
        tmp = Path(tmp)
        build()
        shutil.copytree(OBJECTS, tmp / 'new')
        subprocess.run(['git', 'stash', 'push', '--quiet'], cwd=PROJECT, check=True)
        try:
            build()
            shutil.copytree(OBJECTS, tmp / 'old')
        finally:
            subprocess.run(['git', 'stash', 'pop', '--quiet'], cwd=PROJECT, check=True)
        build()
        old = {p.name for p in (tmp / 'old').glob('*.obj')}
        new = {p.name for p in (tmp / 'new').glob('*.obj')}
        differing = []
        for name in sorted(old & new):
            for sec in ('.text', '.rdata', '.data'):
                a, b = tmp / 'a.bin', tmp / 'b.bin'
                section(tmp / 'old' / name, sec, a)
                section(tmp / 'new' / name, sec, b)
                if not filecmp.cmp(a, b, shallow=False):
                    differing.append('%s %s' % (name, sec))
        for name in sorted(old ^ new):
            differing.append(name + ' only in one build')
        print('%d objects compared; %s' % (len(old & new), 'code unchanged' if not differing else
                                            'DIFFERENT: ' + ', '.join(differing)))
        return 1 if differing else 0


if __name__ == '__main__':
    sys.exit(main())
