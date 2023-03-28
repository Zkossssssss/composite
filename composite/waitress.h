#pragma once
#include "dinermenu.h"
#include "pancakehousemenu.h"
#include "Iterator.h"
#include "menucomponent.h"
class waitress
{
private:
	menucomponent* allMenus;
public:
	waitress(menucomponent* allMenus);
	void printMenu();
};

