#pragma once
#include "Repo.h"
class Service
{
private:
	Repo rep;
public:
	Service();
	Service(Repo rp);
	~Service();
	void addElement(unsigned int day, unsigned int sum, std::string type);
	void removeElementAtPos(int i);
	void modifyElement(unsigned int pos, unsigned int day, unsigned int sum, std::string type);
	Expense getElementAtPos(int i);
	Expense* getArray();
	int getItemPos(unsigned int day, unsigned int sum, std::string type);
	unsigned int getSize();
};

