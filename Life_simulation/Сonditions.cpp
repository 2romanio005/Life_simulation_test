#include "�onditions.h"

//�ondition::�ondition (int true_iter, int false_iter, Creature* creature, Direction dir, Type_Creature type_creature, bool (*�ond)(Creature* creature, Direction dir, Type_Creature type_creature), void (*Action)(Creature* creature))
//{
//	this->true_iter = true_iter;
//	this->false_iter = false_iter;
//	this->creature = creature;
//	this->dir = dir;
//	this->type_creature = type_creature;
//	this->�ond = �ond;
//	this->Action = Action;
//}
//
//int �ondition::use()
//{
//	if (true_iter == -1) {
//		this->Action(this->creature);
//		//return creature
//	}
//
//	if (this->�ond(this->creature, this->dir, this->type_creature)) {
//		return true_iter;
//	}
//	else {
//		return false_iter;
//	}
//}
