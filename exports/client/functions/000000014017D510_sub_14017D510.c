/* Address: 0x14017d510 | Name: sub_14017D510 | Size: 270 bytes */
void __fastcall sub_14017D510(
        int a1,
        float a2,
        __int64 a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // rbx
  float v13; // xmm6_4
  float v14; // xmm7_4
  __int64 v16; // rax
  void *v17; // rdi
  void *Block; // [rsp+60h] [rbp-38h] BYREF
  int v19; // [rsp+A8h] [rbp+10h] BYREF

  v12 = a12;
  v13 = a5;
  v14 = a6;
  v19 = 0;
  Block = nullptr;
  v16 = sub_140178A70(a3, a4, a2 / fminf(a5, a6), &Block, &v19);
  v17 = (void *)v16;
  if ( v16 )
  {
    sub_140181CF0(a1, v16, (_DWORD)Block, v19, LODWORD(v13), LODWORD(v14), a7, a8, a9, a10, a11, v12);
    free(Block);
    free(v17);
  }
}

