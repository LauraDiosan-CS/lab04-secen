#include "Expense.h"
#include "Repo.h"
#include <assert.h>
#include <iostream>
void tests()
{
	//Expense tests
	Expense e = Expense(1, 0, "altele");
	Expense e2 = Expense(2, 10, "internet");
	assert(e.getDay() == 1);
	assert(e.getSum() == 0);
	assert(e.getType() == 6);
	assert(e != e2);
	assert(e == e);
	//Repo tests
	Repo rep;
	rep.addItem(e);
	assert(rep.getSize() == 1);
	Expense item = rep.getItemFromPos(0);
	assert(rep.getItemFromPos(0) == e);
	rep.addItem(e2);
	assert(rep.getSize() == 2);
}