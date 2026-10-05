/* Address: 0x1400974f0 | Name: sub_1400974F0 | Size: 456 bytes */
void __fastcall sub_1400974F0(int a1, int a2, int a3, int a4)
{
  __int64 v8; // rsi
  int v9; // edx
  int v10; // r9d
  __int64 v11; // kr00_8
  int *v12; // rax
  char *v13; // rdx
  char Buffer[512]; // [rsp+20h] [rbp-238h] BYREF

  v8 = 1116LL * a2 + 23492LL * a1;
  if ( *(_DWORD *)((char *)&unk_191541180 + v8 + 1128) <= 1u )
  {
    sub_1400DBB30(Buffer, "Acquisition(%d)");
    if ( a3 )
      v10 = *(_DWORD *)((char *)&unk_191541180 + v8 + 1180) / 10;
    else
      v10 = -10;
    v11 = 1717986919LL * a4;
    goto LABEL_15;
  }
  sub_1400DBB30(Buffer, "Transaction(%d)");
  v9 = a4 / 10 - *(_DWORD *)((char *)&unk_191541180 + v8 + 1192) / 10;
  if ( *(_DWORD *)((char *)&unk_191541180 + v8 + 1128) != 2 )
  {
    v10 = a4 / 10 - *(_DWORD *)((char *)&unk_191541180 + v8 + 1192) / 10;
    if ( !a3 )
      goto LABEL_16;
    v11 = 1717986919LL * *(int *)((char *)&unk_191541180 + v8 + 1180);
LABEL_15:
    v10 += (HIDWORD(v11) >> 31) + (SHIDWORD(v11) >> 2);
    goto LABEL_16;
  }
  v10 = v9 + 50;
  if ( v9 < 0 )
    v10 = a4 / 10 - *(_DWORD *)((char *)&unk_191541180 + v8 + 1192) / 10;
  if ( a3 )
  {
    if ( v10 >= -10 )
      v10 += 10;
    else
      v10 = -10;
  }
LABEL_16:
  v12 = dword_16D67D5EC;
  do
  {
    if ( *(v12 - 19) && v12[14] == a1 )
    {
      if ( v10 > 0 )
        *v12 += 10 * v10;
      v12[3] += v10;
    }
    v12 += 3597;
  }
  while ( (__int64)v12 < (__int64)dword_16DA009EC );
  v13 = "%s: Complete   Rating:  %d";
  if ( dword_178C5B8E0 >= *(_DWORD *)((char *)&unk_191541180 + v8 + 1184) )
    v13 = "%s: Expired    Rating:  %d";
  sub_1400DBB30(&byte_191541638[v8], v13);
  *(_DWORD *)((char *)&unk_191541180 + v8 + 1120) = 1;
  sub_14003A1E0(a1, a2);
}

