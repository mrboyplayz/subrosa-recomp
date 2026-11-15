/* Round mode settings file. See round_settings.h. */
#include "round_settings.h"
#include "text_parser.h"

/* Existing client boundaries, with their original prototypes. */
extern long long crt_fopen(char *name, char *mode);
extern long long crt_fclose(long long file);
extern long long sub_1400920F0(long long file, char *format, ...);  /* fprintf */
extern void sub_1400ED940(char *name);   /* reads a whole file into the parser buffer, cursor 0 */
extern long long sub_1400A3D70(void);    /* number at the cursor, as a 32-bit word */

/* Defaults for the first four words: 10 minutes, 250, 0, 1. */
extern const int32_t round_settings_defaults[4] __asm__("xmmword_140278EC0");

/* The value after key, if the key occurs and something follows it. The
   original inlines 0x140091DF0 here: the first search continues from the
   cursor the loader left, every later one starts again from 0. */
static void read_key(const char *key, int32_t *value)
{
    if (parser_skip_to_token((const unsigned char *)key))
        *value = (int32_t)sub_1400A3D70();
}

/* 0x1400EC410. The original returns whatever its last call left in xmm0;
   no caller reads it. */
void round_settings_file(int save)
{
    RoundSettings *s = round_settings;
    long long file = 0;
    int32_t team_damage;

    if (save) {
        file = crt_fopen("config_round.txt", "wb");
        if (!file)
            return;
        sub_1400920F0(file, "%s%d\r\n", "roundtime=", s->round_minutes);
        sub_1400920F0(file, "%s%d\r\n", "startcash=", s->start_cash);
        sub_1400920F0(file, "%s%d\r\n", "weekly=", s->weekly);
        sub_1400920F0(file, "%s%d\r\n", "bonusratio=", s->bonus_ratio);
        sub_1400920F0(file, "%s%d\r\n", "teamdamage=", s->team_damage);
        team_damage = s->team_damage;
    } else {
        s->round_minutes = round_settings_defaults[0];
        s->start_cash = round_settings_defaults[1];
        s->weekly = round_settings_defaults[2];
        s->bonus_ratio = round_settings_defaults[3];
        s->team_damage = 50;
        sub_1400ED940("config_round.txt");
        read_key("roundtime=", &s->round_minutes);
        parser_scan->position = 0;
        read_key("startcash=", &s->start_cash);
        parser_scan->position = 0;
        read_key("weekly=", &s->weekly);
        parser_scan->position = 0;
        read_key("bonusratio=", &s->bonus_ratio);
        parser_scan->position = 0;
        team_damage = s->team_damage;
        read_key("teamdamage=", &team_damage);
        parser_scan->position = 0;
    }

    if (s->round_minutes < 1)
        s->round_minutes = 1;
    else if (s->round_minutes > 60)
        s->round_minutes = 60;
    if (team_damage < 0)
        team_damage = 0;
    else if (team_damage > 200)
        team_damage = 200;
    s->team_damage = team_damage;

    if (save)
        crt_fclose(file);
}
