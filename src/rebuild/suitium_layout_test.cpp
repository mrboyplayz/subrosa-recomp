/* Layout comparisons against the locally vendored GPL-3.0 Suitium headers.
   Does not link or run its mod logic or declaration-only dependency shims. */
#include <cstdio>
#include <cstddef>
#include "suitium_types.h"
#include "Common.hpp"
#include "Human.hpp"
#include "Item.hpp"
#include "ItemType.hpp"
#include "Vehicle.hpp"
#include "VehicleType.hpp"

#define TYPE(c, upstream) do { \
    static_assert(sizeof(c) == sizeof(structs::upstream), #c " size"); \
    static_assert(alignof(c) == alignof(structs::upstream), #c " alignment"); \
    ++types; \
} while (0)
#define FIELD(c, upstream, field) do { \
    static_assert(offsetof(c, field) == offsetof(structs::upstream, field), #c "." #field " offset"); \
    static_assert(sizeof(((c*)nullptr)->field) == sizeof(((structs::upstream*)nullptr)->field), #c "." #field " size"); \
    ++fields; \
} while (0)
#define HUMAN(f) FIELD(SrHuman, Human, f)
#define ITEM(f) FIELD(SrItem, Item, f)
#define ITYPE(f) FIELD(SrItemType, ItemType, f)
#define VEHICLE(f) FIELD(SrVehicle, Vehicle, f)
#define VTYPE(f) FIELD(SrVehicleType, VehicleType, f)

int main() {
    unsigned types = 0, fields = 0;
    TYPE(SrCBoolean, CBoolean); TYPE(SrCInteger, CInteger);
    TYPE(SrCVector3, CVector3); TYPE(SrCOrientation, COrientation);
    TYPE(SrBone, Bone); TYPE(SrInventorySlot, InventorySlot);
    TYPE(SrHuman, Human); TYPE(SrItem, Item); TYPE(SrItemType, ItemType);
    TYPE(SrVehicle, Vehicle); TYPE(SrVehicleType, VehicleType);
    TYPE(SrCustomData, ItemType::CustomData); TYPE(SrVehicleCustomData, VehicleType::CustomData);
    FIELD(SrBone, Bone, rigidBodyID); FIELD(SrBone, Bone, position);
    FIELD(SrBone, Bone, alternativePosition); FIELD(SrBone, Bone, velocity); FIELD(SrBone, Bone, orientation);
    FIELD(SrInventorySlot, InventorySlot, numberOfPlaces);
    FIELD(SrInventorySlot, InventorySlot, firstPlaceItemID); FIELD(SrInventorySlot, InventorySlot, secondPlaceItemID);
    HUMAN(isActive); HUMAN(isPhysicsEnabled); HUMAN(playerID); HUMAN(accountID);
    HUMAN(stamina); HUMAN(maximumStamina); HUMAN(vehicleID); HUMAN(vehicleSeatID); HUMAN(lastVehicleID);
    HUMAN(despawnTimer); HUMAN(isEliminator); HUMAN(spawnProtectionTimer); HUMAN(isOnGround);
    HUMAN(movementStateID); HUMAN(zoomLevel); HUMAN(damage); HUMAN(isStanding);
    HUMAN(position); HUMAN(alternativePosition); HUMAN(viewYaw); HUMAN(viewPitch);
    HUMAN(alternativeViewYaw); HUMAN(rightInput); HUMAN(forwardInput); HUMAN(alternativeViewPitch);
    HUMAN(inputFlags); HUMAN(previousInputFlags); HUMAN(bones); HUMAN(inventorySlots);
    HUMAN(health); HUMAN(bloodLevel); HUMAN(isBleeding); HUMAN(torsoHealth); HUMAN(headHealth);
    HUMAN(leftArmHealth); HUMAN(rightArmHealth); HUMAN(leftLegHealth); HUMAN(rightLegHealth);
    HUMAN(progressBar); HUMAN(inventoryAnimationFlags); HUMAN(inventoryAnimationProgress);
    HUMAN(inventoryAnimationDuration); HUMAN(inventoryAnimationHand); HUMAN(inventoryAnimationSlot);
    HUMAN(inventoryAnimationCounterFinished); HUMAN(inventoryAnimationCounter);
    HUMAN(genderID); HUMAN(headModelID); HUMAN(skinColorID); HUMAN(hairColorID); HUMAN(hairModelID);
    HUMAN(eyeColorID); HUMAN(modelID); HUMAN(suitColorID); HUMAN(tieColorID); HUMAN(necklaceID); HUMAN(lastUpdatedWantedGroup);
    ITEM(isActive); ITEM(isPhysicsEnabled); ITEM(isPhysicsSettled); ITEM(physicsSettledTimer); ITEM(isStatic);
    ITEM(typeID); ITEM(despawnTimer); ITEM(grenadePrimerID); ITEM(parentHumanID); ITEM(parentItemID); ITEM(parentInventorySlotID);
    ITEM(rigidBodyID); ITEM(position); ITEM(alternativePosition); ITEM(velocity); ITEM(alternativeVelocities); ITEM(orientation);
    ITEM(cooldown); ITEM(ammoCount); ITEM(connectedPhoneItemID); ITEM(phoneNumber); ITEM(displayPhoneNumber);
    ITEM(enteredPhoneNumber); ITEM(phoneTextureID); ITEM(keyVehicleID); ITEM(cashSpread); ITEM(cashBillAmount); ITEM(cashPureValue);
    ITEM(computerCurrentLine); ITEM(computerTopLine); ITEM(computerCursor); ITEM(computerChars); ITEM(computerColors); ITEM(computerTeamID);
    ITYPE(price); ITYPE(mass); ITYPE(isGun); ITYPE(useAlternativeAim); ITYPE(fireRate); ITYPE(bulletTypeID);
    ITYPE(ammoCount); ITYPE(bulletVelocity); ITYPE(bulletSpread); ITYPE(name); ITYPE(handCount);
    ITYPE(rightHandOffset); ITYPE(leftHandOffset); ITYPE(primaryGripStiffness); ITYPE(primaryGripRotation);
    ITYPE(secondaryGripStiffness); ITYPE(secondaryGripRotation); ITYPE(boundsCenter); ITYPE(linkableMap);
    ITYPE(customData); ITYPE(gunHoldPosition);
    VEHICLE(isActive); VEHICLE(typeID); VEHICLE(controllerTypeID); VEHICLE(health); VEHICLE(lastDriverPlayerID);
    VEHICLE(colorID); VEHICLE(despawnTimer); VEHICLE(spawnedStateID); VEHICLE(isLocked); VEHICLE(rigidBodyID);
    VEHICLE(position); VEHICLE(alternativePosition); VEHICLE(orientation); VEHICLE(velocity); VEHICLE(windowBrokenMap);
    VEHICLE(gearX); VEHICLE(steerControl); VEHICLE(gearY); VEHICLE(gasControl); VEHICLE(trafficCarID);
    VEHICLE(engineRPM); VEHICLE(bladeRigidBodyID); VEHICLE(numberOfSeats);
    VTYPE(usesExternalModel); VTYPE(useUnstablePhysics); VTYPE(controllerTypeID); VTYPE(name); VTYPE(price); VTYPE(mass); VTYPE(customData);
    std::printf("PASS: %u type sizes/alignments and %u field offsets/sizes match Suitium.\n", types, fields);
    return 0;
}
