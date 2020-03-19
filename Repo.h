#pragma once
#include "Entity.h"
class Repo 
{
	private:
		Cheltuiala entities[10];
		int noOfEntities;
	public:
		Repo();     
		~Repo();
		void addItem(Cheltuiala& s);
		Cheltuiala getItemFromPos(int pos);
		int getSize();
};