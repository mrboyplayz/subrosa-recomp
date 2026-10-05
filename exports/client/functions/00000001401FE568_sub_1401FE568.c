/* Address: 0x1401fe568 | Name: sub_1401FE568 | Size: 42 bytes */
unsigned __int64 __fastcall MEMORY[0x1401FE568](__int64 a1, struct _HeapManager *a2, int a3)
{
  if ( a3 )
    return (*(__int64 (__fastcall **)(unsigned __int64, struct _HeapManager *))&dword_140404A6C[19064565])(
             (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL,
             a2);
  else
    return sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], a1);
}

