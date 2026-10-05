/* Address: 0x1400c4650 | Name: sub_1400C4650 | Size: 683 bytes */
__int64 __fastcall sub_1400C4650(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rdx
  int v5; // xmm0_4
  float v6; // xmm4_4
  int v7; // xmm1_4
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  int v11; // xmm4_4
  float v12; // xmm0_4
  __int64 v13; // rax
  int *v14; // rcx
  int v15; // xmm2_4
  int v16; // xmm1_4
  int v17; // xmm0_4
  __int64 v18; // rcx

  result = a1;
  v3 = 1760LL * a1;
  if ( *(_DWORD *)((char *)&unk_19025F0EC + v3 * 4) > 1u )
  {
    v4 = 28664LL * a2;
    *(float *)&v5 = -*(float *)((char *)&xmmword_190941E9C + v4 + 8);
    v6 = *(float *)((char *)&unk_190941E5C + v4);
    *(float *)&v7 = -*(float *)&dword_190941EAC[v4 / 4];
    dword_19025F164[v3] = *(_DWORD *)((char *)&unk_190941E8C + v4);
    dword_19025F168[v3] = dword_190941E90[v4 / 4];
    dword_19025F16C[v3] = dword_190941E94[v4 / 4];
    v8 = *(_DWORD *)((char *)&unk_190941E98 + v4);
    dword_19025F170[v3] = v5;
    v9 = *(float *)((char *)&xmmword_190941E9C + v4 + 12);
    dword_19025F178[v3] = v7;
    *(float *)&dword_19025F174[v3] = -v9;
    dword_19025F17C[v3] = v8;
    dword_19025F180[v3] = *(_DWORD *)((char *)&xmmword_190941E9C + v4);
    dword_19025F184[v3] = *(_DWORD *)((char *)&xmmword_190941E9C + v4 + 4);
    v10 = dword_190941BEC[v4 / 4];
    *(float *)&v11 = v6 - (float)(*(float *)&dword_19025F170[v3] * 0.25);
    v12 = *(float *)((char *)&unk_190941E60 + v4);
    dword_19025F11C[v3] = v11;
    *(float *)&dword_19025F120[v3] = v12 - (float)(*(float *)&dword_19025F174[v3] * 0.25);
    *(float *)&dword_19025F124[v3] = *(float *)((char *)&unk_190941E64 + v4)
                                   - (float)(*(float *)&dword_19025F178[v3] * 0.25);
    *(float *)&dword_19025F11C[v3] = (float)(*(float *)&dword_19025F164[v3] * 0.125) + *(float *)&v11;
    *(float *)&dword_19025F120[v3] = (float)(*(float *)&dword_19025F168[v3] * 0.125) + *(float *)&dword_19025F120[v3];
    *(float *)&dword_19025F124[v3] = (float)(*(float *)&dword_19025F16C[v3] * 0.125) + *(float *)&dword_19025F124[v3];
    *(_DWORD *)((char *)&unk_19025F128 + v3 * 4) = v10;
    *(_DWORD *)((char *)&unk_19025F12C + v3 * 4) = dword_190941BF0[v4 / 4];
    *(_DWORD *)((char *)&unk_19025F130 + v3 * 4) = dword_190941BF4[v4 / 4];
    v13 = dword_1909419F0[v4 / 4];
    if ( (_DWORD)v13 != -1 )
    {
      v14 = &dword_16E6A3C8C[5210 * v13];
      *(_DWORD *)((char *)&unk_19025F128 + v3 * 4) = *v14;
      *(_DWORD *)((char *)&unk_19025F12C + v3 * 4) = v14[1];
      *(_DWORD *)((char *)&unk_19025F130 + v3 * 4) = v14[2];
    }
    v15 = *(_DWORD *)((char *)&unk_190941C04 + v4);
    v16 = *(_DWORD *)((char *)&unk_190941C08 + v4);
    v17 = *(_DWORD *)((char *)&unk_190941C0C + v4);
    *(_DWORD *)((char *)&unk_19025F140 + v3 * 4) = v15;
    *(_DWORD *)((char *)&unk_19025F144 + v3 * 4) = v16;
    *(_DWORD *)((char *)&unk_19025F148 + v3 * 4) = v17;
    v18 = 188LL * dword_19025F118[v3];
    *(_DWORD *)((char *)&unk_140249624 + v18) = v15;
    *(_DWORD *)((char *)&unk_140249628 + v18) = v16;
    *(_DWORD *)((char *)&unk_14024962C + v18) = v17;
    *(_QWORD *)((char *)&unk_140249660 + v18) = 0;
    *(_QWORD *)((char *)&unk_140249668 + v18) = 0;
    *(_QWORD *)((char *)&unk_140249670 + v18) = 0;
    return 0;
  }
  return result;
}

