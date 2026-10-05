import json, os
from pathlib import Path
import ida_auto, ida_funcs, ida_name, idautils, idc, ida_hexrays

ida_auto.auto_wait()
out = Path(os.environ['SUBROSA_JUMP_INSPECTION'])
out.mkdir(parents=True,exist_ok=True)
records = []
for ea in (0x1400403F0,0x14003B9E9,0x14003B9F7,0x14015D7E0,0x14015DC4D,0x14023023C,0x140231947):
    func, chunk = ida_funcs.get_func(ea),ida_funcs.get_fchunk(ea)
    refs = [{'from':hex(x.frm),'type':x.type,'instruction':idc.GetDisasm(x.frm)} for x in idautils.XrefsTo(ea)]
    record = {'address':hex(ea),'name':ida_name.get_name(ea),'refs':refs,
              'owner':hex(func.start_ea) if func else None,
              'chunk':(hex(chunk.start_ea),hex(chunk.end_ea)) if chunk else None}
    if func:
        record['chunks'] = [(hex(a),hex(b)) for a,b in idautils.Chunks(func.start_ea)]
        try:
            if ida_hexrays.init_hexrays_plugin():
                (out/(hex(ea)+'.c')).write_text(str(ida_hexrays.decompile(func.start_ea)),encoding='utf-8')
        except Exception as exc:
            record['decompile_error'] = str(exc)
    records.append(record)
(out/'inspection.json').write_text(json.dumps(records,indent=2),encoding='utf-8')
idc.qexit(0)
