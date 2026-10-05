"""Guard complete bodies and single storage ownership across C units."""
from pathlib import Path
import contextlib
import io
import shutil
import subprocess
import tempfile
import unittest
from split_client_sources import split, items


class SplitClientTests(unittest.TestCase):
    def test_named_routing_preserves_bodies_header_and_storage(self):
        source=b'''int shared = 3;
//----- (0000000140001000)
int first(void) { return shared; }
//----- (0000000140021000)
int second(void) { return first() + 1; }
'''
        with tempfile.TemporaryDirectory() as td:
            path=Path(td)/'subrosa.c';path.write_bytes(source)
            with contextlib.redirect_stdout(io.StringIO()):before=split(path)
            header=Path(before['header']).read_bytes()
            storage=(path.parent/'modules/client_data.c').read_bytes()
            routes={'first':'client_humans','second':'client_vehicles'}
            with contextlib.redirect_stdout(io.StringIO()):after=split(path,routes=routes)
            self.assertEqual({f['name']:f['emitted_sha256'] for f in before['functions']},
                             {f['name']:f['emitted_sha256'] for f in after['functions']})
            self.assertEqual(Path(after['header']).read_bytes(),header)
            self.assertEqual((path.parent/'modules/client_data.c').read_bytes(),storage)
            self.assertEqual({f['name']:f['module'] for f in after['functions']},
                             {'first':'client_humans.c','second':'client_vehicles.c'})
            manifest=(path.parent/'modules/manifest.json').read_bytes()
            for invalid,error in [({'first':'client_humans'},'UNINDEXED'),
                                  ({**routes,'missing':'client_humans'},'UNEMITTED'),
                                  ({**routes,'first':'../escape'},'MODULE'),
                                  ({**routes,'first':'client_data'},'MODULE')]:
                with self.assertRaisesRegex(ValueError,error):split(path,routes=invalid)
                self.assertEqual((path.parent/'modules/manifest.json').read_bytes(),manifest)
                self.assertEqual(Path(after['header']).read_bytes(),header)

    def test_struct_returns_and_gnu_identifiers_keep_every_body(self):
        source=b'''struct Pair { int value; };
struct Pair pair = {4};
struct Pair get(void) { return pair; }
union U *lookup(void) { return 0; }
enum E value(void) { return 0; }
void cleanup$0(void) { }
int next(void) { return 7; }
'''
        functions=[source[a:c] for k,a,c,o in items(source) if k=='function']
        self.assertEqual(len(functions),5)
        with tempfile.TemporaryDirectory() as td:
            path=Path(td)/'subrosa.c';path.write_bytes(source)
            with contextlib.redirect_stdout(io.StringIO()):report=split(path)
            self.assertEqual([f['name'] for f in report['functions']],
                             ['get','lookup','value','cleanup$0','next'])
            self.assertEqual(report['storage_definition_count'],1)
            header=Path(report['header']).read_bytes()
            self.assertIn(b'extern struct Pair pair;',header)
            self.assertNotIn(b'return pair',header)

    @unittest.skipUnless(shutil.which('gcc'),'GCC required for linkage check')
    def test_shared_static_and_function_pointer_storage_links_once(self):
        source=b'''struct Pair { int value; };
static struct Pair shared = {4};
extern int initialized = 6;
static int counter;
static double (*callback)(void);
//----- (0000000140001000)
int sub_140001000(void) { ++counter; return shared.value + initialized; }
//----- (0000000140021000)
int sub_140021000(void) { return counter + (callback != 0); }
'''
        with tempfile.TemporaryDirectory() as td:
            path=Path(td)/'subrosa.c';path.write_bytes(source)
            with contextlib.redirect_stdout(io.StringIO()):report=split(path)
            self.assertEqual(report['storage_definition_count'],4)
            outputs=[Path(f['path']) for f in report['translation_units']]
            objects=[]
            for c in outputs:
                obj=c.with_suffix('.o');objects.append(str(obj))
                result=subprocess.run(['gcc','-c',str(c),'-o',str(obj)],capture_output=True,text=True)
                self.assertEqual(result.returncode,0,result.stderr)
            result=subprocess.run(['gcc','-r','-nostdlib',*objects,'-o',str(Path(td)/'all.o')],capture_output=True,text=True)
            self.assertEqual(result.returncode,0,result.stderr)
            snapshots={p:(p.read_bytes(),p.stat().st_mtime_ns) for p in outputs+[Path(report['header']),Path(td)/'modules/manifest.json']}
            with contextlib.redirect_stdout(io.StringIO()):split(path)
            for p,(data,mtime) in snapshots.items():
                self.assertEqual(p.read_bytes(),data)
                self.assertEqual(p.stat().st_mtime_ns,mtime)


if __name__=='__main__':unittest.main()
