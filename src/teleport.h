#pragma once
#ifndef TELEPORT_H
#define TELEPORT_H

class Creature;

namespace teleport
{
/** Teleports a creature to a tile within min_distance and max_distance tiles. Limited to 2D.
*bool safe determines wether the teleported creature can telefrag others/itself.
*/
bool teleport( Creature &critter, int min_distance = 2, int max_distance = 12,
               bool safe = false,
               bool add_teleglow = true );

/** Controlled [Offensive] Teleportation - cheesy trait, intended to be usable after acquiring some synergy stuff.
*
*/
//My thoughts: THRESH_CHIMERA (cuz it's already used for dampening teleglow side-effects). Maybe more, in the future
bool teleport_directed( Creature &critter, int min_distance = 2, int max_distance = 500 );
} // namespace teleport

#endif
