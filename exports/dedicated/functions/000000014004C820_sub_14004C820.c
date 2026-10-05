/* Address: 0x14004c820 | Name: sub_14004C820 | Size: 142 bytes */
__int64 __fastcall sub_14004C820(int a1, int a2, char *a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 result; // rax
  char *v7; // rax
  char v8; // cl

  v4 = 10280LL * a1;
  v5 = *(int *)((char *)&unk_18F7174C0 + v4 + 4108);
  if ( (int)v5 >= 256 )
    return 0xFFFFFFFFLL;
  *(_DWORD *)((char *)&unk_18F7174C0 + 24 * v5 + v4 + 4112) = a4;
  v7 = (char *)&unk_18F7184D4 + 24 * *(int *)((char *)&unk_18F7174C0 + v4 + 4108) + v4;
  do
  {
    v8 = *a3++;
    *v7++ = v8;
  }
  while ( v8 );
  *(_DWORD *)((char *)&unk_18F7174C0 + 24 * *(int *)((char *)&unk_18F7174C0 + v4 + 4108) + v4 + 4132) = a2;
  result = *(unsigned int *)((char *)&unk_18F7174C0 + v4 + 4108);
  *(_DWORD *)((char *)&unk_18F7174C0 + v4 + 4108) = result + 1;
  return result;
}

