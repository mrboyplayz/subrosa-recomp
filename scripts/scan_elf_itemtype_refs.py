#!/usr/bin/env python3
"""Enumerate x86-64 instructions that address a dedicated-server ItemType table."""

from __future__ import annotations

import argparse
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_64, Cs
from capstone.x86 import X86_OP_MEM, X86_REG_RIP
from elftools.elf.elffile import ELFFile


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("elf", type=Path)
    parser.add_argument("--table", type=lambda value: int(value, 0), required=True)
    parser.add_argument("--count", type=int, default=46)
    parser.add_argument("--stride", type=lambda value: int(value, 0), default=0x13D0)
    args = parser.parse_args()

    with args.elf.open("rb") as stream:
        elf = ELFFile(stream)
        text = elf.get_section_by_name(".text")
        if text is None:
            raise SystemExit("ELF has no .text section")
        code = text.data()
        text_address = text["sh_addr"]

    table_end = args.table + args.count * args.stride
    disassembler = Cs(CS_ARCH_X86, CS_MODE_64)
    disassembler.detail = True

    matches: list[tuple[int, int, int, str]] = []
    for instruction in disassembler.disasm(code, text_address):
        for operand in instruction.operands:
            if operand.type != X86_OP_MEM or operand.mem.base != X86_REG_RIP:
                continue
            target = instruction.address + instruction.size + operand.mem.disp
            if args.table <= target < table_end:
                matches.append((instruction.address, target, target - args.table,
                                f"{instruction.mnemonic} {instruction.op_str}"))

    for address, target, offset, assembly in matches:
        print(f"0x{address:08X} -> 0x{target:08X} (+0x{offset:X})  {assembly}")
    print(f"{len(matches)} references into [0x{args.table:X}, 0x{table_end:X})")


if __name__ == "__main__":
    main()
