/* Address: 0x1400976f0 | Name: sub_1400976F0 | Size: 431 bytes */
__int64 __fastcall sub_1400976F0(unsigned int a1)
{
  int v1; // r14d
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // ebp
  int v5; // eax
  __int64 v6; // rsi
  int v7; // ecx
  char Src[256]; // [rsp+20h] [rbp-128h] BYREF

  if ( a1 <= 0xFF )
  {
    v1 = dword_1915FB9FC / 3;
    result = sub_1400DBB30(Src, "%s has died");
    if ( dword_163D75B60 )
    {
      v3 = -1;
      do
        ++v3;
      while ( Src[v3] );
      v4 = dword_196199564;
      if ( (int)v3 > 63 )
        LODWORD(v3) = 63;
      v5 = dword_191541414;
      v6 = (__int64)dword_196199564 << 7;
      *(_DWORD *)((char *)&unk_195999560 + v6) = 2;
      *(_DWORD *)((char *)&unk_195999560 + v6 + 4) = v5;
      memcpy(&byte_1959995A0[v6], Src, (int)v3);
      *((_BYTE *)&unk_195999560 + v6 + (int)v3 + 64) = 0;
      result = 0;
      *(_DWORD *)((char *)&unk_195999560 + v6 + 32) = v3;
      *(_DWORD *)((char *)&unk_195999560 + v6 + 36) = 3;
      *(_DWORD *)((char *)&unk_195999560 + v6 + 40) = -1;
      dword_196199564 = v4 + 1;
      *(_DWORD *)((char *)&unk_195999560 + v6 + 44) = 0;
      HIWORD(dword_196199564) = 0;
    }
    v7 = qword_1915413B4;
    if ( (int)qword_1915413B4 <= 50400 )
    {
      if ( v1 > 0 )
      {
        result = (unsigned int)(18000 / v1);
        v7 = result + qword_1915413B4;
      }
      if ( v7 > 50400 )
        v7 = 50400;
      LODWORD(qword_1915413B4) = v7;
    }
  }
  return result;
}

