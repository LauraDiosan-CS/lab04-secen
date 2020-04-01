#pragma once
#include "Player.h"
class Repo 
{
	private:
		Player entities[10];
		int noOfEntities;
	public:
		Repo();     
		~Repo();
		void addItem(Player s);
		Player getItemFromPos(int pos);
		int getSize();
		void removeItemFromPos(int pos);
		void modifyElementAtPos(int pos, Player& s);
		Player* getArray();
		int getPositionOfElement(Player &s);
};