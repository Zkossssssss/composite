#pragma once
#include "unsopexeption.h"
class menucomponent
{
public:
	virtual void add(menucomponent *menu_component);
	virtual void remove(menucomponent *menu_component);
	virtual menucomponent* getChild(int i);
	virtual std::string getName();
	virtual std::string getDescription();
	virtual double getPrice();
	virtual bool isVegetarian();
	virtual void print();
};

