#pragma once
#include <unordered_map>
#include <string>
class Expense
{
private:
	unsigned int m_day;
	unsigned int m_sum;
	unsigned int m_type;
public:
	//essential
	Expense();
	~Expense();
	Expense(const Expense& copy);
	Expense(unsigned int day, unsigned int sum, std::string type);
	Expense& operator = (const Expense& exp);
	//non-essential
	bool operator == (const Expense& exp);
	bool operator != (const Expense& exp);
	unsigned int getDay();
	unsigned int getSum();
	unsigned int getType();
};

