#include "Player.h"
#include "Repo.h"
#include <assert.h>
#include <iostream>
#include "Service.h"

void tests()
{
	{
		//Player tests
		Player e = Player(1, 0, "Ion");
		Player e2 = Player(2, 10, "Maria");
		assert(e.getWonGames() == 1);
		assert(e.getPlayedGames() == 0);
		assert(strcmp(e.getName(),"Ion")==0);
		assert(e != e2);
		assert(e == e);
		//Repo tests
		Repo rep;
		rep.addItem(e);
		assert(rep.getSize() == 1);
		Player item = rep.getItemFromPos(0);
		assert(rep.getPositionOfElement(item) == 0);
		assert(rep.getItemFromPos(0) == e);
		rep.addItem(e2);
		assert(rep.getSize() == 2);
		rep.removeItemFromPos(1);
		assert(rep.getSize() == 1);
		assert(rep.getPositionOfElement(e2) == -1);
		Player e3 = Player(1, 100, "internet");
		rep.modifyElementAtPos(0, e3);
		assert(rep.getItemFromPos(0).getPlayedGames() == 100);
	}
	{
		//Service tests
		Repo rp = Repo();
		Service s = Service(rp);
		s.addElement(1, 100, "altele");
		s.addElement(2, 120, "test");
		assert(s.getSize() == 2);
		assert(s.getElementAtPos(0) == Player(1, 100, "altele"));
		s.modifyElement(0, 1, 120, "altele");
		assert(s.getItemPos(1, 120, "altele") == 0);
		assert(s.getElementAtPos(0).getPlayedGames() == 120);
		s.removeElementAtPos(0);
		assert(s.getSize() == 1);
		assert(s.getItemPos(1, 120, "altele") == -1);
	}
}