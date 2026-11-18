"""Launch gate: prove the built client actually starts and runs a simulation.

    python scripts/gate.py                 # 3 launches, 45 s each, needs dist/
    python scripts/gate.py --launches 4 --seconds 60
    python scripts/gate.py --build         # run scripts/build.py first

A passing native-compare suite says one routine matches the original on the
inputs it was given. It says nothing about whether the client boots, which is
how a 90-routine batch merged with green suites and could not get past the
menu (KNOWLEDGE.md, "The gate that matters").

Each launch starts dist/subrosa-recomp.exe with SUBROSA_AUTOSTART=practice,
waits, and fails on any of:

  - a process that exits before the window is up,
  - an EXCEPTION line in dist/subrosa-recomp-debug.log,
  - an unresolved import trap,
  - fewer completed physics ticks than --min-ticks, which is what a client
    stuck at the menu or dead in a load looks like.

Every launch must be clean; one good run is not evidence (crashes in this
codebase are intermittent). Exit status is 0 only if all of them pass.
"""
import argparse
import os
import re
import subprocess
import sys
import time
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent
DEFAULT_DIST = PROJECT / 'dist'
# Set by --dist: build_quick.py stages an identical client in dist/quick.
DIST = DEFAULT_DIST
EXE = DIST / 'subrosa-recomp.exe'
LOG = DIST / 'subrosa-recomp-debug.log'
# One saved log per launch, so a flake keeps its own evidence.
LOGS = PROJECT / 'build/gate'

# "STATUS: ... | physics ticks 300 started, 299 completed"
STATUS_TICKS = re.compile(r'physics ticks (\d+) started, (\d+) completed')
# "Simulation tick 300 beginning (299 completed)"
TICK_BEGIN = re.compile(r'Simulation tick (\d+) beginning \((\d+) completed\)')
# A step only reached once the menu has handed over to the simulation.
PRACTICE = 'Practice selected'
# Lines that mean the launch failed even though the process is still alive.
FATAL = ('EXCEPTION', 'trap: unresolved', 'cannot open')


def log_text():
    """Read the log while the game holds it open (it shares read and write)."""
    try:
        return LOG.read_text(encoding='utf-8', errors='replace')
    except FileNotFoundError:
        return ''
    except OSError:
        return ''


def completed_ticks(text):
    values = [int(m.group(2)) for m in STATUS_TICKS.finditer(text)]
    values += [int(m.group(2)) for m in TICK_BEGIN.finditer(text)]
    return max(values) if values else 0


def kill(process):
    if process.poll() is None:
        process.kill()
        try:
            process.wait(timeout=10)
        except subprocess.TimeoutExpired:
            pass


def launch(number, seconds, min_ticks, startup_after):
    """Run one launch and return (ok, summary, detail)."""
    if LOG.exists():
        LOG.unlink()
    env = dict(os.environ, SUBROSA_AUTOSTART='practice', SUBROSA_AUTOSTART_AFTER_MS=str(startup_after))
    env.pop('SUBROSA_PRACTICE_MAP', None)
    process = subprocess.Popen([str(EXE)], cwd=str(DIST), env=env,
                               stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    started = time.monotonic()
    ticks = 0
    practice = False
    failure = None
    practice_at = None
    try:
        while time.monotonic() - started < seconds:
            time.sleep(0.5)
            text = log_text()
            for marker in FATAL:
                if marker in text:
                    failure = next(l for l in text.splitlines() if marker in l).strip()
                    break
            if failure:
                break
            if not practice and PRACTICE in text:
                practice = True
                practice_at = time.monotonic() - started
            ticks = max(ticks, completed_ticks(text))
            if process.poll() is not None:
                failure = 'exited early with code %d after %.0f s' % (process.returncode, time.monotonic() - started)
                break
    finally:
        kill(process)

    text = log_text()
    # Keep the log of every launch: a failure that overwrote its own evidence
    # is how the same flake gets re-diagnosed twice.
    LOGS.mkdir(parents=True, exist_ok=True)
    (LOGS / ('launch-%d.log' % number)).write_text(text, encoding='utf-8')
    for marker in FATAL:
        if not failure and marker in text:
            failure = next(l for l in text.splitlines() if marker in l).strip()
    if not failure:
        ticks = max(ticks, completed_ticks(text))
        if not practice:
            failure = 'never reached practice (no "%s" in the log)' % PRACTICE
        elif ticks < min_ticks:
            failure = 'only %d completed physics ticks (wanted %d)' % (ticks, min_ticks)
    summary = 'launch %d: %s, %d ticks, %.0f s' % (
        number, 'practice at %.0f s' % practice_at if practice else 'no practice',
        ticks, time.monotonic() - started)
    return failure is None, summary, failure


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--launches', type=int, default=3, help='how many times to start the client (default 3)')
    parser.add_argument('--seconds', type=int, default=45, help='how long each launch must stay up (default 45)')
    parser.add_argument('--min-ticks', type=int, default=10, help='completed physics ticks each launch needs (default 10)')
    parser.add_argument('--startup-after-ms', type=int, default=4000,
                        help='delay the autostart click until the menu answers Steam (default 4000)')
    parser.add_argument('--build', action='store_true', help='run scripts/build.py first')
    parser.add_argument('--dist', type=Path, default=DEFAULT_DIST,
                        help='folder holding the client and its assets (default dist/; '
                             'use dist/quick for the incremental build)')
    args = parser.parse_args()

    global DIST, EXE, LOG
    DIST = args.dist.resolve()
    EXE = DIST / 'subrosa-recomp.exe'
    LOG = DIST / 'subrosa-recomp-debug.log'

    if args.build:
        print('== Building', flush=True)
        if subprocess.run([sys.executable, str(PROJECT / 'scripts/build.py')], cwd=PROJECT).returncode:
            return sys.exit('gate: the build failed, so nothing was launched')
    if not EXE.is_file():
        return sys.exit('gate: %s is missing; run scripts/build.py first' % EXE.relative_to(PROJECT))

    results = [launch(n + 1, args.seconds, args.min_ticks, args.startup_after_ms) for n in range(args.launches)]
    for ok, summary, failure in results:
        print('%-9s %s' % ('PASS' if ok else 'FAIL', summary))
        if failure:
            print('          %s' % failure)
    failed = sum(1 for ok, _, _ in results if not ok)
    if failed:
        print('%d of %d launches failed; the log is %s' % (failed, len(results), LOG))
        return 1
    print('all %d launches clean' % len(results))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
