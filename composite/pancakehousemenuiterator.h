#pragma once
#include <list>
#include "Iterator.h"
#include "menuitem.h"
class pancakehousemenuiterator : public Iterator
{
private:
	list<MenuItem*> items;
	int position;
public:
	pancakehousemenuiterator(list <MenuItem*> items);
	void* next1();
	bool hasNext();
};

