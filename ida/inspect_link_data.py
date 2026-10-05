"""Read names, item bounds and xrefs from an isolated IDA database."""
import json, os
from pathlib import Path
import ida_auto, ida_bytes, ida_name, idautils, idc
ida_auto.auto_wait()
queue=json.loads(Path(os.environ['SUBROSA_LINK_QUEUE']).read_text())
records=[]
for name in queue.get('address_named_strings',[])+queue.get('opaque_data_and_pointers',[]):
 if not name.startswith(('a','unk_','off_')): continue
 ea=ida_name.get_name_ea(idc.BADADDR,name)
 if ea==idc.BADADDR:
  records.append({'name':name,'missing':True});continue
 size=ida_bytes.get_item_size(ea)
 records.append({'name':name,'address':ea,'size':size,'type':idc.get_type(ea),
 'bytes':(ida_bytes.get_bytes(ea,size) or b'').hex(),
 'refs':[{'from':x.frm,'type':x.type,'instruction':idc.GetDisasm(x.frm)} for x in idautils.XrefsTo(ea,0)]})
Path(os.environ['SUBROSA_LINK_DATA']).write_text(json.dumps(records,indent=2)+'\n',encoding='utf-8')
idc.qexit(0)
