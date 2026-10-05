/* Address: 0x14024f91c | Name: sub_14024F91C | Size: 346 bytes */
__int64 sub_14024F91C()
{
  try_get_function(0, (__int64)"AreFileApisANSI", &dword_14028ABF8, &dword_14028ABFC);
  try_get_function(1u, (__int64)"CompareStringEx", (unsigned int *)&unk_14028AC10, (unsigned int *)"CompareStringEx");
  try_get_function(
    2u,
    (__int64)"EnumSystemLocalesEx",
    (unsigned int *)&unk_14028AC28,
    (unsigned int *)"EnumSystemLocalesEx");
  try_get_function(8u, (__int64)"GetDateFormatEx", (unsigned int *)&unk_14028AC80, (unsigned int *)"GetDateFormatEx");
  try_get_function(0xBu, (__int64)"GetLocaleInfoEx", (unsigned int *)&unk_14028ACE0, (unsigned int *)"GetLocaleInfoEx");
  try_get_function(0xEu, (__int64)"GetTimeFormatEx", (unsigned int *)&unk_14028AD40, (unsigned int *)"GetTimeFormatEx");
  try_get_function(
    0xFu,
    (__int64)"GetUserDefaultLocaleName",
    (unsigned int *)&unk_14028AD58,
    (unsigned int *)"GetUserDefaultLocaleName");
  try_get_function(
    0x13u,
    (__int64)"IsValidLocaleName",
    (unsigned int *)&unk_14028ADD0,
    (unsigned int *)"IsValidLocaleName");
  try_get_function(0x14u, (__int64)"LCMapStringEx", (unsigned int *)&unk_14028ADF0, (unsigned int *)"LCMapStringEx");
  try_get_function(
    0x15u,
    (__int64)"LCIDToLocaleName",
    (unsigned int *)&unk_14028AE08,
    (unsigned int *)"LCIDToLocaleName");
  return try_get_function(
           0x16u,
           (__int64)"LocaleNameToLCID",
           (unsigned int *)&unk_14028AE28,
           (unsigned int *)"LocaleNameToLCID");
}

