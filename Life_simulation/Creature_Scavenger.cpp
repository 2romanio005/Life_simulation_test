#pragma once
#include "Creatures.h"
#include "Creature_Scavenger.h"

Creature_Scavenger::Creature_Scavenger(std::pair<int, int> map_cord, int energy, DIRECTION dir, int age, std::vector<Action*>* brain, unsigned int iter) : Creature(map_cord, energy, dir, age, brain, iter) {
	this->CountScavenger++;
}
int Creature_Scavenger::CountScavenger = 0;

Creature_Scavenger::~Creature_Scavenger() {
	this->CountScavenger--;
}

Creature* Creature_Scavenger::copy(std::pair<int, int> map_cord) {
	std::vector<Action*>* br = copy_brain(this->brain);
	return new Creature_Scavenger(map_cord, this->energy, this->dir, this->age, copy_brain(this->brain));
	delete br;
}

void Creature_Scavenger::draw_myself(HDC hdc, std::pair<int, int> cord)
{
	int r = int(size_cell * 0.4);
	cord.first += size_half_cell; cord.second += size_half_cell;
	SelectObject(hdc, H_Blue);
	RoundRect(hdc, cord.first - r, cord.second - r, cord.first + r, cord.second + r, r * 2, r * 2);
}

int Creature_Scavenger::get_type_count()
{
	return CountScavenger;
}

TYPE_CREATURE Creature_Scavenger::get_TYPE_CREATURE()
{
	return Scavenger;
}
