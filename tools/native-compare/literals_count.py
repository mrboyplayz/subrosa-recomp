"""python tools/native-compare/literals_count.py <dir with literals_original.txt and literals_client.txt>
Counts, per routine of t_literals.c, the cases whose result differs between the original and the client."""
import sys
names = ['arctangent 1401A6B90', 'lookup 1401F2690', 'noise 1401305F0', 'noise 1400384F0', 'noise 1400D47A0', 'curve 140180360',
         'filter 1401ECD80', 'log2 1401D1340']
a = open(sys.argv[1] + '/literals_original.txt').read().split('\n')
b = open(sys.argv[1] + '/literals_client.txt').read().split('\n')
counts = [0] * len(names)
for x, y in zip(a, b):
    for k, (p, q) in enumerate(zip(x.split(), y.split())):
        counts[k] += p != q
print(len(a) - 1, 'cases; differing results:', ', '.join(f'{n}: {c}' for n, c in zip(names, counts)))
