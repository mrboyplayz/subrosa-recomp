/* Address: 0x140016c00 | Name: sub_140016C00 | Size: 159 bytes */
void __fastcall sub_140016C00(int a1, int a2)
{
  __int64 v3; // r15
  unsigned int *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8; // eax

  v3 = 2;
  v4 = (unsigned int *)((char *)&unk_1915415C0 + 23492 * a1);
  do
  {
    v5 = *(v4 - 1);
    v6 = *v4;
    v7 = v4[1];
    if ( a2 )
      v8 = 0;
    else
      v8 = (v4[2] << 10) | 6;
    sub_14000D600(0, v5, v6, v7, v8);
    sub_14000D730(0, v5, v6, v7);
    v4 += 4;
    --v3;
  }
  while ( v3 );
}

