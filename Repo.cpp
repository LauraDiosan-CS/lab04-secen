#include "Repo.h" 

Repo::Repo()
{
	this->noOfEntities = 0;
} 
Repo::~Repo() {}
void Repo::addItem(Cheltuiala& s)
{ 
	this->entities[this->noOfEntities++] = s; 
}
Cheltuiala Repo::getItemFromPos(int pos)
{ 
	return this->entities[pos];
}
int Repo::getSize()
{ 
	return this->noOfEntities; 
}