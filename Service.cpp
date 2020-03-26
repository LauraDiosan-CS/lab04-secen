#include "Service.h"

Service::Service()
{
	rep = Repo();
}

Service::Service(Repo &rp)
{
	this->rep = rp;
}

Service::~Service()
{
}

void Service::addElement(unsigned int day, unsigned int sum, std::string type)
{
	Expense e = Expense(day,sum,type);
	this->rep.addItem(e);
}

void Service::removeElementAtPos(int i)
{
	this->rep.removeItemFromPos(i);
}

void Service::modifyElement(unsigned int pos, unsigned int day, unsigned int sum, std::string type)
{
	Expense e = Expense(day, sum, type);
	this->rep.modifyElementAtPos(pos, e);
}

Expense Service::getElementAtPos(int i)
{
	return this->rep.getItemFromPos(i);
}

Expense* Service::getArray()
{
	return this->rep.getArray();
}

int Service::getItemPos(unsigned int day, unsigned int sum, std::string type)
{
	Expense e = Expense(day, sum, type);
	return this->rep.getPositionOfElement(e);
}

unsigned int Service::getSize()
{
	return this->rep.getSize();
}
