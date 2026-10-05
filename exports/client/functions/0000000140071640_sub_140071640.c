/* Address: 0x140071640 | Name: sub_140071640 | Size: 719 bytes */
void __fastcall sub_140071640(char *a1)
{
  char *v2; // rdx
  unsigned int *v3; // rcx
  char v4; // al

  if ( (int)dword_140404A6C[70212041] < 1024 )
  {
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212043] = dword_140404A6C[70087046];
    v2 = a1;
    v3 = &dword_140404A6C[77 * dword_140404A6C[70212041] + 70212055];
    do
    {
      v4 = *v2++;
      *(_BYTE *)v3 = v4;
      v3 = (unsigned int *)((char *)v3 + 1);
    }
    while ( v4 );
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212042] = dword_140404A6C[70087066];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212044] = dword_140404A6C[70087067];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212045] = dword_140404A6C[70087068];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212050] = dword_140404A6C[70087071];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = dword_140404A6C[70087067];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = dword_140404A6C[70087068];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212053] = dword_140404A6C[70087071];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212054] = dword_140404A6C[70087071];
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
    if ( dword_140404A6C[70087083] )
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                           + (float)(*(float *)&dword_140404A6C[70087071] + 4.0);
    else
      *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                           + (float)(sub_14006F060(dword_140404A6C[70087066], a1) + 4.0);
  }
}

