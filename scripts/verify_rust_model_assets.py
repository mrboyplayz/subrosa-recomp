"""Check Rust model structure and Bevy async loading against installed assets."""
import csv
import hashlib
import io
import json
import os
from pathlib import Path
import subprocess
from inspect_client_character_assets import inspect

PROJECT = Path(__file__).resolve().parents[1]


def cargo(arguments, out, name):
    environment = os.environ.copy()
    environment['CARGO_HOME'] = str(PROJECT/'tools/rust/cargo')
    environment['RUSTUP_HOME'] = str(PROJECT/'tools/rust/rustup')
    environment['PATH'] = str(PROJECT/'tools/rust/cargo/bin')+';C:/Users/junin/mingw64/bin;'+environment['PATH']
    result = subprocess.run([str(PROJECT/'tools/rust/cargo/bin/cargo.exe'), *arguments],
        cwd=PROJECT/'rust-client', env=environment, capture_output=True, text=True, timeout=240)
    (out/(name+'-stdout.txt')).write_text(result.stdout, encoding='utf-8')
    (out/(name+'-stderr.txt')).write_text(result.stderr, encoding='utf-8')
    if result.returncode:
        print(result.stderr)
    result.check_returncode()
    return result.stdout


def histogram(text):
    return {key: int(count) for key, count in (field.split(':') for field in text.split(','))} if text else {}


def main():
    out = PROJECT/'reports/rust-model-assets-20261003'
    out.mkdir(parents=True, exist_ok=True)
    directory = PROJECT.parent/'data/model'
    inventory = cargo(['run','--example','model_inventory','--',str(directory)],out,'inventory')
    rows = list(csv.DictReader(io.StringIO(inventory), delimiter='\t'))
    files = sorted([*directory.glob('*.cmo'), *directory.glob('*.cmc')])
    expected = {f.name: inspect(f) for f in files}
    assert set(expected) == {row['file'] for row in rows}, 'Asset inventory changed'
    for row in rows:
        ref = expected[row['file']]
        for rust, python in [('version','version'),('vertices','vertices'),('faces','faces'),('consumed','consumed_bytes'),('trailing','trailing_bytes')]:
            assert int(row[rust]) == ref[python], (row['file'], rust)
        if row['file'].endswith('.cmo'):
            assert int(row['tail_count']) == ref['tail_count']
            assert histogram(row['face_counts']) == ref['face_index_counts']
        else:
            assert int(row['parts']) == ref['parts']
            assert histogram(row['positive_counts']) == ref['positive_weight_count_histogram']
            assert list(map(int,row['selected_counts'].split(','))) == ref['first_four_selected_bone_counts']
            assert int(row['truncated']) == ref['vertices_with_more_than_four_weights']
    bevy = json.loads(cargo(['run','--features','bevy-client','--example','bevy_model_load','--',str(PROJECT.parent/'data')],out,'bevy-load').strip())
    assert bevy['loaded_models'] == len(expected)
    result = dict(status='pass', structural_models=len(rows), bevy=bevy,
        scope='Installed-file structural coverage and real Bevy asset IO; native geometry/material/render parity and vanilla provenance unverified',
        samples={name: ref['sha256'] for name, ref in expected.items()},
        sources={str(p.relative_to(PROJECT)):hashlib.sha256(p.read_bytes()).hexdigest()
            for p in [PROJECT/'rust-client/src/models.rs',PROJECT/'rust-client/src/bevy_models.rs',PROJECT/'rust-client/Cargo.lock']})
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps({key:result[key] for key in ['status','structural_models','bevy','scope']}))


if __name__ == '__main__':
    main()
