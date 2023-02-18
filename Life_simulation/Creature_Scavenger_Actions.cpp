#pragma once
#include "Cell.h"
#include "Creature_Scavenger.h"

Creature_Scavenger::Action_go::Action_go(Creature_Scavenger* creature) : Action_go_global(creature)
{
}

bool Creature_Scavenger::Action_go::use()
{
	std::pair<int, int> next = near_cell_cord(static_cast<Creature_Scavenger*>(this->creature)->map_cord, static_cast<Creature_Scavenger*>(this->creature)->dir);

	if (map[next.first][next.second].get_TYPE_CREATURE() == TYPE_CREATURE::Void) {
		map[next.first][next.second].swap_Creapure(&map[static_cast<Creature_Scavenger*>(this->creature)->map_cord.first][static_cast<Creature_Scavenger*>(this->creature)->map_cord.second]);
		static_cast<Creature_Scavenger*>(this->creature)->map_cord = next;
	}

	static_cast<Creature_Scavenger*>(this->creature)->next_iter();
	return true;
}

Action* Creature_Scavenger::Action_go::copy()
{
	return new Action_go(static_cast<Creature_Scavenger*>(this->creature));
}

