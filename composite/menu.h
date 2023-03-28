#pragma once
#include "iterator.h"
#include "menucomponent.h"
#include "menuitem.h"
#include <list>
using namespace std;

class menu : public menucomponent {
private:
	list<menucomponent*> menucomponents;
	string name;
	string description;
public:
	menu(string name, string description);
	virtual void add(menucomponent* menu_component);
	void remove(menucomponent* menu_component);
	menucomponent* getChild(int i);

	std::string getName();
	std::string getDescription();
	void print();
};


