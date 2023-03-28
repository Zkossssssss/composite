#pragma once
#include <list>
#include "menu.h"
#include "menuitem.h"
#include "pancakehousemenuiterator.h"
class pancakehousemenu : public menu {
private:
	list<MenuItem*> menuItems;
public:
	pancakehousemenu(string name, string description);
	void addItem(string n, string d, bool v, double p);
	list<MenuItem*> getMenuItems();
	Iterator* createIterator();
	string toString();
};

