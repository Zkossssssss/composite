#include "menu.h"

menu::menu(string name, string description) {
	this->name = name;
	this->description = description;
}
void menu::add(menucomponent *menu_component) {
	menucomponents.push_back(menu_component);
}
void menu::remove(menucomponent* menu_component) {
	menucomponents.remove(menu_component);
}
menucomponent* menu::getChild(int i) {
	list<menucomponent*>::iterator it = menucomponents.begin();
	std::advance(it, i); 
	return(*it);
}
std::string menu::getName() {
	return name;
}
std::string menu::getDescription() {
	return description;
}
void menu::print() {
	cout << "\n" << getName() << ", " << getDescription() << endl;
	cout << "------------------------" << endl;
	for (list<menucomponent*>::iterator it = menucomponents.begin(); it != menucomponents.end(); it++) {
		menucomponent* menu_component = (menucomponent*)*it;
		menu_component->print();
	}
}