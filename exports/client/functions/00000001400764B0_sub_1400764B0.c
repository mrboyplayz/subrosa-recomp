/* Address: 0x1400764b0 | Name: sub_1400764B0 | Size: 700 bytes */
void __fastcall sub_1400764B0(char *a1, float a2, float a3, float a4, char a5)
{
  char *v5; // rbx
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  unsigned int *v9; // rcx
  char v10; // al

  v5 = a1;
  v6 = a3;
  v7 = a2;
  if ( (int)dword_140404A6C[70212041] < 1024 )
  {
    v8 = sub_14006F060(dword_140404A6C[70087066], a1);
    if ( (a5 & 1) != 0 )
    {
      v7 = a2 + (float)(v8 * -0.5);
    }
    else if ( (a5 & 2) != 0 )
    {
      v7 = a2 - v8;
    }
    if ( (a5 & 4) != 0 )
    {
      v6 = a3 + (float)(a4 * -0.5);
    }
    else if ( (a5 & 8) != 0 )
    {
      v6 = a3 - a4;
    }
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212043] = dword_140404A6C[70087046];
    v9 = &dword_140404A6C[77 * dword_140404A6C[70212041] + 70212055];
    do
    {
      v10 = *v5++;
      *(_BYTE *)v9 = v10;
      v9 = (unsigned int *)((char *)v9 + 1);
    }
    while ( v10 );
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212042] = dword_140404A6C[70087066];
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212044] = v7;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212045] = v6;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212050] = a4;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = v7;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = v6;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212053] = a4;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212054] = a4;
    if ( dword_140404A6C[70087046] != -1 )
    {
      *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290981]
                                                                            + *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051];
      *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = (float)(*(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290982]
                                                                                    - *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290905])
                                                                            + *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052];
    }
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212046] = dword_140404A6C[70087087];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212047] = dword_140404A6C[70087088];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212048] = dword_140404A6C[70087089];
    dword_140404A6C[77 * dword_140404A6C[70212041]++ + 70212049] = dword_140404A6C[70087090];
  }
}

