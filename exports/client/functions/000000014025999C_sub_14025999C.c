/* Address: 0x14025999c | Name: sub_14025999C | Size: 75 bytes */
bool __fastcall sub_14025999C(__int64 a1, int a2, int a3)
{
  return a3 > 0
      && (a3 <= dword_14028BF18[a2 + 1] - dword_14028BF18[a2]
       || (unsigned __int8)sub_1402374E4(a1) && a2 == 1 && a3 <= 29);
}

