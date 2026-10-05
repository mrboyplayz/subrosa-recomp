/* Address: 0x1401c2340 | Name: sub_1401C2340 | Size: 1578 bytes */
__int64 __fastcall sub_1401C2340(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-D8h] BYREF
  __int16 v5; // [rsp+30h] [rbp-A8h] BYREF
  __int16 v6; // [rsp+32h] [rbp-A6h] BYREF
  __int16 *v7; // [rsp+38h] [rbp-A0h]
  __int16 *v8; // [rsp+40h] [rbp-98h]
  __int64 v9; // [rsp+48h] [rbp-90h]
  __int64 v10; // [rsp+50h] [rbp-88h]
  __int16 *v11; // [rsp+58h] [rbp-80h]
  __int64 v12; // [rsp+60h] [rbp-78h]
  __int64 v13; // [rsp+68h] [rbp-70h]
  __int16 *v14; // [rsp+70h] [rbp-68h]
  __int16 *v15; // [rsp+78h] [rbp-60h]
  __int64 v16; // [rsp+80h] [rbp-58h]
  __int64 v17; // [rsp+88h] [rbp-50h]
  __int16 *v18; // [rsp+90h] [rbp-48h]
  __int64 v19; // [rsp+98h] [rbp-40h]
  __int64 v20; // [rsp+A0h] [rbp-38h]
  __int16 v21; // [rsp+A8h] [rbp-30h] BYREF
  __int16 v22; // [rsp+AAh] [rbp-2Eh] BYREF
  __int16 v23; // [rsp+ACh] [rbp-2Ch] BYREF
  __int16 v24; // [rsp+AEh] [rbp-2Ah] BYREF
  __int16 v25; // [rsp+B0h] [rbp-28h] BYREF
  __int16 v26; // [rsp+B2h] [rbp-26h] BYREF
  __int16 v27; // [rsp+B4h] [rbp-24h] BYREF
  __int16 v28; // [rsp+B6h] [rbp-22h] BYREF
  __int16 v29; // [rsp+B8h] [rbp-20h] BYREF
  __int16 v30; // [rsp+BAh] [rbp-1Eh] BYREF
  __int16 v31; // [rsp+BCh] [rbp-1Ch] BYREF
  __int16 v32; // [rsp+BEh] [rbp-1Ah] BYREF
  __int64 v33; // [rsp+C0h] [rbp-18h]

  sub_1401DB110((unsigned int)&v5, (unsigned int)&v6, a2, a3, (__int64)&unk_1402826A0);
  v7 = &v21;
  sub_1401DB110((unsigned int)&v21, (unsigned int)&v22, a2, v5, (__int64)&unk_1402825F0);
  v8 = &v25;
  sub_1401DB110((unsigned int)&v25, (unsigned int)&v26, a2, v21, (__int64)&unk_140282540);
  v9 = a1;
  sub_1401DB110(a1, a1 + 2, a2, v25, (__int64)&unk_1402824A0);
  v10 = a1 + 4;
  sub_1401DB110(a1 + 4, a1 + 6, a2, v26, (__int64)&unk_1402824A0);
  v11 = &v27;
  sub_1401DB110((unsigned int)&v27, (unsigned int)&v28, a2, v22, (__int64)&unk_140282540);
  v12 = a1 + 8;
  sub_1401DB110(a1 + 8, a1 + 10, a2, v27, (__int64)&unk_1402824A0);
  v13 = a1 + 12;
  sub_1401DB110(a1 + 12, a1 + 14, a2, v28, (__int64)&unk_1402824A0);
  v14 = &v23;
  sub_1401DB110((unsigned int)&v23, (unsigned int)&v24, a2, v6, (__int64)&unk_1402825F0);
  v15 = &v29;
  sub_1401DB110((unsigned int)&v29, (unsigned int)&v30, a2, v23, (__int64)&unk_140282540);
  v16 = a1 + 16;
  sub_1401DB110(a1 + 16, a1 + 18, a2, v29, (__int64)&unk_1402824A0);
  v17 = a1 + 20;
  sub_1401DB110(a1 + 20, a1 + 22, a2, v30, (__int64)&unk_1402824A0);
  v18 = &v31;
  sub_1401DB110((unsigned int)&v31, (unsigned int)&v32, a2, v24, (__int64)&unk_140282540);
  v19 = a1 + 24;
  sub_1401DB110(a1 + 24, a1 + 26, a2, v31, (__int64)&unk_1402824A0);
  v20 = a1 + 28;
  sub_1401DB110(a1 + 28, a1 + 30, a2, v32, (__int64)&unk_1402824A0);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v33);
}

