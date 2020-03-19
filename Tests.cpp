#include "Entity.h"
#include "Repo.h"
#include <assert.h>
void tests()
{
	Cheltuiala e = Cheltuiala(1);
	Repo rep;
	rep.addItem(e);
	assert(rep.getSize() == 1);
	assert(rep.getItemFromPos(0) == e);
	Cheltuiala e2 = Cheltuiala(2);
	rep.addItem(e2);
	assert(rep.getSize() == 2);
}