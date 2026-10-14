"""Callers that hand a real double to a routine which expects float bits in a double's low lane.

Some recovered routines take an xmm argument typed `double` whose low 32 bits are a float (for example
sub_14007B2A0(matrix, axis, angle)). The original converts with cvtsd2ss/cvtpd2ps before such calls; where
the decompiler dropped the conversion, the C passes a true double and the callee reads garbage (the legs
during the leave-vehicle animation did this).

  python tools/audits/float_lane_args.py [function ...]      default: sub_14007B2A0

For each call, classifies the lane argument: float bits (container helper, *(float *)&v = ..., *(_QWORD *)&v
= ...), or a real double (arithmetic on a double variable or expression). Lists the real doubles.
"""
import glob, os, re, sys

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..")
TARGETS = sys.argv[1:] or ["sub_14007B2A0"]


def split_args(text, open_paren):
    depth, args, current, i = 0, [], [], open_paren
    while i < len(text):
        c = text[i]
        if c in "([{":
            depth += 1
            if depth > 1: current.append(c)
        elif c in ")]}":
            depth -= 1
            if depth == 0:
                args.append("".join(current).strip())
                return args, i + 1
            current.append(c)
        elif c == "," and depth == 1:
            args.append("".join(current).strip()); current = []
        else:
            current.append(c)
        i += 1
    return args, i


def main():
    marker = re.compile(r"^//----- \(0*([0-9A-Fa-f]{9,16})\)", re.M)
    total = 0
    for path in sorted(glob.glob(os.path.join(ROOT, "src", "client", "client_*.c"))):
        body = open(path, encoding="utf-8", errors="replace").read()
        marks = list(marker.finditer(body))
        for m, nxt in zip(marks, marks[1:] + [None]):
            part = body[m.end():nxt.start() if nxt else len(body)]
            for target in TARGETS:
                for call in re.finditer(r"(?<![\w.])%s\(" % re.escape(target), part):
                    line_start = part.rfind("\n", 0, call.start()) + 1
                    if re.match(r"^\s*(void|__int64|double|float|extern|//)", part[line_start:call.start()] + "x") and part[line_start:call.start()].strip() != "":
                        if not part[line_start:call.start()].strip().endswith(("=", "(", ",")):
                            continue
                    args, _ = split_args(part, call.end() - 1)
                    if len(args) < 3:
                        continue
                    lane = args[2]
                    line = body.count("\n", 0, m.end() + call.start()) + 1
                    verdict = None
                    if "sr_export_float_lane_container" in lane or lane.startswith("*(double *)") or re.fullmatch(r"0\.0|0", lane):
                        continue
                    variable = re.fullmatch(r"[av]\d+", lane)
                    if not variable:
                        verdict = "expression"
                    else:
                        declared = re.search(r"^\s*([\w ]+?)\s+%s; //" % lane, part, re.M)
                        kind = declared.group(1).strip() if declared else "?"
                        if kind != "double":
                            continue  # __int64 / __m128 containers and parameters hold bits
                        before = part[:call.start()]
                        plain = re.findall(r"(?<![\w.&])%s = ([^;]*);" % lane, before)
                        bits = re.findall(r"\*\((?:float|_QWORD|_DWORD|unsigned int|int) \*\)&%s = |LODWORD\(%s\) = |HIDWORD\(%s\) = " % (lane, lane, lane), before)
                        real = [p for p in plain if "sr_export_float_lane_container" not in p and not p.strip().startswith("*(double *)")]
                        if real and not bits:
                            verdict = "double assigned: " + real[-1][:60]
                        elif real:
                            verdict = "mixed (check): " + real[-1][:60]
                    if verdict:
                        total += 1
                        print("%s:%d sub_%X %s(..., %s): %s" % (os.path.basename(path), line, int(m.group(1), 16), target, lane[:60], verdict))
    print("%d calls pass a real double" % total)


main()
