#include "dinermenuiterator.h"
dinermenuiterator::dinermenuiterator(vector <MenuItem*> items) {
	position = 0;
	this->items = items;
}
bool dinermenuiterator::hasNext() {
	if (position >= items.size() || &items[position] == NULL) {
		return false;
	} else {
		return true;
	}
	return true;
}
void* dinermenuiterator::next1() {
	MenuItem* menuItem = items[position];
	position = position + 1;
	return static_cast<void*>(menuItem);
}
