#include "waitress.h"

waitress::waitress(menucomponent* allMenus) {
	this->allMenus = allMenus;
}
void waitress::printMenu() {
	allMenus->print();
}
