/* Address: 0x14020b07c | Name: sub_14020B07C | Size: 37 bytes */
void __fastcall sub_14020B07C(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    free(*(void **)a1);
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 0;
}

