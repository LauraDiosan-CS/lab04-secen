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