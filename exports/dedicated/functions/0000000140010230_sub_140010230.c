/* Address: 0x140010230 | Name: sub_140010230 | Size: 367 bytes */
unsigned __int64 __fastcall sub_140010230(__int64 a1, float a2, float a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax

  *(float *)&qword_15ADEF184 = a2;
  dword_15ADEF168 = LODWORD(a3);
  v3 = a1;
  dword_15ADEF18C = LODWORD(a3);
  *((float *)&xmmword_15ADEF214 + 2) = a3;
  dword_15ADEF1F8 = LODWORD(a3);
  qword_15ADEF160 = 0x3F80000000000000LL;
  HIDWORD(qword_15ADEF184) = 1065353216;
  *(_QWORD *)&xmmword_15ADEF214 = LODWORD(a2);
  qword_15ADEF1F0 = 0;
  v4 = sub_1400117A0(a1, 393216);
  sub_140001320((__int64)&qword_15ADEF160, (__int64)&xmmword_15ADEF214 + 12, 1, 1, 1, 1, v4 | (v3 + 1));
  *(float *)&qword_15ADEF160 = a2;
  dword_15ADEF168 = LODWORD(a3);
  *(float *)&qword_15ADEF184 = a2;
  *(float *)&xmmword_15ADEF214 = a2;
  dword_15ADEF1F8 = LODWORD(a3);
  HIDWORD(qword_15ADEF160) = 1065353216;
  *(__int64 *)((char *)&qword_15ADEF184 + 4) = 1065353216;
  *(_QWORD *)((char *)&xmmword_15ADEF214 + 4) = 0;
  qword_15ADEF1F0 = LODWORD(a2);
  v5 = sub_1400117A0(v3, 0x20000);
  return sub_140001320(
           (__int64)&qword_15ADEF160,
           (__int64)&xmmword_15ADEF214 + 12,
           1,
           1,
           1,
           1,
           v5 | ((((_BYTE)v3 - 1) & 3u) + 1));
}

