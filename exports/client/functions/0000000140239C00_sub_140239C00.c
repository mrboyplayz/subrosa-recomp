/* Address: 0x140239c00 | Name: sub_140239C00 | Size: 36 bytes */
__int64 __fastcall sub_140239C00(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = malloc_base(a2);
  *a1 = v3;
  return v3 == 0 ? 0xC : 0;
}

