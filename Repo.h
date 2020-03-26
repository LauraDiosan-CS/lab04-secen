#pragma once
#include "Expense.h"
class Repo 
{
	private:
		Expense entities[10];
		int noOfEntities;
	public:
		Repo();     
		~Repo();
		void addItem(Expense& s);
		Expense getItemFromPos(int pos);
		int getSize();
		void removeItemFromPos(int pos);
		Expense* getArray();
		int getPositionOfElement(Expense &s);
};