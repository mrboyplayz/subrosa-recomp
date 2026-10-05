/* Address: 0x140023a20 | Name: sub_140023A20 | Size: 159 bytes */
void __fastcall sub_140023A20(int a1, int a2)
{
  __int64 v3; // r15
  unsigned int *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // eax

  v3 = 2;
  v4 = &dword_140404A6C[5873 * a1 + 283831581];
  do
  {
    v5 = *(v4 - 1);
    v6 = *v4;
    v7 = v4[1];
    if ( a2 )
      v8 = 0;
    else
      v8 = (v4[2] << 10) | 6;
    sub_140017260(0, v5, v6, v7, v8);
    sub_1400173C0(0, v5, v6, v7);
    v4 += 4;
    --v3;
  }
  while ( v3 );
}

