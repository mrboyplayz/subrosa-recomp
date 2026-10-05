"""Export instruction boundaries; inline switch data must not be decoded as code."""
import json, os
from pathlib import Path
import ida_auto, ida_bytes, ida_funcs, idautils, idc, ida_ua
ida_auto.auto_wait()
ranges = [(0x14003b920,0x14003c6e6),(0x1400403f0,0x14004048d),
          (0x14015d7e0,0x14015dcfc),(0x14023023c,0x140231fbf),
          (0x14023fc70,0x140245018),(0x14025c4f0,0x14025d286)]
for entry in (0x140254ccc,0x140254f48):
    ranges.extend(idautils.Chunks(entry))
ranges=sorted(set(ranges))
records=[]
for start,end in ranges:
    heads=[]
    for ea in idautils.Heads(start,end):
        if ida_bytes.is_code(ida_bytes.get_full_flags(ea)):
            ins=ida_ua.insn_t(); ida_ua.decode_insn(ins,ea)
            targets=[]
            for op in ins.ops:
                if op.type in (ida_ua.o_mem,ida_ua.o_near):
                    at=op.addr
                    targets.append({'address':at,'head':ida_bytes.get_item_head(at),
                                    'size':ida_bytes.get_item_size(ida_bytes.get_item_head(at)),
                                    'name':idc.get_name(at)})
            heads.append({'address':ea,'size':ida_bytes.get_item_size(ea),
                          'text':idc.GetDisasm(ea),'targets':targets})
    records.append({'start':start,'end':end,'instructions':heads})
Path(os.environ['SUBROSA_GAP_CODE']).write_text(json.dumps(records,indent=2),encoding='utf-8')
idc.qexit(0)
