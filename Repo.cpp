#include "Repo.h" 
#include <stdexcept>
Repo::Repo()
{
	this->noOfEntities = 0;
} 
Repo::~Repo() {}
void Repo::addItem(Expense& s)
{ 
	this->entities[this->noOfEntities++] = s; 
}
Expense Repo::getItemFromPos(int pos)
{ 
	if (pos >= noOfEntities)
		throw std::out_of_range("Index out of range");
	return this->entities[pos];
}
int Repo::getSize()
{ 
	return this->noOfEntities; 
}

void Repo::removeItemFromPos(int pos)
{
	if (pos >= 0 && pos < noOfEntities)
	{
		for (pos; pos < noOfEntities - 1; pos++)
			this->entities[pos] = this->entities[pos + 1];
		this->entities[noOfEntities - 1] = Expense();
		noOfEntities--;
	}
}
void Repo::modifyElementAtPos(int pos, Expense& s)
{
	this->entities[pos] = s;
}
Expense* Repo::getArray()
{
	return this->entities;
}

int Repo::getPositionOfElement(Expense& s)
{
	for (unsigned i = 0; i < noOfEntities; i++)
		if (s == this->entities[i])
			return i;
	return -1;
}
