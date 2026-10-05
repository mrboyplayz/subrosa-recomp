#include <cstdint>
#include <cstdio>
#include <cstddef>
#include <stdexcept>
#include "../../third_party/rosaserver/RosaServer/structs.h"
#include "../recovered/server_entities.h"

#define SIZE(c, cpp) static_assert(sizeof(c) == sizeof(cpp)); static_assert(alignof(c) == alignof(cpp))
#define FIELD(c, cpp, field) static_assert(offsetof(c, field) == offsetof(cpp, field)); \
    static_assert(sizeof(((c *)0)->field) == sizeof(((cpp *)0)->field))
#define PLAYER(field) FIELD(SrServerPlayer, Player, field)
#define CONNECTION(field) FIELD(SrServerConnection, Connection, field)
SIZE(SrServerPlayer, Player);
SIZE(SrServerConnection, Connection);
SIZE(SrServerEarShot, EarShot);
SIZE(SrServerAction, Action);
SIZE(SrServerMenuButton, MenuButton);
PLAYER(active); PLAYER(name); PLAYER(subRosaID); PLAYER(phoneNumber);
PLAYER(isAdmin); PLAYER(adminAttempts); PLAYER(accountID); PLAYER(isReady);
PLAYER(money); PLAYER(teamMoney); PLAYER(budget); PLAYER(corporateRating);
PLAYER(criminalRating); PLAYER(team); PLAYER(teamSwitchTimer); PLAYER(stocks);
PLAYER(spawnTimer); PLAYER(humanID); PLAYER(gearX); PLAYER(leftRightInput);
PLAYER(gearY); PLAYER(forwardBackInput); PLAYER(viewYawDelta); PLAYER(viewPitch);
PLAYER(freeLookYaw); PLAYER(freeLookPitch); PLAYER(viewYaw); PLAYER(viewPitchDelta);
PLAYER(inputFlags); PLAYER(lastInputFlags); PLAYER(zoomLevel); PLAYER(inputType);
PLAYER(menuTab); PLAYER(numActions); PLAYER(lastNumActions); PLAYER(actions);
PLAYER(numMenuButtons); PLAYER(menuButtons); PLAYER(isBot); PLAYER(isZombie);
PLAYER(botHasDestination); PLAYER(botDestination); PLAYER(gender); PLAYER(skinColor);
PLAYER(hairColor); PLAYER(hair); PLAYER(eyeColor); PLAYER(model); PLAYER(suitColor);
PLAYER(tieColor); PLAYER(head); PLAYER(necklace);
CONNECTION(address); CONNECTION(port); CONNECTION(adminVisible); CONNECTION(playerID);
CONNECTION(bandwidth); CONNECTION(timeoutTime); CONNECTION(numReceivedEvents);
CONNECTION(earShots); CONNECTION(spectatingHumanID);
FIELD(SrServerEarShot, EarShot, active);
FIELD(SrServerEarShot, EarShot, playerID);
FIELD(SrServerEarShot, EarShot, humanID);
FIELD(SrServerEarShot, EarShot, receivingItemID);
FIELD(SrServerEarShot, EarShot, transmittingItemID);
FIELD(SrServerEarShot, EarShot, distance);
FIELD(SrServerEarShot, EarShot, volume);

int main() {
    std::puts("PASS: 5 RosaServer type sizes/alignments and 68 field layouts match upstream.");
}
