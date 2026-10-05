/* Address: 0x140062890 | Name: sub_140062890 | Size: 717 bytes */
__int64 __fastcall sub_140062890(int a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  float v4; // xmm6_4
  __int64 v7; // rbx
  int v8; // xmm7_4
  int v9; // xmm8_4
  int v10; // xmm9_4
  int v11; // xmm10_4
  int v12; // xmm11_4
  int v13; // xmm12_4
  int v14; // xmm13_4
  int v15; // xmm14_4
  int v16; // xmm15_4
  __int64 v17; // rsi
  int v18; // edi
  int *v19; // rbx
  int v21; // [rsp+F0h] [rbp+8h]

  v3 = -1;
  v4 = 1.0;
  v7 = a1;
  if ( (unsigned int)sub_1400828D0(a2, a3, 0) )
  {
    v8 = unk_16E18CA40;
    v9 = qword_16E18CA44;
    v10 = HIDWORD(qword_16E18CA44);
    v11 = qword_16E18CA4C;
    v12 = HIDWORD(qword_16E18CA4C);
    v13 = dword_16E18CA54;
    v14 = qword_16E18CA60;
    v15 = HIDWORD(qword_16E18CA60);
    v16 = dword_16E18CA68;
    v4 = *(float *)&dword_16E18CA58;
  }
  else
  {
    v10 = v21;
    v8 = v21;
    v13 = v21;
    v14 = v21;
    v15 = v21;
    v9 = v21;
    v16 = v21;
    v12 = v21;
    v11 = v21;
  }
  v17 = 7166 * v7;
  v18 = 0;
  if ( *((int *)&unk_1909419A0 + 7166 * v7 + 134) > 0 )
  {
    v19 = &dword_190941BBC[v17];
    do
    {
      if ( (unsigned int)sub_1400831C0((unsigned int)*v19, a2, a3, 0) && *(float *)&dword_16E18CA58 < v4 )
      {
        v8 = unk_16E18CA40;
        v4 = *(float *)&dword_16E18CA58;
        v9 = qword_16E18CA44;
        v10 = HIDWORD(qword_16E18CA44);
        v11 = qword_16E18CA4C;
        v12 = HIDWORD(qword_16E18CA4C);
        v13 = dword_16E18CA54;
        v14 = qword_16E18CA60;
        v15 = HIDWORD(qword_16E18CA60);
        v16 = dword_16E18CA68;
        v3 = *v19;
      }
      ++v18;
      ++v19;
    }
    while ( v18 < *(_DWORD *)((char *)&unk_1909419A0 + v17 * 4 + 536) );
  }
  if ( v4 >= 1.0 )
    return 0;
  unk_16E18CA40 = v8;
  LODWORD(qword_16E18CA44) = v9;
  HIDWORD(qword_16E18CA44) = v10;
  LODWORD(qword_16E18CA4C) = v11;
  HIDWORD(qword_16E18CA4C) = v12;
  dword_16E18CA54 = v13;
  LODWORD(qword_16E18CA60) = v14;
  HIDWORD(qword_16E18CA60) = v15;
  dword_16E18CA68 = v16;
  dword_16E18CA58 = LODWORD(v4);
  dword_16E18CAB8 = v3;
  return 1;
}

