/* Address: 0x14024719c | Name: sub_14024719C | Size: 58 bytes */
int __cdecl sub_14024719C(_onexit_table_t *Table)
{
  _onexit_table_t **v2; // [rsp+20h] [rbp-18h] BYREF
  _onexit_table_t *v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = Table;
  v2 = &v3;
  v5 = 2;
  v6 = 2;
  return sub_140246CFC((__int64)&v4, &v6, (__int64)&v2, &v5);
}

