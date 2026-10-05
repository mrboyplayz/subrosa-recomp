/* Address: 0x14024c0f0 | Name: sub_14024C0F0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14024C0F0(char *a1)
{
  char v1; // al
  char v3; // al
  unsigned int v4; // eax
  char v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+31h] [rbp+9h]
  __int16 v8; // [rsp+32h] [rbp+Ah]

  v1 = *a1;
  if ( (*a1 == 92 || v1 == 47) && v1 == a1[1] )
    return 0;
  v3 = toupper(v1);
  v6 = 61;
  v7 = v3;
  v8 = 58;
  if ( (unsigned int)_acrt_SetEnvironmentVariableA(&v6, a1) )
    return 0;
  v4 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v4);
  return 0xFFFFFFFFLL;
}

