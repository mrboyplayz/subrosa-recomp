/* Address: 0x14019a8f0 | Name: sub_14019A8F0 | Size: 198 bytes */
__int64 __fastcall sub_14019A8F0(__int64 a1, unsigned int a2)
{
  MEMORY[0x1401FC920](
    a2 + *(_QWORD *)a1 - *(unsigned int *)(a1 + 12),
    *(unsigned int *)(a1 + 8) + *(_QWORD *)a1 - *(unsigned int *)(a1 + 12));
  *(_DWORD *)(a1 + 8) = a2;
  return a1;
}

