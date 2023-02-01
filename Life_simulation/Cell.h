#pragma once
#include "Definition.h"


class Cell
{
public:
	Cell(�reature* creature = nullptr);

	~Cell();

	void �reature_step();

	void Creature_one_step_finish();

	void draw_myself(HDC hdc);
	std::string write_myself();

	void read_myself(std::string str);

	void change_free_energy(int step);

	void set_Creature(�reature* creature = nullptr);

	void swap_Creapure(Cell* cell);

	void set_map_cord(std::pair<int, int> map_cord);


	int get_free_energy();

	std::pair<int, int> get_map_cord();

	Type_Creature get_Type_Creature();

	int get_Creature_energy();

	�reature* get_Creature();

	//int solar_energy;
private:
	int free_energy;

	std::pair<int, int> map_cord;

	�reature* creature;
};



