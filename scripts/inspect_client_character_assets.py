"""Inventory model read contracts inferred from the pinned native loaders.

This checks structure and byte consumption. It does not establish loader
behavior, field semantics, or vanilla provenance of installed assets.
"""
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import struct

PROJECT = Path(__file__).resolve().parent.parent


class Reader:
    def __init__(self, data):
        self.data = data
        self.cursor = 0

    def take(self, count):
        if count < 0 or self.cursor + count > len(self.data):
            raise ValueError('read sequence exceeds file at ' + hex(self.cursor))
        start = self.cursor
        self.cursor += count
        return self.data[start:self.cursor]

    def word(self):
        value = struct.unpack('<I', self.take(4))[0]
        if value > 1000000:
            raise ValueError('unsupported count exceeds inventory bound')
        return value


def inspect(path):
    data = path.read_bytes()
    result = dict(path=str(path.resolve()), sha256=hashlib.sha256(data).hexdigest(),
                  bytes=len(data), provenance='installed file; vanilla/mod status unverified')
    reader = Reader(data)
    try:
        if reader.take(4) != b'CMod':
            raise ValueError('unrecognized magic')
        version = reader.word()
        result['version'] = version
        if path.suffix.lower() == '.cmo':
            if version not in (1, 2, 3):
                raise ValueError('unsupported CMO version')
            vertices = reader.word()
            reader.take(vertices * (24 if version == 3 else 16))
            faces = reader.word()
            counts = Counter()
            for _ in range(faces):
                count = reader.word()
                counts[str(count)] += 1
                reader.take(count * 4 + (8 if version > 1 else 4))
            tail_count = reader.word()
            reader.take(tail_count * 4)
            result.update(vertices=vertices, faces=faces, face_index_counts=dict(counts), tail_count=tail_count)
        else:
            if version != 2:
                raise ValueError('unsupported CMC version')
            parts = reader.word()
            if parts > 16:
                raise ValueError('part count exceeds current hypothesis')
            reader.take(parts * 12)
            vertices = reader.word()
            counts = Counter()
            uses = [0] * parts
            truncated = 0
            for _ in range(vertices):
                reader.take(12)
                weights = [struct.unpack('<4f', reader.take(16))[3] for _ in range(parts)]
                reader.take(8)
                positive = [i for i, weight in enumerate(weights) if weight > 0]
                counts[str(len(positive))] += 1
                truncated += len(positive) > 4
                for bone in positive[:4]:
                    uses[bone] += 1
            faces = reader.word()
            reader.take(faces * 12)
            result.update(parts=parts, vertices=vertices, faces=faces,
                          vertex_stride=12 + parts * 16 + 8,
                          positive_weight_count_histogram=dict(counts),
                          first_four_selected_bone_counts=uses,
                          vertices_with_more_than_four_weights=truncated)
        result.update(consumed_bytes=reader.cursor, trailing_bytes=len(data) - reader.cursor,
                      status='structural parse only; runtime comparison pending')
    except (ValueError, struct.error) as error:
        result.update(status='unresolved', error=str(error))
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--directory', type=Path, default=PROJECT.parent / 'data/model')
    parser.add_argument('--output', type=Path, default=PROJECT / 'reports/human-pose-trace-20261003/character-assets.json')
    args = parser.parse_args()
    samples = [inspect(path) for pattern in ('*.cmo', '*.cmc') for path in sorted(args.directory.glob(pattern))]
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(dict(method='Original loader read-order hypothesis; structural coverage only', samples=samples), indent=2) + '\n', encoding='utf-8')
    failures = sum(sample['status'] == 'unresolved' or sample.get('trailing_bytes') != 0 for sample in samples)
    print(f'{len(samples)} installed model files inspected; {failures} unresolved or incompletely consumed files')
    return int(not samples or failures != 0)


if __name__ == '__main__':
    raise SystemExit(main())
