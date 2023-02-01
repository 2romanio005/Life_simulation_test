#include "Ñonditions.h"

//Ñondition::Ñondition (int true_iter, int false_iter, Creature* creature, Direction dir, Type_Creature type_creature, bool (*Ñond)(Creature* creature, Direction dir, Type_Creature type_creature), void (*Action)(Creature* creature))
//{
//	this->true_iter = true_iter;
//	this->false_iter = false_iter;
//	this->creature = creature;
//	this->dir = dir;
//	this->type_creature = type_creature;
//	this->Ñond = Ñond;
//	this->Action = Action;
//}
//
//int Ñondition::use()
//{
//	if (true_iter == -1) {
//		this->Action(this->creature);
//		//return creature
//	}
//
//	if (this->Ñond(this->creature, this->dir, this->type_creature)) {
//		return true_iter;
//	}
//	else {
//		return false_iter;
//	}
//}
