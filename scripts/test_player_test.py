"""Launch the packaged Bevy player harness and check movement/jump/render output."""
import hashlib
import json
from pathlib import Path
import struct
import subprocess

PROJECT=Path(__file__).resolve().parents[1]


def main():
    exe=PROJECT/'test-client/SubRosaPlayerTest.exe'
    if not exe.exists():raise FileNotFoundError('Run scripts/build-player-test.ps1 first')
    out=PROJECT/'reports/player-test-20261003';out.mkdir(parents=True,exist_ok=True)
    screenshot=out/'player.png'
    # Preserve previous evidence and prevent a stale screenshot satisfying this run.
    if screenshot.exists():screenshot.replace(out/'player-previous.png')
    result_path=screenshot.with_suffix('.json')
    if result_path.exists():result_path.replace(out/'player-previous.json')
    with (out/'stdout.txt').open('w',encoding='utf-8') as log:
        run=subprocess.run([str(exe),'--smoke-test','--screenshot',str(screenshot)],cwd=exe.parent,stdout=log,stderr=subprocess.STDOUT,timeout=120)
    if run.returncode:
        print((out/'stdout.txt').read_text(encoding='utf-8')[-8000:])
    run.check_returncode()
    result=json.loads(result_path.read_text())
    if not result['passed']:raise AssertionError(result)
    png=screenshot.read_bytes()
    if png[:8]!=b'\x89PNG\r\n\x1a\n':raise AssertionError('No valid screenshot')
    dimensions=struct.unpack('>II',png[16:24])
    if min(dimensions)<400:raise AssertionError('Unexpected render dimensions')
    result.update(exe_sha256=hashlib.sha256(exe.read_bytes()).hexdigest(),screenshot_dimensions=dimensions,
        source_sha256=hashlib.sha256((PROJECT/'rust-client/src/bin/player_test.rs').read_bytes()).hexdigest())
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(result))


if __name__=='__main__':main()
