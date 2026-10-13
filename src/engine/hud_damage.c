/* White -> yellow -> red; keep light wounds visible against the world. */
void hud_damage_color(int health, int bleeding, float rgba[4])
{
    if (health < 0) health = 0;
    if (health > 100) health = 100;
    rgba[0] = 1.0f;
    rgba[1] = health < 50 ? health * 0.02f : 1.0f;
    rgba[2] = health < 50 ? 0.0f : (health - 50) * 0.02f;
    rgba[3] = health == 100 ? 0.0f : (100 - health) * 0.02f;
    if (rgba[3] > 1.0f) rgba[3] = 1.0f;
    if (health < 100 && rgba[3] < 0.35f) rgba[3] = 0.35f;
    if (bleeding && health > 87) { rgba[1] = rgba[2] = 0.0f; rgba[3] = 0.35f; }
}
