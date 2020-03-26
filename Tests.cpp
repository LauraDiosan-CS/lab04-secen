#include "Expense.h"
#include "Repo.h"
#include <assert.h>
#include <iostream>
#include "Service.h"

void tests()
{
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
		assert(rep.getPositionOfElement(item) == 0);
		assert(rep.getItemFromPos(0) == e);
		rep.addItem(e2);
		assert(rep.getSize() == 2);
		rep.removeItemFromPos(1);
		assert(rep.getSize() == 1);
		assert(rep.getPositionOfElement(e2) == -1);
		Expense e3 = Expense(1, 100, "internet");
		rep.modifyElementAtPos(0, e3);
		assert(rep.getItemFromPos(0).getSum() == 100);
	}
	{
		//Service tests
		Repo rp = Repo();
		Service s = Service(rp);
		s.addElement(1, 100, "altele");
		assert(s.getSize() == 1);
		assert(s.getElementAtPos(0) == Expense(1, 100, "altele"));
		s.modifyElement(0, 1, 120, "altele");
		assert(s.getItemPos(1, 120, "altele") == 0);
		assert(s.getElementAtPos(0).getSum() == 120);
		s.removeElementAtPos(0);
		assert(s.getSize() == 0);
		assert(s.getItemPos(1, 120, "altele") == -1);
	}
}