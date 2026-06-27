#include "Powers.h"
#include "Player.h"

// CONSTRUCTOR
// Coordinates from Shop.h iconRects[3]

DistanceIncrease::DistanceIncrease(float x, float y)
    : PowerUp(x, y, IntRect({ 341, 339 }, { 115, 141 }))
{ }

// APPLYTO Tells player to activate distance increase effect
void DistanceIncrease::applyTo(Player* p)
{
    p->activateDistanceIncrease();
}