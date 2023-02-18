#pragma once
#include "Definition.h"

class Creature_Plant : public Creature {
public:
	class Action_go {
	public:
		Action_go(Creature_Plant* creature) {
			creature->brain.push_back(get_rand_Action(creature, 10));
			creature->CountPlant++;
		};
	};
	Creature_Plant(std::pair<int, int> map_cord, int energy, DIRECTION dir, int age = 0, std::vector<Action*>* brain = nullptr, unsigned int iter = 0);

	~Creature_Plant() override;

	Creature* copy(std::pair<int, int> map_cord) override;

	//void step() override;

	void draw_myself(HDC hdc, std::pair<int, int> cord) override;

	static int get_type_count();

	void tmp() {
		Action_go(this);
	};

	TYPE_CREATURE get_TYPE_CREATURE() override;
private:
	static int CountPlant;


};

