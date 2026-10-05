/* Address: 0x1402670bc | Name: _putwch | Size: 59 bytes */
__int64 __fastcall putwch(__int16 a1)
{
  unsigned __int16 *v2; // [rsp+20h] [rbp-18h] BYREF
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v2 = (unsigned __int16 *)&v3;
  v5 = 9;
  v6 = 9;
  return sub_140267020((__int64)&v4, &v6, &v2, &v5);
}

