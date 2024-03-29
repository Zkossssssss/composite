#include "pancakehousemenuiterator.h"
pancakehousemenuiterator::pancakehousemenuiterator(list<MenuItem*> items) {
	position = 0;
	this->items = items;
}
void* pancakehousemenuiterator::next1() {
	list<MenuItem*>::iterator it = items.begin();
	std::advance(it, position);
	void* object = static_cast<void*>(*it);
	position = position + 1;
	return object;
}
bool pancakehousemenuiterator::hasNext() {
	if (position >= items.size()) {
		return false;
	}
	else {
		return true;
	}
}
