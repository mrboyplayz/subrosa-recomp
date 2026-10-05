/* Address: 0x1400011e0 | Name: sub_1400011E0 | Size: 188 bytes */
__int64 sub_1400011E0()
{
  SteamAPI_RegisterCallback(&off_140301EB8, 513);
  byte_140301EE0 = 0;
  qword_140301ED8 = (__int64)&off_140279AF0;
  dword_140301EE4 = 0;
  qword_140301EF0 = (__int64)sub_1401982B0;
  qword_140301EE8 = (__int64)&off_140301E90;
  SteamAPI_RegisterCallback(&qword_140301ED8, 337);
  byte_140301F00 = 0;
  qword_140301EF8 = (__int64)&off_140279B40;
  dword_140301F04 = 0;
  qword_140301F10 = (__int64)sub_1401982C0;
  qword_140301F08 = (__int64)&off_140301E90;
  SteamAPI_RegisterCallback(&qword_140301EF8, 1202);
  return sub_1401F913C(sub_14026DD50);
}

