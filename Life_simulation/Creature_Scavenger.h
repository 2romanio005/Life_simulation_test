#pragma once
#include "Definition.h"

class Creature_Scavenger : public Creature {
public:
	Creature_Scavenger(std::pair<int, int> map_cord, int energy, DIRECTION dir, int age = 0, std::vector<Action*>* brain = nullptr, unsigned int iter = 0);

	Creature* copy(std::pair<int, int> map_cord) override;

	~Creature_Scavenger() override;

	//void step() override;

	void draw_myself(HDC hdc, std::pair<int, int> cord) override;

	static int get_type_count();

	TYPE_CREATURE get_TYPE_CREATURE() override;
private:
	static int CountScavenger;
};



