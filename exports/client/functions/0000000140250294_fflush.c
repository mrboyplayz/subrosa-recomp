/* Address: 0x140250294 | Name: fflush | Size: 102 bytes */
int __cdecl fflush(FILE *Stream)
{
  int v2; // edx
  FILE *v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+40h] [rbp+8h] BYREF
  FILE *v5; // [rsp+48h] [rbp+10h] BYREF
  FILE *v6; // [rsp+50h] [rbp+18h] BYREF
  FILE **v7; // [rsp+58h] [rbp+20h] BYREF

  v5 = Stream;
  if ( !Stream )
    return sub_1402500F4(0);
  v2 = *((_DWORD *)Stream + 5);
  if ( ((v2 & 3) != 2 || (v2 & 0xC0) == 0) && (v2 & 0x800) == 0 )
    return 0;
  v7 = &v5;
  v6 = v5;
  v3 = v5;
  return sub_14024FE68((__int64)&v4, &v3, &v7, &v6);
}

