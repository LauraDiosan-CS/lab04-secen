#include "Entity.h"
Cheltuiala::Cheltuiala()
{
	this->value = 0;
}
Cheltuiala::Cheltuiala(int val)
{
	this->value = val;
}
Cheltuiala::~Cheltuiala()
{
}
bool Cheltuiala::operator == (Cheltuiala const& obj)
{
	return this->value == obj.value;
}
Cheltuiala& Cheltuiala::operator = (Cheltuiala const& obj)
{
	this->value == obj.value;
	return *this;
}

Cheltuiala::Cheltuiala(const Cheltuiala& copy)
{
	this->value = copy.value;
}
