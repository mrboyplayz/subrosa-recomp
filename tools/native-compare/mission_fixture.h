/* Valid mission records with varied known/title/status data. The raw offsets
   are independent of the readable engine accessors under comparison. */
static void mission_put32(uint64_t address, uint32_t value)
{
    memcpy(D(address), &value, 4);
}
static void setup_mission_records(int c)
{
    static const int intel[] = {INT32_MIN, -1, 0, 1, 8, 9, 10, 11, 12, INT32_MAX};
    for (int t = 0; t < 8; t++)
        mission_put32(0x16D48232CULL + 20ULL * t, intel[(c + t) % 10]);
    for (int doc = 0; doc < 7; doc++) {
        uint64_t record = 0x16B2AAF28ULL + 0x21D74ULL * doc;
        mission_put32(record, (c + doc) % 3 == 0 ? 0 : (uint32_t)(c + doc + 1));
        char *name = D(0x16B2CCC50ULL + 0x21D74ULL * doc);
        int length = (c * 7 + doc * 11) % 64;
        for (int k = 0; k < length; k++) name[k] = 'A' + (c + doc + k) % 26;
        name[length] = 0;
        for (int t = 0; t < 8; t++) {
            uint64_t team = record + 0x86CULL * t;
            static const int counts[] = {INT32_MIN, -1, 0, 1, 2, 3, 4, 5, INT32_MAX};
            mission_put32(team + 0x30, counts[(c + doc + t) % 9]);
            for (int row = 0; row < 4; row++) {
                char *status = D(team + 0x34 + 256ULL * row);
                int n = (c * 11 + doc * 7 + t * 13 + row * 19) % 180;
                for (int k = 0; k < n; k++) status[k] = 'a' + (doc + t + row + k) % 26;
                status[n] = 0;
            }
            char *suffix = D(team + 0x834);
            int n = (c + doc + t) % 15;
            for (int k = 0; k < n; k++) suffix[k] = '0' + (c + k) % 10;
            suffix[n] = 0;
        }
    }
}
