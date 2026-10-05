import idaapi
import idautils
import idc

idaapi.auto_wait()
base = idaapi.get_imagebase()
out = []
for ea in idautils.Functions():
    func = idaapi.get_func(ea)
    frame = idc.get_frame_size(ea)
    size = func.end_ea - func.start_ea
    if 0xB000 <= frame <= 0xD000 and 0x200 <= size <= 0x1000:
        calls = []
        immediates = []
        for item in idautils.FuncItems(ea):
            if idc.print_insn_mnem(item).lower() == "call":
                calls.append(idc.get_operand_value(item, 0))
            for op in range(2):
                if idc.get_operand_type(item, op) == idc.o_imm:
                    value = idc.get_operand_value(item, op)
                    if value in (4, 128, 256, 12289):
                        immediates.append((item, value))
        out.append(f"FUNC rva={ea-base:#x} ea={ea:#x} size={size:#x} frame={frame:#x} calls={len(calls)}")
        out.append("  calls " + " ".join(f"{target-base:#x}" for target in calls[:30]))
        out.append("  const " + " ".join(f"{site-base:#x}:{value}" for site, value in immediates[:30]))

with open(r"D:\SteamLibrary\steamapps\common\Sub Rosa\decompilation\notes\large-stack-client.txt", "w", encoding="utf-8") as stream:
    stream.write("\n".join(out))
idc.qexit(0)
