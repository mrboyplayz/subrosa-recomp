/* Address: 0x14024eebc | Name: sub_14024EEBC | Size: 149 bytes */
__int64 __fastcall sub_14024EEBC(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *function)(__int64, _QWORD, __int64, __int64); // rax
  _BYTE v9[4]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  function = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))try_get_function(
                                                                          2u,
                                                                          (__int64)"EnumSystemLocalesEx",
                                                                          (unsigned int *)&unk_14028AC28,
                                                                          (unsigned int *)"EnumSystemLocalesEx");
  if ( function )
    return function(v13, a2, a3, a4);
  v12 = &v13;
  v10 = 4;
  v11 = 4;
  return sub_14024E088((__int64)v9, &v11, &v12, &v10);
}

