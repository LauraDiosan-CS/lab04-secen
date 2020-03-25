#include "Expense.h"
#include <stdexcept>

Expense::Expense()
{
	m_day = 0;
	m_sum = 0;
	m_type = 0;
}

Expense::~Expense()
{
}

Expense::Expense(const Expense& copy)
{
	this->m_day = copy.m_day;
	this->m_sum = copy.m_sum;
	this->m_type = copy.m_type;
}

Expense::Expense(unsigned int day, unsigned int sum, std::string type)
{
	m_day = day;
	m_sum = sum;
	if (type == "menaj")
		m_type = 1;
	else if (type == "mancare")
		m_type = 2;
	else if (type == "transport")
		m_type = 3;
	else if (type == "haine")
		m_type = 4;
	else if (type == "internet")
		m_type = 5;
	else if (type == "altele")
		m_type = 6;
	else
		throw std::invalid_argument("Invalid type");
}

Expense& Expense::operator=(const Expense& exp)
{
	m_day = exp.m_day;
	m_sum = exp.m_sum;
	m_type = exp.m_type;
	return *this;
	// TODO: insert return statement here
}

bool Expense::operator==(const Expense& exp)
{
	if (m_day != exp.m_day)
		return false;
	if (m_sum != exp.m_sum)
		return false;
	if (m_type != exp.m_type)
		return false;
	return true;
}

bool Expense::operator!=(const Expense& exp)
{

	return !(*this==exp);
}

unsigned int Expense::getDay()
{
	return this->m_day;
}

unsigned int Expense::getSum()
{
	return this->m_sum;
}

unsigned int Expense::getType()
{
	return this->m_type;
}
