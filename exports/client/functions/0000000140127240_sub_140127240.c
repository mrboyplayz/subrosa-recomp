/* Address: 0x140127240 | Name: sub_140127240 | Size: 178 bytes */
double __fastcall sub_140127240(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  double result; // xmm0_8
  int Buffer; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  dword_140404A6C[19065874] = 0;
  v1 = MEMORY[0x14020B8D8](a1, "rb");
  v2 = v1;
  if ( v1 )
  {
    fread(&Buffer, 4, 1, v1);
    if ( Buffer == 1 )
    {
      fread(&v5, 4, 1, v2);
      if ( v5 == dword_1402B26C8 )
      {
        dword_140404A6C[19065873] = 0;
        fread(&dword_140404A6C[19065874], 4, 1, v2);
        fread(*(_QWORD *)&dword_140404A6C[19065875], 1, (int)dword_140404A6C[19065874], v2);
      }
    }
    return sub_14020B9E8(v2);
  }
  return result;
}

