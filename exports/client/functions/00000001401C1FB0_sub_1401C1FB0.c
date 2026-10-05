/* Address: 0x1401c1fb0 | Name: sub_1401C1FB0 | Size: 895 bytes */
__int64 __fastcall sub_1401C1FB0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // [rsp+0h] [rbp-78h] BYREF
  _DWORD v4[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-50h] BYREF
  _DWORD v6[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-40h]
  unsigned int v8; // [rsp+3Ch] [rbp-3Ch]
  _DWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+48h] [rbp-30h]
  unsigned int v11; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v12; // [rsp+50h] [rbp-28h]
  unsigned int v13; // [rsp+54h] [rbp-24h]
  unsigned int v14; // [rsp+58h] [rbp-20h]
  unsigned int v15; // [rsp+5Ch] [rbp-1Ch]
  __int64 v16; // [rsp+60h] [rbp-18h]

  sub_1401DB040(v9, a2, 8);
  sub_1401DB040(v6, v9, 4);
  sub_1401DB040(v4, v6, 2);
  sub_1401DB040(&v5, v4, 1);
  sub_1401DB0B0(a1, v4[0], v5, &unk_1402826A0);
  sub_1401DB0B0(a1, v6[0], v4[0], &unk_1402825F0);
  sub_1401DB0B0(a1, v9[0], v6[0], &unk_140282540);
  sub_1401DB0B0(a1, *a2, v9[0], &unk_1402824A0);
  sub_1401DB0B0(a1, a2[2], v9[1], &unk_1402824A0);
  sub_1401DB0B0(a1, v10, v6[1], &unk_140282540);
  sub_1401DB0B0(a1, a2[4], v10, &unk_1402824A0);
  sub_1401DB0B0(a1, a2[6], v11, &unk_1402824A0);
  sub_1401DB0B0(a1, v7, v4[1], &unk_1402825F0);
  sub_1401DB0B0(a1, v12, v7, &unk_140282540);
  sub_1401DB0B0(a1, a2[8], v12, &unk_1402824A0);
  sub_1401DB0B0(a1, a2[10], v13, &unk_1402824A0);
  sub_1401DB0B0(a1, v14, v8, &unk_140282540);
  sub_1401DB0B0(a1, a2[12], v14, &unk_1402824A0);
  sub_1401DB0B0(a1, a2[14], v15, &unk_1402824A0);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v3 ^ v16);
}

