#include "Service.h"
#include <algorithm>

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

void Service::addElement(unsigned int wGames, unsigned int sum, const char* name)
{
	Player e = Player(wGames,sum,name);
	this->rep.addItem(e);
}

void Service::removeElementAtPos(int i)
{
	this->rep.removeItemFromPos(i);
}

void Service::modifyElement(unsigned int pos, unsigned int wGames, unsigned int sum, const char* name)
{
	Player e = Player(wGames, sum, name);
	this->rep.modifyElementAtPos(pos, e);
}

Player Service::getElementAtPos(int i)
{
	return this->rep.getItemFromPos(i);
}

Player* Service::getArray()
{
	return this->rep.getArray();
}

void Service::sortArrayDescByWonGames()
{
	Player* playerArray = this->getArray();
	unsigned int arrSize= this->getSize();
	std::sort(playerArray, playerArray + arrSize,
		[](Player& a, Player& b)->bool {return a.getWonGames() > b.getWonGames(); });
}

int Service::getItemPos(unsigned int wGames, unsigned int sum, const char* name)
{
	Player e = Player(wGames, sum, name);
	return this->rep.getPositionOfElement(e);
}

unsigned int Service::getSize()
{
	return this->rep.getSize();
}
