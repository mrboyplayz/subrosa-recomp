/* Address: 0x1401fd7ec | Name: sub_1401FD7EC | Size: 77 bytes */
void __fastcall sub_1401FD7EC(unsigned int *Block)
{
  __int64 v2; // rcx
  unsigned int *v3; // rax

  v2 = LODWORD(dwTlsIndex.m256d_f64[0]);
  if ( LODWORD(dwTlsIndex.m256d_f64[0]) != -1 )
  {
    if ( !Block )
    {
      v3 = (unsigned int *)sub_14020666C();
      v2 = LODWORD(dwTlsIndex.m256d_f64[0]);
      Block = v3;
    }
    sub_1402066B4(v2, 0);
    if ( Block )
    {
      if ( Block != &dword_140404A6C[19064505] )
        free(Block);
    }
  }
}

