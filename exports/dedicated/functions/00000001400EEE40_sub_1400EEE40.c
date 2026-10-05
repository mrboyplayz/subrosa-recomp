/* Address: 0x1400eee40 | Name: sub_1400EEE40 | Size: 446 bytes */
__int64 __fastcall sub_1400EEE40(int a1, FILE *a2, int a3)
{
  __int64 v3; // rbx
  const void **v5; // rdi
  __int64 v7; // rbx
  char *v8; // rdi
  int *v9; // rsi
  int Buffer; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  if ( !a2 )
    return 0;
  Buffer = 1;
  if ( a3 )
  {
    fwrite(&Buffer, 4u, 1u, a2);
    fwrite((char *)&unk_15ADC0FF8 + 184 * v3, 1u, 0x40u, a2);
    v5 = (const void **)((char *)&unk_15ADC0F80 + 184 * v3);
    fwrite(v5 + 11, 4u, 1u, a2);
    fwrite(v5 + 13, 4u, 1u, a2);
    fwrite(v5[12], 1u, *((int *)v5 + 22), a2);
    fwrite(v5[14], 1u, *((int *)v5 + 26), a2);
    return 1;
  }
  fread(&Buffer, 4u, 1u, a2);
  if ( Buffer != 1 )
    return 0;
  v7 = 184 * v3;
  fread((char *)&unk_15ADC0FF8 + v7, 1u, 0x40u, a2);
  v8 = (char *)&unk_15ADC0F80 + v7;
  fread((char *)&unk_15ADC0F80 + v7 + 88, 4u, 1u, a2);
  v9 = (int *)((char *)&unk_15ADC0F80 + v7);
  fread((char *)&unk_15ADC0F80 + v7 + 104, 4u, 1u, a2);
  if ( *(int *)((char *)&unk_15ADC0F80 + v7 + 88) > 0 )
    *(_QWORD *)((char *)&unk_15ADC0F80 + v7 + 96) = malloc(*((int *)v8 + 22));
  if ( v9[26] > 0 )
    *(_QWORD *)((char *)&unk_15ADC0F80 + v7 + 112) = malloc(v9[26]);
  fread(*(void **)((char *)&unk_15ADC0F80 + v7 + 96), 1u, *((int *)v8 + 22), a2);
  fread(*(void **)((char *)&unk_15ADC0F80 + v7 + 112), 1u, v9[26], a2);
  return 1;
}

