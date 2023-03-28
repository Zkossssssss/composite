#pragma once
#include <vector>
#include "menu.h"
#include "menuitem.h"
#include "dinermenuiterator.h"
class dinermenu : public menu
{
private:
	static const int MAX_ITEMS = 6;
	int numberOfItems;
	vector<MenuItem*> menuItems;
public:
	dinermenu(string name, string description);
	void addItem(string n, string d, bool v, double p);
	vector<MenuItem*> getmenuItems();
	Iterator* createIterator();
};

