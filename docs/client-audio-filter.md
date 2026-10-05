# Audio filter recovery

Recovered `sub_1401F3F90` and its coefficient wrapper `sub_1401F41E0`
as void functions. Their exported security-cookie returns were fabricated.
Coefficient scaling and the tiny state bias now use native single precision;
coefficient construction preserves native 32-bit wrapping arithmetic.
The repair checks the original executable hash and instruction/constant bytes.

The complete native filter and wrapper pass 864 comparisons covering three
sample rates, six cutoffs, four sample counts, mono/stereo, separate/in-place
output and three sample patterns. Input, output, state and buffer guards
are compared. Evidence: `reports/client-audio-filter-fixture-20261003/`.

The rebuilt client passes this filter and crashes inside `sub_14019B2E0`.
It has not reached the third SDL swap or a working menu. The preceding full
suite passed 152 tests; the added filter fixture passes independently.

The link has no unresolved or duplicate symbols. The compilation still
reports 2606 distinct warnings. Audit:
`reports/preparation-audit/client-audio-filter-20261003.md`.
