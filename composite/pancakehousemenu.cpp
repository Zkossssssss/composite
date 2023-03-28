#include "pancakehousemenu.h"
pancakehousemenu::pancakehousemenu(string name, string description) : menu(name, description) {
	addItem("K&B's Pancake breakfast",
		"Pancakes with scrambled eggs and toast",
		true, 2.99);
	addItem("Regular Pancake breakfast",
		"Pancakes with fried eggs and sausage",
		false, 2.99);
	addItem("Blueberry pancakes",
		"Pancakes with fresh blueberries",
		true, 3.49);
	addItem("Waffles",
		"Waffless with your choice",
		true, 3.59);
}
void pancakehousemenu::addItem(string n, string d, bool v, double p) {
	MenuItem* menuItem = new MenuItem(n, d, v, p);
	menuItems.push_back(menuItem);
}
list<MenuItem*> pancakehousemenu::getMenuItems() {
	return menuItems;
}
Iterator* pancakehousemenu::createIterator() {
	return new pancakehousemenuiterator(menuItems);
}
string pancakehousemenu::toString() {
	return "Objective pancake house menu";
}