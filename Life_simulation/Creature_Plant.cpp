#include "Creatures.h"
#include "Creature_Plant.h"



Creature_Plant::Creature_Plant(std::pair<int, int> map_cord, int energy, DIRECTION dir, int age, std::vector<Action*>* brain, unsigned int iter) : Creature(map_cord, energy, dir, age, brain, iter) {
	this->CountPlant++;
}
int Creature_Plant::CountPlant = 0;

Creature_Plant::~Creature_Plant() {
	this->CountPlant--;
}

Creature* Creature_Plant::copy(std::pair<int, int> map_cord) {
	std::vector<Action*>* br = copy_brain(this->brain);
	return new Creature_Plant(map_cord, this->energy, this->dir, this->age, br);
	delete br;
}

void Creature_Plant::draw_myself(HDC hdc, std::pair<int, int> cord)
{
	int r = int(size_cell * 0.4);
	cord.first += size_half_cell; cord.second += size_half_cell;
	SelectObject(hdc, H_Green);
	RoundRect(hdc, cord.first - r, cord.second - r, cord.first + r, cord.second + r, r * 2, r * 2);
}

int Creature_Plant::get_type_count()
{
	return CountPlant;
}

TYPE_CREATURE Creature_Plant::get_TYPE_CREATURE() {
	return Plant;
}
