#pragma once
#include "Repo.h"

class Service
{
private:
	Repo rep;
public:
	Service();
	Service(Repo &rp);
	~Service();
	void addElement(unsigned int wGames, unsigned int sum, const char* name);
	void removeElementAtPos(int i);
	void modifyElement(unsigned int pos, unsigned int wGames, unsigned int sum, const char* name);
	Player getElementAtPos(int i);
	Player* getArray();
	void sortArrayDescByWonGames();
	int getItemPos(unsigned int wGames, unsigned int sum, const char* name);
	unsigned int getSize();
};

