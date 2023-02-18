#pragma once
#include "Creatures.h"
#include "Creature_Herbivore.h"

Creature_Herbivore::Creature_Herbivore(std::pair<int, int> map_cord, int energy, DIRECTION dir, int age, std::vector<Action*>* brain, unsigned int iter) : Creature(map_cord, energy, dir, age, brain, iter) {
	this->CountHarbivore++;
}
int Creature_Herbivore::CountHarbivore = 0;

Creature_Herbivore::~Creature_Herbivore() {
	this->CountHarbivore--;
}

Creature* Creature_Herbivore::copy(std::pair<int, int> map_cord) {
	std::vector<Action*>* br = copy_brain(this->brain);
	return new Creature_Herbivore(map_cord, this->energy, this->dir, this->age, copy_brain(this->brain));
	delete br;
}

void Creature_Herbivore::draw_myself(HDC hdc, std::pair<int, int> cord)
{
	int r = int(size_cell * 0.4);
	cord.first += size_half_cell; cord.second += size_half_cell;
	SelectObject(hdc, H_Red);
	RoundRect(hdc, cord.first - r, cord.second - r, cord.first + r, cord.second + r, r * 2, r * 2);
}

int Creature_Herbivore::get_type_count()
{
	return CountHarbivore;
}

TYPE_CREATURE Creature_Herbivore::get_TYPE_CREATURE() {
	return Herbivore;
}
