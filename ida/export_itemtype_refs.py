"""Export verified code references and count constants for the item-type table."""

import json
import sys

import ida_auto
import ida_bytes
import ida_funcs
import ida_nalt
import ida_pro
import ida_ua
import idautils
import idc


ida_auto.auto_wait()
image_base = ida_nalt.get_imagebase()
table_start = image_base + 0x42A7E180
entry_size = 5072
vanilla_count = 46
table_end = table_start + entry_size * vanilla_count

references = {}
count_immediates = []
for function_ea in idautils.Functions():
    function = ida_funcs.get_func(function_ea)
    if not function:
        continue
    for ea in idautils.FuncItems(function_ea):
        if not ida_bytes.is_code(ida_bytes.get_flags(ea)):
            continue
        for target in idautils.DataRefsFrom(ea):
            if table_start <= target < table_end:
                references[ea] = {
                    "instruction_rva": ea - image_base,
                    "instruction_size": idc.get_item_size(ea),
                    "displacement_offset": None,
                    "target_offset": target - table_start,
                    "rip_relative": True,
                    "function_rva": function_ea - image_base,
                    "function": ida_funcs.get_func_name(function_ea),
                    "disasm": idc.generate_disasm_line(ea, 0) or "",
                }
        instruction = ida_ua.insn_t()
        ida_ua.decode_insn(instruction, ea)
        for operand in range(8):
            operand_type = idc.get_operand_type(ea, operand)
            if operand_type == 0:
                break
            if operand_type in (idc.o_mem, idc.o_displ):
                value = idc.get_operand_value(ea, operand)
                rip_relative = table_start <= value < table_end
                target_rva = value - image_base if rip_relative else value & 0xFFFFFFFF
                if table_start - image_base <= target_rva < table_end - image_base:
                    references[ea] = {
                        "instruction_rva": ea - image_base,
                        "instruction_size": idc.get_item_size(ea),
                        "displacement_offset": instruction.ops[operand].offb,
                        "target_offset": target_rva - (table_start - image_base),
                        "rip_relative": rip_relative,
                        "function_rva": function_ea - image_base,
                        "function": ida_funcs.get_func_name(function_ea),
                        "disasm": idc.generate_disasm_line(ea, 0) or "",
                    }
            if operand_type == idc.o_imm and idc.get_operand_value(ea, operand) == vanilla_count:
                count_immediates.append({
                    "instruction_rva": ea - image_base,
                    "instruction_size": idc.get_item_size(ea),
                    "operand": operand,
                    "function_rva": function_ea - image_base,
                    "function": ida_funcs.get_func_name(function_ea),
                    "disasm": idc.generate_disasm_line(ea, 0) or "",
                })

output = {
    "image_base": image_base,
    "table_rva": table_start - image_base,
    "entry_size": entry_size,
    "vanilla_count": vanilla_count,
    "references": [references[ea] for ea in sorted(references)],
    "count_immediates": count_immediates,
}
with open(sys.argv[1], "w", encoding="utf-8") as stream:
    json.dump(output, stream, indent=2)

ida_pro.qexit(0)
