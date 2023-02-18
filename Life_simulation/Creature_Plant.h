#pragma once
#include "Definition.h"

#include "Creatures.h"

class Creature_Plant : public Creature {
public:
	Creature_Plant(std::pair<int, int> map_cord, int energy, DIRECTION dir, int age = 0, std::vector<Action*>* brain = nullptr, unsigned int iter = 0);

	~Creature_Plant() override;

	Creature* copy(std::pair<int, int> map_cord) override;

	//void step() override;

	void draw_myself(HDC hdc, std::pair<int, int> cord) override;

	static int get_type_count();

	TYPE_CREATURE get_TYPE_CREATURE() override;
private:
	static int CountPlant;

	class Action_go : public Action_go_global {
	public:
		Action_go(Creature_Plant* creature);

		bool use() override;

		Action* copy() override;
	};

	class Action_eat : public Action_eat_global {
	public:
		Action_eat(Creature_Plant* creature);

		bool use() override;

		Action* copy() override;
	};

	class Action_multiply : public Action_multiply_global {
	public:
		Action_multiply(Creature_Plant* creature);

		bool use() override;

		Action* copy() override;
	};

	class Action_turn : public Action_turn_global {
	public:
		Action_turn(Creature_Plant* creature, DIRECTION to_dir);

		bool use() override;

		Action* copy() override;
	};

	class Action_condition_by_TYPE_CREATURE : public Action_condition_by_TYPE_CREATURE_global {
	public:
		Action_condition_by_TYPE_CREATURE(Creature_Plant* creature);

		bool use() override;

		Action* copy() override;
	};

	class Action_condition_by_Cell : public Action_condition_by_Cell_global {
	public:
		Action_condition_by_Cell(Creature_Plant* creature);

		bool use() override;

		Action* copy() override;
	};

	class Action_change_iter : public Action_change_iter_global {
	public:
		Action_change_iter(Creature_Plant* creature);

		bool use() override;

		Action* copy() override;
	};
};

